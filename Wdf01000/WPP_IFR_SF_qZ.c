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
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) == 0 || BYTE1(WPP_GLOBAL_WDF_Control.Flags) < 4u )
    goto LABEL_12;
  if ( id && id->Buffer )
  {
    Length = id->Length;
    Buffer = id->Buffer;
  }
  else
  {
    Length = 10LL;
    if ( !id || (Buffer = id->Buffer) == 0LL )
    {
      Buffer = L"NULL";
      if ( !id )
        goto LABEL_10;
    }
  }
  v12 = id;
  if ( !id->Length )
LABEL_10:
    v12 = (const _UNICODE_STRING *)&unk_1C0092F2C;
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
LABEL_12:
  if ( !v7 )
    goto LABEL_16;
  if ( v7->Buffer )
  {
    v9 = v7->Length;
    v13 = v7->Buffer;
    goto LABEL_17;
  }
  v13 = v7->Buffer;
  if ( !v13 )
  {
LABEL_16:
    v13 = L"NULL";
    if ( !v7 )
    {
LABEL_18:
      v7 = (const _UNICODE_STRING *)&unk_1C0092F2C;
      goto LABEL_19;
    }
  }
LABEL_17:
  if ( !v7->Length )
    goto LABEL_18;
LABEL_19:
  FxIFR(globals, 4u, 0x11u, WPP_FxDriver_cpp_Traceguids, 0xFu, &flags, 8LL, v7, 2LL, v13, v9, 0LL);
}
