__int64 __fastcall MiSanitizePfnProtection(__int64 a1, int a2, unsigned int a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v6; // edx
  int v7; // edx

  if ( a3 == 24 )
    return 24LL;
  if ( a2 == 24
    && ((v6 = *(_DWORD *)(a1 + 48), (v6 & 0x200000) == 0)
      ? (v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1)
      : (v7 = v6 >> 7),
        a2 = v7 & 0x1F,
        a2 == 24)
    || (v3 = a2 & 0x18) == 0 )
  {
    v4 = a3 & 0x18;
    if ( v4 == 24 )
    {
      a3 &= 0xFFFFFFE7;
      return a3;
    }
    if ( v4 != 8 )
      return a3;
LABEL_18:
    a3 &= ~8u;
    return a3;
  }
  if ( v3 == 16 )
    goto LABEL_18;
  if ( v3 == 8 )
    return a3 & 0xFFFFFFE7 | 8;
  if ( v3 != 24 )
    return a3;
  return a3 | 0x18;
}
