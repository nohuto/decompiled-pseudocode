/*
 * XREFs of ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180284610
 * Callers:
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003D244 (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800F0480 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?TempReenableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x1802846B4 (-TempReenableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD2DContext::RemoveHwProtectedResource(CD2DContext *this)
{
  int v1; // r8d

  v1 = *((_DWORD *)this + 108);
  *((_DWORD *)this + 108) = v1 - 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v1,
      v1 - 1);
  if ( !*((_DWORD *)this + 108) )
    CD2DContext::TempReenableHardwareProtection(this);
}
