__int64 __fastcall MiCleanWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // di
  __int64 v9; // rbx

  v4 = a1 + 1664;
  SharedVm = MiGetSharedVm(a1 + 1664, a2, a3, a4);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v8 = v7;
  *(_BYTE *)(v4 + 187) |= 1u;
  --*(_QWORD *)(a1 + 1272);
  MiDrainSystemAccessLog(v4);
  v9 = *(_QWORD *)(v4 + 112);
  MiUnlockWorkingSetExclusive(v4, v8);
  return v9 - 4;
}
