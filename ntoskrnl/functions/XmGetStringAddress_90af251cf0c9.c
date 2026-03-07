__int64 __fastcall XmGetStringAddress(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r10d
  __int64 v4; // r11
  int v5; // eax
  int v6; // r10d
  __int64 v7; // rdx
  unsigned int v8; // r8d

  v3 = *(_DWORD *)(a1 + 120);
  v4 = a2;
  v5 = v3 + 1;
  v6 = ~v3;
  if ( (*(_DWORD *)(a1 + 16) & 0x400) == 0 )
    v6 = v5;
  if ( *(_BYTE *)(a1 + 137) )
  {
    v7 = *(unsigned int *)(a1 + 4LL * a3 + 24);
    *(_DWORD *)(a1 + 4LL * a3 + 24) = v7 + v6;
  }
  else
  {
    v7 = *(unsigned __int16 *)(a1 + 4LL * a3 + 24);
    *(_WORD *)(a1 + 4LL * a3 + 24) = v6 + v7;
  }
  v8 = *(unsigned __int16 *)(a1 + 2 * v4 + 68);
  if ( (unsigned int)v7 > v8 || (int)v7 + *(_DWORD *)(a1 + 120) > v8 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 2 * v4 + 56), v7);
}
