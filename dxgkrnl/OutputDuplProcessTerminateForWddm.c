void __fastcall OutputDuplProcessTerminateForWddm(PERESOURCE *a1, PERESOURCE *this)
{
  _BYTE v4[144]; // [rsp+50h] [rbp-A8h] BYREF

  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    WdLogSingleEntry1(1LL, 3026LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pRenderAdapter->IsCoreResourceExclusiveOwner()",
      3026LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this && DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 3027LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter || !pDisplayAdapter->IsCoreResourceExclusiveOwner()",
      3027LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v4,
    (struct DXGADAPTER *const)a1,
    (struct DXGADAPTER *const)this);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4, 0LL) >= 0 )
  {
    if ( !this )
      this = a1;
    IterateOutputDuplMgrsForRender(
      (struct DXGADAPTER *)this,
      (__int64 (__fastcall *)(__int64, void *))lambda_79eef42207348a29c4e9c7f357f04a2a_::_lambda_invoker_cdecl_,
      0LL);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v4);
}
