/*
 * XREFs of xxxSetInformationThread @ 0x1C00D8CE0
 * Callers:
 *     NtUserSetInformationThread @ 0x1C00D8BC0 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00D8CE0 (xxxSetInformationThread.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0033F1C (RtlInitLargeUnicodeString.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C0043558 (PostShellHookMessagesEx.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C00D76E0 (-EndShutdown@@YAXJ@Z.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00D77D4 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     xxxSetInformationThread @ 0x1C00D8CE0 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D8E60 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00D90F0 (xxxSetCsrssThreadDesktop.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     QueueShutdownData @ 0x1C01D2C28 (QueueShutdownData.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C022468C (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  unsigned __int64 v7; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // r12
  int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  unsigned int v20; // r9d
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 i; // rax
  void *v26; // rcx
  NTSTATUS v27; // eax
  PVOID v28; // rdi
  __int64 v29; // rax
  void *v30; // rcx
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // eax
  unsigned __int64 v34; // r8
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  PVOID v39; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v41[4]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v42; // [rsp+60h] [rbp-59h]
  __int128 v43; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v44[80]; // [rsp+80h] [rbp-39h] BYREF

  Object = 0LL;
  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v9 = (struct _KTHREAD *)Object;
  v10 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
    v14 = ThreadWin32Thread;
    if ( a2 == 10 )
    {
      v22 = SetCsrApiPortHandle(*a3, v12, ThreadWin32Thread);
      goto LABEL_14;
    }
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v36 = ValidateHwnd(*a3);
          if ( !v36 )
            goto LABEL_35;
          v37 = *(_QWORD *)(v36 + 16);
          if ( !v37 || !*(_QWORD *)(v37 + 456) )
            goto LABEL_35;
          ghwndBlocking = *a3;
          PostWinlogonMessage(1031LL, 0LL);
          v38 = *(_QWORD *)(v37 + 456);
          if ( !*(_QWORD *)(*(_QWORD *)(v38 + 8) + 168LL) )
            v7 = *(_QWORD *)(v38 + 288) != 0LL;
          QueueShutdownData(0xFFFFLL, v7);
          break;
        case 13:
          v10 = -1073741790;
          v39 = 0LL;
          v35 = 0;
          while ( !gspwndBSDR )
          {
            if ( gdwInAtomicOperation )
            {
              v13 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v13);
            v39 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v39);
            EnterCrit(0LL, 1LL);
            v35 += 100;
            if ( v35 >= 10000 )
              goto LABEL_77;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1uLL);
          v10 = 0;
LABEL_77:
          if ( v35 > 0 )
            TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v35);
          goto LABEL_15;
        case 14:
          QueueShutdownData(*a3, 0LL);
          ghwndBlocking = 0LL;
          gptiShutdownWaiter = 0LL;
          break;
        default:
          if ( a2 <= 14 )
            goto LABEL_67;
          if ( a2 > 16 )
          {
            if ( a2 == 17 )
            {
              v42 = 0LL;
              *(_OWORD *)v41 = 0LL;
              v10 = xxxSetInformationThread(-2LL, 7LL, v41, 24LL);
              if ( v10 < 0 )
                goto LABEL_15;
              PostShellHookMessagesEx(0x37u, 0LL, 0LL);
              v22 = xxxSetInformationThread(-2LL, 9LL, v41, 24LL);
              goto LABEL_14;
            }
            goto LABEL_67;
          }
          v33 = *(_DWORD *)a3;
          v39 = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          if ( a2 == 15 )
          {
            if ( v33 )
              *(_DWORD *)(gpsi + 2236LL) |= 8u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~8u;
            RtlLoadStringOrError(629LL, v44, 40LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( v33 )
              *(_DWORD *)(gpsi + 2236LL) |= 0x10u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~0x10u;
            RtlLoadStringOrError(630LL, v44, 40LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
            EtwTraceDockState(*(unsigned int *)a3);
          }
          RtlInitLargeUnicodeString((__int64)&v43, (__int64)v44);
          v34 = *(unsigned int *)a3;
          *(_QWORD *)&v41[2] = &v39;
          v41[0] = 0;
          v41[1] = 100;
          xxxBroadcastMessageEx(0LL, 0x1Au, v34, (struct _LARGE_STRING *)&v43, 6u, (union tagBROADCASTMSG *)v41, 1, 0);
          break;
      }
    }
    else
    {
      v15 = a2 - 1;
      if ( !v15 )
      {
        if ( ThreadWin32Thread )
        {
          if ( a4 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v31 = *(_DWORD *)(ThreadWin32Thread + 488) & 0xFFFDFFFF;
            v32 = *(_DWORD *)(v14 + 488) | 0x20000;
            if ( !*(_DWORD *)a3 )
              v32 = v31;
            *(_DWORD *)(v14 + 488) = v32;
          }
          else
          {
            v10 = -1073741811;
          }
          goto LABEL_15;
        }
        goto LABEL_21;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        v22 = InitiateShutdownW(v9, (unsigned int *)a3);
        goto LABEL_14;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            v26 = (void *)*a3;
            v39 = 0LL;
            v27 = ObReferenceObjectByHandle(v26, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v39, 0LL);
            v28 = v39;
            v10 = v27;
            if ( v27 >= 0 )
            {
              v29 = W32GetThreadWin32Thread((__int64)v39);
              if ( v29 && (v30 = *(void **)(v29 + 456)) != 0LL )
                v10 = xxxSetCsrssThreadDesktop(v30);
              else
                v10 = -1073741816;
              ObfDereferenceObject(v28);
            }
            goto LABEL_15;
          }
          if ( v19 == 1 )
          {
            if ( a4 == 32 )
              v20 = *((_DWORD *)a3 + 6);
            else
              v20 = 0;
            v21 = a3[1];
            if ( !v21 )
            {
LABEL_13:
              v22 = xxxRestoreCsrssThreadDesktop(a3 + 1, v20);
LABEL_14:
              v10 = v22;
LABEL_15:
              ObfDereferenceObject(v9);
              return v10;
            }
            v23 = 0LL;
            v24 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v23 )
              {
                for ( i = *(_QWORD *)(v24 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v21 )
                  {
                    v23 = i;
                    break;
                  }
                }
                v24 = *(_QWORD *)(v24 + 8);
                if ( !v24 )
                {
                  if ( v23 )
                    goto LABEL_13;
                  goto LABEL_35;
                }
              }
              goto LABEL_13;
            }
LABEL_35:
            v10 = -1073741823;
            goto LABEL_15;
          }
LABEL_67:
          v10 = -1073741821;
          goto LABEL_15;
        }
        if ( grpdeskRitInput )
        {
          v22 = xxxSetCsrssThreadDesktop(grpdeskRitInput);
          goto LABEL_14;
        }
LABEL_21:
        v10 = -1073741816;
        goto LABEL_15;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v10 = 0;
    goto LABEL_15;
  }
  return result;
}
