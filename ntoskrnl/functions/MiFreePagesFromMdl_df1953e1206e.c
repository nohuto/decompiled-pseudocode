void *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, int a2)
{
  int v2; // r12d
  ULONG_PTR v3; // r13
  void *v4; // r10
  void *v5; // rsi
  int v6; // r11d
  __int64 v7; // rdi
  ULONG_PTR *v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  int v11; // ebx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v13; // r12
  __int64 v14; // r13
  void *v15; // r8
  int v16; // ecx
  char *v17; // r9
  unsigned __int64 v18; // rdx
  int v19; // edi
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  ULONG_PTR *v22; // r14
  void *result; // rax
  int v24; // r8d
  int v25; // eax
  ULONG_PTR v26; // rcx
  __int64 v27; // r12
  unsigned __int64 v28; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rdx
  int v36; // [rsp+30h] [rbp-E8h]
  int v37; // [rsp+34h] [rbp-E4h]
  void *v38; // [rsp+38h] [rbp-E0h]
  __int64 v39; // [rsp+40h] [rbp-D8h]
  void *v40; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+58h] [rbp-C0h]
  ULONG_PTR *v43; // [rsp+60h] [rbp-B8h]
  _BYTE v44[96]; // [rsp+70h] [rbp-A8h] BYREF

  v2 = a2;
  v37 = a2;
  v3 = BugCheckParameter2;
  memset(v44, 0, sizeof(v44));
  v38 = 0LL;
  MiInitializeLargePfnList(v44);
  v5 = 0LL;
  v6 = 1;
  v36 = 1;
  if ( _bittest16((const signed __int16 *)(v3 + 10), 9u) )
  {
    v2 &= ~1u;
    v37 = v2;
    MiRetardMdl(v3);
    v6 = 1;
    v4 = 0LL;
  }
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
    v6 = 1;
    v4 = 0LL;
  }
  if ( (*(_WORD *)(v3 + 10) & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, v3, *(__int16 *)(v3 + 10), 0LL);
  v7 = 0LL;
  v8 = (ULONG_PTR *)(v3 + 48);
  v39 = 0LL;
  v9 = (((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v3 + 40) + 4095) >> 12;
  v42 = v9;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    MiLogMdlRangeEvent(v3 + 48, 633LL, v9, 1LL);
    v6 = 1;
    v4 = 0LL;
  }
  v10 = 0LL;
  v11 = 1;
  if ( !v9 )
  {
LABEL_27:
    v22 = &v8[-v10];
    goto LABEL_28;
  }
  do
  {
    BugCheckParameter4 = *v8;
    v43 = v8;
    v13 = 48 * *v8;
    v14 = v13 - 0x220000000000LL;
    if ( (*(_QWORD *)(v13 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v8, BugCheckParameter4);
    v15 = *(void **)(qword_140C67048
                   + 8 * ((*(_QWORD *)(48 * BugCheckParameter4 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
    v16 = dword_140C65708;
    v40 = v15;
    if ( dword_140C65704 > (unsigned int)dword_140C65708
      || (v17 = (char *)qword_140C65748 + 16 * dword_140C65704, BugCheckParameter4 < *(_QWORD *)v17)
      || dword_140C65704 != dword_140C65708 && BugCheckParameter4 >= *((_QWORD *)v17 + 2) )
    {
      v24 = 0;
      if ( dword_140C65708 < 0 )
LABEL_78:
        KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter4, 0LL, 0LL);
      while ( 1 )
      {
        v25 = (v24 + v16) >> 1;
        v17 = (char *)qword_140C65748 + 16 * v25;
        if ( BugCheckParameter4 < *(_QWORD *)v17 )
        {
          if ( !v25 )
            KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter4, (ULONG_PTR)v17, 0LL);
          v16 = v25 - 1;
        }
        else
        {
          if ( v25 == dword_140C65708 || BugCheckParameter4 < *((_QWORD *)v17 + 2) )
          {
            v15 = *(void **)(qword_140C67048
                           + 8 * ((*(_QWORD *)(48 * BugCheckParameter4 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
            dword_140C65704 = v25;
            break;
          }
          v24 = v25 + 1;
        }
        if ( v16 < v24 )
          goto LABEL_78;
      }
    }
    v18 = *(_QWORD *)(v14 + 40);
    v19 = *((_DWORD *)v17 + 2);
    if ( ((v18 >> 60) & 7) == 3 )
    {
      v28 = (unsigned __int8)MiLockPageInline(v14);
      MiSetPfnIdentity(v14, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v28 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v33 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v28);
      _InterlockedDecrement64(&qword_140C65828);
      v18 = *(_QWORD *)(v14 + 40);
      v9 = v42;
      v15 = v40;
      v4 = v38;
      v6 = v36;
    }
    if ( !v10 )
    {
      v10 = 1LL;
      v36 = *(unsigned __int8 *)(v14 + 34) >> 6;
      v38 = v15;
      v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(4 * MiIsPfnEnclave(v14))) & 4;
LABEL_41:
      LODWORD(v5) = v19;
      goto LABEL_25;
    }
    v11 &= ~2u;
    if ( v4 != v15 )
      v11 |= 2u;
    if ( (v11 & 2) != 0 )
      goto LABEL_43;
    v20 = (_QWORD *)qword_140C69508;
    if ( qword_140C69508 )
    {
      if ( ((v18 >> 60) & 7) == 1 )
      {
        v34 = 0xAAAAAAAAAAAAAAABuLL * (v13 >> 4);
        if ( qword_140C69508 )
        {
          do
          {
            v35 = v20[3];
            if ( v34 >= v35 )
            {
              if ( v34 - v35 < v20[4] )
                goto LABEL_43;
              v20 = (_QWORD *)v20[1];
            }
            else
            {
              v20 = (_QWORD *)*v20;
            }
          }
          while ( v20 );
        }
      }
    }
    if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v6 || v19 != (_DWORD)v5 )
    {
LABEL_43:
      if ( (v11 & 1) != 0 )
      {
LABEL_44:
        v26 = v8[-v10];
LABEL_45:
        MiFreeMdlPageRun(v26, v10, v37, (__int64)v44);
        v27 = v10 + v39;
        v39 += v10;
        if ( (v11 & 2) != 0 )
        {
          MiZeroAndReleasePages((__int64)v44, v37);
          if ( v38 == &MiSystemPartition && (v11 & 4) == 0 )
            _InterlockedExchangeAdd64(&qword_140C69630, -v27);
          v4 = v40;
          v39 = 0LL;
          v38 = v40;
        }
        else
        {
          v4 = v38;
        }
        v10 = 1LL;
        v6 = *(unsigned __int8 *)(v14 + 34) >> 6;
        v36 = v6;
        goto LABEL_41;
      }
LABEL_71:
      v26 = *(v8 - 1);
      goto LABEL_45;
    }
    v21 = *(v8 - 1);
    if ( *v8 == v21 + 1 )
    {
      if ( v10 == 1 || (v11 & 1) != 0 )
      {
        v11 |= 1u;
        ++v10;
        goto LABEL_25;
      }
      goto LABEL_71;
    }
    if ( *v8 != v21 - 1 )
      goto LABEL_43;
    if ( v10 != 1 && (v11 & 1) != 0 )
      goto LABEL_44;
    v11 &= ~1u;
    ++v10;
LABEL_25:
    v7 = v39;
    --v9;
    ++v8;
    v42 = v9;
  }
  while ( v9 );
  v3 = BugCheckParameter2;
  v5 = v4;
  v2 = v37;
  if ( (v11 & 1) != 0 )
    goto LABEL_27;
  v22 = v43;
LABEL_28:
  MiFreeMdlPageRun(*v22, v10, v2, (__int64)v44);
  MiZeroAndReleasePages((__int64)v44, v2);
  result = &MiSystemPartition;
  if ( v5 == &MiSystemPartition && (v11 & 4) == 0 )
    result = (void *)_InterlockedExchangeAdd64(&qword_140C69630, -(__int64)(v7 + v10));
  *(_WORD *)(v3 + 10) &= ~2u;
  return result;
}
