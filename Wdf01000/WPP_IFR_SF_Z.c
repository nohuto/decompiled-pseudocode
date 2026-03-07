void __fastcall WPP_IFR_SF_Z(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const _UNICODE_STRING *_a1)
{
  const _UNICODE_STRING *v6; // rbx
  __int64 v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rsi
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v16; // rcx
  wchar_t *v17; // rax

  v6 = _a1;
  v11 = 10LL;
  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( !_bittest(&v12, (flags - 1) & 0x1F) )
    goto LABEL_12;
  v13 = (unsigned __int64)flags >> 16 << 6;
  if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) < level )
    goto LABEL_12;
  if ( _a1 && _a1->Buffer )
  {
    Length = _a1->Length;
    Buffer = _a1->Buffer;
  }
  else
  {
    Length = 10LL;
    if ( !_a1 || (Buffer = _a1->Buffer) == 0LL )
    {
      Buffer = L"NULL";
      if ( !_a1 )
        goto LABEL_10;
    }
  }
  v16 = _a1;
  if ( !_a1->Length )
LABEL_10:
    v16 = (const _UNICODE_STRING *)&unk_1C0092F2C;
  FxWmiTraceMessage(
    *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
    43LL,
    traceGuid,
    id,
    v16,
    2LL,
    Buffer,
    Length,
    0LL);
LABEL_12:
  if ( !_a1 )
    goto LABEL_16;
  if ( _a1->Buffer )
  {
    v11 = _a1->Length;
    v17 = _a1->Buffer;
    goto LABEL_17;
  }
  v17 = _a1->Buffer;
  if ( !v17 )
  {
LABEL_16:
    v17 = L"NULL";
    if ( !_a1 )
    {
LABEL_18:
      v6 = (const _UNICODE_STRING *)&unk_1C0092F2C;
      goto LABEL_19;
    }
  }
LABEL_17:
  if ( !_a1->Length )
    goto LABEL_18;
LABEL_19:
  FxIFR(globals, level, flags, traceGuid, id, v6, 2LL, v17, v11, 0LL);
}
