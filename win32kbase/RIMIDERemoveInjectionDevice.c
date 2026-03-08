/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C01A64F8
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C0175990 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C01A09F0 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01D09D8 (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021F800 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0225508 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // edx
  _UNKNOWN **v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 256) & 0x2000) == 0 || (*(_DWORD *)(a1 + 272) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1601);
  v3 = *(_QWORD *)(a1 + 408);
  RIMLockExclusive(v3 + 760);
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xC8) & 0x80u) != 0
    && !*(_BYTE *)(v3 + 80)
    && !*(_BYTE *)(v3 + 81) )
  {
    rimEndAllActiveContactsWorker((struct RawInputManagerObject *)v3);
  }
  v6 = &WPP_RECORDER_INITIALIZED;
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8) & 0x20) == 0
    && *(_BYTE *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x30) != 3 )
  {
    v7 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xBC);
    if ( (v7 & 8) != 0 || *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xC0) || (v7 & 0x10) != 0 )
    {
      v4 = (a1 + 72) & -(__int64)(a1 != 0);
      *(_DWORD *)(v4 + 200) |= 1u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          (_DWORD)v6,
          (_DWORD)gRimLog,
          4,
          1,
          54,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
          a1 != 0 ? a1 + 72 : 0);
      }
      v2 = 0;
    }
  }
  *(_QWORD *)(v3 + 768) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 760, 0LL);
  KeLeaveCriticalRegion();
  if ( v2 )
  {
    if ( (*(_QWORD *)(v3 + 832) || *(_DWORD *)(v3 + 1056))
      && *(_QWORD *)(v3 + 32) != PsGetCurrentProcess(v9, v8, v10, v11)
      || *(_BYTE *)(v3 + 82) )
    {
      *(_DWORD *)(a1 + 256) |= 0x100000u;
      v14 = SGDGetUserSessionState(v9, v8, v10, v11);
      RIMLockExclusive(v14 + 240);
      *(_DWORD *)(a1 + 272) |= 4u;
      v19 = SGDGetUserSessionState(v16, v15, v17, v18);
      *(_QWORD *)(v19 + 248) = 0LL;
      ExReleasePushLockExclusiveEx(v19 + 240, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)(a1 + 256) |= 0x800000u;
      ZwSetEvent(*(HANDLE *)(v3 + 344), 0LL);
    }
    else
    {
      rimDoRimDevChange(v3, (a1 + 72) & -(__int64)(a1 != 0), 3u);
      if ( *(_BYTE *)(v3 + 81) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (_DWORD)gRimLog,
            3,
            1,
            55,
            (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
        }
        RIMFreeSpecificDev(v3, (a1 + 72) & -(__int64)(a1 != 0));
      }
      else if ( !*(_BYTE *)(v3 + 82) )
      {
        RIMFreeDev(v3, (a1 + 72) & -(__int64)(a1 != 0));
      }
    }
  }
}
