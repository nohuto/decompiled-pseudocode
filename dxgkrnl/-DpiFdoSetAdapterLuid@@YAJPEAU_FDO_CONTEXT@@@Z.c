/*
 * XREFs of ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C001D270
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

int __fastcall DpiFdoSetAdapterLuid(struct _FDO_CONTEXT *a1)
{
  int result; // eax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  int Data; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 684) )
  {
    v3 = 0LL;
    do
    {
      v4 = *((_QWORD *)a1 + 341);
      Data = v3;
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8 * v3) + 64LL);
      result = IoSetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(v5 + 152),
                 &DEVPKEY_Gpu_Luid,
                 0,
                 0,
                 9u,
                 8u,
                 (char *)a1 + 2672);
      if ( result < 0 )
        break;
      result = IoSetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(v5 + 152),
                 &DEVPKEY_Gpu_PhysicalAdapterIndex,
                 0,
                 0,
                 7u,
                 4u,
                 &Data);
      if ( result < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)a1 + 684) );
  }
  else
  {
    result = IoSetDevicePropertyData(*((PDEVICE_OBJECT *)a1 + 19), &DEVPKEY_Gpu_Luid, 0, 0, 9u, 8u, (char *)a1 + 2672);
    if ( result >= 0 )
    {
      Data = 0;
      return IoSetDevicePropertyData(
               *((PDEVICE_OBJECT *)a1 + 19),
               &DEVPKEY_Gpu_PhysicalAdapterIndex,
               0,
               0,
               7u,
               4u,
               &Data);
    }
  }
  return result;
}
