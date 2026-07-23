/*
 * XREFs of _CmMoveBaseContainer @ 0x140976694
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x1406FD420 (PiDcHandleCustomDeviceEvent.c)
 * Callees:
 *     _CmRemoveDeviceFromContainer @ 0x14072BF9C (_CmRemoveDeviceFromContainer.c)
 *     _CmAddDeviceToContainer @ 0x1407592E4 (_CmAddDeviceToContainer.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140976428 (_CmGetDevicesInBaseContainerList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmMoveBaseContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int DevicesInBaseContainerList; // eax
  PVOID v9; // rdi
  int v10; // esi
  _WORD *i; // rbx
  __int64 v12; // rax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&PiPnpRtlCtx;
  P = 0LL;
  DevicesInBaseContainerList = CmGetDevicesInBaseContainerList(*(__int64 *)&PiPnpRtlCtx, a3, a2, &P);
  v9 = P;
  v10 = DevicesInBaseContainerList;
  if ( DevicesInBaseContainerList >= 0 )
  {
    for ( i = P; *i; i += v12 + 1 )
    {
      v10 = CmRemoveDeviceFromContainer(v4, a3, a2, (__int64)i);
      if ( v10 < 0 )
        break;
      v10 = CmAddDeviceToContainer(v4, a4, a2, (__int64)i, 0LL);
      if ( v10 < 0 )
        break;
      v12 = -1LL;
      do
        ++v12;
      while ( i[v12] );
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
