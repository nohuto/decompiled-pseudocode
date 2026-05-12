/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C00027A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C0002874 (RaidFreeDeferredItem.c)
 *     RaidSetUnitPauseTimer @ 0x1C000289C (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E8 (RaidAdapterResumeUnit.c)
 *     RaidAdapterFindUnit @ 0x1C0006674 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C0013F74 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0014204 (RaidResumeAdapterQueue.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002B760 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C002C3EC (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002C4C0 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C002D358 (RaidAdapterLogIoError.c)
 *     RaidAdapterRequestTimer @ 0x1C002E224 (RaidAdapterRequestTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F98C (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C00335BC (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004B058 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayBusy @ 0x1C004E4FC (StorSetIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C004E610 (StorSetIoGatewayNotBusy.c)
 */

char __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  PDEVICE_OBJECT *v3; // rax
  __int64 v4; // rdi
  LARGE_INTEGER *v6; // rsi
  int LowPart; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned int HighPart; // ebx
  unsigned int v14; // ebp
  __int64 Unit; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = (PDEVICE_OBJECT *)&retaddr;
  v4 = *(_QWORD *)(a1 + 64);
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4264));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v17 = LowPart - 8;
    if ( !v17 )
    {
      StorSetIoGatewayNotBusy(v4 + 832);
      goto LABEL_38;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            LOBYTE(v3) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
                           v4,
                           (unsigned int)a2[4].HighPart,
                           (LARGE_INTEGER)a2[5].QuadPart);
        }
        else
        {
          LOBYTE(v3) = KeSetCoalescableTimer(
                         (PKTIMER)(a2[5].QuadPart + 8),
                         a2[6],
                         0,
                         a2[7].LowPart,
                         (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        LOBYTE(v3) = RaidAdapterDeviceReady(v4, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      LOBYTE(v3) = RaidAdapterDeviceBusy(v4, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else
  {
    if ( LowPart == 7 )
    {
      LOBYTE(v3) = StorSetIoGatewayBusy((PKSPIN_LOCK)(v4 + 832));
      goto LABEL_10;
    }
    v8 = LowPart - 1;
    if ( !v8 )
    {
      LOBYTE(v3) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
                     v4,
                     (LARGE_INTEGER)a2[5].QuadPart,
                     a2[6].LowPart);
      goto LABEL_10;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      LOBYTE(v3) = RaidAdapterLogIoError(v4, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_10;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            LOBYTE(v3) = RaidAdapterResumeUnit(v4, (unsigned int)a2[4].HighPart);
        }
        else
        {
          HighPart = a2[4].HighPart;
          v14 = a2[5].LowPart;
          Unit = RaidAdapterFindUnit(v4, HighPart);
          if ( Unit )
          {
            LOBYTE(v3) = RaidSetUnitPauseTimer(Unit, 1000 * v14);
          }
          else
          {
            v3 = &WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            {
              LODWORD(v3) = HIDWORD(WPP_GLOBAL_Control->Timer);
              if ( ((unsigned __int8)v3 & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
                LOBYTE(v3) = WPP_SF_ddd(
                               WPP_GLOBAL_Control->AttachedDevice,
                               52LL,
                               &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids,
                               (unsigned __int8)HighPart,
                               BYTE1(HighPart),
                               BYTE2(HighPart));
            }
          }
        }
      }
      else
      {
        LOBYTE(v3) = RaidFreeDeferredItem(v4 + 1152);
        v6 = 0LL;
        if ( !*(_DWORD *)(v4 + 1524) )
          LOBYTE(v3) = RaidAdapterCancelPauseTimer(v4, v4 + 1920);
      }
      goto LABEL_10;
    }
    RaidFreeDeferredItem(v4 + 1152);
    v6 = 0LL;
    if ( *(_DWORD *)(v4 + 1524) == 1 )
    {
      LOBYTE(v3) = RaidAdapterSetPauseTimer(v4, v4 + 1920, v4 + 1792, *(unsigned int *)(v4 + 1520));
      goto LABEL_10;
    }
    LODWORD(v3) = RaidResumeAdapterQueue(v4, 0LL);
    if ( !(_DWORD)v3 )
    {
LABEL_38:
      LOBYTE(v16) = a3;
      LOBYTE(v3) = RaidAdapterRestartQueues(v4, v16);
    }
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 4264));
  if ( v6 )
    LOBYTE(v3) = RaidFreeDeferredItem(v4 + 1152);
  return (char)v3;
}
