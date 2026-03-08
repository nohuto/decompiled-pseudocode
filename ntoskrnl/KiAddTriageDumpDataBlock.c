/*
 * XREFs of KiAddTriageDumpDataBlock @ 0x1403A2B04
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403A29E0 (KeAddTriageDumpDataBlock.c)
 *     KiAddTriageDumpDataBlock @ 0x1403A2B04 (KiAddTriageDumpDataBlock.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KiAddTriageDumpDataBlock @ 0x1403A2B04 (KiAddTriageDumpDataBlock.c)
 *     KiCheckRangeOverlap @ 0x140567794 (KiCheckRangeOverlap.c)
 */

__int64 __fastcall KiAddTriageDumpDataBlock(_DWORD *a1, const void *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  int v5; // r12d
  unsigned __int64 v8; // rdi
  unsigned int v9; // r15d
  __int64 i; // r14
  _QWORD *v11; // rdx
  int v13; // eax
  unsigned __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF

  v4 = (unsigned __int64)a2;
  v5 = a4;
  v14 = (unsigned __int64)a2;
  v15 = a3;
  v8 = a3;
  v9 = 0;
  v16 = 0LL;
  DbgPrintEx(
    5u,
    2u,
    "NTDUMP: Enter KiAddTriageDumpDataBlock: Array %p Address %p Size %d Recursion %d\n",
    a1,
    a2,
    a3,
    a4);
  if ( !v8 )
    return 0LL;
  for ( i = 0LL; (unsigned int)i < a1[4]; i = (unsigned int)(i + 1) )
  {
    v11 = &a1[4 * i + 12];
    if ( v4 < *v11 + *(_QWORD *)&a1[4 * (unsigned int)i + 14] && v4 + a3 > *v11 )
    {
      if ( (unsigned __int8)KiCheckRangeOverlap(&v14, v11, &v16) )
      {
        v13 = KiAddTriageDumpDataBlock(a1, v16, *((_QWORD *)&v16 + 1), (unsigned int)++v5);
        v9 = v13;
        if ( v13 < 0 )
          DbgPrintEx(
            5u,
            1u,
            "NTDUMP: KiAddTriageDumpDataBlock split block add failed with 0x%X. RecursionDepth: %d\n",
            v13,
            v5);
        v8 = v15;
        v4 = v14;
        if ( !v15 )
          return v9;
      }
      else
      {
        v8 = v15;
        v4 = v14;
      }
    }
  }
  if ( !v8 )
    return v9;
  if ( a1[4] == a1[5] )
    return 3221225507LL;
  if ( a3 <= (unsigned int)(a1[7] - a1[6]) )
  {
    *(_QWORD *)&a1[4 * i + 12] = v4;
    *(_QWORD *)&a1[4 * (unsigned int)i + 14] = v8;
    ++a1[4];
    a1[6] += v8;
    return v9;
  }
  return 3221225626LL;
}
