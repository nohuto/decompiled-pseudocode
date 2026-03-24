/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C0156EC4
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C0132C50 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C01520A0 (RIMIDEProcessRemoveInjectionDevices.c)
 *     rimDoVirtRimDevChange @ 0x1C016D964 (rimDoVirtRimDevChange.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8DA0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0054178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RIMFreeSpecificDev @ 0x1C00A6554 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C015D0D0 (RIMEndAllActiveContacts.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  int v1; // ebp
  __int64 v3; // rbx
  int v4; // eax
  void *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 272) & 0x2000) == 0 || (*(_DWORD *)(a1 + 288) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1527);
  v3 = *(_QWORD *)(a1 + 424);
  RIMLockExclusive(v3 + 568);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && !*(_BYTE *)(v3 + 80) && !*(_BYTE *)(v3 + 81) )
    RIMEndAllActiveContacts(v3, *(_QWORD *)(a1 + 568), 0LL);
  v4 = *(_DWORD *)(a1 + 272);
  v5 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
  if ( (v4 & 0x20) == 0
    && *(_BYTE *)(a1 + 136) != 3
    && (v4 < 0 || *(_QWORD *)(a1 + 280) || (*(_DWORD *)(a1 + 276) & 2) != 0) )
  {
    if ( (*(_DWORD *)(a1 + 276) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1567);
      v5 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
    }
    *(_DWORD *)(a1 + 288) |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        (_DWORD)v5,
        1,
        52,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        a1 + 88);
    }
    v1 = 0;
  }
  *(_QWORD *)(v3 + 576) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
  KeLeaveCriticalRegion();
  if ( v1 )
  {
    if ( (*(_QWORD *)(v3 + 640) || *(_DWORD *)(v3 + 864)) && *(_QWORD *)(v3 + 32) != PsGetCurrentProcess(v7, v6)
      || *(_BYTE *)(v3 + 82) )
    {
      *(_DWORD *)(a1 + 272) |= 0x40000u;
      RIMLockExclusive((__int64)&gObListLock);
      *(_DWORD *)(a1 + 288) |= 4u;
      qword_1C0255428 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)(a1 + 272) |= 0x200000u;
      ZwSetEvent(*(HANDLE *)(v3 + 384), 0LL);
    }
    else
    {
      rimDoRimDevChange(v3, a1 + 88, 3u);
      if ( bRimDispositionNormal((struct RawInputManagerObject *)v3) )
      {
        RIMFreeDev(v9, a1 + 88);
      }
      else if ( *(_BYTE *)(v3 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 53, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
        RIMFreeSpecificDev(v3, a1 + 88);
      }
    }
  }
}
