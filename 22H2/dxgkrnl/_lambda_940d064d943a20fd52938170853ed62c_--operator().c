/*
 * XREFs of _lambda_940d064d943a20fd52938170853ed62c_::operator() @ 0x1C01DAAF8
 * Callers:
 *     _lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_ @ 0x1C01DAAE0 (_lambda_940d064d943a20fd52938170853ed62c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00053F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0195BF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall lambda_940d064d943a20fd52938170853ed62c_::operator()(__int64 a1, PERESOURCE ***a2)
{
  int v3; // r8d
  struct _LUID *v4; // rdx
  PERESOURCE **v5; // r11
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, (struct DXGADAPTER *const)a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v7, (unsigned int)(v3 + 1)) >= 0
    && a2[365]
    && !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v4, 0LL, 0LL) )
  {
    if ( a2[366] )
      v5 = a2[366];
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(a2[365], v5);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  return 0LL;
}
