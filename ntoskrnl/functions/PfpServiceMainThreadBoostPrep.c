__int64 __fastcall PfpServiceMainThreadBoostPrep(__int64 a1, PETHREAD *a2)
{
  void *v3; // rcx
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PETHREAD v7; // rdi
  __int64 Pool2; // rax
  PETHREAD Thread; // [rsp+30h] [rbp+8h] BYREF

  Thread = 0LL;
  v3 = *(void **)(a1 + 72);
  if ( v3 )
  {
    v6 = PsLookupThreadByThreadId(v3, &Thread);
    v7 = Thread;
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( *(_QWORD *)&Thread[1].Header.Lock == *(_QWORD *)(a1 + 80) )
      {
        Pool2 = ExAllocatePool2(64LL, 168LL, 1146119760LL);
        if ( Pool2 )
        {
          *a2 = v7;
          v5 = 0;
          a2[1] = (PETHREAD)Pool2;
          return v5;
        }
        v5 = -1073741670;
      }
      else
      {
        v5 = -1073741735;
      }
    }
    if ( v7 )
      ObDereferenceObjectDeferDelete(v7);
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v5;
}
