__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter2,
        const void *a2,
        unsigned int a3,
        ULONG_PTR a4,
        unsigned int a5)
{
  unsigned int v6; // r11d
  const void *v7; // r10
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r9
  ULONG_PTR v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  ULONG_PTR v19; // rbx
  unsigned __int64 v20; // rax
  int PageAvoidRead; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // r13d
  int v28; // ebx
  __int64 v29; // rax
  void *v30; // rcx
  ULONG_PTR v31; // rdx
  int v32; // eax
  bool v33; // zf
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v40; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  int v44; // [rsp+40h] [rbp-88h] BYREF
  int v45; // [rsp+44h] [rbp-84h]
  __int64 v46; // [rsp+48h] [rbp-80h]
  __int64 v47; // [rsp+50h] [rbp-78h]
  unsigned __int64 v48; // [rsp+58h] [rbp-70h] BYREF
  __int64 v49; // [rsp+60h] [rbp-68h]
  PSLIST_ENTRY ListEntry; // [rsp+68h] [rbp-60h]
  unsigned __int64 *v51; // [rsp+70h] [rbp-58h]
  __int64 v52; // [rsp+78h] [rbp-50h]
  __int64 v53; // [rsp+80h] [rbp-48h]
  unsigned __int8 v54; // [rsp+D0h] [rbp+8h]

  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  v44 = 0;
  v47 = 0LL;
  ListEntry = 0LL;
  v10 = *(_QWORD *)(48
                  * ((*(_QWORD *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL
                  + 16);
  if ( v10 )
    v10 += 40 * ((BugCheckParameter2 >> 18) & 7);
  v11 = *(_QWORD *)(v10 + 24);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v11 & 1) == 0 )
    v12 = (__int64 *)v11;
  v52 = *v12;
  v13 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v52 + 60) & 0x3FF)) + 17344LL;
  v53 = v13;
  v14 = a3;
  v46 = a3;
  if ( a3 + a4 > 0x1000 || a3 + a4 < a4 )
    KeBugCheckEx(0x1Au, 0x776uLL, BugCheckParameter2, a4, a3);
  v15 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = a5 & 4;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (a4 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v17 = MiReservePtes(&qword_140C695C0, 1LL);
    v51 = (unsigned __int64 *)v17;
    if ( !v17 )
      return 3221225626LL;
    v16 = a5 & 4;
    v7 = a2;
    v6 = a3;
    v14 = v46;
  }
  else
  {
    v17 = 0LL;
    v51 = 0LL;
  }
  if ( (*(_QWORD *)v15 & 1) != 0 )
  {
    v31 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v17 )
    {
      MiDirtySystemCachePte(v13, v31, *(_QWORD *)v15, v14);
      v29 = 0LL;
      goto LABEL_52;
    }
    v29 = MiMapSystemCachePage(v17, v31, a5, v14);
    v47 = v29;
    v16 = a5 & 4;
    v7 = a2;
    v14 = v46;
    if ( v29 )
      goto LABEL_54;
    v17 = (__int64)v51;
    v6 = a3;
  }
  v18 = *(_QWORD *)v15;
  if ( (*(_QWORD *)v15 & 1) != 0 )
  {
    if ( !v17 )
    {
      v29 = v47;
      goto LABEL_54;
    }
    v29 = MiMapSystemCachePage(v17, ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5, v14);
    v47 = v29;
    v7 = a2;
    if ( v29 )
      goto LABEL_53;
    v6 = a3;
  }
  if ( qword_140C657C0 )
  {
    if ( (v18 & 0x10) != 0 )
      v18 &= ~0x10uLL;
    else
      v18 &= ~qword_140C657C0;
  }
  v19 = v18 >> 16;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v16) = 17;
        v20 = *(_QWORD *)v19;
        v48 = v20;
        if ( (v20 & 1) == 0 && (v20 & 0x400) != 0 )
          break;
        v9 = MiLockProtoPoolPageForce(v19);
        v23 = MiLockLeafPage(v19, 2LL);
        v49 = v23;
        v24 = *(_QWORD *)v19;
        v48 = *(_QWORD *)v19;
        if ( !v23 )
        {
          v16 = 17LL;
          v7 = a2;
          v6 = a3;
          break;
        }
        v45 = 0;
        v44 = 0;
        if ( (v24 & 1) != 0 )
        {
          *(_QWORD *)(v23 + 24) ^= (((*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v23 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          v27 = 0;
LABEL_32:
          if ( v51 && !v27 )
          {
            v33 = (unsigned int)MiAddLockedPageCharge(v23, 0LL) == 0;
            v34 = v45;
            if ( v33 )
              v34 = -1073741670;
            v44 = v34;
            v23 = v49;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockProtoPoolPage(v9, 17LL);
          if ( ListEntry )
          {
            MiProcessTransitionHeatBatch();
            MiFreeTransitionPageHeatList(ListEntry);
            ListEntry = 0LL;
          }
          LODWORD(v9) = v44;
          if ( v44 < 0 )
            goto LABEL_48;
          v7 = a2;
          v6 = a3;
          v9 = 0LL;
          if ( v27 != 1 )
          {
            if ( v27 != 2 )
            {
              if ( v51 )
                v47 = MiMapFrame(v51, (v48 >> 12) & 0xFFFFFFFFFFLL);
              v28 = 1;
              goto LABEL_41;
            }
            LODWORD(v9) = MmAccessFault(0LL, BugCheckParameter2);
            v44 = v9;
            if ( (int)v9 < 0 )
              goto LABEL_48;
            v7 = a2;
            v6 = a3;
            v9 = 0LL;
          }
        }
        else
        {
          if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
            goto LABEL_27;
          v23 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v15 << 25) >> 16, v19);
          v49 = v23;
          if ( v23 )
          {
            v48 = *(_QWORD *)v19;
LABEL_27:
            v25 = *(_QWORD *)(v23 + 16);
            if ( (v25 & 0x400) != 0 )
              v26 = v25 >> 11;
            else
              v26 = v25 >> 3;
            if ( (v26 & 1) == 0
              || (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v23, 0LL, 0LL), ListEntry != (PSLIST_ENTRY)-1LL) )
            {
              v27 = MiUnlinkStandbyPfn(v19, a5);
              v23 = v49;
              if ( v27 )
              {
                v32 = v45;
                if ( v27 == 3 )
                  v32 = -1073740023;
                v45 = v32;
                v44 = v32;
              }
              else
              {
                v48 = *(_QWORD *)v19;
              }
              goto LABEL_32;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v9, 17LL);
            MiReplenishTransitionPageHeatList();
            v9 = 0LL;
            ListEntry = 0LL;
            v7 = a2;
            v6 = a3;
          }
          else
          {
            MiUnlockProtoPoolPage(v9, 17LL);
            v7 = a2;
            v6 = a3;
            v9 = 0LL;
          }
        }
      }
      if ( v9 )
      {
        MiUnlockProtoPoolPage(v9, v16);
        v7 = a2;
        v6 = a3;
      }
      if ( (*(_BYTE *)(v52 + 62) & 0xC) == 0 )
        break;
      LODWORD(v9) = MmAccessFault(0LL, BugCheckParameter2);
      v44 = v9;
      if ( (int)v9 < 0 )
        goto LABEL_48;
      v7 = a2;
      v6 = a3;
      v9 = 0LL;
    }
    PageAvoidRead = MiMakePageAvoidRead(v19, v7, v6, a4, a5, &v48, &v44);
    if ( !PageAvoidRead )
      return (unsigned int)v44;
    v35 = PageAvoidRead - 1;
    if ( v35 )
      break;
    v7 = a2;
    v6 = a3;
    v9 = 0LL;
  }
  v36 = v35 - 2;
  if ( !v36 )
  {
    LODWORD(v9) = 0;
    v28 = 0;
    goto LABEL_41;
  }
  LODWORD(v9) = 0;
  if ( v36 != 1 )
  {
    v28 = 1;
LABEL_41:
    MiMakeSystemCachePteValid(v53, ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v48, a5);
    LODWORD(v16) = a5 & 4;
    v7 = a2;
    v14 = v46;
    v29 = v47;
    goto LABEL_42;
  }
  v29 = v47;
LABEL_52:
  v7 = a2;
LABEL_53:
  LODWORD(v16) = a5 & 4;
  v14 = v46;
LABEL_54:
  v28 = 1;
LABEL_42:
  v44 = 0;
  if ( v28 )
  {
    if ( !v29 )
      v29 = BugCheckParameter2;
    v30 = (void *)(v14 + v29);
    if ( (_DWORD)v16 )
      RtlCopyMemoryNonTemporal(v30, v7, a4);
    else
      memmove(v30, v7, a4);
  }
LABEL_48:
  if ( v51 )
  {
    v37 = *v51;
    MiReleasePtes(&qword_140C695C0, v51, 1LL);
    if ( (v37 & 1) != 0 )
    {
      v38 = 48 * ((v37 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v54 = MiLockPageInline(v38);
      MiRemoveLockedPageChargeAndDecRef(v38);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
      {
        v40 = v54;
        if ( v54 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v40 = v54;
          v43 = ~(unsigned __int16)(-1LL << (v54 + 1));
          v33 = (v43 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v43;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v40 = v54;
      }
      __writecr8(v40);
      LODWORD(v9) = v44;
    }
  }
  return (unsigned int)v9;
}
