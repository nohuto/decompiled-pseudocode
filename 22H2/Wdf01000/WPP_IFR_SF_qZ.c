/*
 * XREFs of WPP_IFR_SF_qZ @ 0x1C005417C
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053CA0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0039BF8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qZ(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const void *flags,
        const _UNICODE_STRING *id)
{
  const _UNICODE_STRING *v7; // rbx
  __int64 v9; // rdi
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v12; // rcx
  const wchar_t *v13; // rax

  v7 = id;
  v9 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
  {
    if ( id && id->Buffer )
      Length = id->Length;
    else
      Length = 10LL;
    if ( !id || (Buffer = id->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !id || (v12 = id, !id->Length) )
      v12 = (const _UNICODE_STRING *)&unk_1C009B764;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDriver_cpp_Traceguids,
      0xFu,
      &flags,
      8LL,
      v12,
      2LL,
      Buffer,
      Length,
      0LL);
  }
  if ( !v7 )
    goto LABEL_18;
  if ( v7->Buffer )
    v9 = v7->Length;
  v13 = v7->Buffer;
  if ( !v13 )
LABEL_18:
    v13 = L"NULL";
  if ( !v7 || !v7->Length )
    v7 = (const _UNICODE_STRING *)&unk_1C009B764;
  FxIFR(globals, 4u, 0x11u, WPP_FxDriver_cpp_Traceguids, 0xFu, &flags, 8LL, v7, 2LL, v13, v9, 0LL);
}
