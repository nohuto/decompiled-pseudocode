__int64 __fastcall EmonAddProfileSource(unsigned __int8 *a1, _DWORD *a2)
{
  const wchar_t *v2; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  wchar_t *v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  bool v25; // zf
  __int64 *v26; // rsi
  unsigned __int16 v27; // r9
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r11
  _DWORD *v31; // r9
  int v32; // edx
  __int64 v33; // rcx
  __int64 *v34; // [rsp+50h] [rbp+8h] BYREF

  v2 = (const wchar_t *)(a1 + 280);
  v34 = 0LL;
  v5 = -1073741823;
  v6 = wcsnlen((const wchar_t *)a1 + 140, 0xFEuLL) + 1;
  v8 = (wchar_t *)HalpMmAllocCtxAlloc(v7, 2 * v6);
  v9 = (__int64)v8;
  if ( !v8 )
    return 3221225495LL;
  wcsncpy_s(v8, v6, v2, v6);
  v12 = (void *)HalpMmAllocCtxAlloc(v11, 320LL);
  v14 = (__int64)v12;
  if ( !v12 )
  {
    HalpMmAllocCtxFree(v13, v9);
    return 3221225495LL;
  }
  memset(v12, 0, 0x140uLL);
  v15 = 0x7FFFFFFF;
  *(_BYTE *)(v14 + 28) = 1;
  v16 = *((_DWORD *)a1 + 2);
  *(_DWORD *)(v14 + 24) = v16;
  if ( v16 <= 0x7FFFFFFF )
  {
    v15 = v16;
    if ( v16 < 0x1000 )
      v15 = 4096;
  }
  *(_DWORD *)(v14 + 24) = v15;
  *(_BYTE *)(v14 + 29) = 0;
  v17 = *a1;
  v18 = a1[1] | ((a1[5] & 1 | (8 * (a1[4] & 1 | (4 * (a1[3] & 1 | (2 * (a1[2] & 0xF))))))) << 10) | 0x300;
  *(_DWORD *)(v14 + 312) = 37;
  *(_DWORD *)(v14 + 304) = v17 | (v18 << 8);
  *(_QWORD *)(v14 + 32) = 2097153LL;
  memset((void *)(v14 + 40), 0, 0x100uLL);
  KiCopyAffinityEx(v14 + 32, *(_WORD *)(v14 + 34), (unsigned __int16 *)a1 + 8);
  *(_QWORD *)(v14 + 296) = v9;
  v19 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  if ( HalpInsertProfileSource(v14, v20, 37, &v34) )
  {
    ++HalpProfileSourceDescriptorCount;
    if ( a2 )
      *a2 = *(_DWORD *)v14;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v19);
    return 0LL;
  }
  else
  {
    v26 = v34;
    if ( v34 && *((_DWORD *)v34 + 76) == *(_DWORD *)(v14 + 304) )
    {
      v27 = 0;
      if ( v34 != (__int64 *)-32LL )
        v27 = *((_WORD *)v34 + 17);
      KiOrAffinityEx((char *)v34 + 32, (_WORD *)(v14 + 32), (_BYTE *)v34 + 32, v27);
      if ( a2 )
        *a2 = *(_DWORD *)v26;
      v5 = 0;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    v28 = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v28 = (unsigned int)(v19 + 1);
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v25 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    __writecr8(v19);
    HalpMmAllocCtxFree(v28, *(_QWORD *)(v14 + 296));
    HalpMmAllocCtxFree(v33, v14);
    return v5;
  }
}
