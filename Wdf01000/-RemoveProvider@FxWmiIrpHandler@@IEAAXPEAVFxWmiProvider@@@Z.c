/*
 * XREFs of ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C002A718
 * Callers:
 *     ?Dispose@FxWmiProvider@@UEAAEXZ @ 0x1C00283F0 (-Dispose@FxWmiProvider@@UEAAEXZ.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002862C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C002A760 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 */

void __fastcall FxWmiIrpHandler::RemoveProvider(FxWmiIrpHandler *this, FxWmiProvider *Provider, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+18h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  FxWmiIrpHandler::RemoveProviderLocked(this, Provider);
  FxNonPagedObject::Unlock(this, irql, v5);
}
