/*
 * XREFs of StorPortNotification @ 0x1C000E7B0
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C007F440 (StorPortNotificationVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0002E10 (RaidQueueDeferredItem.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005A08 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B8C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnit @ 0x1C0006604 (RaidAdapterFindUnit.c)
 *     RaidAdapterRequestComplete @ 0x1C000F2F0 (RaidAdapterRequestComplete.c)
 *     memmove @ 0x1C00201C0 (memmove.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C002E154 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002E260 (RaidAdapterRequestTimerDeferred.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003722C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00372A0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqquuuqpp_EtwWriteTransfer @ 0x1C003746C (McTemplateK0pqquuuqpp_EtwWriteTransfer.c)
 *     RaidpLinkDown @ 0x1C003801C (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C0038088 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C0038418 (StorAsyncNotificationDeferred.c)
 *     StorEnablePassiveInitialization @ 0x1C00385C8 (StorEnablePassiveInitialization.c)
 *     StorPortPause @ 0x1C0039A00 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C003BC90 (StorpGetExtendedTable.c)
 *     StorpMarkDeviceFailed @ 0x1C003C898 (StorpMarkDeviceFailed.c)
 *     RaidHandleTraceNotifyType @ 0x1C0043878 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004B038 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004F814 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004FB0C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall StorPortNotification(
        int a1,
        _QWORD **a2,
        unsigned int *a3,
        unsigned __int64 a4,
        char *a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8,
        __int16 a9,
        __int64 a10,
        _DWORD *a11)
{
  int v11; // r8d
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  struct _KTIMER *v20; // rcx
  char v21; // r14
  char v22; // r15
  PSLIST_ENTRY v23; // rax
  struct _SLIST_ENTRY *v24; // rbx
  __int64 v25; // rcx
  KDPC_IMPORTANCE v26; // edi
  char v27; // di
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // r11
  unsigned int v32; // edx
  _DWORD *v33; // rdi
  unsigned __int8 v34; // r15
  unsigned __int8 v35; // r12
  unsigned __int8 v36; // r13
  unsigned int v37; // edi
  __int64 Unit; // rax
  char v39; // al
  int v40; // ecx
  _DWORD *v41; // rdi
  _DWORD *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r8
  KIRQL *v45; // rcx
  __int64 v46; // rdx
  signed __int32 v47[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-68h]
  __int16 *v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+70h] [rbp-58h]
  __int64 v51; // [rsp+78h] [rbp-50h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  _QWORD **v53; // [rsp+D8h] [rbp+10h]

  v53 = a2;
  v11 = (int)a2;
  v49 = 0LL;
  v12 = 0LL;
  if ( a2 )
    v12 = **(a2 - 2);
  if ( a1 )
  {
    if ( a1 != 4100 )
    {
      if ( a1 == 4099 )
      {
        v43 = **(a2 - 2);
        if ( (v43 || (unsigned int)((_DWORD)a3 - 2) > 1) && a5 )
        {
          *(_DWORD *)a5 = (_DWORD)a3;
          switch ( (_DWORD)a3 )
          {
            case 1:
              if ( a4 )
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 64), (PKLOCK_QUEUE_HANDLE)(a5 + 8));
              break;
            case 2:
              if ( *(_DWORD *)(v43 + 720) )
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v43 + 712), (PKLOCK_QUEUE_HANDLE)(a5 + 8));
              else
                a5[8] = RaidAdapterAcquireInterruptLock(v43);
              break;
            case 3:
              a5[24] = RaidAdapterAcquireInterruptLock(v43);
              break;
          }
        }
      }
      else if ( a1 == 4098 )
      {
        v42 = a6;
        if ( a3 )
          *v42 = KeInsertQueueDpc((PRKDPC)a3, (PVOID)a4, a5);
      }
      else if ( a1 > 4096 )
      {
        switch ( a1 )
        {
          case 4097:
            if ( a3 && a4 )
            {
              KeInitializeDpc((PRKDPC)a3, (PKDEFERRED_ROUTINE)a4, a2);
              KeInitializeSpinLock((PKSPIN_LOCK)a3 + 8);
            }
            break;
          case 4101:
            if ( v12 )
            {
              v30 = (__int64)a6;
              v31 = a7;
              v32 = (unsigned int)a5;
              v33 = a8;
              v48 = (unsigned int)a5;
              v50 = (__int64)a6;
              v51 = a7;
              v49 = &a9;
              if ( a4 && *(_WORD *)a4 == 1 )
              {
                v34 = *(_BYTE *)(a4 + 8);
                v35 = *(_BYTE *)(a4 + 9);
                v36 = *(_BYTE *)(a4 + 10);
              }
              else
              {
                v34 = -1;
                v35 = -1;
                v36 = -1;
              }
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              {
                McTemplateK0pqquuuqpp_EtwWriteTransfer(
                  0xC0000000,
                  (_DWORD)a5,
                  0,
                  v11,
                  *(_DWORD *)(v12 + 56),
                  (char)a3,
                  v34,
                  v35,
                  v36,
                  (char)a5,
                  (char)a6,
                  a7);
                v32 = v48;
                v30 = v50;
                v31 = v51;
              }
              if ( a4
                && *(_WORD *)a4 == 1
                && v34 <= *(_BYTE *)(v12 + 400)
                && (((unsigned __int8)a3 & 3) == 0 || v35 <= *(_BYTE *)(v12 + 425))
                && (((unsigned __int8)a3 & 1) == 0 || v36 <= *(_BYTE *)(v12 + 474))
                && ((unsigned __int8)a3 & 7) != 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 4968), 1, 0) == 1 )
                {
                  if ( v33 )
                    *v33 = -1056964607;
                }
                else
                {
                  _InterlockedOr(v47, 0);
                  *(_DWORD *)(v12 + 4972) = (_DWORD)a3;
                  *(_QWORD *)(v12 + 4984) = a4;
                  *(_DWORD *)(v12 + 4976) = v32;
                  *(_QWORD *)(v12 + 4992) = v30;
                  *(_QWORD *)(v12 + 5000) = v31;
                  _InterlockedOr(v47, 0);
                  *(_BYTE *)(v12 + 104) |= 0x40u;
                  *(_BYTE *)(v12 + 105) = 1;
                  KeInsertQueueDpc((PRKDPC)(v12 + 2056), 0LL, 0LL);
                  if ( v33 )
                    *v33 = 0;
                }
              }
              else if ( v33 )
              {
                *v33 = -1056964602;
              }
            }
            break;
          case 4102:
            if ( StorEtwLoggingEnabled && a4 )
            {
              v28 = *(_BYTE *)(a4 + 2) == 40 ? *(_QWORD *)(a4 + 96) : *(_QWORD *)(a4 + 48);
              if ( v28 )
              {
                if ( (byte_1C0069841 & 2) != 0 || (byte_1C0069843 & 2) != 0 )
                  *(_QWORD *)(v28 + 720) = a3;
                if ( (byte_1C0069841 & 2) != 0 )
                {
                  LOBYTE(a2) = 1;
                  StorEtwIORequestServiceTimeEventData(v28, a2, a3);
                }
                v29 = *(_QWORD *)(v28 + 224);
                if ( v29 && *(_DWORD *)(v29 + 1812) && (byte_1C0069843 & 2) != 0 )
                {
                  LOBYTE(a2) = 1;
                  StorEtwLogoRequestServiceTimeEventData(v28, a2, a3);
                }
              }
            }
            break;
          case 4103:
            v49 = (__int16 *)&a6;
            v48 = 0;
            if ( v12 && a3 && *(_WORD *)a3 == 1 && (a4 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
            {
              LOWORD(v48) = *((_WORD *)a3 + 4);
              BYTE2(v48) = *((_BYTE *)a3 + 10);
              v37 = v48;
              Unit = RaidAdapterFindUnit(v12, v48);
              if ( Unit && (*(_DWORD *)(Unit + 1824) & 4) != 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1880), 1, 0) == 1 )
                {
                  *(_DWORD *)a5 = -1056964596;
                }
                else if ( KeGetCurrentIrql() > 2u )
                {
                  v39 = StorAsyncNotificationDeferred(v12, Unit, v48, a4);
                  v40 = -1056964596;
                  if ( v39 )
                    v40 = 0;
                  *(_DWORD *)a5 = v40;
                }
                else
                {
                  *(_QWORD *)(Unit + 1872) = a4;
                  *(_DWORD *)a5 = RaidUnitProcessAsyncNotification(v12, v37, Unit + 1864);
                }
              }
              else
              {
                *(_DWORD *)a5 = -1056964601;
              }
            }
            else
            {
              *(_DWORD *)a5 = -1056964602;
            }
            break;
          case 4104:
            if ( v12 && a3 )
            {
              v25 = *((_BYTE *)a3 + 2) == 40 ? *((_QWORD *)a3 + 12) : *((_QWORD *)a3 + 6);
              if ( v25 )
                RaidAdapterRequestDirectComplete(v25, a2, a2);
            }
            break;
          case 4105:
            v26 = (int)a6;
            if ( a3 )
            {
              if ( a4 )
              {
                KeInitializeDpc((PRKDPC)a3, (PKDEFERRED_ROUTINE)a4, a5);
                if ( v26 )
                  KeSetImportanceDpc((PRKDPC)a3, v26);
              }
            }
            break;
          case 4106:
            v27 = (char)a6;
            if ( a3 )
            {
              if ( a4 )
              {
                KeInitializeThreadedDpc((PRKDPC)a3, (PKDEFERRED_ROUTINE)a4, a5);
                if ( v27 )
                  KeSetImportanceDpc((PRKDPC)a3, HighImportance);
              }
            }
            break;
          case 4107:
            if ( a3 && a4 )
              KeSetTargetProcessorDpcEx((PKDPC)a3, (PPROCESSOR_NUMBER)a4);
            break;
          case 4108:
            if ( v12 && a5 )
              StorpMarkDeviceFailed(v12, (_DWORD)a3, a4, 0xFFFF, (__int64)a5, 0, 0LL, 0, 0LL);
            break;
          case 4109:
            v41 = a11;
            if ( v12 && (_WORD)a5 && a6 )
            {
              StorpMarkDeviceFailed(v12, (_DWORD)a3, a4, (unsigned __int16)a5, (__int64)a6, a7, (__int64)a8, a9, a10);
              *v41 = 0;
            }
            else
            {
              *a11 = -1056964602;
            }
            break;
          default:
            return;
        }
      }
      else if ( a1 == 4096 )
      {
        *(_DWORD *)a4 = (unsigned __int8)StorEnablePassiveInitialization(a2, a3);
      }
      else
      {
        switch ( a1 )
        {
          case 3:
            if ( v12 )
            {
              DbgLogRequest(v12, 39, v12, *(unsigned int *)(v12 + 56), retaddr, *(unsigned int *)(v12 + 544), 0LL);
              v15 = *(_DWORD *)(v12 + 544);
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                McTemplateK0pqq_EtwWriteTransfer(
                  v13,
                  (unsigned int)&EventResetDetected,
                  v14,
                  (_DWORD)v53,
                  *(_DWORD *)(v12 + 56),
                  *(_DWORD *)(v12 + 544));
              if ( v15 )
              {
                if ( v15 > 0x3D0900 )
                  v15 = 4000000;
                v16 = v15 / 0xF4240 + 1;
                if ( v15 == 1000000 * (v15 / 0xF4240) )
                  v16 = v15 / 0xF4240;
                StorPortPause(v53, v16);
              }
            }
            break;
          case 6:
            v19 = a4;
            if ( v12 )
            {
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                McTemplateK0pqq_EtwWriteTransfer(
                  0xC0000000,
                  (unsigned int)&EventRequestTimerCall,
                  (_DWORD)a2,
                  (_DWORD)a2,
                  *(_DWORD *)(v12 + 56),
                  a4);
              if ( KeGetCurrentIrql() > 2u )
              {
                RaidAdapterRequestTimerDeferred(v12, a3, v19);
              }
              else
              {
                v20 = (struct _KTIMER *)(v12 + 1728);
                if ( v19 )
                {
                  *(_QWORD *)(v12 + 1984) = a3;
                  KeSetCoalescableTimer(v20, (LARGE_INTEGER)(-10LL * (unsigned int)a4), 0, 0, (PKDPC)(v12 + 1664));
                }
                else
                {
                  KeCancelTimer(v20);
                }
              }
            }
            break;
          case 7:
            if ( v12 )
            {
              DbgLogRequest(v12, 38, v12, *(unsigned int *)(v12 + 56), retaddr, *(unsigned int *)(v12 + 544), 0LL);
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                McTemplateK0pq_EtwWriteTransfer(v17, &EventBusChangeDetected, v18, v53, *(_DWORD *)(v12 + 56));
              *(_WORD *)(v12 + 105) = 257;
              KeInsertQueueDpc((PRKDPC)(v12 + 2056), 0LL, 0LL);
            }
            break;
          case 8:
            v21 = 0;
            v22 = 0;
            if ( (_BYTE)a4 != 0xFF )
            {
              v21 = (char)a5;
              v22 = (char)a6;
            }
            if ( a3 )
            {
              if ( *a3 <= 0x80 )
              {
                if ( v12 )
                {
                  v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v12 + 1616));
                  v24 = v23;
                  if ( v23 )
                  {
                    LODWORD(v23[1].Next) = 134684674;
                    LOBYTE(v23[2].Next) = a4;
                    if ( (_BYTE)a4 != 0xFF )
                    {
                      BYTE1(v23[2].Next) = v21;
                      BYTE2(v23[2].Next) = v22;
                    }
                    memmove(&v23[2].Next + 1, a3, *a3);
                    RaidQueueDeferredItem((char *)(v12 + 1536), v24);
                  }
                }
              }
            }
            break;
          case 10:
            if ( v12 )
              RaidpLinkUp(v12, a2, a2);
            break;
          case 11:
            if ( v12 )
              RaidpLinkDown(v12, a2, a2);
            break;
          case 12:
            *(_QWORD *)a3 = MEMORY[0xFFFFF78000000320];
            break;
          case 13:
            KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
          case 14:
            RaidHandleTraceNotifyType(0x1C0000000uLL, (unsigned int)a3, a4);
            break;
          case 15:
            StorpGetExtendedTable(a2, a3);
            break;
          default:
            return;
        }
      }
      return;
    }
    v44 = **(a2 - 2);
    if ( !a3 || !v44 && *a3 - 2 <= 1 )
      return;
    if ( *a3 == 1 )
    {
      v45 = (KIRQL *)(a3 + 2);
    }
    else
    {
      if ( *a3 != 2 )
      {
        switch ( *a3 )
        {
          case 3u:
            RaidAdapterReleaseInterruptLock(v44, *((_BYTE *)a3 + 24));
            break;
          case 4u:
            KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)(a3 + 2));
            break;
          case 5u:
            KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(a3 + 2));
            break;
        }
        return;
      }
      v45 = (KIRQL *)(a3 + 2);
      if ( !*(_DWORD *)(v44 + 720) )
      {
        RaidAdapterReleaseInterruptLock(v44, *v45);
        return;
      }
    }
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)v45);
    return;
  }
  if ( v12 && a3 )
  {
    v46 = *((_BYTE *)a3 + 2) == 40 ? *((_QWORD *)a3 + 12) : *((_QWORD *)a3 + 6);
    if ( v46 )
      RaidAdapterRequestComplete(v12, v46, 0LL);
  }
}
