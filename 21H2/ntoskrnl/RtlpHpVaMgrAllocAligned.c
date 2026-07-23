/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x1402220DC
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x140220834 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x1402213C4 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x140315C7C (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, int a2, int a3)
{
  unsigned __int8 v3; // r11
  int v4; // r9d
  unsigned int v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 46);
  v7 = 0LL;
  v6 = (v3 >> 1) & 3;
  v4 = (v6 < 2 ? 0x2000 : 536883200) | 0x40000;
  if ( (v3 & 8) == 0 )
    v4 = v6 < 2 ? 0x2000 : 536883200;
  RtlpHpEnvAllocVA((unsigned int)&v7, a2, a3, v4, 4, **(_DWORD **)(a1 + 24), v6);
  return v7;
}
