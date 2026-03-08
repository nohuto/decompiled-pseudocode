/*
 * XREFs of ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180282D7C
 * Callers:
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800EAB60 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F1D0C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 */

void __fastcall CD2DContext::AddHwProtectedResource(CD2DContext *this)
{
  int v1; // r8d

  v1 = *((_DWORD *)this + 108);
  *((_DWORD *)this + 108) = v1 + 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v1,
      v1 + 1);
}
