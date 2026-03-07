__int64 FxIFR(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 MessageLevel,
        unsigned int MessageFlags,
        _GUID *MessageGuid,
        unsigned __int16 MessageNumber,
        ...)
{
  _WDF_IFR_HEADER *WdfLogHeader; // rbx
  __int64 v8; // rsi
  va_list v9; // rax
  va_list v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  signed __int32 AsLONG; // eax
  __int64 v14; // r15
  unsigned __int64 v15; // rsi
  signed __int32 v16; // r9d
  unsigned __int16 v17; // dx
  unsigned __int8 *v18; // rdi
  char *v19; // rax
  size_t *v20; // rax
  unsigned __int8 *v21; // rsi
  size_t *v22; // rbp
  size_t v23; // rdi
  signed __int32 offsetNew; // [rsp+20h] [rbp-48h]
  char *ap; // [rsp+28h] [rbp-40h] BYREF
  __int64 v27; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, MessageNumber);
  va_start(va, MessageNumber);
  v27 = va_arg(va1, _QWORD);
  if ( unk_1C009FF60 )
    return 0LL;
  WdfLogHeader = (_WDF_IFR_HEADER *)FxDriverGlobals->WdfLogHeader;
  if ( WdfLogHeader )
  {
    v8 = 0LL;
    va_copy(ap, va);
    va_copy(v9, va1);
    while ( *((_QWORD *)v9 - 1) )
    {
      v10 = v9 + 8;
      v11 = *(_QWORD *)v9;
      if ( v11 )
      {
        if ( v11 > 0x100 )
          goto LABEL_25;
        v8 += (unsigned __int16)v11;
      }
      v9 = v10 + 8;
    }
    v12 = ((4 - (v8 & 3)) & -(__int64)((v8 & 3) != 0)) + v8;
    if ( v12 > 0x100 )
    {
LABEL_25:
      _InterlockedIncrement(&WdfLogHeader->Sequence);
      return 3221225473LL;
    }
    FxVerifyLogHeader(FxDriverGlobals, WdfLogHeader);
    AsLONG = WdfLogHeader->Offset.u.AsLONG;
    v14 = WdfLogHeader->UseTimeStamp != 0 ? 36LL : 28LL;
    v15 = v14 + v12;
    do
    {
      v16 = AsLONG;
      if ( &WdfLogHeader->Base[(unsigned __int64)WdfLogHeader->Size] < &WdfLogHeader->Base[(unsigned __int16)AsLONG
                                                                                         + v15] )
      {
        v17 = 0;
        offsetNew = (unsigned __int16)v15;
      }
      else
      {
        HIWORD(offsetNew) = AsLONG;
        LOWORD(offsetNew) = v15 + AsLONG;
        v17 = AsLONG;
      }
      AsLONG = _InterlockedCompareExchange((volatile signed __int32 *)&WdfLogHeader->Offset, offsetNew, AsLONG);
    }
    while ( v16 != AsLONG );
    v18 = &WdfLogHeader->Base[v17];
    *((_WORD *)v18 + 4) = HIWORD(AsLONG);
    *((_WORD *)v18 + 1) = v15;
    *((_WORD *)v18 + 5) = MessageNumber;
    *((_DWORD *)v18 + 1) = _InterlockedIncrement(&WdfLogHeader->Sequence);
    *(_GUID *)(v18 + 12) = *MessageGuid;
    if ( WdfLogHeader->UseTimeStamp )
    {
      ap = 0LL;
      *(_WORD *)v18 = 12876;
      if ( WdfLogHeader->PreciseTimeStamp )
      {
        KeQuerySystemTimePrecise(&ap);
        v19 = ap;
      }
      else
      {
        v19 = (char *)MEMORY[0xFFFFF78000000014];
      }
      *(_QWORD *)(v18 + 28) = v19;
    }
    else
    {
      *(_WORD *)v18 = 21068;
    }
    va_copy((va_list)v20, va1);
    v21 = &v18[v14];
    while ( *(v20 - 1) )
    {
      v22 = v20 + 1;
      v23 = *v20;
      if ( *v20 )
      {
        memmove(v21, (const void *)*(v20 - 1), *v20);
        v21 += v23;
      }
      v20 = v22 + 1;
    }
    FxVerifyLogHeader(FxDriverGlobals, WdfLogHeader);
    return 0LL;
  }
  return 3221225473LL;
}
