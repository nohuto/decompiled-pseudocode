/*
 * XREFs of FsRtlReleaseEofLock @ 0x1402C3460
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140239650 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x140240EF0 (FsRtlReleaseHeaderMutex.c)
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r15
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // bp
  bool v13; // zf
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  int v16; // ecx
  ULONG_PTR v17; // rbx
  unsigned __int64 v18; // rdi
  signed __int32 v19; // eax
  _QWORD *v20; // rbx
  _QWORD *result; // rax
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // r8
  _QWORD *v27; // r8
  _QWORD *v28; // rcx
  _QWORD *v29; // r8
  _QWORD *v30; // r8
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  _QWORD *v35; // [rsp+38h] [rbp-60h] BYREF
  _QWORD **v36; // [rsp+40h] [rbp-58h]
  unsigned int v37; // [rsp+A0h] [rbp+8h]
  int v39; // [rsp+B0h] [rbp+18h] BYREF
  volatile signed __int32 *v40; // [rsp+B8h] [rbp+20h]

  v40 = a2;
  v39 = 0;
  v36 = &v35;
  v35 = &v35;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), CurrentThread)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v37 = v8;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v22 = *SchedulerAssist;
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange(SchedulerAssist, v22 & 0xFFDFFFFF, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (__int64)(&CurrentThread[1].Process + 12 * v37);
    if ( (unsigned __int64)(v6 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
    ExpAcquireFastMutexContended(v6, v5);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v6 + 48) = CurrentIrql;
  if ( v40 )
    _InterlockedIncrement(v40);
  v13 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v13 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, a2);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)a1, 1, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v15 = *(_QWORD **)(a1 + 8);
  if ( v15 == (_QWORD *)(a1 + 8) )
    goto LABEL_16;
  do
  {
    v24 = v15;
    v15 = (_QWORD *)*v15;
    v25 = v24[5];
    if ( v25 < 0 || v25 > v14 )
    {
      if ( !v3 )
      {
        v26 = (_QWORD *)v24[1];
        if ( (_QWORD *)v15[1] != v24 )
          goto LABEL_44;
        if ( (_QWORD *)*v26 != v24 )
          goto LABEL_44;
        *v26 = v15;
        v15[1] = v26;
        v27 = v35;
        if ( (_QWORD **)v35[1] != &v35 )
          goto LABEL_44;
        *v24 = v35;
        v24[1] = &v35;
        v3 = v24;
        v27[1] = v24;
        v35 = v24;
      }
    }
    else
    {
      v29 = (_QWORD *)v24[1];
      if ( (_QWORD *)v15[1] != v24 || (_QWORD *)*v29 != v24 || (*v29 = v15, v15[1] = v29, v30 = v36, *v36 != &v35) )
LABEL_44:
        __fastfail(3u);
      v24[1] = v36;
      *v24 = &v35;
      *v30 = v24;
      v36 = (_QWORD **)v24;
    }
  }
  while ( v15 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_16:
    *(_QWORD *)a1 = 0LL;
    v16 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v16 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v16;
  if ( a2 )
    _InterlockedIncrement(a2);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v18 = *(unsigned __int8 *)(v17 + 48);
  *(_QWORD *)(v17 + 8) = 0LL;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
  if ( v19 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v17, v19);
  if ( KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v31 >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
      v13 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8(v18);
  KeAbPostRelease(v17);
  v20 = v35;
  for ( result = &v35; v20 != &v35; result = &v35 )
  {
    v28 = v20;
    v20 = (_QWORD *)*v20;
    v39 = *((_DWORD *)v28 + 14);
    KeSetEventBoostPriorityEx((__int64)(v28 + 2), 0LL, &v39, 0LL, 1, 0);
  }
  return result;
}
