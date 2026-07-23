/*
 * XREFs of RtlpHpConvertCreationFlags @ 0x14037B358
 * Callers:
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertCreationFlags(int a1, __int16 a2)
{
  __int16 v2; // r11
  unsigned int v4; // r9d
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // eax

  v2 = a1;
  v4 = a1 & 1 | 0x80000000;
  if ( (a1 & 4) == 0 )
    v4 = a1 & 1;
  v5 = v4 | 2;
  if ( (a1 & 8) == 0 )
    v5 = v4;
  v6 = v5 | 0x20000000;
  if ( (a2 & 0x1000) == 0 && (a1 & 0x8000000) == 0 )
    v6 = v5;
  v7 = v6 | 0x10000000;
  if ( (a2 & 0x10) == 0 && (a1 & 0x20) == 0 )
    v7 = v6;
  v9 = v7 | 0x40000000;
  if ( (a1 & 0x40000) == 0 )
    v9 = v7;
  v10 = v9 | 0x2000000;
  if ( (v2 & 0x10) == 0 )
    v10 = v9;
  v11 = v10 | 0x8000000;
  if ( (v2 & 0x200) == 0 )
    v11 = v10;
  return v2 & 0xF000 | (unsigned int)v11;
}
