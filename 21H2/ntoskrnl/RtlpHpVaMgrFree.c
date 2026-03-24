/*
 * XREFs of RtlpHpVaMgrFree @ 0x1402A50D4
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402A3484 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402A3F84 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCoalesce @ 0x1402A516C (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rax

  v3 = RtlpHpVaMgrRangeCoalesce();
  v4 = *(_WORD *)(v3 + 24);
  if ( v4 != *(_WORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v5 )
      v5 ^= a1 + 8;
    LOBYTE(v2) = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v4 < *(_WORD *)(v5 + 24) )
        {
          v6 = *(_QWORD *)v5;
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v6 )
              break;
            v6 ^= v5;
          }
          if ( !v6 )
            break;
        }
        else
        {
          v6 = *(_QWORD *)(v5 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_17;
            v6 ^= v5;
          }
          if ( !v6 )
          {
LABEL_17:
            LOBYTE(v2) = 1;
            break;
          }
        }
        v5 = v6;
      }
    }
    RtlRbInsertNodeEx(a1 + 8, v5, v2, v3);
    return 0LL;
  }
  return v3;
}
