_BYTE *ExpAllocateOwnerEntryForLegacyShim()
{
  _BYTE *Pool2; // rax
  _BYTE *v1; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *result; // rax

  do
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 72LL, 1162826310LL);
    v1 = Pool2;
  }
  while ( !Pool2 );
  memset(Pool2, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  result = v1;
  v1[17] |= 2u;
  *((_QWORD *)v1 + 4) = CurrentThread;
  return result;
}
