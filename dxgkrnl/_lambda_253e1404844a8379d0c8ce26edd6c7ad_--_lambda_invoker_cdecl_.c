__int64 __fastcall lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_(struct DXGADAPTER *a1)
{
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v3, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v3, 0LL) >= 0 )
    DmmClearDisplayManagerReferencesForAdapter(a1);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v3);
  return 0LL;
}
