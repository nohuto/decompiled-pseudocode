/*
 * XREFs of MiAddPartitionDataToCrashDump @ 0x14062CFF0
 * Callers:
 *     MmAddPrivateDataToCrashDump @ 0x14062DBE0 (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     MiAddPartitionToCrashDump @ 0x14062D1FC (MiAddPartitionToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionDataToCrashDump(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // r10d
  unsigned int v6; // edx
  int v7; // r11d
  char *v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  char *v11; // rdx
  __int64 i; // r9
  unsigned __int64 v13; // rax
  unsigned int SizeOfBitMap; // edx
  int v15; // eax

  v1 = 0;
  LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140C67048, 8LL);
  if ( (int)v3 < 0 )
    return (unsigned int)v3;
  LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140C67028, 16LL);
  if ( (int)v3 < 0 )
    return (unsigned int)v3;
  v4 = MmAddRangeToCrashDump(
         a1,
         qword_140C67028->Buffer,
         8 * (((unsigned __int64)qword_140C67028->SizeOfBitMap >> 6) + ((qword_140C67028->SizeOfBitMap & 0x3F) != 0)));
  v3 = (unsigned int)v4;
  if ( v4 < 0 )
    return (unsigned int)v3;
  do
  {
    v5 = v1 < qword_140C67028->SizeOfBitMap ? v1 : 0;
    v6 = qword_140C67028->SizeOfBitMap - 1;
    v7 = ((__int64)qword_140C67028->Buffer & 4) != 0LL ? 0x20 : 0;
    v8 = (char *)qword_140C67028->Buffer - (((__int64)qword_140C67028->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v9 = v7 + v6;
      if ( v6 - v5 == -1 )
        goto LABEL_6;
      v11 = &v8[8 * ((unsigned __int64)(v7 + v5) >> 6)];
      for ( i = ~*(_QWORD *)v11 | ((1LL << ((v7 + v5) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v11 )
      {
        v11 += 8;
        if ( v11 > &v8[8 * ((unsigned __int64)v9 >> 6)] )
          goto LABEL_6;
      }
      _BitScanForward64(&v13, ~i);
      v10 = (unsigned int)v13 + ((unsigned int)((v11 - v8) >> 3) << 6);
      if ( (unsigned int)v10 > v9 )
      {
LABEL_6:
        v10 = 0xFFFFFFFFLL;
        goto LABEL_13;
      }
      if ( (_DWORD)v10 != -1 )
        break;
LABEL_13:
      if ( !v5 )
        goto LABEL_18;
      SizeOfBitMap = v1 + 1;
      if ( v1 + 1 > qword_140C67028->SizeOfBitMap )
        SizeOfBitMap = qword_140C67028->SizeOfBitMap;
      v6 = SizeOfBitMap - 1;
      v5 = 0;
    }
    v10 = (unsigned int)(v10 - v7);
LABEL_18:
    if ( (unsigned int)v10 < v1 )
      break;
    if ( (_DWORD)v10 == -1 )
      break;
    v1 = v10 + 1;
    v15 = MiAddPartitionToCrashDump(a1, *(_QWORD *)(qword_140C67048 + 8 * v10), v3);
    v3 = (unsigned int)v15;
  }
  while ( v15 >= 0 );
  if ( (int)v3 >= 0 )
  {
    if ( !qword_140C67A68
      || (LODWORD(v3) = MmAddRangeToCrashDump(
                          a1,
                          qword_140C67A68,
                          8 * (((unsigned __int64)qword_140C67A60 >> 6) + ((qword_140C67A60 & 0x3F) != 0))),
          (int)v3 >= 0) )
    {
      if ( qword_140C67A70 )
        LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140C67A70, 0x2000000LL);
    }
  }
  return (unsigned int)v3;
}
