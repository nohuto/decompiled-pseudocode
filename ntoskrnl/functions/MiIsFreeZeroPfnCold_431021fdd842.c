_BOOL8 __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C657C0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C657C0;
  return HIDWORD(v1) == 4294967293;
}
