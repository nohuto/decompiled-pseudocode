/*
 * XREFs of RtlpHpHeapDestroy @ 0x140389A0C
 * Callers:
 *     RtlpHpHeapCreate @ 0x14037AA74 (RtlpHpHeapCreate.c)
 *     ExCleanupSessionHeapManager @ 0x140389960 (ExCleanupSessionHeapManager.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x140222AA0 (RtlpHpMetadataFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14023D958 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x14023DB94 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpRegisterEnvironment @ 0x14037B678 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextCleanup @ 0x140389BBC (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x140389D20 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140595820 (RtlpHpLargeAllocationDestroy.c)
 */

__int64 __fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int128 v14; // xmm0
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+68h] [rbp+28h] BYREF

  v18 = a1;
  v19 = 0LL;
  v1 = a1 + 72;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      RtlpHpLargeAllocationDestroy(v4, a1);
      if ( !v10 )
        break;
      v4 = v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = v18;
  v12 = v18 + 672;
  while ( *(_QWORD *)v12 )
  {
    v13 = v12 ^ *(_QWORD *)v12;
    RtlpHpVsSubsegmentCleanup(v11 + 640, v13);
    RtlpHpVsSubsegmentFree(v11 + 640, v13, 1u);
  }
  RtlpHpLfhContextCleanup(v18 + 832);
  RtlpHpSegContextCleanup(v18 + 256);
  RtlpHpSegContextCleanup(v18 + 448);
  v14 = *(_OWORD *)v18;
  v19 = *(_QWORD *)(v18 + 248) - v18;
  v2 = (*(_BYTE *)(v18 + 30) & 1) == 0;
  v16 = v14;
  v17 = *(_OWORD *)v18;
  if ( v2 )
    RtlpHpFreeVA((unsigned __int64 *)&v18, (unsigned __int64 *)&v19, BYTE1(v16) < 2u ? 16809984 : 0x8000, &v17);
  else
    RtlpHpMetadataFree(v18, &v17);
  return RtlpHpRegisterEnvironment(&v16);
}
