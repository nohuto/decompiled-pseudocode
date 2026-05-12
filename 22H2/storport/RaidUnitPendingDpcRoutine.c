/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C0011130
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x1C00111E0 (StorTickEventQueue.c)
 *     RaidUnitDisablePendingTimer @ 0x1C00112F4 (RaidUnitDisablePendingTimer.c)
 *     RaidAdapterResetBus @ 0x1C002E2C0 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C00335F8 (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C003E760 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003E8B0 (RaUnitRequestPowerUp.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C00465A4 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C0046738 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C004A1BC (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C004B1A8 (RaidUnitRequestTimeout.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0055748 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  char v6; // bp
  char v7; // r14
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-38h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 504);
  if ( !v5 )
    return;
  if ( *(int *)(v4 + 1776) <= 0 )
  {
    if ( (int)StorTickEventQueue(v4, v5, SystemArgument1, SystemArgument2) < 0 )
    {
      if ( (qword_1C0069310 & 0x400) != 0 )
        DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, 0LL, 0LL, 0LL, 0LL);
      RaidUnitRequestTimeout(v4);
    }
    else
    {
      if ( (*(char *)(v4 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 5088LL)) && (*(_DWORD *)(v4 + 456) & 4) == 0 )
        RaidUnitDisablePendingTimer(v4);
      if ( _InterlockedExchange((volatile __int32 *)(v4 + 1760), 0) )
      {
        RaUnitRequestPowerUp(v4);
      }
      else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1764), 0) )
      {
        RaUnitRequestPowerDown(v4);
      }
    }
    return;
  }
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  v8 = *(_DWORD *)(v5 + 4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1792), &LockHandle);
  v9 = *(_DWORD *)(v4 + 1776);
  if ( v9 > 0 )
  {
    if ( v9 < v8 )
    {
      *(_DWORD *)(v4 + 1776) = 0;
LABEL_15:
      v6 = 1;
      goto LABEL_16;
    }
    v10 = v9 - v8;
    *(_DWORD *)(v4 + 1776) = v10;
    if ( !v10 )
      goto LABEL_15;
  }
LABEL_16:
  v11 = *(_DWORD *)(v4 + 1780);
  if ( v11 <= 0 || v6 )
    goto LABEL_22;
  if ( v11 >= v8 )
  {
    v12 = v11 - v8;
    *(_DWORD *)(v4 + 1780) = v12;
    if ( v12 )
      goto LABEL_22;
  }
  else
  {
    *(_DWORD *)(v4 + 1780) = 0;
  }
  v7 = 1;
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(v4 + 3216) )
  {
    if ( (*(_BYTE *)(v4 + 450) & 2) == 0 )
    {
      v14 = *(_DWORD *)(v4 + 3224);
      if ( v14 != -1 )
      {
        v15 = *(_DWORD *)(v4 + 1264);
        if ( v15 < 0x1E )
          v15 = 30;
        v13 = 4 * v15 - *(_DWORD *)(v4 + 1776) + 42;
        if ( !v14 || v14 < (unsigned int)v13 )
        {
          v16 = *(_DWORD *)(v4 + 96);
          StorpTelemetryMarkUnitUnresponsive(v4, v13);
          *(_BYTE *)(v4 + 450) |= 2u;
          if ( byte_1C0069843 < 0 )
            McTemplateK0zqjuuujsssq_EtwWriteTransfer(
              v4 + 169,
              (unsigned int)&EventUnitUnresponsive,
              v4 + 1976,
              *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4864LL),
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
              *(_QWORD *)(v4 + 24) + 5192LL,
              v16,
              SBYTE1(v16),
              SBYTE2(v16),
              v4 + 1976,
              v4 + 160,
              v4 + 169,
              v4 + 186,
              1);
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 59LL, &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids, v4);
          }
        }
      }
    }
  }
  if ( v6 )
  {
    if ( (qword_1C0069310 & 0x400) != 0 )
      DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
    RaidUnitAbortHierarchicalResetWorkItem(v4);
  }
  else if ( v7 )
  {
    if ( (byte_1C0069843 & 0x40) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        v4 + 169,
        v4 + 160,
        v4 + 1976,
        *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
        *(_QWORD *)(v4 + 24) + 5192LL,
        *(_BYTE *)(v4 + 96),
        v4 + 1976,
        v4 + 160,
        v4 + 169,
        v4 + 186,
        *(_BYTE *)(v4 + 450) & 1,
        3);
    LOBYTE(v13) = *(_BYTE *)(v4 + 96);
    RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v13);
  }
}
