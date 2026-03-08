/*
 * XREFs of ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C007FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1C007F6A4 (-InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptEnableThunk(FxInterrupt **SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  *((_DWORD *)SyncContext + 2) = FxInterrupt::InterruptEnableInvokeCallback(*SyncContext, a2);
  return 1;
}
