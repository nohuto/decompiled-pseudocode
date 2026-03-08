/*
 * XREFs of KiIpiProcessRequests @ 0x1402CB4E0
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x14041F760 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x140250570 (EtwGetKernelTraceTimestampSilo.c)
 *     KiFlushRangeTb @ 0x140387C18 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140417710 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpiReceive @ 0x1405FC640 (PerfInfoLogIpiReceive.c)
 */

char KiIpiProcessRequests()
{
  struct _KPRCB *CurrentPrcb; // rdi
  char result; // al
  char *v2; // rbx
  __int64 v3; // rax
  char *v4; // r13
  __int64 v5; // r8
  __int64 v6; // r10
  char v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  _KPROCESS *v11; // rcx
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rsi
  _KPROCESS *Process; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  unsigned int v19; // r14d
  unsigned __int64 v20; // r15
  unsigned __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-78h]
  __int128 v24; // [rsp+40h] [rbp-68h]
  _OWORD v25[2]; // [rsp+50h] [rbp-58h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  result = 0;
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    v2 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = v2 - (char *)CurrentPrcb - 48832;
        v4 = v2;
        v2 = *(char **)v2;
        v5 = 0LL;
        memset(v25, 0, sizeof(v25));
        v6 = KiProcessorBlock[(unsigned int)(v3 >> 6)];
        v23 = v6;
        if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v7 = 1;
          EtwGetKernelTraceTimestampSilo((LARGE_INTEGER *)v25, 0x40400000u, 0LL);
          v6 = v23;
          v5 = 0LL;
        }
        else
        {
          v7 = 0;
        }
        v8 = *((_QWORD *)v4 + 1);
        v9 = v8 & 0xF;
        if ( v9 == 5 )
        {
          (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v4 + 5))(
            v6,
            *((_QWORD *)v4 + 2),
            *((_QWORD *)v4 + 3),
            *((_QWORD *)v4 + 4));
          v5 = *((_QWORD *)v4 + 5);
        }
        else
        {
          switch ( v8 & 0xF )
          {
            case 1LL:
              goto LABEL_22;
            case 2LL:
              v14 = v8 >> 7;
              v15 = *(void **)v14;
              if ( ((1 << *(_DWORD *)(v14 + 8)) & 0xA) != 0 )
              {
                if ( KiFlushPcid )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( !Process->AddressPolicy )
                  {
                    if ( (KiFlushPcid & 2) != 0 )
                    {
                      *(_QWORD *)&v24 = 1LL;
                      *((_QWORD *)&v24 + 1) = *(_QWORD *)v14;
                      _EAX = 0;
                      __asm { invpcid eax, [rsp+0A8h+var_68] }
                    }
                    else
                    {
                      KiSetUserTbFlushPending(Process, v14, 0LL);
                      v6 = v23;
                      v5 = 0LL;
                    }
                  }
                }
              }
              __invlpg(v15);
              goto LABEL_12;
            case 3LL:
              if ( !KiFlushPcid )
              {
                v22 = __readcr4();
                if ( (v22 & 0x20080) != 0 )
                {
                  __writecr4(v22 ^ 0x80);
                  __writecr4(v22);
                }
                else
                {
LABEL_22:
                  v13 = __readcr3();
                  __writecr3(v13);
                }
                goto LABEL_12;
              }
              v10 = __readcr3();
              __writecr3(v10);
              v11 = KeGetCurrentThread()->ApcState.Process;
              if ( v11->AddressPolicy )
                goto LABEL_12;
              KiSetUserTbFlushPending(v11, v8, 0LL);
              v5 = 0LL;
              break;
            case 4LL:
              v17 = v8 >> 7;
              v18 = *(_QWORD **)v17;
              v19 = *(_DWORD *)(v17 + 12);
              v20 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
              do
                KiFlushRangeTb(*v18++, v19, v5);
              while ( (unsigned __int64)v18 < v20 );
              v5 = 0LL;
              break;
            default:
              __fastfail(0x25u);
          }
        }
        v6 = v23;
LABEL_12:
        if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v4 + 6), 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 11652), 0xFFFFFFFF) == 1 )
        {
          *(_DWORD *)(v6 + 11648) = 0;
        }
        if ( v7 )
          PerfInfoLogIpiReceive(v25, v9, v5);
        SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
        result = 1;
        if ( SchedulerAssist )
          _InterlockedDecrement(SchedulerAssist + 8);
        if ( !v2 )
        {
          v2 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v2 )
            break;
        }
      }
    }
  }
  return result;
}
