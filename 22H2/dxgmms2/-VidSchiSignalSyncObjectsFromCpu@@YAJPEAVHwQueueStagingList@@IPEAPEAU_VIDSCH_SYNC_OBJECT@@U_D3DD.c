/*
 * XREFs of ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00331A8
 * Callers:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0004CF8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C00051D0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0005370 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C00303F4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035700 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035E58 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000CCD0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C00306BC (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchiSignalSyncObjectsFromCpu(
        struct HwQueueStagingList *a1,
        unsigned __int64 *a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        struct _D3DDDICB_SIGNALFLAGS a4,
        char *a5,
        struct VIDSCH_HW_QUEUE **a6)
{
  unsigned int v6; // edi
  __int64 v7; // r15
  struct _VIDSCH_SYNC_OBJECT **v8; // rax
  int v9; // ebx
  unsigned int v10; // r14d
  signed __int64 v11; // rax
  char *v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _VIDSCH_SYNC_OBJECT **v19; // rsi
  char *v20; // r13
  __int64 v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  unsigned __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  signed __int64 i; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  struct HwQueueStagingList *v33; // [rsp+80h] [rbp+8h]

  v33 = a1;
  v6 = 0;
  v7 = (unsigned int)a2;
  v8 = a3;
  v9 = *(_BYTE *)&a4.0 & 4;
  if ( (*(_BYTE *)&a4.0 & 4) != 0 )
    goto LABEL_24;
  v10 = 0;
  if ( (_DWORD)a2 )
  {
    v11 = (char *)a3 - a5;
    v12 = a5;
    for ( i = (char *)a3 - a5; ; v11 = i )
    {
      v13 = *(_QWORD *)&v12[v11];
      if ( *(_BYTE *)(v13 + 28) )
        goto LABEL_18;
      v14 = *(_QWORD *)v12;
      LOBYTE(a1) = *(_BYTE *)(v13 + 29);
      if ( *(_BYTE *)(v13 + 27) )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v13 + 208) + 40LL);
      }
      else if ( *(_DWORD *)(v13 + 44) == 2 )
      {
        v15 = *(_QWORD *)(v13 + 64);
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 88);
      }
      if ( (_BYTE)a1 )
      {
        if ( v14 < v15 )
        {
          v17 = WdLogNewEntry5_WdWarning(a1, a2);
          *(_QWORD *)(v17 + 24) = v14;
          *(_QWORD *)(v17 + 32) = v15;
LABEL_22:
          WdLogEvent5_WdWarning(v17);
          v6 = -1073741811;
          v18 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v18 + 24) = *(_QWORD *)&a5[8 * v10];
          *(_QWORD *)(v18 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v18);
          return v6;
        }
        if ( v14 == v15 )
        {
          v16 = WdLogNewEntry5_WdWarning(a1, a2);
          *(_QWORD *)(v16 + 24) = v14;
LABEL_17:
          WdLogEvent5_WdWarning(v16);
        }
      }
      else
      {
        if ( (int)v15 - (int)v14 > 0 )
        {
          v17 = WdLogNewEntry5_WdWarning(a1, a2);
          *(_QWORD *)(v17 + 24) = (unsigned int)v14;
          *(_QWORD *)(v17 + 32) = (unsigned int)v15;
          goto LABEL_22;
        }
        if ( (_DWORD)v15 == (_DWORD)v14 )
        {
          v16 = WdLogNewEntry5_WdWarning(a1, a2);
          *(_QWORD *)(v16 + 24) = (unsigned int)v14;
          goto LABEL_17;
        }
      }
LABEL_18:
      ++v10;
      v12 += 8;
      if ( v10 >= (unsigned int)v7 )
      {
        v8 = a3;
LABEL_24:
        if ( (_DWORD)v7 )
        {
          v19 = v8;
          v20 = (char *)(a5 - (char *)v8);
          v21 = v7;
          do
          {
            if ( !*((_BYTE *)*v19 + 28) )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
              v22[3] = *v19;
              v22[4] = **((_QWORD **)*v19 + 8);
              v22[5] = *(_QWORD *)&v20[(_QWORD)v19];
              WdLogEvent5_WdEvent(v22);
              v23 = *v19;
              v24 = *(_QWORD *)&v20[(_QWORD)v19];
              if ( *((_BYTE *)*v19 + 27) )
              {
                v25 = v23[26];
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v25 + 8), &LockHandle);
                if ( *(_QWORD *)(v25 + 40) >= v24 )
                {
                  v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26);
                  v28[3] = v23[2];
                  v28[4] = *(_QWORD *)(v25 + 40);
                  v28[5] = v24;
                  WdLogEvent5_WdWarning(v28);
                }
                else
                {
                  *(_QWORD *)(v25 + 40) = v24;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              else
              {
                v23[11] = v24;
              }
              v29 = *(_QWORD *)&v20[(_QWORD)v19];
              a2 = (unsigned __int64 *)*((_QWORD *)*v19 + 8);
              if ( *((_BYTE *)*v19 + 29) )
              {
                if ( v9 || v29 > *a2 )
                  *a2 = v29;
              }
              else if ( v9 || *(_DWORD *)a2 - (int)v29 < 0 )
              {
                *(_DWORD *)a2 = v29;
              }
              a1 = *v19;
              if ( *((_BYTE *)*v19 + 27) )
                VidSchiPropagateCrossAdapterSignal(a1);
            }
            ++v19;
            --v21;
          }
          while ( v21 );
        }
        break;
      }
    }
  }
  VidSchiUnwaitMonitoredFences(v33, *((_QWORD *)*a3 + 1), (__int64)a6);
  return v6;
}
