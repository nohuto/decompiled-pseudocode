/*
 * XREFs of ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C003C5B4
 * Callers:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C003C60C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C003D530 (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C0068A80 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00693E0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C0077C10 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDevice::DeleteSymbolicLink(FxDevice *this)
{
  _UNICODE_STRING *p_m_SymbolicLinkName; // rbx

  if ( this->m_SymbolicLinkName.Buffer )
  {
    p_m_SymbolicLinkName = &this->m_SymbolicLinkName;
    if ( this->m_SymbolicLinkName.Length )
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
    FxPoolFree((FX_POOL_TRACKER *)this->m_SymbolicLinkName.Buffer);
    *p_m_SymbolicLinkName = 0LL;
  }
}
