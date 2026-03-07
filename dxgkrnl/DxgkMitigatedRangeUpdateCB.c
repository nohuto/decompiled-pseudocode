void __fastcall DxgkMitigatedRangeUpdateCB(void *a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v2);
  DpiMitigatedRangeUpdate(a1);
  if ( v2[0] )
    KeUnstackDetachProcess(&ApcState);
}
