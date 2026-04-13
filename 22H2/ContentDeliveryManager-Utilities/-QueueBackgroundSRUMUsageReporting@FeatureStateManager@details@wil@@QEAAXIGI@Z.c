/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18000B640
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000BDF0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180009138 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180017D7C (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        __int16 a3,
        int a4)
{
  struct _TP_TIMER *Ptr; // rcx
  DWORD LastError; // r14d
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v12; // rbp
  PTP_TIMER v13; // r15
  DWORD v14; // ebx
  _FILETIME pftDueTime; // [rsp+20h] [rbp-58h] BYREF
  int Source; // [rsp+28h] [rbp-50h] BYREF
  __int16 v17; // [rsp+2Ch] [rbp-4Ch]
  __int16 v18; // [rsp+2Eh] [rbp-4Ah]
  int v19; // [rsp+30h] [rbp-48h]

  if ( LOBYTE(pv->Ptr)
    && !wil::details::g_processShutdownInProgress
    && !(wil::details::g_pfnDllShutdownInProgress ? wil::details::g_pfnDllShutdownInProgress() : 0) )
  {
    AcquireSRWLockExclusive(pv + 5);
    v18 = 0;
    Source = a2;
    v17 = a3;
    v19 = a4;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&pv[31], &Source, 0xCuLL);
    if ( !LOBYTE(pv[8].Ptr) )
    {
      Ptr = (struct _TP_TIMER *)pv[7].Ptr;
      if ( Ptr )
        goto LABEL_12;
      LastError = GetLastError();
      ThreadpoolTimer = CreateThreadpoolTimer(lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_, pv, 0LL);
      v12 = (struct _TP_TIMER *)pv[7].Ptr;
      v13 = ThreadpoolTimer;
      if ( v12 )
      {
        v14 = GetLastError();
        wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v12);
        SetLastError(v14);
      }
      pv[7].Ptr = v13;
      SetLastError(LastError);
      Ptr = (struct _TP_TIMER *)pv[7].Ptr;
      if ( Ptr )
      {
LABEL_12:
        pftDueTime = (_FILETIME)-50000000LL;
        SetThreadpoolTimer(Ptr, &pftDueTime, 0, 0x4E2u);
        LOBYTE(pv[8].Ptr) = 1;
      }
    }
    if ( pv != (RTL_SRWLOCK *)-40LL )
      ReleaseSRWLockExclusive(pv + 5);
  }
}
