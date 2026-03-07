void *__fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  struct DXGPROCESS *Current; // rsi
  char *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rdi
  __int64 v10; // rcx

  Current = DXGPROCESS::GetCurrent();
  v4 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v5 = (a2 >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)Current + 74) )
    goto LABEL_9;
  v6 = *((_QWORD *)Current + 35) + 16LL * v5;
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v6 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v6 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v7 = *(_DWORD *)(v6 + 8) & 0x1F;
  if ( !v7 )
    goto LABEL_9;
  if ( v7 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
LABEL_9:
    _InterlockedDecrement((volatile signed __int32 *)Current + 66);
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v8 = *(_QWORD *)v6;
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    return *(void **)(v8 + 24);
  return 0LL;
}
