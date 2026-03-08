/*
 * XREFs of WPP_IFR_SF_Zd @ 0x1C002DB60
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C004E45C (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Zd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const _UNICODE_STRING *_a2,
        int globals_0)
{
  const _UNICODE_STRING *v7; // rbx
  __int64 v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // r11
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v16; // rcx
  wchar_t *v17; // rax

  v7 = _a2;
  v11 = 10LL;
  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( !_bittest(&v12, (id - 1) & 0x1F) )
    goto LABEL_12;
  v13 = (unsigned __int64)id >> 16 << 6;
  if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) < 2u )
    goto LABEL_12;
  if ( _a2 && _a2->Buffer )
  {
    Length = _a2->Length;
    Buffer = _a2->Buffer;
  }
  else
  {
    Length = 10LL;
    if ( !_a2 || (Buffer = _a2->Buffer) == 0LL )
    {
      Buffer = L"NULL";
      if ( !_a2 )
        goto LABEL_10;
    }
  }
  v16 = _a2;
  if ( !_a2->Length )
LABEL_10:
    v16 = (const _UNICODE_STRING *)&unk_1C0092F2C;
  FxWmiTraceMessage(
    *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
    43LL,
    _a1,
    traceGuid,
    v16,
    2LL,
    Buffer,
    Length,
    &globals_0,
    4LL,
    0LL);
LABEL_12:
  if ( !_a2 )
    goto LABEL_16;
  if ( _a2->Buffer )
  {
    v11 = _a2->Length;
    v17 = _a2->Buffer;
    goto LABEL_17;
  }
  v17 = _a2->Buffer;
  if ( !v17 )
  {
LABEL_16:
    v17 = L"NULL";
    if ( !_a2 )
    {
LABEL_18:
      v7 = (const _UNICODE_STRING *)&unk_1C0092F2C;
      goto LABEL_19;
    }
  }
LABEL_17:
  if ( !_a2->Length )
    goto LABEL_18;
LABEL_19:
  FxIFR(globals, 2u, id, _a1, traceGuid, v7, 2LL, v17, v11, &globals_0, 4LL, 0LL);
}
