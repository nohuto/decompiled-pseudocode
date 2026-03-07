__int64 __fastcall Crashdump_EventRing_InitializeForDump(__int64 *a1, __int64 a2)
{
  int v3; // ebx
  __int64 Pool2; // rax

  *a1 = a2;
  a1[1] = a2;
  a1[2] = *(_QWORD *)(*(_QWORD *)a2 + 40LL) + 32LL;
  v3 = Crashdump_CommonBufferAcquire(a2, 1008, (__int64)(a1 + 6));
  if ( v3 >= 0 )
  {
    v3 = Crashdump_CommonBufferAcquire(*a1, 16, (__int64)(a1 + 3));
    if ( v3 >= 0 )
    {
      Pool2 = ExAllocatePool2(64LL, 88LL, 1128482904LL);
      a1[13] = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v3;
}
