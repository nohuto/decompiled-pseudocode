/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0058230
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0088530 (RIMRegisterForInputWithCallbacks.c)
 *     _lambda_a40ee2d8b2104278d8f721ac30c590e8_::_lambda_invoker_cdecl_ @ 0x1C00CC570 (_lambda_a40ee2d8b2104278d8f721ac30c590e8_--_lambda_invoker_cdecl_.c)
 *     _lambda_dfe4e534aa9c3c6c50daad1fe50e4ac0_::_lambda_invoker_cdecl_ @ 0x1C00CC610 (_lambda_dfe4e534aa9c3c6c50daad1fe50e4ac0_--_lambda_invoker_cdecl_.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01548A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0154F10 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155280 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     rimInputApc @ 0x1C01746A0 (rimInputApc.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C125C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
