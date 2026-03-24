/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0075E00
 * Callers:
 *     ForceCapture @ 0x1C0075EB0 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C009F19C (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  const struct tagINPUTDEST *v3; // rsi
  _BYTE v5[128]; // [rsp+30h] [rbp-98h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      18,
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids,
      a3);
  }
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v5, v3);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3568), (const struct CInputDest *)v5);
    CInputDest::SetEmpty((CInputDest *)v5);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3568));
    _InterlockedExchange((volatile __int32 *)this + 922, 0);
  }
}
