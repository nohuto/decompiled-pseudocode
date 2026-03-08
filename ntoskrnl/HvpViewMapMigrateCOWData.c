/*
 * XREFs of HvpViewMapMigrateCOWData @ 0x1408807B4
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1407326F8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpAllExceptionsFatalFilter @ 0x140A1A5EC (HvpAllExceptionsFatalFilter.c)
 */

__int64 __fastcall HvpViewMapMigrateCOWData(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 i; // rcx

  v6 = a2[5];
  v7 = a3[6];
  if ( v7 >= a2[6] )
    v7 = a2[6];
  if ( a3[5] >= v6 )
    v6 = a3[5];
  while ( v6 < v7 )
  {
    v8 = a3[3];
    v9 = v6 + 4096;
    if ( (*((_BYTE *)a3 + ((unsigned __int64)(v6 - v8) >> 12) + 72) & 2) != 0 )
    {
      for ( i = v9 - v8; v9 < v7 && (*((_BYTE *)a3 + (i >> 12) + 72) & 2) != 0; i += 4096LL )
        v9 += 4096LL;
      result = HvpViewMapMakeViewRangeCOWByCaller(a1, a2, v6, v9);
      if ( (int)result < 0 )
        return result;
      memmove((void *)(v6 + a2[7] - a2[3]), (const void *)(v6 + a3[7] - a3[3]), v9 - v6);
    }
    v6 = v9;
  }
  return 0LL;
}
