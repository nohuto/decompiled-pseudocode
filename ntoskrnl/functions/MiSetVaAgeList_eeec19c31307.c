__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  char v7; // bl
  unsigned __int64 v8; // r12
  int v9; // edi
  int v10; // r14d
  unsigned __int64 *v11; // rdx
  volatile signed __int32 *v12; // rsi
  unsigned int v13; // edi
  volatile unsigned __int64 v14; // rax
  char v15; // al
  LONG *v16; // r8
  unsigned __int64 v17; // r8
  volatile unsigned __int64 v18; // rax
  _BYTE *v19; // r14
  unsigned __int8 v20; // di
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int8 v23; // al
  unsigned __int8 v24; // di
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int8 v29; // al
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rbx
  __int64 v34; // rax
  char v35; // al
  int v36; // edx
  __int64 v37; // rax
  __int64 SharedVm; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v44; // rcx
  struct _LIST_ENTRY *v45; // r8
  __int64 v46; // rcx
  struct _LIST_ENTRY *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 *v51; // rdi
  __int64 v52; // rax
  __int64 **v53; // rcx
  __int64 **v54; // rcx
  struct _LIST_ENTRY *v55; // rcx
  __int64 v56; // rcx
  __int64 *v57; // r14
  __int64 v58; // rax
  __int64 **v59; // rcx
  __int64 v60; // rcx
  struct _LIST_ENTRY *v61; // rcx
  __int64 v62; // rcx
  unsigned __int8 v63; // [rsp+20h] [rbp-D8h]
  int v64; // [rsp+24h] [rbp-D4h]
  int v65; // [rsp+24h] [rbp-D4h]
  signed __int32 v66; // [rsp+28h] [rbp-D0h]
  __int64 v67; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v68; // [rsp+28h] [rbp-D0h]
  signed __int32 v69; // [rsp+30h] [rbp-C8h]
  signed __int32 v70; // [rsp+30h] [rbp-C8h]
  __int64 v71; // [rsp+30h] [rbp-C8h]
  int v72; // [rsp+38h] [rbp-C0h]
  int v73; // [rsp+3Ch] [rbp-BCh]
  unsigned __int64 v74; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v75; // [rsp+48h] [rbp-B0h]
  __int64 v76; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v77; // [rsp+58h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v79; // [rsp+78h] [rbp-80h] BYREF
  _OWORD v80[2]; // [rsp+90h] [rbp-68h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v74 = a2;
  v4 = a2;
  v63 = a4;
  v5 = a3;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = 0LL;
  v9 = 0;
  v73 = 0;
  v64 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1;
    v72 = 1;
  }
  else
  {
    v10 = 0;
    v72 = 0;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    {
      v9 = 1;
      v64 = 1;
    }
    else
    {
      v75 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a1, v8, 0);
      a4 = v63;
    }
  }
  v11 = (unsigned __int64 *)0xFFFFF6FB7DBED000LL;
  v12 = &dword_140C69E40;
  if ( (_BYTE)a4 == 8 )
  {
    v73 = 1;
    SharedVm = MiGetSharedVm(a1, 0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBED7F8uLL, a4);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
    v11 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + v5 + 6);
    if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)v11 )
    {
      v42 = MiGetSharedVm(a1, v11, v39, a4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v42 + 64));
      if ( v75 )
        MiUnlockPageTableInternal(a1, v75);
      return 0LL;
    }
  }
  else
  {
    v13 = 0;
    if ( (_DWORD)v5 )
    {
      do
      {
        if ( v10 )
        {
          v14 = *(_QWORD *)v8;
          if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v14 & 1) != 0
              && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v44 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
                if ( (v44 & 0x20) != 0 )
                  v14 |= 0x20uLL;
                if ( (v44 & 0x42) != 0 )
                  v14 |= 0x42uLL;
              }
            }
            v11 = (unsigned __int64 *)0xFFFFF6FB7DBED000LL;
          }
          v7 = HIBYTE(v14) & 0xF | (16 * ((v14 >> 60) & 7));
          v15 = HIBYTE(v14) & 0xF;
        }
        else
        {
          v15 = (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8) >> 12) & 0xFFFFFFFFFFLL)
                          - 0x220000000000LL) >> 1) & 7;
          v11 = (unsigned __int64 *)0xFFFFF6FB7DBED000LL;
        }
        if ( v15 == 8 )
          break;
        ++v13;
      }
      while ( v13 < (unsigned int)v5 );
      v4 = v74;
      v12 = &dword_140C69E40;
    }
    if ( v13 == (_DWORD)v5 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v16 = &dword_140C69E40;
      else
        v16 = (LONG *)(a1 + 256);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v11) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16, v11);
      }
      else
      {
        _m_prefetchw(v16);
        v69 = *v16 & 0x7FFFFFFF;
        v66 = _InterlockedCompareExchange(v16, v69 + 1, v69);
        if ( v66 != v69 )
        {
          while ( v66 >= 0 )
          {
            v70 = v66;
            v66 = _InterlockedCompareExchange(v16, v66 + 1, v66);
            if ( v66 == v70 )
              goto LABEL_16;
          }
          ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)v16, 0xFFu);
        }
      }
    }
    else
    {
      v73 = 1;
      v37 = MiGetSharedVm(a1, 0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBED7F8uLL, a4);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v37 + 64));
    }
