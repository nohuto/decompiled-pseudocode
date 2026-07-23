/*
 * XREFs of SdbpFindMatcher @ 0x140754C3C
 * Callers:
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpFindMatcher(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 TagFromTagID; // ax
  unsigned __int16 v9; // r9

  TagFromTagID = SdbGetTagFromTagID(a4, a5, a3, a4);
  if ( a5 )
  {
    v9 = 0;
    while ( TagFromTagID != *(_DWORD *)(32LL * v9 + a3 + 584) )
    {
      if ( ++v9 >= 0x20u )
        goto LABEL_5;
    }
    *a1 = *(_QWORD *)(32LL * v9 + a3 + 600);
    *a2 = *(_DWORD *)(32 * (v9 + 19LL) + a3);
    return *(_QWORD *)(32LL * v9 + a3 + 592);
  }
  else
  {
LABEL_5:
    *a2 = 0;
    return 0LL;
  }
}
