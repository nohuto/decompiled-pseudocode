/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01E3C64
 * Callers:
 *     _lambda_49695c4423cfafe8a47d188aee5e3e85_::_lambda_invoker_cdecl_ @ 0x1C00DF640 (_lambda_49695c4423cfafe8a47d188aee5e3e85_--_lambda_invoker_cdecl_.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01E35FC (--1CThreadLockInputDest@@QEAA@XZ.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003A33C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C01E3C18 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1157);
  if ( !*((_BYTE *)this + 112) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1158);
  if ( (*((_BYTE *)this + 112))-- == 1 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 10);
    if ( !gbInDestroyHandleTableObjects
      && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)this, a2, a3, a4)
      && (!IS_USERCRIT_OWNED_AT_ALL(v8, v7, v9, v10)
       || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
       && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
    if ( (*((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*v6 + 25) & 1) != 0
      || CInputDest::TestWindowFlag(this, 1152)
      || CInputDest::TestWindowFlag(this, 896) )
    {
      CInputDest::SetEmpty(this);
    }
  }
}
