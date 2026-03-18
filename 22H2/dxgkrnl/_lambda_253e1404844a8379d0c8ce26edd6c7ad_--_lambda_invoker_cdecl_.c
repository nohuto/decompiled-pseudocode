/*
 * XREFs of _lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_ @ 0x1C00171B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C01E5C3C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
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
