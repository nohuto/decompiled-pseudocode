__int64 NtUserMNDragLeave()
{
  __int64 v0; // rsi
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v0 = 0LL;
  v1 = gptiCurrent;
  v2 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 + 92);
    v4 = *(unsigned int *)(v2 + 88);
    v5 = *(_QWORD *)(v2 + 80);
    ++*(_DWORD *)(v2 + 40);
    xxxMNSetGapState(v5, v4, v3, 0LL);
    UnlockMFMWFPWindow(v2 + 80);
    *(_DWORD *)(v2 + 88) = -1;
    *(_DWORD *)(v2 + 8) &= ~0x8000u;
    *(_DWORD *)(v2 + 92) = 0;
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v2, 1);
    v0 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
