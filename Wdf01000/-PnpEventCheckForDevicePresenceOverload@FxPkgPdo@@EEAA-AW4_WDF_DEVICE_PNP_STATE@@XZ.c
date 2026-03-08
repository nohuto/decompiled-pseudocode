/*
 * XREFs of ?PnpEventCheckForDevicePresenceOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00691A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceRemoved@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C0024FB4 (-IsDeviceRemoved@FxDeviceDescriptionEntry@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventCheckForDevicePresenceOverload(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx
  bool v2; // zf
  __int64 result; // rax

  m_Description = this->m_Description;
  if ( !m_Description )
    return 276LL;
  v2 = FxDeviceDescriptionEntry::IsDeviceRemoved(m_Description) == 0;
  result = 277LL;
  if ( !v2 )
    return 276LL;
  return result;
}
