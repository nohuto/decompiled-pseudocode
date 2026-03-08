/*
 * XREFs of imp_WdfStringGetUnicodeString @ 0x1C004CA80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfStringGetUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFSTRING__ *String,
        _UNICODE_STRING *UnicodeString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxString *pString; // [rsp+30h] [rbp+8h] BYREF

  pString = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)String, 0x1007u, (void **)&pString);
  m_Globals = pString->m_Globals;
  if ( !UnicodeString )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) >= 0 )
    *UnicodeString = pString->m_UnicodeString;
}
