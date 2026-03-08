/*
 * XREFs of MiModifiedPageWriter @ 0x1403AD2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140356350 (MiUseLowIoPriorityForModifiedPages.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403AD3F4 (MiStoreCheckCompleteWriteBatch.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiCheckFreeModifiedReservations @ 0x1406368F0 (MiCheckFreeModifiedReservations.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x140638C18 (MiMakePagefileWriterEntryAvailable.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  struct _KEVENT *v4; // rbp
  struct _KEVENT *v5; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r14
  bool v9; // zf
  NTSTATUS v10; // eax
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int8 v15; // al
  unsigned int v16; // r9d
  __int64 i; // rax
  _QWORD *v18; // rcx
  int v19; // eax
  int v20; // ebp
  int v21; // ecx
  __int64 *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // r15
  unsigned int v28; // ebp
  __int64 v29; // rax
  _QWORD *v30; // r14
  signed __int32 v32[8]; // [rsp+0h] [rbp-218h] BYREF
  int v33; // [rsp+40h] [rbp-1D8h]
  __int64 v34; // [rsp+48h] [rbp-1D0h]
  PVOID Object[2]; // [rsp+50h] [rbp-1C8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-1B8h] BYREF
  PVOID v37[6]; // [rsp+C0h] [rbp-158h] BYREF
  struct _KWAIT_BLOCK v38; // [rsp+F0h] [rbp-128h] BYREF

  v1 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(*(_QWORD *)a1 + 984LL) = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v33 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 18);
  _InterlockedExchange64((volatile __int64 *)(v1 + 992), 0LL);
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  Object[0] = (PVOID)(v1 + 104);
  v37[0] = (PVOID)(v1 + 104);
  v4 = (struct _KEVENT *)(v1 + 920);
  v37[2] = (PVOID)(v1 + 960);
  Object[1] = (PVOID)(v1 + 776);
  v5 = (struct _KEVENT *)(v1 + 1048);
  v37[1] = (PVOID)(v1 + 920);
  v37[3] = (PVOID)(v1 + 736);
  v37[4] = (PVOID)(v1 + 1048);
LABEL_2:
  *(_QWORD *)(v1 + 880) = 0LL;
  *(_DWORD *)(v1 + 888) = 0;
  *(_BYTE *)(v1 + 714) = 0;
  MiStoreCheckCompleteWriteBatch(v1);
  v6 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(v1 + 714) = 1;
  if ( v6 )
  {
    while ( !*(_DWORD *)(v1 + 108) )
    {
      if ( !*(_QWORD *)(v1 + 17824) )
        goto LABEL_2;
      --CurrentThread->SpecialApcDisable;
      MiStoreCheckCompleteWriteBatch(v1);
      v8 = v1 + 944;
      if ( *(_QWORD *)v8 == v8 )
      {
        *(_BYTE *)(v1 + 713) = 1;
        v9 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v9
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v10 = KeWaitForMultipleObjects(5u, v37, WaitAny, WrPageOut, 0, 0, 0LL, &v38);
        v11 = 0LL;
        if ( !v10 )
          break;
        --CurrentThread->SpecialApcDisable;
        *(_BYTE *)(v1 + 713) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( *(_DWORD *)(v1 + 740) )
      {
        KeResetEvent((PRKEVENT)(v1 + 736));
        v11 = 0LL;
        if ( *(_DWORD *)(v1 + 732) )
        {
          IoBoostThreadIoPriority((volatile signed __int64 *)&CurrentThread->Header.Lock, 2, 0);
          v11 = 0LL;
        }
      }
      if ( *(_DWORD *)(v1 + 924) )
      {
        KeResetEvent(v4);
        v11 = 0LL;
        _InterlockedOr(v32, 0);
        v12 = *(_DWORD *)(v1 + 17048);
        if ( v12 )
        {
          v7 = v1 + 17056;
          v13 = v12;
          v14 = 1LL;
          do
          {
            v15 = *(_BYTE *)(*(_QWORD *)v7 + 206LL);
            if ( (v15 & (unsigned __int8)v14) != 0 )
            {
              v16 = 0;
              *(_BYTE *)(*(_QWORD *)v7 + 206LL) = v15 & 0xFE;
              for ( i = *(_QWORD *)v7; v16 < *(_DWORD *)(*(_QWORD *)v7 + 72LL); v16 += v14 )
              {
                v18 = *(_QWORD **)(*(_QWORD *)(i + 64) + 8LL * v16);
                if ( v18 && *v18 == 2575857425LL )
                {
                  MiMakePagefileWriterEntryAvailable(v18);
                  v11 = 0LL;
                }
                i = *(_QWORD *)v7;
              }
            }
            v7 += 8LL;
            v13 -= v14;
          }
          while ( v13 );
        }
      }
      if ( *(_DWORD *)(v1 + 1052) )
      {
        KeResetEvent(v5);
        MiStoreUpdateMemoryConditions(v1);
      }
      MiCheckFreeModifiedReservations(v1, v7, v11);
      if ( *(_QWORD *)v8 == v8 )
      {
        v9 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v9
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else
      {
        v19 = *(_DWORD *)(v1 + 1184);
        if ( (v19 & 1) != 0
          && (v19 & 0xFFFFFFFE) == 0
          && _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 1184), 0, 1) == 1 )
        {
          v9 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v9
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KeResetEvent((PRKEVENT)(v1 + 776));
          goto LABEL_2;
        }
        if ( MiUseLowIoPriorityForModifiedPages(v1) )
        {
          if ( *(_QWORD *)(v1 + 17824) < *(_QWORD *)(v1 + 768) )
          {
            v9 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v9
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            goto LABEL_2;
          }
          *(_DWORD *)(v1 + 760) = 4;
          v20 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 4);
          v21 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v1 + 732) )
            IoBoostThreadIoPriority((volatile signed __int64 *)&CurrentThread->Header.Lock, 2, 0);
          v20 = -1;
          v21 = 8;
        }
        v22 = *(__int64 **)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v23 = *v22, *(__int64 **)(*v22 + 8) != v22) )
          __fastfail(3u);
        *(_QWORD *)v8 = v23;
        *(_QWORD *)(v23 + 8) = v8;
        v24 = v22[5] & 0xFFFFFFE3;
        *v22 = 97LL;
        *((_DWORD *)v22 + 10) = v21 | v24;
        v9 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v9
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v22[25] = (__int64)(v22 + 26);
        MiGatherPagefilePages(v22);
        v5 = (struct _KEVENT *)(v1 + 1048);
        if ( v20 == -1 )
        {
          v4 = (struct _KEVENT *)(v1 + 920);
        }
        else
        {
          if ( KeQueryPriorityThread(CurrentThread) != 18 )
            KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v20);
          *(_DWORD *)(v1 + 760) = 18;
          v5 = (struct _KEVENT *)(v1 + 1048);
          v4 = (struct _KEVENT *)(v1 + 920);
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 732) )
    IoBoostThreadIoPriority((volatile signed __int64 *)&CurrentThread->Header.Lock, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 992));
  v25 = *(_DWORD *)(v1 + 17048);
  if ( v25 )
  {
    v26 = v1 + 17056;
    v34 = *(unsigned int *)(v1 + 17048);
    v27 = v25;
    do
    {
      if ( *(_QWORD *)v26 )
      {
        --CurrentThread->SpecialApcDisable;
        v28 = 0;
        v29 = *(_QWORD *)v26;
        if ( *(_DWORD *)(*(_QWORD *)v26 + 72LL) )
        {
          do
          {
            v30 = *(_QWORD **)(*(_QWORD *)(v29 + 64) + 8LL * v28);
            if ( v30 )
            {
              while ( *v30 == 97LL )
              {
                *(_BYTE *)(v1 + 713) = 1;
                v9 = CurrentThread->SpecialApcDisable++ == -1;
                if ( v9
                  && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                {
                  KiCheckForKernelApcDelivery();
                }
                KeWaitForSingleObject((PVOID)(v1 + 960), WrPageOut, 0, 0, 0LL);
                --CurrentThread->SpecialApcDisable;
              }
            }
            v29 = *(_QWORD *)v26;
            ++v28;
          }
          while ( v28 < *(_DWORD *)(*(_QWORD *)v26 + 72LL) );
          v27 = v34;
        }
        v9 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v9
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v26 += 8LL;
      v34 = --v27;
    }
    while ( v27 );
  }
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v33);
  return KeSetEvent((PRKEVENT)(v1 + 800), 0, 0);
}
