__int64 __fastcall KiInitializeThreadCycleTable(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r8d
  __int64 Pool3; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  KeGetThreadWorkloadClassCount();
  LOBYTE(v6) = 3;
  DWORD2(v6) = (unsigned __int16)KeGetProcessorNodeNumber(v2);
  Pool3 = ExAllocatePool3(64, v3, 1666475339, (unsigned int)&v6, 1);
  if ( !Pool3 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 33200) = Pool3;
  return 0LL;
}
