/*
 * XREFs of ?TempReenableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180287E34
 * Callers:
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180287D90 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DEC4 (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x180287B9C (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

void __fastcall CD2DContext::TempReenableHardwareProtection(CD2DContext *this)
{
  CD2DContext *v1; // rcx
  char IsHardwareProtectionDisabled; // al
  char v3; // dl

  CD2DContext::IsHardwareProtectionDisabled(this);
  *((_BYTE *)v1 + 436) = 0;
  IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v1);
  if ( v3 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
      0LL);
}
