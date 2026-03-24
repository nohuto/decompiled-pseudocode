/*
 * XREFs of ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00A5E70
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CA9D8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001D00C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

void __fastcall GetMonitorBrightnessCaps(struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *a1)
{
  _DWORD *v1; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  int v4; // r14d
  unsigned int v5; // ecx
  bool v6; // cc
  unsigned int v7; // ecx
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+40h] BYREF
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF

  DeviceObject = 0LL;
  v1 = (_DWORD *)((char *)a1 + 592);
  Object = 0LL;
  AttachedDeviceReference = 0LL;
  memset((char *)a1 + 592, 0, 0x13CuLL);
  v4 = ((__int64 (__fastcall *)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C0251A38)(
         (char *)a1 + 8,
         *((unsigned int *)a1 + 4),
         &Object,
         &DeviceObject);
  if ( v4 < 0 )
    goto LABEL_5;
  if ( DeviceObject )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    if ( AttachedDeviceReference )
    {
      v12 = 0LL;
      v4 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C00u, 0LL, 0, &v12, 8u, &v11, 0, 0);
      if ( v4 < 0 )
      {
LABEL_5:
        memset(v1, 0, 0x13CuLL);
        goto LABEL_6;
      }
      v5 = v1[78] & 0xFFFFFFE3 | BYTE4(v12) & 4 | (8 * (BYTE4(v12) & 3));
      v6 = (int)v12 <= 2;
      v1[78] = v5;
      if ( v6 )
        v7 = v5 & 0xFFFFFFFC | 1;
      else
        v7 = v5 & 0xFFFFFFFC | 2;
      v1[78] = v7;
      v8 = PALLOCMEM2(0xD0uLL, 1886221383LL, 1);
      if ( v8 )
      {
        v4 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C04u, 0LL, 0, v8, 0xD0u, &v11, 0, 0);
        if ( v4 >= 0 )
        {
          v9 = 0LL;
          if ( (v1[78] & 2) != 0 )
          {
            v1[75] = v8[1];
            v1[76] = v8[2];
            v1[77] = v8[3];
            if ( v8[2] )
            {
              do
              {
                v10 = 3 * v9;
                v9 = (unsigned int)(v9 + 1);
                v1[v10 + 27] = v8[v10 + 4];
                v1[v10 + 28] = v8[v10 + 5];
                v1[v10 + 29] = v8[v10 + 6];
              }
              while ( (unsigned int)v9 < v8[2] );
            }
          }
          else
          {
            v1[26] = *((unsigned __int8 *)v8 + 4);
            if ( *((_BYTE *)v8 + 4) )
            {
              do
              {
                *((_BYTE *)v1 + v9) = *((_BYTE *)v8 + v9 + 5);
                v9 = (unsigned int)(v9 + 1);
              }
              while ( (unsigned int)v9 < *((unsigned __int8 *)v8 + 4) );
            }
          }
        }
        Win32FreePool((__int64)v8);
      }
    }
  }
  if ( v4 < 0 )
    goto LABEL_5;
LABEL_6:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( Object )
    ObfDereferenceObject(Object);
}
