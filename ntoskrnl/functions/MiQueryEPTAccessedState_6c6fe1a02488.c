__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1);
  VmpQueryAccessedState(
    (PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5],
    (_QWORD *)(a2 + 8),
    *(_DWORD *)a2,
    a3);
  result = MiReacquireWalkLocks(a1, v3, 0);
  if ( !(_DWORD)result )
    *(_DWORD *)a2 = 0;
  return result;
}
