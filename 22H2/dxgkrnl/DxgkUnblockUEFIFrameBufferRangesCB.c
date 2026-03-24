/*
 * XREFs of DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0043440
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C0037F38 (-NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkUnblockUEFIFrameBufferRangesCB(__int64 a1, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  __int64 v4; // rdx
  DXGADAPTER *DxgAdapter; // rax
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4);
  v6 = DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(DxgAdapter, a2);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
  return v6;
}
