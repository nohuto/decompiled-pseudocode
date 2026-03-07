void IopInitializeRemovePagesArray()
{
  __int64 Pool2; // rax

  if ( !IopRemovePagesArray )
  {
    Pool2 = ExAllocatePool2(64LL, 16008LL, 1682992969LL);
    IopRemovePagesArray = Pool2;
    if ( Pool2 )
      *(_DWORD *)(Pool2 + 4) = 1000;
  }
}
