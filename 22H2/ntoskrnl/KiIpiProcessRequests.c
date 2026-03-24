/*
 * XREFs of KiIpiProcessRequests @ 0x1402EF610
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x140405A40 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1403FEB70 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpiReceive @ 0x1405AA0D0 (PerfInfoLogIpiReceive.c)
 */

char KiIpiProcessRequests()
{
  struct _KPRCB *CurrentPrcb; // rdi
  char result; // al
  char *v2; // rbx
  __int64 v3; // rax
  char *v4; // rbp
  __int64 v5; // r10
  char v6; // r13
  __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  void **v11; // r15
  int v12; // r12d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r14
  _KPROCESS *Process; // rcx
  __int64 v16; // rax
  volatile signed __int32 *SchedulerAssist; // rcx
  _KPROCESS *v18; // rcx
  unsigned __int64 v20; // rax
  _KPROCESS *v21; // rcx
  __int64 v23; // rdx
  void *v24; // r14
  _KPROCESS *v25; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-A8h]
  __int64 v29; // [rsp+40h] [rbp-98h]
  __int64 v30; // [rsp+48h] [rbp-90h]
  unsigned __int64 v31; // [rsp+50h] [rbp-88h]
  __int128 v32; // [rsp+58h] [rbp-80h]
  __int128 v33; // [rsp+68h] [rbp-70h]
  __int128 v34; // [rsp+78h] [rbp-60h]
  _OWORD v35[2]; // [rsp+88h] [rbp-50h] BYREF

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
        v3 = v2 - (char *)CurrentPrcb - 44736;
        v4 = v2;
        v2 = *(char **)v2;
        memset(v35, 0, sizeof(v35));
        v5 = KiProcessorBlock[(unsigned int)(v3 >> 6)];
        v28 = v5;
        if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v6 = 1;
          EtwGetKernelTraceTimestamp(v35, 1077936128LL);
          v5 = v28;
        }
        else
        {
          v6 = 0;
        }
        v7 = *((_QWORD *)v4 + 1);
        v8 = v7 & 0xF;
        if ( v8 == 4 )
        {
          v10 = v7 >> 7;
          v11 = *(void ***)v10;
          v12 = (1 << *(_DWORD *)(v10 + 12)) & 0xA;
          v13 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8);
          v31 = v13;
          do
          {
            v14 = (unsigned __int64)*v11;
            if ( v12 )
            {
              if ( KiFlushPcid )
              {
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( !Process->AddressPolicy )
                {
                  if ( (KiFlushPcid & 2) != 0 )
                  {
                    *(_QWORD *)&v33 = 1LL;
                    *((_QWORD *)&v33 + 1) = *v11;
                    _EAX = 0;
                    __asm { invpcid eax, [rsp+0D8h+var_70] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending(Process, v10, v13, 0LL);
                    v13 = v31;
                  }
                }
              }
            }
            __invlpg((void *)v14);
            v16 = 4096LL << (9 * ((unsigned __int8)(v14 >> 10) & 3u));
            v10 = v14 & 0x3FF;
            v29 = v16;
            v30 = v10;
            if ( (v14 & 0x3FF) != 0 )
            {
              do
              {
                v14 += v16;
                if ( v12 && KiFlushPcid )
                {
                  v18 = KeGetCurrentThread()->ApcState.Process;
                  if ( !v18->AddressPolicy )
                  {
                    if ( (KiFlushPcid & 2) != 0 )
                    {
                      *(_QWORD *)&v34 = 1LL;
                      *((_QWORD *)&v34 + 1) = v14;
                      _EAX = 0;
                      __asm { invpcid eax, [rsp+0D8h+var_60] }
                    }
                    else
                    {
                      KiSetUserTbFlushPending(v18, v10, v13, 0LL);
                      v10 = v30;
                    }
                  }
                  v16 = v29;
                }
                __invlpg((void *)v14);
                v30 = --v10;
              }
              while ( v10 );
              v13 = v31;
            }
            ++v11;
          }
          while ( (unsigned __int64)v11 < v13 );
        }
        else
        {
          switch ( v7 & 0xF )
          {
            case 1LL:
              goto LABEL_7;
            case 2LL:
              v23 = v7 >> 7;
              v24 = *(void **)v23;
              if ( ((1 << *(_DWORD *)(v23 + 8)) & 0xA) == 0 )
                goto LABEL_39;
              if ( !KiFlushPcid )
                goto LABEL_39;
              v25 = KeGetCurrentThread()->ApcState.Process;
              if ( v25->AddressPolicy )
                goto LABEL_39;
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v32 = 1LL;
                *((_QWORD *)&v32 + 1) = *(_QWORD *)v23;
                _EAX = 0;
                __asm { invpcid eax, [rsp+0D8h+var_80] }
                __invlpg(v24);
              }
              else
              {
                KiSetUserTbFlushPending(v25, v23, 0LL, 0LL);
                v5 = v28;
LABEL_39:
                __invlpg(v24);
              }
              goto LABEL_15;
            case 3LL:
              if ( !KiFlushPcid )
              {
                v27 = __readcr4();
                if ( (v27 & 0x20080) != 0 )
                {
                  __writecr4(v27 ^ 0x80);
                  __writecr4(v27);
                }
                else
                {
LABEL_7:
                  v9 = __readcr3();
                  __writecr3(v9);
                }
                goto LABEL_15;
              }
              v20 = __readcr3();
              __writecr3(v20);
              v21 = KeGetCurrentThread()->ApcState.Process;
              if ( v21->AddressPolicy )
                goto LABEL_15;
              KiSetUserTbFlushPending(v21, v7, 0LL, 0LL);
              break;
            default:
              __fastfail(0x25u);
          }
        }
        v5 = v28;
LABEL_15:
        if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v4 + 6), 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 11652), 0xFFFFFFFF) == 1 )
        {
          *(_DWORD *)(v5 + 11648) = 0;
        }
        if ( v6 )
          PerfInfoLogIpiReceive(v35, v8, 0LL);
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
