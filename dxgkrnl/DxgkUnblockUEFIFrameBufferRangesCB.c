/*
 * XREFs of DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0048740
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C003F1C4 (-NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkUnblockUEFIFrameBufferRangesCB(__int64 a1, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  DXGADAPTER *DxgAdapter; // rax
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v5 = DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(DxgAdapter, a2);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
  return v5;
}
