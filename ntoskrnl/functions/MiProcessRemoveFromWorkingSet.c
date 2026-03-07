__int64 __fastcall MiProcessRemoveFromWorkingSet(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  char v5; // bl
  __int64 v7; // rax
  __int64 result; // rax

  v3 = 0;
  v5 = 4 * (a3 & 1);
  if ( !a1 )
    return 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    result = MiEmptyWorkingSetInitiate(
               (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
               v5,
               *(_QWORD *)(a2 + 16 * v7) & 0xFFFFFFFFFFFFF000uLL,
               ((*(_QWORD *)(a2 + 16 * v7) + *(_QWORD *)(a2 + 16 * v7 + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - 1);
    if ( (int)result < 0 )
      break;
    v7 = ++v3;
    if ( v3 >= a1 )
      return 0LL;
  }
  return result;
}
