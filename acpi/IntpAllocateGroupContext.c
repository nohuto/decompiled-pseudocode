/*
 * XREFs of IntpAllocateGroupContext @ 0x1C005EED4
 * Callers:
 *     IntpReconstructPartitionGroupFromKernel @ 0x1C005EF2C (IntpReconstructPartitionGroupFromKernel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntpAllocateGroupContext(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  unsigned __int8 v4; // cl
  _BYTE *v5; // rdx

  result = ExAllocatePool2(256LL, 16LL * a2 + 8, 1232102209LL);
  v4 = 0;
  if ( result )
  {
    *(_WORD *)result = 0;
    *(_BYTE *)(result + 2) = a2;
    if ( a2 )
    {
      v5 = (_BYTE *)(result + 8);
      do
      {
        *v5 = v4++;
        v5 += 16;
      }
      while ( v4 < a2 );
    }
  }
  return result;
}
