/*
 * XREFs of PnpWatchdogEtwWrite @ 0x14055E670
 * Callers:
 *     PnpWatchdogSecondChanceCallback @ 0x14055EAB0 (PnpWatchdogSecondChanceCallback.c)
 *     PnpDisableWatchdog @ 0x140688BC4 (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14068A900 (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x14072A87C (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x14078CA58 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14087CDB0 (PnpDelayedRemoveWorker.c)
 *     PnpWatchdogFirstChanceCallback @ 0x140954B70 (PnpWatchdogFirstChanceCallback.c)
 * Callees:
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x14055E140 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     PnpWatchdogExtractTriageInformation @ 0x14055E99C (PnpWatchdogExtractTriageInformation.c)
 *     PnpTraceWatchdogViolation @ 0x140562624 (PnpTraceWatchdogViolation.c)
 */

char __fastcall PnpWatchdogEtwWrite(__int64 a1, int a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rdx
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+90h] [rbp+40h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  v11[0] = 0x20000LL;
  v13 = 0LL;
  v11[1] = &cchOriginalDestLength;
  v12 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1;
  v14 = 0LL;
  v5 = v3 / 0x2710;
  LOBYTE(CurrentThread) = PnpWatchdogExtractTriageInformation(
                            a1,
                            (unsigned int)&v13,
                            (unsigned int)&v14,
                            (unsigned int)&v12,
                            0LL,
                            0LL);
  if ( v13 )
    v8 = (_QWORD *)(v13 + 40);
  else
    v8 = v11;
  if ( v14 )
  {
    v9 = *(_QWORD *)(v14 + 1232);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( *(_DWORD *)(a1 + 16) )
      {
        case 1:
          LOBYTE(CurrentThread) = byte_140C0E10B;
          if ( byte_140C0E10B < 0 )
            LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                      *(_QWORD *)(v12 + 8),
                                      (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_EventWorker_Stop,
                                      v7,
                                      v9,
                                      v8[1],
                                      *(_QWORD *)(v12 + 8),
                                      (unsigned int)v5);
          break;
        case 2:
          LOBYTE(CurrentThread) = byte_140C0E10B;
          if ( byte_140C0E10B < 0 )
            LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                      *(_QWORD *)(v12 + 8),
                                      (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_CompletionQueue_Stop,
                                      v7,
                                      v9,
                                      v8[1],
                                      *(_QWORD *)(v12 + 8),
                                      (unsigned int)v5);
          break;
        case 3:
          LOBYTE(CurrentThread) = byte_140C0E10B;
          if ( byte_140C0E10B < 0 )
            LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                      *(_QWORD *)(v12 + 8),
                                      (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_DelayedRemoveWorker_Stop,
                                      v7,
                                      v9,
                                      v8[1],
                                      *(_QWORD *)(v12 + 8),
                                      (unsigned int)v5);
          break;
        case 4:
          LOBYTE(CurrentThread) = byte_140C0E10B;
          if ( byte_140C0E10B < 0 )
            LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                      *(_QWORD *)(v12 + 8),
                                      (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_AddDevice_Stop,
                                      v7,
                                      v9,
                                      v8[1],
                                      *(_QWORD *)(v12 + 8),
                                      (unsigned int)v5);
          break;
        case 5:
          LOBYTE(CurrentThread) = byte_140C0E10B;
          if ( byte_140C0E10B < 0 )
            LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                      *(_QWORD *)(v12 + 8),
                                      (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_DriverEntry_Stop,
                                      v7,
                                      v9,
                                      v8[1],
                                      *(_QWORD *)(v12 + 8),
                                      (unsigned int)v5);
          break;
        default:
          goto LABEL_29;
      }
    }
    else
    {
      LOBYTE(CurrentThread) = a2 - 2;
      if ( (unsigned int)(a2 - 2) <= 1 )
      {
        LOBYTE(v9) = a2 == 2;
        LOBYTE(CurrentThread) = PnpTraceWatchdogViolation(*(_DWORD *)(a1 + 16), v9, v5, (_DWORD)v8, v12);
        *(_BYTE *)(a1 + 33) = 1;
      }
    }
  }
  else
  {
    switch ( *(_DWORD *)(a1 + 16) )
    {
      case 1:
        if ( (byte_140C0E10B & 0x40) != 0 )
          LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                    *(_QWORD *)(v12 + 8),
                                    (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_EventWorker_Start,
                                    v7,
                                    v9,
                                    v8[1],
                                    *(_QWORD *)(v12 + 8),
                                    (unsigned int)v5);
        break;
      case 2:
        if ( (byte_140C0E10B & 0x40) != 0 )
          LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                    *(_QWORD *)(v12 + 8),
                                    (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_CompletionQueue_Start,
                                    v7,
                                    v9,
                                    v8[1],
                                    *(_QWORD *)(v12 + 8),
                                    (unsigned int)v5);
        break;
      case 3:
        if ( (byte_140C0E10B & 0x40) != 0 )
          LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                    *(_QWORD *)(v12 + 8),
                                    (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_DelayedRemoveWorker_Start,
                                    v7,
                                    v9,
                                    v8[1],
                                    *(_QWORD *)(v12 + 8),
                                    (unsigned int)v5);
        break;
      case 4:
        if ( (byte_140C0E10B & 0x40) != 0 )
          LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                    *(_QWORD *)(v12 + 8),
                                    (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_AddDevice_Start,
                                    v7,
                                    v9,
                                    v8[1],
                                    *(_QWORD *)(v12 + 8),
                                    (unsigned int)v5);
        break;
      case 5:
        if ( (byte_140C0E10B & 0x40) != 0 )
          LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                    *(_QWORD *)(v12 + 8),
                                    (const EVENT_DESCRIPTOR *)KMPnPEvt_Watchdog_DriverEntry_Start,
                                    v7,
                                    v9,
                                    v8[1],
                                    *(_QWORD *)(v12 + 8),
                                    (unsigned int)v5);
        return (char)CurrentThread;
      default:
LABEL_29:
        __fastfail(5u);
    }
  }
  return (char)CurrentThread;
}
