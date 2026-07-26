/*
 * XREFs of ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C011CB70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0015590 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     WPP_RECORDER_SF_qddqqS @ 0x1C007F9DC (WPP_RECORDER_SF_qddqqS.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FEEC0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FF390 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C011A390 (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NdisPDPISetReceiveFilter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_FILTER_PARAMETERS *a2,
        struct NDIS_PD_FILTER_HANDLE__ **a3)
{
  struct NDIS_PD_FILTER_HANDLE__ *v4; // rbx
  const wchar_t *v7; // r9
  int v8; // edi
  _NDIS_PD_QUEUE *TargetReceiveQueue; // rax
  _DWORD *v10; // r13
  NDIS_PD_COUNTER_HANDLE__ *CounterHandle; // rbp
  struct NDIS_PD_FILTER_HANDLE__ *PoolWithTag; // rax
  unsigned __int64 v13; // rcx
  unsigned int HeaderGroupMatchArrayTotalSize; // eax
  size_t v15; // rdi
  PVOID v16; // rax
  int v17; // eax
  struct NDIS_PD_FILTER_HANDLE__ **v18; // rcx
  _QWORD *v19; // rax
  void **v20; // rdx
  NDIS_PD_COUNTER_HANDLE__ **v21; // rdx
  NDIS_PD_COUNTER_HANDLE__ *v22; // rax
  int v24; // [rsp+20h] [rbp-88h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  KLockHolder v26; // [rsp+60h] [rbp-48h] BYREF

  v4 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v7 = L" ";
    WPP_RECORDER_SF_qddqqS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      (__int64)v7,
      v24,
      (char)a1,
      a2->MatchProfileId,
      a2->Priority,
      (char)a2->TargetReceiveQueue,
      (char)a2->CounterHandle,
      v7);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, struct NDIS_PD_FILTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 64LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v8 >= 0 )
      *((_QWORD *)*a3 + 3) = a1;
    goto LABEL_44;
  }
  *a3 = 0LL;
  if ( a2->Header.Type == 0x80 && a2->Header.Revision == 1 && a2->Header.Size >= 0x3Cu && !a2->Flags )
  {
    if ( a2->MatchProfileId )
    {
      TargetReceiveQueue = a2->TargetReceiveQueue;
      if ( TargetReceiveQueue )
      {
        v10 = TargetReceiveQueue->PDPlatformReserved[1];
        CounterHandle = a2->CounterHandle;
        if ( v10[38] != 1 || CounterHandle && *((_DWORD *)CounterHandle + 14) != 3 )
        {
          v8 = -1073741811;
          goto LABEL_44;
        }
        PoolWithTag = (struct NDIS_PD_FILTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6641444Eu);
        v4 = PoolWithTag;
        if ( PoolWithTag )
        {
          *((_QWORD *)PoolWithTag + 2) = 0LL;
          *((_QWORD *)PoolWithTag + 3) = 0LL;
          *((_QWORD *)PoolWithTag + 4) = 0LL;
          *((_QWORD *)PoolWithTag + 5) = 0LL;
          *((_QWORD *)PoolWithTag + 8) = 0LL;
          *((_QWORD *)PoolWithTag + 11) = 0LL;
          *((_QWORD *)PoolWithTag + 12) = 0LL;
          *((_QWORD *)PoolWithTag + 13) = 0LL;
          *((_QWORD *)PoolWithTag + 14) = 0LL;
          *((_DWORD *)PoolWithTag + 30) = 0;
          *((_QWORD *)PoolWithTag + 1) = 0LL;
          *(_QWORD *)PoolWithTag = 0LL;
          *((_QWORD *)PoolWithTag + 7) = 0LL;
          *((_QWORD *)PoolWithTag + 6) = 0LL;
          *((_QWORD *)PoolWithTag + 10) = 0LL;
          *((_QWORD *)PoolWithTag + 9) = 0LL;
        }
        else
        {
          v4 = 0LL;
        }
        if ( !v4 )
        {
          v8 = -1073741670;
          goto LABEL_44;
        }
        v13 = a2->HeaderGroupMatchArrayNumElements * (unsigned __int64)a2->HeaderGroupMatchArrayElementSize;
        if ( v13 <= 0xFFFFFFFF )
        {
          HeaderGroupMatchArrayTotalSize = a2->HeaderGroupMatchArrayTotalSize;
          if ( (unsigned int)v13 <= HeaderGroupMatchArrayTotalSize )
          {
            if ( HeaderGroupMatchArrayTotalSize )
            {
              v15 = HeaderGroupMatchArrayTotalSize;
              v16 = ExAllocatePoolWithTag(NonPagedPoolNx, HeaderGroupMatchArrayTotalSize, 0x6641444Eu);
              *((_QWORD *)v4 + 13) = v16;
              if ( !v16 )
              {
                v8 = -1073741670;
                goto LABEL_42;
              }
              *(_DWORD *)(v4 + 28) = a2->HeaderGroupMatchArrayNumElements;
              *(_DWORD *)(v4 + 29) = a2->HeaderGroupMatchArrayElementSize;
              *(_DWORD *)(v4 + 30) = a2->HeaderGroupMatchArrayTotalSize;
              memmove(v16, a2->HeaderGroupMatchArray, v15);
            }
            if ( CounterHandle )
              a2->CounterHandle = (NDIS_PD_COUNTER_HANDLE__ *)*((_QWORD *)CounterHandle + 6);
            v17 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, struct NDIS_PD_FILTER_HANDLE__ *))(*((_QWORD *)a1 + 10) + 64LL))(
                    *((_QWORD *)a1 + 9),
                    a2,
                    v4 + 8);
            v8 = v17;
            if ( CounterHandle )
              a2->CounterHandle = CounterHandle;
            if ( v17 < 0 )
              goto LABEL_42;
            *((_QWORD *)v4 + 2) = a1;
            *(_DWORD *)(v4 + 22) = a2->MatchProfileId;
            *(_DWORD *)(v4 + 23) = a2->Priority;
            *((_QWORD *)v4 + 12) = a2->RxFilterContext;
            v26.m_Lock = (KPushLockBase *)qword_1C00E5528;
            v26.m_State = Unlocked;
            v26.m_Region.m_Entered = 0;
            KLockHolder::AcquireExclusive(&v26);
            v18 = (struct NDIS_PD_FILTER_HANDLE__ **)*((_QWORD *)a1 + 23);
            if ( *v18 == (struct NDIS_PD_FILTER_HANDLE__ *)(a1 + 44) )
            {
              *(_QWORD *)v4 = a1 + 44;
              *((_QWORD *)v4 + 1) = v18;
              *v18 = v4;
              *((_QWORD *)a1 + 23) = v4;
              v19 = v4 + 18;
              v20 = (void **)*((_QWORD *)v10 + 27);
              if ( *v20 == v10 + 52 )
              {
                *v19 = v10 + 52;
                *((_QWORD *)v4 + 10) = v20;
                *v20 = v19;
                *((_QWORD *)v10 + 27) = v19;
                if ( !CounterHandle )
                {
LABEL_39:
                  KLockHolder::~KLockHolder(&v26);
                  *a3 = v4;
                  goto LABEL_44;
                }
                *((_QWORD *)v4 + 5) = CounterHandle;
                v21 = (NDIS_PD_COUNTER_HANDLE__ **)*((_QWORD *)CounterHandle + 10);
                v22 = (NDIS_PD_COUNTER_HANDLE__ *)(v4 + 12);
                if ( *v21 == CounterHandle + 18 )
                {
                  *(_QWORD *)v22 = CounterHandle + 18;
                  *((_QWORD *)v4 + 7) = v21;
                  *v21 = v22;
                  *((_QWORD *)CounterHandle + 10) = v22;
                  ++*((_DWORD *)CounterHandle + 22);
                  goto LABEL_39;
                }
              }
            }
            __fastfail(3u);
          }
        }
      }
    }
  }
  v8 = -1073741811;
LABEL_42:
  if ( v4 )
    NDIS_PD_FILTER::`scalar deleting destructor'(v4);
LABEL_44:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v8;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x31u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      (char)*a3,
      v25);
  }
  return (unsigned int)v8;
}
