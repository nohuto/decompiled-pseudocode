/*
 * XREFs of ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180284668
 * Callers:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18028441C (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

void __fastcall CD2DContext::TempDisableHardwareProtection(CD2DContext *this)
{
  CD2DContext *v1; // rcx
  char IsHardwareProtectionDisabled; // al
  char v3; // dl

  CD2DContext::IsHardwareProtectionDisabled(this);
  *((_BYTE *)v1 + 436) = 1;
  IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v1);
  if ( v3 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
      1LL);
}
