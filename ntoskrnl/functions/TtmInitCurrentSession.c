__int64 TtmInitCurrentSession()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  unsigned int v3; // edi
  __int64 v4; // rdx
  _DWORD *Pool2; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  int v9; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  TtmiLogInitCurrentSessionStart();
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  if ( TtmpSession )
  {
    v3 = -1073741637;
    v4 = 1208LL;
LABEL_3:
    TtmiLogError("TtmInitCurrentSession", v4, 0xFFFFFFFFLL, v3);
    goto LABEL_13;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 288LL, 1399682132LL);
  v7 = (__int64)Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    v4 = 1217LL;
    goto LABEL_3;
  }
  Pool2[2] = 1;
  LOBYTE(v6) = 1;
  *Pool2 = v2;
  v8 = Pool2 + 10;
  v8[1] = v8;
  *v8 = v8;
  *(_QWORD *)(v7 + 88) = v7 + 80;
  *(_QWORD *)(v7 + 80) = v7 + 80;
  *(_QWORD *)(v7 + 64) = v7 + 72;
  *(_DWORD *)(v7 + 56) = 32;
  *(_DWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 116) = 0;
  *(_QWORD *)(v7 + 104) = v7 + 96;
  *(_QWORD *)(v7 + 96) = v7 + 96;
  *(_QWORD *)(v7 + 136) = v7 + 128;
  *(_QWORD *)(v7 + 128) = v7 + 128;
  *(_QWORD *)(v7 + 152) = v7 + 144;
  *(_QWORD *)(v7 + 144) = v7 + 144;
  *(_QWORD *)(v7 + 168) = v7 + 160;
  *(_QWORD *)(v7 + 160) = v7 + 160;
  *(_QWORD *)(v7 + 184) = v7 + 176;
  *(_QWORD *)(v7 + 176) = v7 + 176;
  *(_DWORD *)(v7 + 4) |= 0x800u;
  *(_DWORD *)(v7 + 120) = 1;
  TtmiLogSessionDeviceAssignmentPolicySet(v6);
  *(_DWORD *)(v7 + 224) = 0;
  *(_QWORD *)(v7 + 192) = 0LL;
  *(_QWORD *)(v7 + 208) = TtmpSessionWorker;
  *(_QWORD *)(v7 + 216) = v7;
  *(_DWORD *)(v7 + 4) |= 8u;
  *(_DWORD *)(v7 + 76) = 1;
  v9 = TtmiCreateTerminal(v7, 2031619LL, 0LL, v7 + 24, &v11, v7 + 32);
  v3 = v9;
  if ( v9 >= 0 )
  {
    TtmiUpdateActiveTerminalCount(v7, 0LL, 0LL);
    *(_BYTE *)(v7 + 240) = 1;
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_VIDEO_DIM_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v7,
           (PVOID *)(v7 + 248)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_CONSOLE_VIDEO_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v7,
           (PVOID *)(v7 + 256)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *(_DWORD *)(v7 + 272) = 0;
    *(_QWORD *)(v7 + 280) = 0LL;
    *(_DWORD *)(v7 + 276) = 0;
    v3 = 0;
    TtmpSession = v7;
  }
  else
  {
    TtmiLogError("TtmInitCurrentSession", 1290LL, (unsigned int)v9, (unsigned int)v9);
    ExFreePoolWithTag((PVOID)v7, 0x536D7454u);
  }
LABEL_13:
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmiLogInitCurrentSessionStop(v3);
  return v3;
}
