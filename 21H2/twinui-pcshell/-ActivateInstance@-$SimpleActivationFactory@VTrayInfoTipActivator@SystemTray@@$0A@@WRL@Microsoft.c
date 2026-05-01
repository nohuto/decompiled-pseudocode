/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1803EA840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<SystemTray::TrayInfoTipActivator,0>::ActivateInstance(
        __int64 a1,
        __int64 *a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipActivator,IInspectable,>(a2);
}
