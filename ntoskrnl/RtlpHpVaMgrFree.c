/*
 * XREFs of RtlpHpVaMgrFree @ 0x1402F12D4
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14030424C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x14030BD10 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x1402F136C (RtlpHpVaMgrRangeCoalesce.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  unsigned __int64 v2; // r9
  unsigned __int16 v3; // r11
  unsigned __int64 v4; // rdx
  bool v5; // r8
  unsigned __int64 v6; // rax

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
        if ( v3 >= *(_WORD *)(v4 + 24) )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_14;
            v6 ^= v4;
          }
          if ( !v6 )
          {
LABEL_14:
            v5 = 1;
            break;
          }
        }
        else
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
        v4 = v6;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 8), v4, v5, v2);
    return 0LL;
  }
  return v2;
}
