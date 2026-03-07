char __fastcall CInteractionProcessor::SetRailsEnabled(_BYTE *a1, char a2, int a3)
{
  char v3; // r10
  unsigned __int8 v4; // r9
  char result; // al
  char v6; // dl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a3 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v3 = 126;
    if ( a1[148] >> 7 != a2 )
      a1[148] = (a2 << 7) | a1[148] & 0x7E | 1;
    if ( a1[308] >> 7 != a2 )
      a1[308] = (a2 << 7) | a1[308] & 0x7E | 1;
    if ( a1[468] >> 7 != a2 )
      a1[468] = (a2 << 7) | a1[468] & 0x7E | 1;
    v4 = a1[628];
    result = v4 >> 7;
    if ( v4 >> 7 != a2 )
    {
      v6 = a2 << 7;
LABEL_11:
      a1[628] = a3 | v6 | v3 & v4;
    }
  }
  else
  {
    LOBYTE(a3) = 1;
    v3 = -65;
    if ( ((a1[148] & 0x40) != 0) != a2 )
      a1[148] = (a2 << 6) | a1[148] & 0xBF | 1;
    if ( ((a1[308] & 0x40) != 0) != a2 )
      a1[308] = (a2 << 6) | a1[308] & 0xBF | 1;
    if ( ((a1[468] & 0x40) != 0) != a2 )
      a1[468] = (a2 << 6) | a1[468] & 0xBF | 1;
    v4 = a1[628];
    result = (v4 & 0x40) != 0;
    if ( result != a2 )
    {
      v6 = a2 << 6;
      goto LABEL_11;
    }
  }
  return result;
}
