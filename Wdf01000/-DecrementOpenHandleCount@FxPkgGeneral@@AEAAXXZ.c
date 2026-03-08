/*
 * XREFs of ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008543C
 * Callers:
 *     ?CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z @ 0x1C00853F8 (-CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00859BC (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0085BCC (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C00032C0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxPkgGeneral::DecrementOpenHandleCount(FxPkgGeneral *this)
{
  FxDeviceBase *m_DeviceBase; // rcx

  if ( _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( BYTE5(m_DeviceBase[1].m_Globals) )
      FxObject::DeleteObject(m_DeviceBase);
  }
}
