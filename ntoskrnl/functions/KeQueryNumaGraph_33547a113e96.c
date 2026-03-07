void *KeQueryNumaGraph()
{
  ULONG_PTR v0; // rdi
  void *Pool2; // rax
  void *v2; // rbx

  v0 = 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
  Pool2 = (void *)ExAllocatePool2(256LL, v0, 0x616D754Eu);
  v2 = Pool2;
  if ( Pool2 )
    memmove(Pool2, KiNodeGraph, v0);
  return v2;
}
