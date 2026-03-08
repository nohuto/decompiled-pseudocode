/*
 * XREFs of ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00283B8
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002862C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C002A1C4 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C002A79C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWmiIrpHandler::DecrementUpdateCount(FxWmiIrpHandler *this)
{
  if ( _InterlockedExchangeAdd(&this->m_UpdateCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_UpdateEvent.m_Event.m_Event, 0, 0);
}
