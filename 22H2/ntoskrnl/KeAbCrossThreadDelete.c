/*
 * XREFs of KeAbCrossThreadDelete @ 0x140520DB8
 * Callers:
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     KiAcquireThreadStateLock @ 0x1402308B0 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     MmIsSessionAddress @ 0x1402C9800 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x14035B9E0 (KiReleaseThreadStateLock.c)
 *     KeGenericCallDpc @ 0x14035E460 (KeGenericCallDpc.c)
 *     KiAbCrossThreadRelease @ 0x14038E150 (KiAbCrossThreadRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

char __fastcall KeAbCrossThreadDelete(unsigned __int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdi
  __int64 SessionId; // r9
  __int64 SchedulerAssist; // r8
  __m128i *v9; // r14
  __int64 v10; // rdx
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  __int64 v13; // rcx
  __int128 v14; // rt0
  unsigned __int8 v15; // tt
  bool v16; // zf
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r12d
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r8
  _DWORD *v28; // rbx
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r8
  _DWORD *v32; // rbx
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r8
  _DWORD *v36; // rbx
  int v37; // eax
  signed __int32 v39[8]; // [rsp+0h] [rbp-99h] BYREF
  __int64 v40; // [rsp+30h] [rbp-69h] BYREF
  __int128 v41; // [rsp+40h] [rbp-59h]
  __int128 Object; // [rsp+50h] [rbp-49h] BYREF
  __int128 v43; // [rsp+60h] [rbp-39h]
  __int128 v44; // [rsp+70h] [rbp-29h]
  ULONG_PTR BugCheckParameter2[14]; // [rsp+80h] [rbp-19h] BYREF
  int v46; // [rsp+110h] [rbp+77h] BYREF
  volatile signed __int64 *v47; // [rsp+118h] [rbp+7Fh] BYREF

  Object = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(BugCheckParameter2, 0, 0x40uLL);
  LODWORD(v4) = *(char *)(a2 + 792);
  v5 = v4 | *(char *)(a2 + 870);
  v40 = 0LL;
  v47 = 0LL;
  if ( v5 != 63 )
  {
    v6 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    if ( MmIsSessionAddress(a1) )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    LODWORD(v4) = *(char *)(a2 + 792);
    LODWORD(SchedulerAssist) = (v4 | *(char *)(a2 + 870)) ^ 0x3F;
    while ( 1 )
    {
      v16 = !_BitScanReverse((unsigned int *)&v17, SchedulerAssist);
      if ( v16 )
        return v4;
      v9 = (__m128i *)(*(_QWORD *)(a2 + 800) + 96 * v17);
      SchedulerAssist = ~(1 << v17) & (unsigned int)SchedulerAssist;
      v4 = v9[2].m128i_i64[0] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v4 == v6 )
      {
        *(_QWORD *)&v11 = v9[2].m128i_i64[0];
        *((_QWORD *)&v11 + 1) = _mm_srli_si128(v9[2], 8).m128i_u64[0];
        v12 = _InterlockedCompareExchange128(
                v9[2].m128i_i64,
                *((signed __int64 *)&v11 + 1),
                v11,
                (signed __int64 *)&v11);
        LOBYTE(v4) = v11;
        v10 = *((_QWORD *)&v11 + 1);
        v13 = v11;
        v41 = v11;
        if ( v12
          || (*(_QWORD *)&v14 = v9[2].m128i_i64[0],
              *((_QWORD *)&v14 + 1) = _mm_srli_si128(v9[2], 8).m128i_u64[0],
              v15 = _InterlockedCompareExchange128(
                      v9[2].m128i_i64,
                      *((signed __int64 *)&v14 + 1),
                      v14,
                      (signed __int64 *)&v14),
              LOBYTE(v4) = v14,
              v10 = *((_QWORD *)&v14 + 1),
              v13 = v14,
              v41 = v14,
              v15) )
        {
          if ( (v9[1].m128i_i8[10] & 1) != 0 )
          {
            LOBYTE(v4) = v13 & 0xFC;
            if ( (v13 & 0x7FFFFFFFFFFFFFFCLL) == v6 && (_DWORD)v10 == (_DWORD)SessionId )
              break;
          }
        }
      }
    }
    if ( v13 >= 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
        *(_DWORD *)(SchedulerAssist + 20) |= v10;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v20 = CurrentPrcb->SchedulerAssist;
        if ( v20 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v21 = v20[6];
            v20[6] = v21 + 1;
            if ( v21 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
          break;
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = v22[6] - 1;
            v22[6] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v46, v10, SchedulerAssist, SessionId);
        while ( *(_QWORD *)(a2 + 64) );
      }
      if ( (unsigned __int8)KiAcquireThreadStateLock(a2, &v40, (volatile signed __int32 **)&v47) == 2 )
      {
        v25 = *(_DWORD *)(a2 + 536);
        KiReleaseThreadStateLock(v24, v40, v47);
        KiReleaseThreadLockSafe(a2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v26 = KeGetCurrentIrql();
            if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = v27->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v29 & v28[5]) == 0;
              v28[5] &= v29;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v27);
            }
          }
        }
        __writecr8(CurrentIrql);
        BugCheckParameter2[7] = 0LL;
        *(_QWORD *)&v43 = (char *)&Object + 8;
        *((_QWORD *)&Object + 1) = (char *)&Object + 8;
        BugCheckParameter2[3] = (ULONG_PTR)&KeAbCrossThreadDeleteDpcRoutine;
        BugCheckParameter2[4] = (ULONG_PTR)&Object;
        *((_QWORD *)&v43 + 1) = a1;
        *(_QWORD *)&v44 = v9;
        *((_QWORD *)&v44 + 1) = a2;
        LOWORD(Object) = 1;
        BYTE2(Object) = 6;
        DWORD1(Object) = 0;
        LOWORD(BugCheckParameter2[0]) = 275;
        BugCheckParameter2[2] = 0LL;
        WORD1(BugCheckParameter2[0]) = v25 + 1280;
        KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        goto LABEL_58;
      }
      if ( *(_BYTE *)(a2 + 113) )
      {
        KiReleaseThreadStateLock(v24, v40, v47);
        KiReleaseThreadLockSafe(a2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = v35->SchedulerAssist;
              v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v37 & v36[5]) == 0;
              v36[5] &= v37;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v35);
            }
          }
        }
        __writecr8(CurrentIrql);
        KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
      }
      else
      {
        KiReleaseThreadStateLock(v24, v40, v47);
        KiReleaseThreadLockSafe(a2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v31);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    v9[2].m128i_i8[0] |= 1u;
LABEL_58:
    _InterlockedOr(v39, 0);
    LOBYTE(v4) = KiAbCrossThreadRelease(a1, (__int64)v9, a2);
  }
  return v4;
}
