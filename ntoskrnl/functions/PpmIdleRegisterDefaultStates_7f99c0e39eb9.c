__int64 PpmIdleRegisterDefaultStates()
{
  bool v0; // di
  __int64 v1; // rsi
  __int64 Pool2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi

  v0 = 0;
  v1 = 1LL;
  if ( !PpmHvUseNativeAlgorithms() && (HvlEnlightenments & 0x10000000) == 0 )
    v0 = (HvlEnlightenments & 0x200) != 0;
  Pool2 = ExAllocatePool2(64LL, 32 * ((unsigned int)v0 + 1) + 120, 1766674512LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 19) = 1;
    *(_DWORD *)(Pool2 + 116) = v0 + 1;
    *(_DWORD *)(Pool2 + 120) = *(_DWORD *)(Pool2 + 120) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 136), L"HLT");
    *(_BYTE *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 80) = PpmIdleDefaultExecute;
    *(_QWORD *)(v3 + 88) = xHalTimerWatchdogStop;
    *(_QWORD *)(v3 + 96) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v3 + 104) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v0 )
    {
      *(_QWORD *)(v3 + 40) = PpmIdleGuestPreselect;
      *(_QWORD *)(v3 + 48) = PpmIdleGuestTest;
      *(_QWORD *)(v3 + 64) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v3 + 80) = PpmIdleGuestExecute;
      *(_QWORD *)(v3 + 88) = PpmIdleGuestComplete;
      *(_DWORD *)(v3 + 152) = *(_DWORD *)(v3 + 152) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v3 + 168), L"Enlightened Idle");
      v1 = 2LL;
    }
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    v4 = PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmIdleInstallDefaultStates, v3, v1);
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    ExFreePoolWithTag((PVOID)v3, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
