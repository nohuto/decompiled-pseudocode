__int64 __fastcall EtwpAddKmRegEntry(int a1, int a2, int a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 Pool2; // rax
  __int64 v11; // rdi

  v5 = 0;
  Pool2 = ExAllocatePool2(64LL, 112LL, 1383560261LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    EtwpInitializeRegEntry(a1, 0, a2, a3, a4, 0, Pool2);
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
