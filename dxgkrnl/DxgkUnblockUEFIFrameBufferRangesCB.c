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
