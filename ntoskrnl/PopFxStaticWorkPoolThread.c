NTSTATUS __fastcall PopFxStaticWorkPoolThread(char *a1)
{
  __int64 v2; // rdx

  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 16);
  v2 = 0LL;
  do
  {
    if ( !_InterlockedCompareExchange64(
            (volatile signed __int64 *)&a1[8 * v2 + 264],
            (signed __int64)KeGetCurrentThread(),
            0LL) )
      break;
    v2 = (unsigned int)(v2 + 1);
  }
  while ( !(_DWORD)v2 );
  return PopFxProcessWorkPool(a1, v2);
}
