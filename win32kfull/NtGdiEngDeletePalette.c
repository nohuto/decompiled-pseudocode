__int64 __fastcall NtGdiEngDeletePalette(HPALETTE a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v3, a1);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 24) & 0x2000000) != 0 )
    {
      v1 = EngDeletePaletteInternal((struct EPALOBJ *)&v3);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v3);
      return v1;
    }
    if ( v3 )
      DEC_SHARE_REF_CNT(v3);
  }
  return 0LL;
}
