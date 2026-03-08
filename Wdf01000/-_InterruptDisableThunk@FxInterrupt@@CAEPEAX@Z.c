/*
 * XREFs of ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C007FAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1C007F5D4 (-InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptDisableThunk(FxInterrupt **SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  *((_DWORD *)SyncContext + 2) = FxInterrupt::InterruptDisableInvokeCallback(*SyncContext, a2);
  return 1;
}
