/*
 * XREFs of SdbpFindMatcher @ 0x1407A2454
 * Callers:
 *     SdbpMatchList @ 0x1407A2310 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpFindMatcher(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 TagFromTagID; // ax
  unsigned __int16 v9; // r9
  __int64 v10; // rcx

  TagFromTagID = SdbGetTagFromTagID(a4, a5, a3);
  if ( a5 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = 32LL * v9;
      if ( TagFromTagID == *(_DWORD *)(v10 + a3 + 592) )
        break;
      if ( ++v9 >= 0x20u )
        goto LABEL_5;
    }
    *a1 = *(_QWORD *)(32 * (v9 + 19LL) + a3);
    *a2 = *(_DWORD *)(v10 + a3 + 616);
    return *(_QWORD *)(v10 + a3 + 600);
  }
  else
  {
LABEL_5:
    *a2 = 0;
    return 0LL;
  }
}
