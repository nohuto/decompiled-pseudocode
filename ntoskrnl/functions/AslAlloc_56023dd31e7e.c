void *__fastcall AslAlloc(__int64 a1, size_t a2)
{
  void *Pool2; // rax
  void *v4; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, a2, 1953517633LL);
  v4 = Pool2;
  if ( Pool2 )
    memset(Pool2, 0, a2);
  return v4;
}
