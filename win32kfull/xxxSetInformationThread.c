/*
 * XREFs of xxxSetInformationThread @ 0x1C0093B70
 * Callers:
 *     NtUserSetInformationThread @ 0x1C0093A50 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C0093B70 (xxxSetInformationThread.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0045EF0 (xxxBroadcastMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxSetInformationThread @ 0x1C0093B70 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0093CF0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00948B0 (xxxSetCsrssThreadDesktop.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00958A8 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0095B2C (-EndShutdown@@YAXJ@Z.c)
 *     RtlInitLargeUnicodeString @ 0x1C00A0F84 (RtlInitLargeUnicodeString.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     QueueShutdownData @ 0x1C01B44E8 (QueueShutdownData.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C02044EC (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  unsigned __int64 v7; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // r12
  int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  unsigned int v17; // r8d
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 i; // rax
  void *v23; // rcx
  NTSTATUS v24; // eax
  PVOID v25; // rdi
  __int64 v26; // rax
  void *v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // r8
  int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-79h] BYREF
  PVOID v36[2]; // [rsp+48h] [rbp-71h] BYREF
  PVOID Object; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v38[4]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v39; // [rsp+70h] [rbp-49h]
  _BYTE v40[80]; // [rsp+80h] [rbp-39h] BYREF

  Object = 0LL;
  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v9 = (struct _KTHREAD *)Object;
  v10 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
    if ( a2 == 10 )
    {
      v19 = SetCsrApiPortHandle(*a3);
      goto LABEL_14;
    }
    if ( a2 > 10 )
    {
      if ( a2 == 12 )
      {
        v32 = ValidateHwnd(*a3);
        if ( !v32 )
          goto LABEL_35;
        v33 = *(_QWORD *)(v32 + 16);
        if ( !v33 || !*(_QWORD *)(v33 + 456) )
          goto LABEL_35;
        ghwndBlocking = *a3;
        PostWinlogonMessage(1031LL, 0LL);
        v34 = *(_QWORD *)(v33 + 456);
        if ( !*(_QWORD *)(*(_QWORD *)(v34 + 8) + 168LL) )
          v7 = *(_QWORD *)(v34 + 280) != 0LL;
        QueueShutdownData(0xFFFFLL, v7);
      }
      else
      {
        v28 = (unsigned int)(a2 - 13);
        switch ( a2 )
        {
          case 13:
            v10 = -1073741790;
            Interval.QuadPart = 0LL;
            v31 = 0;
            while ( !gspwndBSDR )
            {
              UserSessionSwitchLeaveCrit(v28);
              Interval.QuadPart = -1000000LL;
              KeDelayExecutionThread(0, 0, &Interval);
              EnterCrit(1LL, 0LL);
              v31 += 100;
              if ( v31 >= 10000 )
                goto LABEL_74;
            }
            gptiShutdownWaiter = gptiCurrent;
            QueueShutdownData(*a3, 1uLL);
            v10 = 0;
            if ( v31 <= 0 )
              goto LABEL_15;
LABEL_74:
            TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v31);
            goto LABEL_15;
          case 14:
            QueueShutdownData(*a3, 0LL);
            ghwndBlocking = 0LL;
            gptiShutdownWaiter = 0LL;
            break;
          case 15:
          case 16:
            v29 = *(_DWORD *)a3;
            Interval.QuadPart = 0LL;
            v39 = 0LL;
            *(_OWORD *)v36 = 0LL;
            if ( a2 == 15 )
            {
              if ( v29 )
                *(_DWORD *)(gpsi + 2236LL) |= 8u;
              else
                *(_DWORD *)(gpsi + 2236LL) &= ~8u;
              RtlLoadStringOrError(629LL, v40, 40LL);
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
              EtwTraceConvertibleState(*(unsigned int *)a3);
            }
            else
            {
              if ( v29 )
                *(_DWORD *)(gpsi + 2236LL) |= 0x10u;
              else
                *(_DWORD *)(gpsi + 2236LL) &= ~0x10u;
              RtlLoadStringOrError(630LL, v40, 40LL);
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
              EtwTraceDockState(*(unsigned int *)a3);
            }
            RtlInitLargeUnicodeString(v36, v40);
            v30 = *(unsigned int *)a3;
            *(_QWORD *)&v38[2] = &Interval;
            v38[0] = 0;
            v38[1] = 100;
            xxxBroadcastMessageEx(0LL, 0x1Au, v30, (__int128 *)v36, 6u, (union tagBROADCASTMSG *)v38, 1, 0);
            break;
          case 17:
            v39 = 0LL;
            *(_OWORD *)v38 = 0LL;
            v10 = xxxSetInformationThread(-2LL, 7LL, v38, 24LL);
            if ( v10 < 0 )
              goto LABEL_15;
            PostShellHookMessagesEx(0x37uLL, 0LL, 0LL);
            v19 = xxxSetInformationThread(-2LL, 9LL, v38, 24LL);
            goto LABEL_14;
          default:
            goto LABEL_57;
        }
      }
    }
    else
    {
      v12 = a2 - 1;
      if ( !v12 )
      {
        if ( ThreadWin32Thread )
        {
          if ( a4 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20000u;
            else
              *(_DWORD *)(ThreadWin32Thread + 488) &= ~0x20000u;
          }
          else
          {
            v10 = -1073741811;
          }
          goto LABEL_15;
        }
        goto LABEL_21;
      }
      v13 = v12 - 4;
      if ( !v13 )
      {
        v19 = InitiateShutdownW(v9, (unsigned int *)a3);
        goto LABEL_14;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            v23 = (void *)*a3;
            v36[0] = 0LL;
            v24 = ObReferenceObjectByHandle(v23, 0x40u, (POBJECT_TYPE)PsThreadType, 1, v36, 0LL);
            v25 = v36[0];
            v10 = v24;
            if ( v24 >= 0 )
            {
              v26 = W32GetThreadWin32Thread((__int64)v36[0]);
              if ( v26 && (v27 = *(void **)(v26 + 456)) != 0LL )
                v10 = xxxSetCsrssThreadDesktop(v27);
              else
                v10 = -1073741816;
              ObfDereferenceObject(v25);
            }
            goto LABEL_15;
          }
          if ( v16 == 1 )
          {
            if ( a4 == 32 )
              v17 = *((_DWORD *)a3 + 6);
            else
              v17 = 0;
            v18 = a3[1];
            if ( !v18 )
            {
LABEL_13:
              v19 = xxxRestoreCsrssThreadDesktop(a3 + 1, v17);
LABEL_14:
              v10 = v19;
LABEL_15:
              ObfDereferenceObject(v9);
              return v10;
            }
            v20 = 0LL;
            v21 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v20 )
              {
                for ( i = *(_QWORD *)(v21 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v18 )
                  {
                    v20 = i;
                    break;
                  }
                }
                v21 = *(_QWORD *)(v21 + 8);
                if ( !v21 )
                {
                  if ( v20 )
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
LABEL_57:
          v10 = -1073741821;
          goto LABEL_15;
        }
        if ( grpdeskRitInput )
        {
          v19 = xxxSetCsrssThreadDesktop(grpdeskRitInput);
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
