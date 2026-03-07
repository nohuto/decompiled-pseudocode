__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // r12
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // r13d
  int v12; // edx
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rbx
  _BYTE *v17; // rbx
  int v18; // eax
  _QWORD *v19; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  __int64 *v30; // rax
  _QWORD *v31; // rax
  int v32; // ecx
  int v33; // eax
  _QWORD v34[5]; // [rsp+20h] [rbp-30h] BYREF
  int v35; // [rsp+48h] [rbp-8h]
  int v36; // [rsp+4Ch] [rbp-4h]
  _QWORD *v37; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  v36 = 0;
  v6 = v3 | 0x8000000000000000uLL;
  v37 = 0LL;
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
  v10 = v9;
  v11 = a3 & 0x800000;
  if ( (a3 & 0x800000) != 0 && (a3 & 0x8000000) == 0 )
    v10 = v9 | 0x10;
  v12 = v10 | 0x40;
  if ( (a3 & 0x1000000) == 0 )
    v12 = v10;
  v13 = v12 | 0x80;
  if ( (a3 & 0x2000000) == 0 )
    v13 = v12;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v25 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    v30 = (__int64 *)MiReferencePfBackedSection(v6);
    v16 = (__int64)v30;
    if ( v30 )
    {
      v14 = *v30;
      if ( !v11 || *(int *)(v14 + 56) >= 0 || !(unsigned int)MiClusterVadFull(a1, 16LL, v30) )
        goto LABEL_19;
      ++dword_140C135A8;
      v31 = (_QWORD *)MiDecrementModifiedWriteCount(v14, 0);
      if ( v31 )
        MiReleaseControlAreaWaiters(v31);
    }
    else
    {
      ++dword_140C135D0;
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  v14 = MiPreventControlAreaDeletion(a1, &BugCheckParameter2, &v37);
  if ( !v14 )
  {
    ++dword_140C135CC;
    return 0LL;
  }
  v15 = *(_QWORD *)(a1 + 16);
  if ( qword_140C657C0 && (v15 & 0x10) == 0 )
    v15 &= ~qword_140C657C0;
  v16 = v15 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(v4);
  MiReleaseControlAreaWaiters(v37);
LABEL_19:
  v35 = 0;
  v34[0] = v14;
  v34[1] = v6;
  v34[2] = v6;
  v34[3] = v16;
  v34[4] = v16;
  v17 = (_BYTE *)(a1 + 34);
  if ( !(unsigned int)MiTrimSection(v34, 0LL, 1, v13) && (*v17 & 7) != 6 )
  {
LABEL_21:
    v18 = *(_DWORD *)(v14 + 56);
    if ( (v18 & 0x20) != 0 )
    {
      ++dword_140C13534;
    }
    else if ( (v18 & 0x80u) == 0 )
    {
      ++dword_140C13540;
    }
    else
    {
      ++dword_140C13538;
    }
    v17 = (_BYTE *)(a1 + 34);
    goto LABEL_25;
  }
  v32 = MiTrimSection(v34, 0LL, 1, v13);
  if ( !v32 && (*v17 & 7) != 6 )
  {
    ++dword_140C1353C;
    goto LABEL_21;
  }
  ++dword_140C135E0;
  if ( !v32 )
    goto LABEL_21;
  v33 = *(_DWORD *)(v14 + 56);
  if ( (v33 & 0x20) != 0 )
  {
    ++dword_140C135D4;
  }
  else if ( (v33 & 0x80u) == 0 )
  {
    ++dword_140C135DC;
  }
  else
  {
    ++dword_140C135D8;
  }
LABEL_25:
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v19 = (_QWORD *)MiDecrementModifiedWriteCount(v14, 0);
  if ( v19 )
    MiReleaseControlAreaWaiters(v19);
  MiLockPageInline(a1);
  if ( (*v17 & 7) != 6 )
  {
    ++dword_140C1352C;
    return 2LL;
  }
  ++dword_140C135E4;
  return 0LL;
}
