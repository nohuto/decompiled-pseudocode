void __fastcall DxgPresentDisplayOnlyProgressCB(__int64 a1, const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  DXGDODPRESENT *v4; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  v4 = *(DXGDODPRESENT **)(*(_QWORD *)(DpiGetDxgAdapter(a1) + 2920) + 448LL);
  if ( v4 )
    DXGDODPRESENT::PresentDisplayOnlySetProgress(v4, a2);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}
