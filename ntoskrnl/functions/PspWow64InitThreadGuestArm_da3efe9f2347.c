__int64 __fastcall PspWow64InitThreadGuestArm(__int64 a1, _DWORD *a2, int a3, int a4, int a5, unsigned int a6)
{
  unsigned int v9; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 || (v9 = 8 * (unsigned __int8)ExGenRandom(1), v9 < 8) )
    v9 = 8;
  memset(a2, 0, 0x1A0uLL);
  a2[18] = 0;
  a2[1] = a5;
  result = a6;
  a2[14] = a4 - v9;
  a2[16] = a3;
  a2[2] = a6;
  a2[17] = 48;
  *a2 = 2097159;
  return result;
}
