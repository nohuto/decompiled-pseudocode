__int64 __fastcall RtlpAllocDeallocQueryBuffer(_QWORD *a1, void *a2, __int64 a3, int *a4)
{
  __int64 Pool2; // rsi
  int v5; // ebx

  Pool2 = 0LL;
  v5 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
  if ( a1 )
  {
    Pool2 = ExAllocatePool2(256LL, *a1, 1987211602LL);
    if ( !Pool2 )
      v5 = -1073741801;
  }
  if ( a4 )
    *a4 = v5;
  return Pool2;
}
