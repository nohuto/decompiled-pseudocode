void BvgaSaveResources()
{
  const void **v0; // rbx
  unsigned __int64 v1; // rsi
  unsigned int *v2; // rdi
  void *Pool2; // rax
  const void *v4; // rbp

  v0 = (const void **)ResourceList;
  v1 = 4LL;
  v2 = (unsigned int *)&ResourceSize;
  do
  {
    if ( *v0 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, *v2, 0x6D427642u);
      v4 = Pool2;
      if ( !Pool2 )
        KeBugCheck(0x7Du);
      memmove(Pool2, *v0, *v2);
      *v0 = v4;
    }
    v1 += 4LL;
    ++v2;
    ++v0;
  }
  while ( v1 < 0x1C );
}
