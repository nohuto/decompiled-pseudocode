__int64 __fastcall FxIFRValidateLogHeader(_WDF_IFR_HEADER *Header)
{
  unsigned int Size; // eax
  unsigned int v3; // ecx

  Size = Header->Size;
  if ( Size + 72 < Size )
    return 3221225621LL;
  if ( Size - 4024 > 0xF000 )
    return 3221225990LL;
  if ( FxIsEqualGuid(&Header->Guid, &WdfTraceGuid) )
  {
    v3 = Header->Size;
    if ( Header->Offset.u.s.Current <= v3 )
      return v3 < Header->Offset.u.s.Previous ? 0xC0000001 : 0;
  }
  return 3221225473LL;
}
