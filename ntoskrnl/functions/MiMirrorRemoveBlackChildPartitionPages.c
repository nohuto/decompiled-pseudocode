unsigned __int16 *__fastcall MiMirrorRemoveBlackChildPartitionPages(__int64 a1, __int64 *a2)
{
  unsigned __int16 *result; // rax
  unsigned int *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rsi

  result = MiSystemPartition;
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
  {
    v3 = *(unsigned int **)(a1 + 96);
    v4 = 0;
    v5 = *a2;
    if ( v3 )
    {
      if ( *v3 )
      {
        do
        {
          result = (unsigned __int16 *)MiMirrorOmitPagesFromCopy(
                                         v5,
                                         *(_QWORD *)&v3[4 * v4 + 4],
                                         *(_QWORD *)&v3[4 * v4 + 6]);
          ++v4;
        }
        while ( v4 < *v3 );
      }
    }
  }
  return result;
}