LABEL_16:
    v9 = v64;
  }
  v17 = 0xFFFFF6FB40000000uLL;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v65 = v9;
      if ( v10 )
      {
        v18 = *(_QWORD *)v8;
        v19 = 0LL;
        v11 = (unsigned __int64 *)0xFFFFF6FB7DBED000LL;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v18 & 1) != 0
            && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
          {
            v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v45 )
            {
              v46 = *((_QWORD *)&v45->Flink + ((v8 >> 3) & 0x1FF));
              if ( (v46 & 0x20) != 0 )
                v18 |= 0x20uLL;
              if ( (v46 & 0x42) != 0 )
                v18 |= 0x42uLL;
            }
            v17 = 0xFFFFF6FB40000000uLL;
          }
          v11 = (unsigned __int64 *)0xFFFFF6FB7DBED000LL;
        }
        v7 = HIBYTE(v18) & 0xF | (16 * ((v18 >> 60) & 7));
        v20 = HIBYTE(v18) & 0xF;
        if ( (HIBYTE(v18) & 0xF) == 8 )
        {
          v65 = 1;
          --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
          goto LABEL_31;
        }
        v65 = 0;
      }
      else
      {
        v19 = (_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        v20 = (*v19 >> 1) & 7;
        if ( v65 )
          goto LABEL_31;
        v11 = (unsigned __int64 *)0xFFFFF6FB7DBED000LL;
        v17 = 0xFFFFF6FB40000000uLL;
      }
      if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v21 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v22 = *(_QWORD *)v21;
        if ( v21 >= 0xFFFFF6FB7DBED000uLL
          && v21 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v22 & 1) != 0
          && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          v47 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v47 )
          {
            v48 = *((_QWORD *)&v47->Flink + ((v21 >> 3) & 0x1FF));
            if ( (v48 & 0x20) != 0 )
              v22 |= 0x20uLL;
            if ( (v48 & 0x42) != 0 )
              v22 |= 0x42uLL;
          }
        }
        v76 = v22;
        v11 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v76) >> 12) & 0xFFFFFFFFFFLL)
                                 - 0x220000000000LL);
        v17 = *v11;
        v23 = (*v11 >> 14) & 7;
        if ( ((*v11 >> 4) & 0x3FF) != 0 )
        {
          if ( v20 == v23 )
          {
            *v11 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(16 * (((*v11 >> 4) & 0x3FF) - 1))) & 0x3FF0;
          }
          else if ( v20 > v23 )
          {
            *v11 = v17 ^ ((unsigned int)v17 ^ (v20 << 14)) & 0x1C000 | 0x3FF0;
          }
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(8LL * v20 + a1 + 40), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v20 == 7 )
      {
        v11 = *(unsigned __int64 **)(a1 + 96);
        v49 = *(unsigned __int16 *)(a1 + 174);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v50 = *(_QWORD *)(qword_140C67048 + 8 * v49);
        v71 = v50;
        v67 = *(_QWORD *)(v50 + 16920);
        if ( (unsigned __int64)v11 < *(_QWORD *)(v67 + 56) )
        {
          v51 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            if ( *(__int64 **)(v50 + 16936) != v51 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, &LockHandle);
              if ( *(_BYTE *)(v67 + 53) || (v52 = *v51) == 0 )
              {
                *(_BYTE *)(v67 + 54) = 1;
              }
              else
              {
                v53 = *(__int64 ***)(a1 + 32);
                if ( *(__int64 **)(v52 + 8) != v51
                  || *v53 != v51
                  || (*v53 = (__int64 *)v52,
                      *(_QWORD *)(v52 + 8) = v53,
                      v54 = *(__int64 ***)(v71 + 16936),
                      *v54 != (__int64 *)(v71 + 16928)) )
                {
LABEL_177:
                  __fastfail(3u);
                }
                *v51 = v71 + 16928;
                *(_QWORD *)(a1 + 32) = v54;
                *v54 = v51;
                *(_QWORD *)(v71 + 16936) = v51;
              }
              KxReleaseQueuedSpinLock(&LockHandle);
            }
          }
        }
      }
