int __fastcall SortAndRemoveDupesExcludingLastElement<CDomLockDisposition,3>(char *a1)
{
  unsigned int i; // ebx
  int result; // eax

  qsort(a1, 2uLL, 0x10uLL, vDLOrderDispositionCompare);
  for ( i = 1; i < 2; ++i )
  {
    result = vDLOrderDispositionCompare(&a1[16 * i], &a1[16 * (i - 1)]);
    if ( !result )
      result = ClearCObjLock<tagObjLock *>(&a1[16 * (i - 1)]);
  }
  return result;
}
