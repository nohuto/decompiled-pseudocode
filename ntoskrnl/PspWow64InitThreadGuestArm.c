/*
 * XREFs of PspWow64InitThreadGuestArm @ 0x1409B3254
 * Callers:
 *     PspWow64InitThread @ 0x14077BCB4 (PspWow64InitThread.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

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