LABEL_31:
      v24 = v63;
      if ( (unsigned __int8)(v63 - 1) <= 5u
        && (MI_READ_PTE_LOCK_FREE(v8) & 0x20) != 0
        && (v4 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v24 = 0;
      }
      if ( v19 )
      {
        *(_QWORD *)v19 ^= (*(_DWORD *)v19 ^ (2 * v24)) & 0xE;
      }
      else
      {
        v7 ^= (v24 ^ v7) & 0xF;
        v25 = *(_QWORD *)v8;
        v17 = (unsigned __int64)(v7 & 0x7F) << 56;
        do
        {
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v26 = v25;
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v17 | v25 & 0x80FFFFFFFFFFFFFFuLL, v25);
        }
        while ( v26 != v25 );
        v4 = v74;
      }
      if ( v24 >= 8u )
      {
        if ( v24 == 8 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else if ( v72 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v27 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v28 = *(_QWORD *)v27;
          if ( v27 >= 0xFFFFF6FB7DBED000uLL
            && v27 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v55 )
            {
              v56 = *((_QWORD *)&v55->Flink + ((v27 >> 3) & 0x1FF));
              if ( (v56 & 0x20) != 0 )
                v28 |= 0x20uLL;
              if ( (v56 & 0x42) != 0 )
                v28 |= 0x42uLL;
            }
          }
          v77 = v28;
          v11 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v77) >> 12) & 0xFFFFFFFFFFLL)
                                   - 0x220000000000LL);
          v17 = *v11;
          v29 = (*v11 >> 14) & 7;
          if ( ((*v11 >> 4) & 0x3FF) != 0 )
          {
            if ( v24 == v29 )
            {
              *v11 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(16 * (((*v11 >> 4) & 0x3FF) + 1))) & 0x3FF0;
            }
            else if ( v24 > v29 )
            {
              v17 &= 0xFFFFFFFFFFFE001FuLL;
              *v11 = v17 | ((unsigned __int64)(v24 & 7) << 14) | 0x10;
            }
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(8LL * v24 + a1 + 40), 1uLL);
        if ( v24 == 7 )
        {
          v11 = *(unsigned __int64 **)(a1 + 96);
          v40 = *(unsigned __int16 *)(a1 + 174);
          memset(&v79, 0, sizeof(v79));
          v17 = *(_QWORD *)(qword_140C67048 + 8 * v40);
          v41 = *(_QWORD *)(v17 + 16920);
          if ( (unsigned __int64)v11 >= *(_QWORD *)(v41 + 56) )
          {
            v57 = (__int64 *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 24) )
            {
              v68 = v17 + 16928;
              if ( *(__int64 **)(v17 + 16928) != v57 )
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, &v79);
                if ( *(_BYTE *)(v41 + 53) || (v58 = *v57) == 0 )
                {
                  *(_BYTE *)(v41 + 54) = 1;
                }
                else
                {
                  v59 = *(__int64 ***)(a1 + 32);
                  if ( *(__int64 **)(v58 + 8) != v57 )
                    goto LABEL_177;
                  if ( *v59 != v57 )
                    goto LABEL_177;
                  *v59 = (__int64 *)v58;
                  *(_QWORD *)(v58 + 8) = v59;
                  v60 = *(_QWORD *)v68;
                  if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
                    goto LABEL_177;
                  *v57 = v60;
                  *(_QWORD *)(a1 + 32) = v68;
                  *(_QWORD *)(v60 + 8) = v57;
                  *(_QWORD *)v68 = v57;
                }
                KxReleaseQueuedSpinLock(&v79);
              }
            }
          }
        }
      }
      LODWORD(v5) = v5 - 1;
      if ( !(_DWORD)v5 )
        break;
      v10 = v72;
      v9 = v65;
      v17 = 0xFFFFF6FB40000000uLL;
    }
  }
  if ( v73 )
  {
    v34 = MiGetSharedVm(a1, v11, v17, a4);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 64));
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v12 = (volatile signed __int32 *)(a1 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    }
    else
    {
      _InterlockedAnd(v12, 0xBFFFFFFF);
      _InterlockedDecrement(v12);
    }
  }
  if ( v75 )
    MiUnlockPageTableInternal(a1, v75);
  if ( v72 )
  {
    v30 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v31 = *(_QWORD *)v30;
    if ( v30 >= 0xFFFFF6FB7DBED000uLL
      && v30 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v61 )
      {
        v62 = *((_QWORD *)&v61->Flink + ((v30 >> 3) & 0x1FF));
        if ( (v62 & 0x20) != 0 )
          v31 |= 0x20uLL;
        if ( (v62 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
    }
    v74 = v31;
    v32 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v74) >> 12) & 0xFFFFFFFFFFLL)
                             - 0x220000000000LL);
    if ( ((*(_DWORD *)v32 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(0xFFFFFFFFFFLL, v4, v80);
      v35 = 8;
      while ( 1 )
      {
        v36 = *((_DWORD *)v80 + (unsigned __int8)--v35);
        if ( v36 )
          break;
        if ( !v35 )
          return 1LL;
      }
      *v32 = *v32 & 0xFFFFFFFFFFFE000FuLL | (16 * (((unsigned __int64)(v35 & 7) << 10) | v36 & 0x3FF));
    }
  }
  return 1LL;
}
