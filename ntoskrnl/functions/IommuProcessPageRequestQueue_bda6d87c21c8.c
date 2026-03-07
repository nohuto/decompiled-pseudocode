char __fastcall IommuProcessPageRequestQueue(unsigned int a1)
{
  _QWORD *v1; // r13
  _QWORD *BugCheckParameter4; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rsi
  ULONG_PTR v5; // r15
  KSPIN_LOCK *v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rsi
  unsigned __int8 v14; // di
  _DWORD *v15; // r9
  __int64 v16; // rdx
  _QWORD *i; // rax
  _QWORD *v18; // r8
  _QWORD *j; // rdx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  unsigned int v32; // edx
  int v33; // edx
  int v34; // r12d
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  int v39; // eax
  int v40; // r14d
  unsigned __int64 v41; // r12
  __int64 v42; // rdx
  int v43; // eax
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  int v50; // eax
  _DWORD *v51; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-20h] BYREF
  __int64 v54; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR v55; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v56; // [rsp+58h] [rbp-8h]
  char v57; // [rsp+A8h] [rbp+48h]
  unsigned __int16 v58; // [rsp+B0h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+58h] BYREF

  v1 = 0LL;
  LODWORD(BugCheckParameter3) = 0;
  v55 = 0LL;
  v54 = 0LL;
  v58 = 0;
  if ( HalpHvIommu )
  {
    BugCheckParameter4 = (_QWORD *)(IommupHvPageRequestQueues + ((unsigned __int64)a1 << 6));
    v4 = BugCheckParameter4;
    v5 = (ULONG_PTR)(BugCheckParameter4 + 3);
  }
  else
  {
    BugCheckParameter4 = (_QWORD *)HalpIommuList;
    if ( a1 )
    {
      v3 = a1;
      do
      {
        BugCheckParameter4 = (_QWORD *)*BugCheckParameter4;
        --v3;
      }
      while ( v3 );
    }
    v4 = (_QWORD *)BugCheckParameter4[2];
    v5 = (ULONG_PTR)(BugCheckParameter4 + 52);
  }
  v56 = v4;
  BugCheckParameter2 = 0LL;
  v57 = 0;
  ExAcquirePushLockSharedEx(v5, 0LL);
  v6 = (KSPIN_LOCK *)(v5 + 8);
  while ( 1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(v6);
    if ( !(*(unsigned int (__fastcall **)(_QWORD *, ULONG_PTR *, ULONG_PTR *, unsigned __int16 *, ULONG_PTR *, __int64 *))(v5 + 24))(
            v4,
            &BugCheckParameter3,
            &BugCheckParameter2,
            &v58,
            &v55,
            &v54) )
      break;
    v57 = 1;
    if ( (v54 & 0x20) != 0 )
    {
      ++*(_DWORD *)(v5 + 16);
      KxReleaseSpinLock((volatile signed __int64 *)v6);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v7);
    }
    else
    {
      if ( (_DWORD)BugCheckParameter3 == -1 )
        KeBugCheckEx(0x159u, 0LL, BugCheckParameter2, v58 | (unsigned __int64)(v54 << 16), v55);
      v13 = *(_QWORD *)((*(__int64 (**)(void))(HalIommuDispatch + 104))() + 8);
      v14 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 <= 0xFu )
      {
        v15 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v14 == 15 )
          LODWORD(v16) = 0x8000;
        else
          v16 = (-1LL << (v14 + 1)) & 0xFFFC;
        v15[5] |= v16;
      }
      KxAcquireSpinLock((PKSPIN_LOCK)(v13 + 24));
      for ( i = *(_QWORD **)(v13 + 40); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(v13 + 40) )
          KeBugCheckEx(
            0x159u,
            3uLL,
            BugCheckParameter2,
            (unsigned int)BugCheckParameter3,
            (ULONG_PTR)BugCheckParameter4);
        if ( (_QWORD *)i[2] == BugCheckParameter4 )
          break;
      }
      v18 = i + 3;
      for ( j = (_QWORD *)i[3]; j != v18; j = (_QWORD *)*j )
      {
        v1 = j;
        if ( *(_QWORD *)(j[5] + 40LL) == BugCheckParameter2 )
          break;
      }
      if ( j == v18 )
        KeBugCheckEx(0x159u, 4uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      KxReleaseSpinLock((volatile signed __int64 *)(v13 + 24));
      if ( KiIrqlFlags )
      {
        v20 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && v14 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (v14 + 1));
          v12 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      __writecr8(v14);
      if ( (v54 & 8) != 0 )
        KeBugCheckEx(0x159u, 1uLL, BugCheckParameter2, v58 | (unsigned __int64)(v54 << 16), v55);
      if ( (v54 & 4) != 0 && (*(_DWORD *)(v1[5] + 32LL) & 0x20000) == 0 )
        KeBugCheckEx(0x159u, 2uLL, BugCheckParameter2, v58 | (unsigned __int64)(v54 << 16), v55);
      if ( *((_BYTE *)v1 + 56) )
      {
        v6 = (KSPIN_LOCK *)(v5 + 8);
        KxReleaseSpinLock((volatile signed __int64 *)(v5 + 8));
        v1 = 0LL;
        if ( KiIrqlFlags )
        {
          v24 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        __writecr8(v7);
        (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 112))((unsigned int)BugCheckParameter3);
      }
      else
      {
        if ( *(_DWORD *)(v1[5] + 104LL) != *(_DWORD *)(v5 + 16) )
        {
          v28 = 112LL;
          v29 = 512LL;
          do
          {
            *(_QWORD *)(v28 + v1[5]) = 0LL;
            v28 += 8LL;
            --v29;
          }
          while ( v29 );
          *(_DWORD *)(v1[5] + 104LL) = *(_DWORD *)(v5 + 16);
        }
        v30 = v58;
        v31 = v1[5];
        v32 = *(_DWORD *)(v31 + 8LL * v58 + 116);
        if ( (v32 & 1) != 0 )
        {
          if ( (_DWORD)BugCheckParameter3 != ((v32 >> 1) & 0xFFFFF) )
            KeBugCheckEx(0x159u, 5uLL, BugCheckParameter2, v58, (unsigned int)BugCheckParameter3);
        }
        else
        {
          v33 = v32 | 1;
          *(_DWORD *)(v31 + 8LL * v58 + 116) = v33;
          v32 = v33 ^ (v33 ^ (2 * BugCheckParameter3)) & 0x1FFFFE;
          *(_DWORD *)(v31 + 8 * v30 + 116) = v32;
        }
        ++*(_DWORD *)(v31 + 8 * v30 + 112);
        v34 = v32 & 0x400000;
        if ( (v54 & 0x10) != 0 )
          *(_DWORD *)(v31 + 8 * v30 + 116) = v32 | 0x200000;
        KxReleaseSpinLock((volatile signed __int64 *)(v5 + 8));
        if ( KiIrqlFlags )
        {
          v35 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        __writecr8(v7);
        v39 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))(HalIommuDispatch + 120))(
                v54,
                v55,
                (unsigned int)BugCheckParameter3);
        v40 = v39;
        if ( HalpHvIommu && v39 >= 0 && !v34 && (v54 & 0x10) == 0 )
          v40 = IommupHvValidatePageRequestGpa((unsigned int)BugCheckParameter3, BugCheckParameter2, v55);
        v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 8));
        if ( v40 < 0 )
          *(_DWORD *)(v31 + 8 * v30 + 116) |= 0x400000u;
        v42 = 0xFFFFFFFFLL;
        v12 = (*(_DWORD *)(v31 + 8 * v30 + 112))-- == 1;
        if ( v12 && (v43 = *(_DWORD *)(v31 + 8 * v30 + 116), (v43 & 0x200000) != 0) )
        {
          if ( (v43 & 0x400000) != 0 )
            v40 = -1073741823;
          if ( HalpHvIommu )
          {
            IommupHvDismissPageFault(BugCheckParameter3, BugCheckParameter2, v58, v40, v55, v54);
          }
          else
          {
            if ( (*(_DWORD *)(v1[5] + 48LL) & 0x20000) != 0 )
              v42 = (unsigned int)BugCheckParameter3;
            (*(void (__fastcall **)(_QWORD *, __int64, ULONG_PTR, _QWORD, int))(v5 + 32))(
              v56,
              v42,
              BugCheckParameter2,
              v58,
              v40);
          }
          v1 = 0LL;
          *(_QWORD *)(v31 + 8 * v30 + 112) = 0LL;
        }
        else
        {
          v1 = 0LL;
        }
        v6 = (KSPIN_LOCK *)(v5 + 8);
        KxReleaseSpinLock((volatile signed __int64 *)(v5 + 8));
        if ( KiIrqlFlags )
        {
          v44 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v44 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            v46 = v45->SchedulerAssist;
            v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
            v12 = (v47 & v46[5]) == 0;
            v46[5] &= v47;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v45);
          }
        }
        __writecr8(v41);
        (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 112))((unsigned int)BugCheckParameter3);
      }
      v4 = v56;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)v6);
  if ( KiIrqlFlags )
  {
    v48 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v48 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v48 >= 2u )
    {
      v49 = KeGetCurrentPrcb();
      v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v51 = v49->SchedulerAssist;
      v12 = (v50 & v51[5]) == 0;
      v51[5] &= v50;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  __writecr8(v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v5);
  KeAbPostRelease(v5);
  return v57;
}
