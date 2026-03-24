/*
 * XREFs of MiTrimSharedPage @ 0x14026F088
 * Callers:
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541648 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiTrimSection @ 0x14026FD60 (MiTrimSection.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiReleaseControlAreaWaiters @ 0x1402D7A34 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1402D7BB8 (MiDecrementModifiedWriteCount.c)
 *     MiReferencePfBackedSection @ 0x14031E588 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x14031E7D0 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x140325E50 (MiDecrementSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadFull @ 0x1405557A8 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // r15
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // r13d
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v31; // eax
  __int64 v32; // rax
  _QWORD v33[5]; // [rsp+20h] [rbp-30h] BYREF
  int v34; // [rsp+48h] [rbp-8h]
  int v35; // [rsp+4Ch] [rbp-4h]
  __int64 v36; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  v35 = 0;
  v6 = v3 | 0x8000000000000000uLL;
  v36 = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = (a3 >> 18) & 1 | 2;
  if ( (a3 & 0x80000) == 0 )
    v7 = (a3 >> 18) & 1;
  v8 = v7 | 4;
  if ( (a3 & 0x20000) == 0 )
    v8 = v7;
  v9 = v8 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x10;
  v11 = a3 & 0x800000;
  if ( (a3 & 0x800000) == 0 )
    v10 = v9;
  v12 = v10 | 0x40;
  if ( (a3 & 0x3000000) == 0 )
    v12 = v10;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v27 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    v20 = (__int64 *)MiReferencePfBackedSection(v6);
    v15 = (__int64)v20;
    if ( v20 )
    {
      v13 = *v20;
      if ( !v11 || *(int *)(v13 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v20) != 1 )
        goto LABEL_18;
      v32 = MiDecrementModifiedWriteCount(v13, 0LL);
      if ( v32 )
        MiReleaseControlAreaWaiters(v32);
    }
    MiLockPageInline(a1, v21, v22);
    return 0LL;
  }
  v13 = MiPreventControlAreaDeletion(a1, 0LL, &BugCheckParameter2, &v36);
  if ( !v13 )
    return 0LL;
  v14 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DF40 && (v14 & 0x10) == 0 )
    v14 &= ~qword_140C4DF40;
  v15 = v14 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v27 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(v4);
  MiReleaseControlAreaWaiters(v36);
LABEL_18:
  v34 = 0;
  v33[0] = v13;
  v33[1] = v6;
  v33[2] = v6;
  v33[3] = v15;
  v33[4] = v15;
  if ( (unsigned int)MiTrimSection(v33, 1LL, v12) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v33, 1LL, v12);
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v16 = MiDecrementModifiedWriteCount(v13, 0LL);
  if ( v16 )
    MiReleaseControlAreaWaiters(v16);
  MiLockPageInline(a1, v17, v18);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    return 2LL;
  return 0LL;
}
