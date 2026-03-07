__int64 __fastcall PciConfigInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 Pool2; // rax
  __int64 v9; // r9
  char v11; // al

  Pool2 = ExAllocatePool2(64LL, 96LL, 1181770561LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  *(_DWORD *)(Pool2 + 20) = 15;
  *(_QWORD *)(Pool2 + 24) = a7;
  *(_QWORD *)(Pool2 + 40) = a5;
  *(_QWORD *)(Pool2 + 48) = a6;
  v11 = gdwfAMLI;
  *(_DWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 56) = a2;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (v11 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  *(_DWORD *)(v9 + 80) = -1;
  *(_DWORD *)(v9 + 72) = 1;
  return PciConfigSpaceHandlerWorker(a2, 0LL, 0LL);
}
