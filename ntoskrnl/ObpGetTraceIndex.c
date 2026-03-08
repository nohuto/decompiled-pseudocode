/*
 * XREFs of ObpGetTraceIndex @ 0x140979D90
 * Callers:
 *     ObpPushRefDerefInfo @ 0x14097A13C (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpGetTraceIndex(unsigned __int16 *Source2)
{
  unsigned int v1; // ebp
  unsigned __int16 *v3; // r8
  __int64 v4; // rcx
  int v5; // edx
  int v6; // eax
  unsigned __int16 *v7; // r8
  char *v8; // r14
  unsigned __int16 v9; // bp
  unsigned int v10; // esi
  __int64 i; // rax
  unsigned int v12; // edi
  __int64 Pool2; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx

  v1 = 0;
  v3 = Source2;
  v4 = 32LL;
  do
  {
    v5 = v3[1];
    v6 = *v3;
    v3 += 2;
    v1 += v6 ^ v5;
    --v4;
  }
  while ( v4 );
  v7 = (unsigned __int16 *)ObpStackTable;
  v8 = (char *)ObpStackTable + 8;
  v9 = v1 % 0x3FFD;
  LOWORD(v10) = v9;
  for ( i = v9; ; i = (unsigned __int16)v10 )
  {
    LOWORD(v12) = v7[i + 68];
    if ( (_WORD)v12 == 0xFFFF )
      break;
    if ( RtlCompareMemory(
           (const void *)(*(_QWORD *)&v8[8 * ((unsigned __int64)v7[i + 68] >> 10)]
                        + ((unsigned __int64)(v7[i + 68] & 0x3FF) << 7)),
           Source2,
           0x80uLL) == 128 )
      return (unsigned __int16)v12;
    v10 = ((unsigned int)(unsigned __int16)v10 + 1) % 0x3FFD;
    if ( (_WORD)v10 == v9 )
      return 16381LL;
    v7 = (unsigned __int16 *)ObpStackTable;
  }
  if ( *v7 == v7[1] )
  {
    Pool2 = ExAllocatePool2(64LL, 0x20000LL, 1951556175LL);
    if ( !Pool2 )
      return 16381LL;
    v7 = (unsigned __int16 *)ObpStackTable;
    *((_QWORD *)ObpStackTable + ((unsigned __int64)*((unsigned __int16 *)ObpStackTable + 1) >> 10) + 1) = Pool2;
    v7[1] += 1024;
  }
  v12 = *v7;
  v15 = (unsigned __int64)(*v7 & 0x3FF) << 7;
  v7[(unsigned __int16)v10 + 68] = v12;
  v16 = *(_QWORD *)&v7[4 * ((unsigned __int64)v12 >> 10) + 4];
  *(_OWORD *)(v16 + v15) = *(_OWORD *)Source2;
  *(_OWORD *)(v16 + v15 + 16) = *((_OWORD *)Source2 + 1);
  *(_OWORD *)(v16 + v15 + 32) = *((_OWORD *)Source2 + 2);
  *(_OWORD *)(v16 + v15 + 48) = *((_OWORD *)Source2 + 3);
  *(_OWORD *)(v16 + v15 + 64) = *((_OWORD *)Source2 + 4);
  *(_OWORD *)(v16 + v15 + 80) = *((_OWORD *)Source2 + 5);
  *(_OWORD *)(v16 + v15 + 96) = *((_OWORD *)Source2 + 6);
  *(_OWORD *)(v16 + v15 + 112) = *((_OWORD *)Source2 + 7);
  ++*v7;
  return (unsigned __int16)v12;
}
