/*
 * XREFs of HvpViewMapMigrateCOWData @ 0x140732D9C
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     HvpViewMapMakeViewRangeWriteable @ 0x1405CCD5C (HvpViewMapMakeViewRangeWriteable.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x1407230D4 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140723208 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpAllExceptionsFatalFilter @ 0x140873610 (HvpAllExceptionsFatalFilter.c)
 */

__int64 __fastcall HvpViewMapMigrateCOWData(ULONG_PTR a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int8 *v9; // r13
  unsigned __int8 v10; // dl
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 result; // rax

  v6 = a2[5];
  v7 = a3[6];
  if ( v7 >= a2[6] )
    v7 = a2[6];
  if ( a3[5] >= v6 )
    v6 = a3[5];
  while ( v6 < v7 )
  {
    v8 = a3[3];
    v9 = (unsigned __int8 *)a3 + ((unsigned __int64)(v6 - v8) >> 12) + 72;
    v10 = *v9;
    v11 = v6 + 4096;
    if ( (*v9 & 6) != 0 )
    {
      if ( v11 < v7 )
      {
        v12 = v11 - v8;
        do
        {
          if ( ((*((_BYTE *)a3 + (v12 >> 12) + 72) & 2) != 0) != ((v10 & 2) != 0) )
            break;
          if ( ((*((_BYTE *)a3 + (v12 >> 12) + 72) ^ v10) & 4) != 0 )
            break;
          v11 += 4096LL;
          v12 += 4096LL;
        }
        while ( v11 < v7 );
      }
      if ( (v10 & 2) != 0 )
      {
        result = HvpViewMapMakeViewRangeCOWByCaller(a1, a2, v6, v11);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        HvpViewMapMakeViewRangeWriteable(a1, (__int64)a2, v6, v11);
      }
      memmove((void *)(v6 + a2[7] - a2[3]), (const void *)(v6 + a3[7] - a3[3]), v11 - v6);
      if ( (*v9 & 2) == 0 )
        HvpViewMapMakeViewRangeReadOnly(a1, (__int64)a2, v6, v11);
    }
    v6 = v11;
  }
  return 0LL;
}
