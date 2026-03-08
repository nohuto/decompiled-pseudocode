/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00397E0
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0080790 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _lambda_6f5ab2194e3463602bd95b9ff9de69b8_::_lambda_invoker_cdecl_ @ 0x1C00DF090 (_lambda_6f5ab2194e3463602bd95b9ff9de69b8_--_lambda_invoker_cdecl_.c)
 *     _lambda_90059f71cfa5f8b5cb7e7949f1719e3b_::_lambda_invoker_cdecl_ @ 0x1C00DF130 (_lambda_90059f71cfa5f8b5cb7e7949f1719e3b_--_lambda_invoker_cdecl_.c)
 *     _lambda_cd4ceeda7ae5b80651f3e170997747c4_::operator() @ 0x1C00DF1E8 (_lambda_cd4ceeda7ae5b80651f3e170997747c4_--operator().c)
 *     _lambda_38b028ed545a26b359f0514a95527d29_::operator() @ 0x1C00E011C (_lambda_38b028ed545a26b359f0514a95527d29_--operator().c)
 *     RIMResetPointerDevices @ 0x1C01A7E40 (RIMResetPointerDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
