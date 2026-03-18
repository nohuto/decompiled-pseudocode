/*
 * XREFs of ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00BCEF4
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall GetMonitorBrightnessCaps(struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *a1)
{
  _DWORD *v1; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v7; // edx
  _DWORD *v8; // r14
  __int64 v9; // rax
  __int64 Pool2; // rbx
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID BackTrace[24]; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v15; // [rsp+120h] [rbp+67h] BYREF
  __int64 v16; // [rsp+128h] [rbp+6Fh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+130h] [rbp+77h] BYREF
  PVOID Object; // [rsp+138h] [rbp+7Fh] BYREF

  DeviceObject = 0LL;
  v1 = (_DWORD *)((char *)a1 + 592);
  Object = 0LL;
  AttachedDeviceReference = 0LL;
  memset((char *)a1 + 592, 0, 0x13CuLL);
  if ( (int)((__int64 (__fastcall *)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C0296828)(
              (char *)a1 + 8,
              *((unsigned int *)a1 + 4),
              &Object,
              &DeviceObject) < 0 )
    goto LABEL_5;
  if ( !DeviceObject )
    goto LABEL_8;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( !AttachedDeviceReference )
  {
LABEL_6:
    if ( !AttachedDeviceReference )
      goto LABEL_8;
    goto LABEL_7;
  }
  v16 = 0LL;
  if ( (int)GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C00u, 0LL, 0, &v16, 8u, &v15, 0, 0) < 0 )
  {
LABEL_5:
    memset(v1, 0, 0x13CuLL);
    goto LABEL_6;
  }
  v4 = v1[78] ^ (v1[78] ^ (8 * HIDWORD(v16))) & 8;
  v5 = ((unsigned __int8)v4 ^ (unsigned __int8)(8 * BYTE4(v16))) & 0x10 ^ v4;
  v6 = (BYTE4(v16) ^ (unsigned __int8)v5) & 4 ^ v5;
  if ( (int)v16 > 2 )
    v7 = v6 & 0xFFFFFFFC | 2;
  else
    v7 = v6 & 0xFFFFFFFC | 1;
  v8 = gpLeakTrackingAllocator;
  v1[78] = v7;
  if ( (v8[10] & 0x706D7447) != 0x706D7447 || (v9 = 0LL, !v8[11]) )
  {
LABEL_18:
    Pool2 = ExAllocatePool2(260LL, 208LL);
    goto LABEL_19;
  }
  while ( v8[v9] != 1886221383 )
  {
    if ( ++v9 >= (unsigned __int64)(unsigned int)v8[11] )
      goto LABEL_18;
  }
  Pool2 = ExAllocatePool2(260LL, 224LL);
  if ( !Pool2 )
    goto LABEL_7;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v8,
                             Pool2,
                             BackTrace) )
      goto LABEL_28;
    Pool2 += 16LL;
LABEL_19:
    if ( !Pool2 )
      goto LABEL_7;
    goto LABEL_20;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v8,
                           Pool2,
                           BackTrace) )
  {
LABEL_28:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_7;
  }
LABEL_20:
  v11 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C04u, 0LL, 0, (PVOID)Pool2, 0xD0u, &v15, 0, 0);
  if ( v11 >= 0 )
  {
    v12 = 0LL;
    if ( (v1[78] & 2) != 0 )
    {
      v1[75] = *(_DWORD *)(Pool2 + 4);
      v1[76] = *(_DWORD *)(Pool2 + 8);
      v1[77] = *(_DWORD *)(Pool2 + 12);
      if ( *(_DWORD *)(Pool2 + 8) )
      {
        do
        {
          v13 = 3 * v12;
          v12 = (unsigned int)(v12 + 1);
          v1[v13 + 27] = *(_DWORD *)(Pool2 + 4 * v13 + 16);
          v1[v13 + 28] = *(_DWORD *)(Pool2 + 4 * v13 + 20);
          v1[v13 + 29] = *(_DWORD *)(Pool2 + 4 * v13 + 24);
        }
        while ( (unsigned int)v12 < *(_DWORD *)(Pool2 + 8) );
      }
    }
    else
    {
      v1[26] = *(unsigned __int8 *)(Pool2 + 4);
      if ( *(_BYTE *)(Pool2 + 4) )
      {
        do
        {
          *((_BYTE *)v1 + v12) = *(_BYTE *)(v12 + Pool2 + 5);
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *(unsigned __int8 *)(Pool2 + 4) );
      }
    }
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
  if ( v11 < 0 )
    goto LABEL_5;
LABEL_7:
  ObfDereferenceObject(AttachedDeviceReference);
LABEL_8:
  if ( Object )
    ObfDereferenceObject(Object);
}
