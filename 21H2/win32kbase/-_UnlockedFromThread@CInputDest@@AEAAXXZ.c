/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C009C29C
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009C24C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_694d91ef54da8f8582014362157fd67b_::_lambda_invoker_cdecl_ @ 0x1C00CCA20 (_lambda_694d91ef54da8f8582014362157fd67b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C009C338 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this)
{
  char v2; // al
  char v3; // al
  _DWORD *v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1156LL);
  v2 = *((_BYTE *)this + 112);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1157LL);
    v2 = *((_BYTE *)this + 112);
  }
  v3 = v2 - 1;
  *((_BYTE *)this + 112) = v3;
  if ( !v3 )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 10);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v5);
    if ( (*((_BYTE *)qword_1C024FD58 + dword_1C024FD60 * (unsigned int)(unsigned __int16)*v4 + 25) & 1) != 0
      || CInputDest::TestWindowFlag(this, 0x480u)
      || CInputDest::TestWindowFlag(this, 0x380u) )
    {
      CInputDest::SetEmpty(this);
    }
  }
}
