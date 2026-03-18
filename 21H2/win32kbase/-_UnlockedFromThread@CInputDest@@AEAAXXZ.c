/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0042094
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_cf05d98c44b56423d1aa7353fc250a6c_::_lambda_invoker_cdecl_ @ 0x1C01B8A10 (_lambda_cf05d98c44b56423d1aa7353fc250a6c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0042158 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this, __int64 a2, __int64 a3)
{
  char v4; // al
  char v5; // al
  _DWORD *v6; // rdi

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *((_BYTE *)this + 112);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v4 = *((_BYTE *)this + 112);
  }
  v5 = v4 - 1;
  *((_BYTE *)this + 112) = v5;
  if ( !v5 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 10);
    if ( !gbInDestroyHandleTableObjects
      && !UserIsUserCritSecInExclusive()
      && (!IS_USERCRIT_OWNED_SHARED()
       || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
       && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
    if ( (*((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*v6 + 25) & 1) != 0
      || CInputDest::TestWindowFlag(this, 0x480u)
      || CInputDest::TestWindowFlag(this, 0x380u) )
    {
      CInputDest::SetEmpty(this);
    }
  }
}
