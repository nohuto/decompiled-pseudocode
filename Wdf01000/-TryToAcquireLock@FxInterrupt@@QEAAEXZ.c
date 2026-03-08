/*
 * XREFs of ?TryToAcquireLock@FxInterrupt@@QEAAEXZ @ 0x1C007F86C
 * Callers:
 *     imp_WdfInterruptTryToAcquireLock @ 0x1C0068530 (imp_WdfInterruptTryToAcquireLock.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

bool __fastcall FxInterrupt::TryToAcquireLock(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  char v2; // bl
  int v4; // eax
  __int64 timeout; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  timeout = 0LL;
  if ( !this->m_PassiveHandling )
    return 0;
  v4 = FxWaitLockInternal::AcquireLock(&this->m_WaitLock->FxWaitLockInternal, a2, (_LARGE_INTEGER *)&timeout);
  if ( v4 >= 0 )
    return v4 != 258;
  return v2;
}
