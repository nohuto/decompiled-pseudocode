/*
 * XREFs of Amd64AddProfileSource @ 0x1405263A0
 * Callers:
 *     <none>
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     wcsnlen @ 0x1403D5F60 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403DA3B0 (wcsncpy_s.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpInsertProfileSource @ 0x14050584C (HalpInsertProfileSource.c)
 *     Amd64GetEventSelectDef @ 0x140526F90 (Amd64GetEventSelectDef.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall Amd64AddProfileSource(__int64 a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r15d
  const wchar_t *v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rcx
  wchar_t *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  __int64 *v25; // rsi
  unsigned __int16 v26; // r9
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r11
  _DWORD *v30; // r9
  int v31; // edx
  __int64 v32; // rcx
  __int64 *v33; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 7);
  v33 = 0LL;
  v5 = -1073741823;
  if ( v3 == 1 && (Amd64PerfFeatures & 2) == 0 || v3 == 2 && (Amd64PerfFeatures & 4) == 0 || (unsigned __int8)v3 >= 3u )
    return 3221225659LL;
  v7 = (const wchar_t *)(a1 + 280);
  v8 = wcsnlen((const wchar_t *)(a1 + 280), 0xFEuLL) + 1;
  v10 = (wchar_t *)HalpMmAllocCtxAlloc(v9, 2 * v8);
  v11 = (__int64)v10;
  if ( !v10 )
    return 3221225495LL;
  wcsncpy_s(v10, v8, v7, v8);
  v13 = (void *)HalpMmAllocCtxAlloc(v12, 320LL);
  v15 = (__int64)v13;
  if ( !v13 )
  {
    HalpMmAllocCtxFree(v14, v11);
    return 3221225495LL;
  }
  memset(v13, 0, 0x140uLL);
  v16 = 0x7FFFFFFF;
  *(_BYTE *)(v15 + 28) = 1;
  v17 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v15 + 24) = v17;
  if ( v17 <= 0x7FFFFFFF )
  {
    v16 = v17;
    if ( v17 < 0x1000 )
      v16 = 4096;
  }
  *(_DWORD *)(v15 + 24) = v16;
  *(_BYTE *)(v15 + 29) = 0;
  *(_QWORD *)(v15 + 304) = Amd64GetEventSelectDef(a1);
  *(_DWORD *)(v15 + 316) = 1;
  *(_DWORD *)(v15 + 312) = *(unsigned __int8 *)(a1 + 7);
  *(_QWORD *)(v15 + 32) = 2097153LL;
  memset((void *)(v15 + 40), 0, 0x100uLL);
  KiCopyAffinityEx(v15 + 32, *(_WORD *)(v15 + 34), (unsigned __int16 *)(a1 + 16));
  *(_QWORD *)(v15 + 296) = v11;
  v18 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  if ( HalpInsertProfileSource(v15, v19, 34, &v33) )
  {
    ++HalpProfileSourceDescriptorCount;
    if ( a2 )
      *a2 = *(_DWORD *)v15;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v18);
    return 0LL;
  }
  else
  {
    v25 = v33;
    if ( v33 && v33[38] == *(_QWORD *)(v15 + 304) )
    {
      v26 = 0;
      if ( v33 != (__int64 *)-32LL )
        v26 = *((_WORD *)v33 + 17);
      KiOrAffinityEx((char *)v33 + 32, (_WORD *)(v15 + 32), (_BYTE *)v33 + 32, v26);
      if ( a2 )
        *a2 = *(_DWORD *)v25;
      v5 = 0;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    v27 = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v27 = (unsigned int)(v18 + 1);
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v24 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v18);
    HalpMmAllocCtxFree(v27, *(_QWORD *)(v15 + 296));
    HalpMmAllocCtxFree(v32, v15);
    return v5;
  }
}
