void __fastcall MiSetTrimWhileAgingState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int8 v6; // bl
  __int64 SharedVm; // rdi
  KIRQL v8; // r9
  int v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v4 = *(_QWORD *)(a1 + 16920);
  v5 = a1 + 17344;
  v6 = a2;
  SharedVm = MiGetSharedVm(a1 + 17344, a2, a3, a4);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  switch ( v6 )
  {
    case 0u:
      *(_QWORD *)(v4 + 72) = 0LL;
      goto LABEL_7;
    case 1u:
      *(_QWORD *)(v4 + 64) = -1LL;
      *(_QWORD *)(v4 + 72) = 204800LL;
      break;
    case 2u:
      *(_QWORD *)(v4 + 72) = 204800LL;
      *(_QWORD *)(v4 + 64) = 51200LL;
      break;
    case 3u:
      *(_QWORD *)(v4 + 72) = 204800LL;
      *(_QWORD *)(v4 + 64) = 12800LL;
      break;
    case 4u:
      *(_QWORD *)(v4 + 72) = 384000LL;
LABEL_7:
      *(_QWORD *)(v4 + 64) = 0LL;
      break;
  }
  *(_WORD *)(v4 + 2350) = *(_WORD *)((char *)&v9 + 1);
  *(_DWORD *)(v4 + 80) = v6;
  MiUnlockWorkingSetExclusive(v5, v8);
}
