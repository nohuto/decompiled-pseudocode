LONG PopHandleWakeSources()
{
  __int64 v0; // rdi
  char v1; // dl
  int v2; // ebp
  _QWORD *v3; // rsi
  int v4; // ecx
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v0 = PopCurrentWakeInfo;
  PopWakeSourceWorkState = 3;
  if ( !PopCurrentWakeInfo )
    goto LABEL_33;
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
  v1 = 0;
  v10 = 0;
  if ( (PopSimulate & 0x200000) != 0 || (PopFixedWakeSourceMask & 1) != 0 )
  {
    v2 = 1;
    goto LABEL_9;
  }
  if ( (PopSimulate & 0x400000) != 0 || (PopFixedWakeSourceMask & 2) != 0 )
  {
    v2 = 2;
    goto LABEL_9;
  }
  if ( (unsigned __int8)PopValidateRTCWake(&v10) && (PopSimulate & 0x100000) == 0 )
  {
    v1 = v10;
    v2 = 4;
LABEL_9:
    if ( dword_140C3CDC0 < 0 || (unsigned __int64)dword_140C3CDC0 >= 3 )
      v3 = 0LL;
    else
      v3 = (_QWORD *)qword_140C3CDD8[3 * dword_140C3CDC0];
    if ( v2 == 4 )
    {
      if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFCuLL )
        v4 = 4;
      else
        v4 = (v1 != 0) + 2;
    }
    else
    {
      v4 = 1;
    }
    v5 = PopNewWakeSource(v4);
    PopUnlinkWakeSources(v0);
    if ( v5 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 16) - 2) <= 1 )
      {
        ExCopyWakeTimerInfo(v3, (_QWORD *)(v5 + 24));
      }
      else if ( v3 == (_QWORD *)-1LL )
      {
        *(_DWORD *)(v5 + 24) = 0;
      }
      else if ( v3 == (_QWORD *)-2LL )
      {
        *(_DWORD *)(v5 + 24) = 1;
      }
      else
      {
        if ( v3 == (_QWORD *)-3LL )
          v2 = 2;
        *(_DWORD *)(v5 + 24) = v2;
      }
      v6 = *(__int64 **)(v0 + 32);
      if ( *v6 != v0 + 24 )
LABEL_31:
        __fastfail(3u);
      *(_QWORD *)v5 = v0 + 24;
      *(_QWORD *)(v5 + 8) = v6;
      *v6 = v5;
      *(_QWORD *)(v0 + 32) = v5;
      *(_DWORD *)(v0 + 40) = 1;
    }
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v7 = PopWakeInfoList;
  if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
    goto LABEL_31;
  ++PopWakeInfoCount;
  *(_QWORD *)v0 = PopWakeInfoList;
  *(_QWORD *)(v0 + 8) = &PopWakeInfoList;
  *(_QWORD *)(v7 + 8) = v0;
  PopWakeInfoList = v0;
  *(_BYTE *)(v0 + 80) = PopCheckAttendedWake(v0);
  *(_BYTE *)(v0 + 81) = PopCheckBatteryWake(v0);
LABEL_33:
  PopWakeSourceWorkState = 4;
  PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
  return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
}
