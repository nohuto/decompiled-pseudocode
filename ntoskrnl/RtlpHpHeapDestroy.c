/*
 * XREFs of RtlpHpHeapDestroy @ 0x1405B4210
 * Callers:
 *     RtlpHpHeapCreate @ 0x140375288 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x14020DC8C (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x1402B6D30 (RtlpHpMetadataFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1402E55D8 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x1402EAA68 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpRegisterEnvironment @ 0x1403759F0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextCleanup @ 0x1405B4600 (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x1405B4838 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405B4EA0 (RtlpHpLargeAllocationDestroy.c)
 */

__int64 __fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // ebp
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rsi
  char v9; // al
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // r8d
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v17 = a1;
  v1 = a1 + 72;
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 )
        break;
      v7 = (_QWORD *)(v4 + 8);
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 )
      {
LABEL_8:
        if ( v5 )
          v4 ^= v6;
        else
          v4 = v6;
        *v7 = 0LL;
      }
      else
      {
        v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 && v8 )
          v8 ^= v4;
        RtlpHpLargeAllocationDestroy(v4, a1);
        if ( !v8 )
          goto LABEL_17;
        v4 = v8;
      }
    }
    v7 = (_QWORD *)v4;
    goto LABEL_8;
  }
LABEL_17:
  v9 = *(_BYTE *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v10 = a1 + 736;
  while ( *(_QWORD *)v10 )
  {
    v11 = v10 ^ *(_QWORD *)v10;
    RtlpHpVsSubsegmentCleanup(a1 + 704, v11);
    RtlpHpVsSubsegmentFree(a1 + 704, v11, 1u);
  }
  RtlpHpLfhContextCleanup(a1 + 896);
  RtlpHpSegContextCleanup(a1 + 320);
  RtlpHpSegContextCleanup(a1 + 512);
  v12 = *(_QWORD *)(a1 + 256) - a1;
  v3 = (*(_BYTE *)(a1 + 30) & 1) == 0;
  v15 = *(_OWORD *)a1;
  v18 = v12;
  v16[0] = v15;
  if ( v3 )
  {
    v13 = 0x8000;
    if ( (unsigned __int8)(BYTE1(v15) - 2) > 2u )
      v13 = 16809984;
    RtlpHpFreeVA((unsigned __int64 *)&v17, &v18, v13, v16);
  }
  else
  {
    RtlpHpMetadataFree(a1, v16);
  }
  return RtlpHpRegisterEnvironment(&v15, 0);
}
