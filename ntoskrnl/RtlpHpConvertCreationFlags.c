/*
 * XREFs of RtlpHpConvertCreationFlags @ 0x1402F7A8C
 * Callers:
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertCreationFlags(int a1, __int16 a2)
{
  unsigned int v4; // r9d
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax

  v4 = a1 & 1 | 0x80000000;
  if ( (a1 & 4) == 0 )
    v4 = a1 & 1;
  v5 = v4 | 2;
  if ( (a1 & 8) == 0 )
    v5 = v4;
  v6 = v5 | 0x20000000;
  if ( (a1 & 0x8000000) == 0 && (a2 & 0x1000) == 0 )
    v6 = v5;
  v7 = v6 | 0x10000000;
  if ( (a1 & 0x20) == 0 && (a2 & 0x10) == 0 )
    v7 = v6;
  v8 = v7 | 0x40000000;
  if ( (a1 & 0x40000) == 0 )
    v8 = v7;
  v9 = v8 | 0x2000000;
  if ( (a1 & 0x10) == 0 )
    v9 = v8;
  v10 = v9 | 0x8000000;
  if ( (a1 & 0x200) == 0 )
    v10 = v9;
  return a1 & 0xF000 | (unsigned int)v10;
}
