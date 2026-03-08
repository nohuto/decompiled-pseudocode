/*
 * XREFs of PspWow64InitThreadGuestx86 @ 0x14077D270
 * Callers:
 *     PspWow64InitThread @ 0x14077BCB4 (PspWow64InitThread.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PspWow64InitThreadGuestx86(__int64 a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  __int16 v10; // ax
  int v11; // ecx
  int v12; // edx
  __int64 result; // rax

  memset(a2, 0, 0x2CCuLL);
  v10 = ExGenRandom(1);
  v11 = *(_DWORD *)(a1 + 2512);
  v12 = a4 - 4 * (v10 & 0x1FF);
  a2[46] = a3;
  a2[44] = a5;
  if ( (v11 & 0x40) != 0 )
    v12 = a4;
  a2[41] = a6;
  a2[35] = 43;
  a2[37] = 43;
  a2[38] = 43;
  a2[50] = 43;
  result = 639LL;
  a2[7] = 639;
  *((_WORD *)a2 + 102) = 639;
  a2[49] = v12 - 16;
  a2[36] = 83;
  a2[47] = 35;
  a2[9] = 0xFFFF;
  a2[57] = 8064;
  *a2 = 65599;
  return result;
}
