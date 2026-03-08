/*
 * XREFs of _lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_ @ 0x1C0016E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C01D8B5C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_(struct DXGADAPTER *a1)
{
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v3, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v3, 0LL) >= 0 )
    DmmClearDisplayManagerReferencesForAdapter(a1);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v3);
  return 0LL;
}
