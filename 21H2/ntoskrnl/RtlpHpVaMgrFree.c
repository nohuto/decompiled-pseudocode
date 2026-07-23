/*
 * XREFs of RtlpHpVaMgrFree @ 0x140222514
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402208C4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402213C4 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCoalesce @ 0x1402225AC (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r9
  unsigned __int16 v3; // r11
  __int64 v4; // rdx
  BOOLEAN v5; // r8
  __int64 v6; // rax

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v4 )
      v4 ^= a1 + 8;
    v5 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        if ( v3 < *(_WORD *)(v4 + 24) )
        {
          v6 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v6 )
              break;
            v6 ^= v4;
          }
          if ( !v6 )
            break;
        }
        else
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_17;
            v6 ^= v4;
          }
          if ( !v6 )
          {
LABEL_17:
            v5 = 1;
            break;
          }
        }
        v4 = v6;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)v4, v5, (PRTL_BALANCED_NODE)v2);
    return 0LL;
  }
  return v2;
}
