/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x1402F97BC
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14030424C (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14020DD14 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrAllocAligned @ 0x140304644 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140304A64 (RtlpHpVaMgrRangeCreate.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int64 v2; // rdi
  __int16 v3; // ax
  __int64 v4; // rbx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v8 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v2 = RtlpHpVaMgrAllocAligned(a1, &v8);
  if ( !v2 )
    return 0LL;
  v3 = *(_WORD *)(a1 + 40);
  v7 = 0LL;
  WORD4(v7) = v3;
  v6 = 0LL;
  v4 = RtlpHpVaMgrRangeCreate(a1, v2, &v6);
  if ( v4 )
    v2 = 0LL;
  v9 = v2;
  if ( v2 )
    RtlpHpEnvFreeVA((unsigned __int64 *)&v9, &v8, 0x8000);
  return v4;
}
