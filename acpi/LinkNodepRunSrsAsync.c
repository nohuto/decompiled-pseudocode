__int64 __fastcall LinkNodepRunSrsAsync(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 96LL, 1097884481LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_DWORD *)(Pool2 + 36) = -1;
  *(_QWORD *)Pool2 = a1;
  *(_DWORD *)(Pool2 + 8) = a2;
  *(_QWORD *)(Pool2 + 80) = a3;
  *(_QWORD *)(Pool2 + 88) = a4;
  return LinkNodepRunSrsWorker(a1, 0LL, 0LL, Pool2);
}
