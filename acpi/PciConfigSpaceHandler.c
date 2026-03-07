__int64 __fastcall PciConfigSpaceHandler(
        int a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 Pool2; // rax
  __int64 v14; // rdx

  Pool2 = ExAllocatePool2(64LL, 96LL, 1181770561LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a1;
  *(_QWORD *)(Pool2 + 8) = a2;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(a2 + 2);
  *(_QWORD *)(Pool2 + 24) = a5;
  *(_DWORD *)(Pool2 + 32) = a6;
  *(_QWORD *)(Pool2 + 40) = a7;
  *(_QWORD *)(Pool2 + 48) = a8;
  *(_DWORD *)(Pool2 + 16) = a3;
  *(_DWORD *)(Pool2 + 20) = a4;
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
  *(_QWORD *)(Pool2 + 56) = v14;
  if ( v14 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  }
  *(_DWORD *)(Pool2 + 80) = -1;
  return PciConfigSpaceHandlerWorker(*(_QWORD *)(Pool2 + 56), 0LL, 0LL);
}
