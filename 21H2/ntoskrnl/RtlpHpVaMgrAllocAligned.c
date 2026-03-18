/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x14023D570
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x14023CCE0 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14023CDE0 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x140352090 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // r10d
  unsigned int v5; // r11d
  _DWORD *v6; // rcx
  int v7; // r9d
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  v4 = 0x2000;
  v9 = 0LL;
  v5 = (v3 >> 1) & 7;
  if ( v5 >= 3 )
  {
    v4 = v5 < 4 ? 536879104 : 536883200;
  }
  else if ( v5 == 2 )
  {
    v4 = 541073408;
  }
  v6 = *(_DWORD **)(a1 + 24);
  v7 = v4 | 0x40000;
  if ( (v3 & 0x10) == 0 )
    v7 = v4;
  RtlpHpEnvAllocVA((unsigned int)&v9, a2, a3, v7, 4, *v6, v5);
  return v9;
}
