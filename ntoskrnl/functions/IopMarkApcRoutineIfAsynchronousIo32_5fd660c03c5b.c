unsigned __int64 __fastcall IopMarkApcRoutineIfAsynchronousIo32(unsigned int **a1, __int64 *a2, char a3)
{
  unsigned __int64 result; // rax
  unsigned int *v5; // rcx
  _KPROCESS *v6; // r10
  unsigned int *v7; // rcx
  __int64 v8; // r9

  result = (unsigned __int64)KeGetCurrentThread();
  v5 = *a1;
  v6 = *(_KPROCESS **)(result + 184);
  if ( v6[1].Affinity.StaticBitmap[30] )
  {
    result = WORD2(v6[2].Affinity.StaticBitmap[20]);
    if ( ((_WORD)result == 332 || (_WORD)result == 452) && !a3 )
    {
      v7 = (unsigned int *)*v5;
      v8 = *a2 | 1;
      result = *v7;
      *v7 = result;
      *a1 = v7;
      *a2 = v8;
    }
  }
  return result;
}
