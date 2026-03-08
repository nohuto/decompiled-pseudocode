/*
 * XREFs of imp_WdfObjectGetTypedContextWorker @ 0x1C0008880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C0021984 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall imp_WdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  __int64 v3; // rbx
  _FX_DRIVER_GLOBALS **_a2; // rcx
  __int64 v5; // rax
  char *v6; // rax
  const char *_a1; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  _a2 = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    _a2 = (_FX_DRIVER_GLOBALS **)((char *)_a2 - *(unsigned __int16 *)_a2);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(_a2[2], retaddr);
  v5 = *((unsigned __int16 *)_a2 + 5);
  if ( (_WORD)v5 && (v6 = (char *)_a2 + v5) != 0LL )
  {
    while ( *((const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v6 + 4) != TypeInfo )
    {
      v6 = (char *)*((_QWORD *)v6 + 1);
      if ( !v6 )
        goto LABEL_13;
    }
    return v6 + 48;
  }
  else
  {
LABEL_13:
    _a1 = "<no typename given>";
    if ( TypeInfo->ContextName )
      _a1 = TypeInfo->ContextName;
    WPP_IFR_SF_sq(_a2[2], 3u, 0xBu, 0xDu, WPP_HandleAPI_cpp_Traceguids, _a1, _a2);
  }
  return (char *)v3;
}
