/*
 * XREFs of ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FEFCC
 * Callers:
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C003D0AC (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0066B40 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C01066D0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012CB74 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C013A2C4 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00FA750 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FF228 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FF438 (-ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NO.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C012302C (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct _NET_PNP_EVENT_NOTIFICATION *a3)
{
  unsigned int v3; // ebx
  void *SpinLock; // r15
  bool v8; // cf
  int (__fastcall *PnPEventHandler)(void *, _NET_PNP_EVENT *); // r13
  struct NDISWATCHDOG__ *Watchdog; // r14
  struct _NDIS_PROTOCOL_BLOCK *v11; // rdx
  int v12; // eax
  int (__fastcall *v14)(void *, _NET_PNP_EVENT *); // rax
  unsigned __int64 NetEvent; // [rsp+90h] [rbp+8h] BYREF
  void (__fastcall *v16)(struct NDISWATCHDOG__ *); // [rsp+98h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
    SpinLock = (void *)a2->Ref.SpinLock;
  else
    SpinLock = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xEu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a1,
      (char)a2,
      a3->NetPnPEvent.NetEvent);
  v8 = a1->MajorNdisVersion < 6u;
  NetEvent = a3->NetPnPEvent.NetEvent;
  if ( v8 )
    PnPEventHandler = 0LL;
  else
    PnPEventHandler = a1->PnPEventHandler;
  Watchdog = ndisAllocateWatchdog();
  v11 = a2;
  if ( !a2 )
    v11 = a1;
  ndisArmWatchdog(Watchdog, v11, 2, PnPEventHandler, 0x41EB0u, NetEvent);
  if ( a1->MajorNdisVersion >= 6u )
  {
    v12 = ndisInvokeNetPnPEvent(a1, (struct _NDIS_OPEN_BLOCK *)a2, a3);
LABEL_11:
    v3 = v12;
    goto LABEL_12;
  }
  v14 = a1->PnPEventHandler;
  if ( v14 )
  {
    v12 = v14(SpinLock, &a3->NetPnPEvent);
    goto LABEL_11;
  }
LABEL_12:
  if ( v3 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog(Watchdog, (struct _KEVENT *)a3->NetPnPEvent.NdisReserved[0]);
    v3 = a3->NetPnPEvent.NdisReserved[1];
  }
  if ( Watchdog != (struct NDISWATCHDOG__ *)-1LL )
  {
    NetEvent = (unsigned __int64)Watchdog;
    v16 = ndisFreeWatchdog;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v16, &NetEvent);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xFu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a1,
      (char)a2,
      a3->NetPnPEvent.NetEvent,
      v3);
  return v3;
}
