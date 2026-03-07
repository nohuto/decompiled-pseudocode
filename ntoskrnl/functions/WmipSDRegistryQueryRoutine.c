__int64 __fastcall WmipSDRegistryQueryRoutine(__int64 a1, int a2, void *a3, ULONG a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  void *Pool2; // rax

  v6 = 0;
  if ( a2 == 3 && a3 && SeValidSecurityDescriptor(a4, a3) )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, a4, 1885957463LL);
    *a6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, a3, a4);
    else
      return (unsigned int)-1073741670;
  }
  return v6;
}
