__int64 __fastcall KasanDriverLoadImage(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  _DWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rsi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 Pool2; // rax
  unsigned __int64 v19; // r13
  ULONG_PTR *v20; // r14
  ULONG_PTR v21; // r8
  unsigned __int64 v22; // rdx
  ULONG_PTR v23; // rcx
  ULONG_PTR v24; // r15
  ULONG_PTR v25; // r9
  _BYTE *v26; // rdi
  ULONG_PTR v27; // rbp
  size_t v28; // rbp
  ULONG_PTR v29; // rax
  unsigned __int64 v30; // rbp
  _BOOL8 v31; // r8
  __int64 v32; // rdi
  int v33; // esi
  __int64 v34; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v41; // [rsp+70h] [rbp+8h]
  ULONG_PTR *v42; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 48);
  v4 = v2 + *(unsigned int *)(a1 + 152);
  if ( v2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  if ( *(_WORD *)v2 != 23117 )
    return 0LL;
  v5 = (_DWORD *)(v2 + *(unsigned int *)(v2 + 60));
  if ( (unsigned __int64)v5 < v2
    || v2 <= 0x7FFFFFFEFFFFLL && ((_DWORD *)((char *)v5 + 263) < v5 || (unsigned __int64)v5 + 263 > 0x7FFFFFFEFFFFLL) )
  {
    return 0LL;
  }
  if ( *v5 != 17744 )
    return 0LL;
  if ( !v5 )
    return 0LL;
  v6 = RtlLookupImageSectionByName(v5, "KASAN");
  if ( !v6 )
    return 0LL;
  v8 = v2 + *(unsigned int *)(v6 + 12);
  if ( !v8 )
    return 0LL;
  if ( !KasaniEnabled || *(_DWORD *)(v6 + 8) != 32 || *(_DWORD *)v8 != 1 )
    return 3221225473LL;
  **(_QWORD **)(v8 + 8) = KasaniShadow - 0x1FFFF00000000000LL;
  if ( !a2 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 24);
  v10 = *(_QWORD *)(v8 + 16);
  if ( v9 < v10 || (v10 & 0x3F) != 0 || (v9 & 0x3F) != 0 || v10 < v2 || v10 >= v4 || v9 < v2 || v9 > v4 )
    return 3221225473LL;
  v11 = v10 + 64;
  v12 = 0LL;
  v13 = (__int64)(v9 - (v10 + 64)) >> 6;
  if ( v13 )
  {
    v14 = (unsigned __int64 *)(v10 + 80);
    do
    {
      v15 = *v14;
      if ( !*v14 )
        return 3221225473LL;
      if ( *(v14 - 1) > v15 )
        return 3221225473LL;
      v16 = *(v14 - 2);
      if ( v16 < v2 || v16 >= v4 )
        return 3221225473LL;
      if ( v16 + v15 < v16 )
        return 3221225621LL;
      if ( v16 + v15 > v4 )
        return 3221225473LL;
      ++v12;
      v14 += 8;
    }
    while ( v12 < v13 );
  }
  v17 = 16 * v13;
  if ( !is_mul_ok(v13, 0x10uLL) || v17 + 40 < v17 )
    return 3221225621LL;
  Pool2 = ExAllocatePool2(64LL, v17 + 40, 1851089227LL);
  v19 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 24) = v2;
  *(_QWORD *)(Pool2 + 32) = v13;
  v41 = 0LL;
  if ( v13 )
  {
    v42 = (ULONG_PTR *)(Pool2 + 48);
    v20 = (ULONG_PTR *)(v11 + 16);
    do
    {
      v21 = *v20;
      v22 = *(v20 - 2);
      if ( KasaniEnabled && v21 && v22 >= 0xFFFF800000000000uLL && v22 + v21 >= v22 )
        MiMakeZeroedPageTablesEx(
          (((KasaniShadow + ((v22 + 0x800000000000LL) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          (((KasaniShadow + ((7LL - (((_BYTE)v21 - 1) & 7) + v21 + v22 + 0x7FFFFFFFFFFFLL) >> 3)) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL,
          560,
          17,
          0);
      v23 = *v20;
      v24 = *(v20 - 1);
      v25 = *(v20 - 2);
      if ( KasaniEnabled )
      {
        if ( v25 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v25, 0LL);
        if ( (v25 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v25, 8uLL);
        if ( v24 > v23 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v24, *v20);
        if ( v25 + v23 < v25 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v25, *v20);
        v26 = (_BYTE *)(KasaniShadow + ((v25 + 0x800000000000LL) >> 3));
        v27 = v23 + (((_BYTE)v24 - 1) & 7) - (unsigned __int64)(((_BYTE)v23 - 1) & 7) - v24;
        if ( v24 >> 3 )
        {
          memset((void *)(KasaniShadow + ((v25 + 0x800000000000LL) >> 3)), 0, v24 >> 3);
          v26 += v24 >> 3;
        }
        if ( (v24 & 7) != 0 )
          *v26++ = v24 & 7;
        v28 = v27 >> 3;
        if ( v28 )
        {
          LOBYTE(v22) = -124;
          memset(v26, v22, v28);
        }
      }
      *(v42 - 1) = *(v20 - 2);
      v29 = *v20;
      v20 += 8;
      *v42 = v29;
      ++v41;
      v42 += 2;
    }
    while ( v41 < v13 );
  }
  v30 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
  if ( (qword_140D18210 & 1) != 0 )
  {
    if ( KasanDriverUnloadInfos )
      v32 = KasanDriverUnloadInfos ^ (unsigned __int64)&KasanDriverUnloadInfos;
    else
      v32 = 0LL;
  }
  else
  {
    v32 = KasanDriverUnloadInfos;
  }
  LOBYTE(v31) = 0;
  v33 = qword_140D18210 & 1;
  if ( v32 )
  {
    while ( 1 )
    {
      if ( (int)KasanUnloadInfoCompare(v2, v32, v31) < 0 )
      {
        v34 = *(_QWORD *)v32;
        if ( v33 )
        {
          if ( !v34 )
            goto LABEL_79;
          v34 ^= v32;
        }
        if ( !v34 )
        {
LABEL_79:
          LOBYTE(v31) = 0;
          break;
        }
      }
      else
      {
        v34 = *(_QWORD *)(v32 + 8);
        if ( v33 )
        {
          if ( !v34 )
            goto LABEL_73;
          v34 ^= v32;
        }
        if ( !v34 )
        {
LABEL_73:
          LOBYTE(v31) = 1;
          break;
        }
      }
      v32 = v34;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&KasanDriverUnloadInfos, v32, v31, v19);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KasanDriverUnloadInfosLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&KasanDriverUnloadInfosLock, 0LL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v30 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
      v39 = (v38 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v38;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v30);
  return 0LL;
}
