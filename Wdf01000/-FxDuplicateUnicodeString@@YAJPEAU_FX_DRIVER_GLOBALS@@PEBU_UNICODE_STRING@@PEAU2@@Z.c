__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  size_t Length; // r14
  signed int _a1; // edi
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r9
  unsigned __int64 v11; // rbp
  wchar_t **p_Buffer; // rdi
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  FX_POOL_TRACKER *v16; // rax
  __m128i v17; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int16 srcCbLengthAndNull; // [rsp+78h] [rbp+10h] BYREF

  Length = Source->Length;
  srcCbLengthAndNull = 0;
  _a1 = RtlUShortAdd(Length, 2u, &srcCbLengthAndNull);
  if ( _a1 < 0 )
  {
    v9 = 10;
LABEL_3:
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 2u, v9, WPP_stringutil_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  v11 = srcCbLengthAndNull;
  p_Buffer = &Destination->Buffer;
  if ( v8 < srcCbLengthAndNull )
  {
    if ( *p_Buffer )
    {
      FxPoolFree((FX_POOL_TRACKER *)*p_Buffer);
      *Destination = 0LL;
    }
    Tag = FxDriverGlobals->Tag;
    v14 = retaddr;
    v17.m128i_i64[0] = 0LL;
    v17.m128i_i64[1] = 256LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v14 = 0LL;
    v15 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v17, v11, Tag, v14);
    *p_Buffer = (wchar_t *)v15;
    if ( !v15 )
    {
      _a1 = -1073741670;
      v9 = 11;
      goto LABEL_3;
    }
    Destination->MaximumLength = v11;
  }
  memmove(*p_Buffer, Source->Buffer, Length);
  v16 = (FX_POOL_TRACKER *)*p_Buffer;
  Destination->Length = Length;
  *((_WORD *)&v16->Link.Flink + (Length >> 1)) = 0;
  return 0LL;
}
