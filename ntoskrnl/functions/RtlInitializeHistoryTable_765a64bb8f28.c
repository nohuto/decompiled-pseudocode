__int64 RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__fastcall __noreturn *v1)(int); // rax
  unsigned int *v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__fastcall __noreturn *)(int))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_140E01955 = i;
    v2 = RtlLookupFunctionEntry((unsigned __int64)v1, &v7, 0LL);
    v3 = 2LL * i;
    v4 = v7 + *v2;
    v5 = v7 + v2[1];
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = v7;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_140E01958 )
      qword_140E01958 = v4;
    if ( v5 > qword_140E01960 )
      qword_140E01960 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  return RtlpInitMachineFrameEntries(RtlpSafeMachineFrameEntries, 4LL);
}
