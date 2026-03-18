/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C01846E4
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C0160100 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C017F168 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01AAF0C (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE9D0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F40F8 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RIMFreeSpecificDev @ 0x1C00A0F40 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // edx
  _UNKNOWN **v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8

  v4 = 1;
  if ( (*(_DWORD *)(a1 + 272) & 0x2000) == 0 || (*(_DWORD *)(a1 + 288) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(_QWORD *)(a1 + 424);
  RIMLockExclusive(v5 + 792);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && !*(_BYTE *)(v5 + 80) && !*(_BYTE *)(v5 + 81) )
    RIMEndAllActiveContacts(v5, *(_QWORD *)(a1 + 560), 0LL);
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( (*(_DWORD *)(a1 + 272) & 0x20) == 0 && *(_BYTE *)(a1 + 136) != 3 )
  {
    v8 = *(_DWORD *)(a1 + 276);
    if ( (v8 & 4) != 0 || *(_QWORD *)(a1 + 280) || (v8 & 8) != 0 )
    {
      *(_DWORD *)(a1 + 288) |= 1u;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          (_DWORD)v7,
          (_DWORD)gRimLog,
          4,
          1,
          54,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
          a1 + 88);
      }
      v4 = 0;
    }
  }
  *(_QWORD *)(v5 + 800) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 792, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    if ( (*(_QWORD *)(v5 + 864) || *(_DWORD *)(v5 + 1088))
      && *(_QWORD *)(v5 + 32) != PsGetCurrentProcess(v10, v9, v11, v12)
      || *(_BYTE *)(v5 + 82) )
    {
      *(_DWORD *)(a1 + 272) |= 0x100000u;
      RIMLockExclusive((__int64)&gObListLock);
      *(_DWORD *)(a1 + 288) |= 4u;
      qword_1C029A118 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)(a1 + 272) |= 0x800000u;
      ZwSetEvent(*(HANDLE *)(v5 + 344), 0LL);
    }
    else
    {
      rimDoRimDevChange(v5, a1 + 88, 3LL);
      if ( bRimDispositionNormal((struct RawInputManagerObject *)v5) )
      {
        RIMFreeDev(v14, a1 + 88);
      }
      else if ( *(_BYTE *)(v5 + 81) )
      {
        LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v15,
            (_DWORD)gRimLog,
            3,
            1,
            55,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
        RIMFreeSpecificDev(v5, a1 + 88, v15);
      }
    }
  }
}
