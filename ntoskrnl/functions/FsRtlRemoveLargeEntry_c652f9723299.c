void *__fastcall FsRtlRemoveLargeEntry(__int64 a1, unsigned int a2, int a3)
{
  void *result; // rax
  __int64 v6; // rcx

  result = (void *)*(unsigned int *)(a1 + 4);
  v6 = a2 + a3;
  if ( (unsigned int)v6 < (unsigned int)result )
    result = memmove(
               (void *)(*(_QWORD *)(a1 + 16) + 8LL * a2),
               (const void *)(*(_QWORD *)(a1 + 16) + 8 * v6),
               8LL * ((unsigned int)result - a2 - a3));
  *(_DWORD *)(a1 + 4) -= a3;
  return result;
}
