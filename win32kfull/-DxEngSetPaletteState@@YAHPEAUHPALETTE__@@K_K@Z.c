__int64 __fastcall DxEngSetPaletteState(HPALETTE a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  v4 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 24) |= 0x8000u;
    v3 = 1;
    DEC_SHARE_REF_CNT(v4);
  }
  return v3;
}
