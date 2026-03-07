char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  char v4; // r13
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  int v9; // r15d
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r14
  volatile signed __int32 *v12; // r12
  LONG *v13; // r8
  signed __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  char v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  _QWORD *v21; // r11
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r14
  int v24; // r13d
  unsigned __int8 v25; // r14
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 *v28; // r8
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rdx
  unsigned __int8 v31; // cl
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r13
  __int64 *v36; // r14
  __int64 *v37; // r15
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 *v43; // rbx
  unsigned __int64 v44; // rtt
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r14
  _QWORD *v51; // rdx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rtt
  __int64 v56; // rax
  unsigned __int8 v57; // cl
  unsigned __int64 v58; // rtt
  char v59; // dl
  int v60; // ecx
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 **v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // r13
  __int64 v67; // r11
  __int64 v68; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v70; // rcx
  struct _LIST_ENTRY *v71; // rcx
  __int64 v72; // rcx
  signed __int32 v74[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned __int8 v75[4]; // [rsp+20h] [rbp-49h] BYREF
  signed __int32 v76; // [rsp+24h] [rbp-45h]
  signed __int32 v77; // [rsp+28h] [rbp-41h]
  int v78; // [rsp+2Ch] [rbp-3Dh]
  __int128 v79; // [rsp+30h] [rbp-39h] BYREF
  __int64 v80; // [rsp+40h] [rbp-29h]
  __int64 v81; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v82; // [rsp+50h] [rbp-19h]
  __int64 v83; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v84[8]; // [rsp+60h] [rbp-9h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a4;
  v78 = a4;
  v5 = a3;
  v82 = a2;
  v6 = a2;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), a3);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    _InterlockedExchangeAdd(&dword_140C69E80, a3);
  __addgsdword(0x2E90u, a3);
  v8 = 0xFFFFF68000000000uLL;
  v9 = 0;
  v10 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    v11 = a3;
  else
    v11 = 0LL;
  v12 = &dword_140C69E40;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v13 = &dword_140C69E40;
  else
    v13 = (LONG *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v8) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, v8);
LABEL_123:
    v10 = 0xFFFFF6FFFFFFFFFFuLL;
    goto LABEL_9;
  }
  _m_prefetchw(v13);
  v77 = *v13 & 0x7FFFFFFF;
  v76 = _InterlockedCompareExchange(v13, v77 + 1, v77);
  if ( v76 != v77 )
  {
    while ( v76 >= 0 )
    {
      v77 = v76;
      v76 = _InterlockedCompareExchange(v13, v76 + 1, v76);
      if ( v76 == v77 )
        goto LABEL_9;
    }
    LOBYTE(v8) = -1;
    ExpWaitForSpinLockSharedAndAcquire(v13, v8);
    goto LABEL_123;
  }
LABEL_9:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), v5);
  if ( v11 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v11);
    v15 = *(_QWORD *)(a1 + 160);
    v16 = v11 + v14;
    if ( v16 > v15 )
    {
      do
      {
        v44 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 160), v16, v15);
      }
      while ( v44 != v15 && v16 > v15 );
    }
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    _InterlockedExchangeAdd64(&qword_140C69E88, v5);
    if ( v11 )
    {
      v53 = qword_140C69E98;
      v54 = v11 + _InterlockedExchangeAdd64(&qword_140C69E90, v11);
      if ( v54 > qword_140C69E98 )
      {
        do
        {
          v55 = v53;
          v53 = _InterlockedCompareExchange64(&qword_140C69E98, v54, v53);
        }
        while ( v55 != v53 && v54 > v53 );
      }
    }
  }
  if ( (v4 & 2) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), v5);
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), v5);
  }
  v17 = *(_BYTE *)(a1 + 184);
  if ( (v17 & 7u) >= 2 )
  {
    v45 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v46 = (v17 & 7u) - 2;
    v47 = *(_QWORD *)(v45 + 6976) + *(_QWORD *)(a1 + 144);
    v48 = v45 + 8 * v46;
    v49 = *(_QWORD *)(v48 + 6984);
    if ( v47 > v49 )
    {
      do
      {
        *(_QWORD *)(v48 + 6984) = v47;
        v58 = v49;
        v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 6984), v47, v49);
      }
      while ( v58 != v49 && v47 > v49 );
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v6 < PsNtosImageEnd && v6 >= PsNtosImageBase || v6 < PsHalImageEnd && v6 >= PsHalImageBase) )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C655D0, v5);
      }
      else if ( (unsigned int)MiGetSystemRegionType(v6) == 12 )
      {
        v75[0] = 0;
        v50 = (__int64)((v6 & 0xFFFFFFFFFFFFF000uLL) << 16) >> 16;
        MmLockLoadedModuleListShared(v75);
        v51 = (_QWORD *)BugCheckParameter3;
        if ( BugCheckParameter3 )
        {
          do
          {
            v52 = *(v51 - 23);
            if ( v50 > v52 + (unsigned int)(*((_DWORD *)v51 - 42) - 1) )
            {
              v51 = (_QWORD *)v51[1];
            }
            else
            {
              if ( v50 >= v52 )
                break;
              v51 = (_QWORD *)*v51;
            }
          }
          while ( v51 );
        }
        v61 = (__int64)(v51 - 29);
        if ( !v51 )
          v61 = 0LL;
        if ( v61
          || (v61 = qword_140C655F0) == 0
          || (v65 = *(_QWORD *)(qword_140C655F0 + 48), v50 >= v65)
          && v50 <= v65 + (unsigned int)(*(_DWORD *)(qword_140C655F0 + 64) - 1) )
        {
          MmUnlockLoadedModuleListShared(v75[0]);
          if ( v61 )
            _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 1, v5);
          v9 = 0;
        }
        else
        {
          MmUnlockLoadedModuleListShared(v75[0]);
          v9 = 0;
        }
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 128);
    if ( v18 > *(_QWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 188) & 2) == 0 )
    {
      v19 = *(_QWORD *)(a1 + 144);
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v19 > v20 )
      {
        v21 = *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
        v22 = v21[2130];
        if ( !v5 || ((v19 ^ (v5 + v19)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        {
          v23 = v21[2152];
          v9 = 1;
          if ( v23 < v22 >> 4 && v19 >= v22 >> 4 )
            goto LABEL_131;
        }
        else
        {
          v23 = -1LL;
        }
        if ( v19 - v20 >= 3 * (v22 >> 2) )
        {
          v66 = v21[2115];
          if ( (unsigned int)MiGetStandbyRepurposed(
                               *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)),
                               1LL,
                               v20,
                               v10) == *(_DWORD *)(v66 + 44) )
          {
            v4 = v78;
          }
          else
          {
            if ( !v9 )
              v23 = *(_QWORD *)(v67 + 17216);
            v68 = *(_QWORD *)(v66 + 2384);
            v4 = v78;
            if ( v23 < 8 * v68 )
              goto LABEL_131;
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 && v18 > *(_QWORD *)(a1 + 120) )
LABEL_131:
        _InterlockedOr((volatile signed __int32 *)(a1 + 188), 2u);
    }
  }
  v24 = v4 & 4;
  v78 = v24;
  if ( v24 && v5 )
  {
    while ( 1 )
    {
      if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v25 = HIBYTE(*(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
        v26 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v27 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL
          && v26 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v70 = *((_QWORD *)&Flink->Flink + ((v26 >> 3) & 0x1FF));
            if ( (v70 & 0x20) != 0 )
              v27 |= 0x20uLL;
            if ( (v70 & 0x42) != 0 )
              v27 |= 0x42uLL;
          }
        }
        v81 = v27;
        v28 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v81) >> 12) & 0xFFFFFFFFFFLL)
                                 - 0x220000000000LL);
        v29 = v25;
        v30 = *v28;
        v31 = (*v28 >> 14) & 7;
        if ( ((*v28 >> 4) & 0x3FF) != 0 )
        {
          if ( v25 == v31 )
          {
            *v28 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)(16 * (((*v28 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v25 > v31 )
          {
            *v28 = v30 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v25 & 7) << 14) | 0x10;
            v29 = v25;
          }
        }
      }
      else
      {
        v29 = (*(_BYTE *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL) >> 1) & 7;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v29 + 40), 1uLL);
      if ( v29 != 7 )
        goto LABEL_36;
      v32 = *(_QWORD *)(a1 + 96);
      v33 = *(unsigned __int16 *)(a1 + 174);
      v80 = 0LL;
      v79 = 0LL;
      v34 = *(_QWORD *)(qword_140C67048 + 8 * v33);
      v35 = *(_QWORD *)(v34 + 16920);
      if ( v32 < *(_QWORD *)(v35 + 56) )
        goto LABEL_36;
      v36 = (__int64 *)(a1 + 24);
      if ( !*(_QWORD *)(a1 + 24) )
        goto LABEL_36;
      v37 = (__int64 *)(v34 + 16928);
      if ( *(__int64 **)(v34 + 16928) == v36 )
        goto LABEL_36;
      *((_QWORD *)&v79 + 1) = &qword_140C69440;
      *(_QWORD *)&v79 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v79, &qword_140C69440);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)&qword_140C69440, (__int64)&v79) )
      {
        KxWaitForLockOwnerShip(&v79);
      }
      if ( *(_BYTE *)(v35 + 53) || (v62 = *v36) == 0 )
      {
        *(_BYTE *)(v35 + 54) = 1;
      }
      else
      {
        v63 = *(__int64 ***)(a1 + 32);
        if ( *(__int64 **)(v62 + 8) != v36
          || *v63 != v36
          || (*v63 = (__int64 *)v62, *(_QWORD *)(v62 + 8) = v63, v64 = *v37, *(__int64 **)(*v37 + 8) != v37) )
        {
          __fastfail(3u);
        }
        *v36 = v64;
        *(_QWORD *)(a1 + 32) = v37;
        *(_QWORD *)(v64 + 8) = v36;
        *v37 = (__int64)v36;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v79, retaddr);
      }
      else
      {
        _m_prefetchw(&v79);
        v56 = v79;
        if ( (_QWORD)v79 )
          goto LABEL_79;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v79 + 1),
                           0LL,
                           (signed __int64)&v79) != &v79 )
        {
          v56 = KxWaitForLockChainValid(&v79);
LABEL_79:
          *(_QWORD *)&v79 = 0LL;
          v57 = BYTE8(v79);
          if ( ((v57 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v56 + 8), *((__int64 *)&v79 + 1))) & 4) != 0 )
          {
            _InterlockedOr(v74, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v56 + 8) >> 5) & 0x7F], 0LL));
          }
        }
      }
LABEL_36:
      v6 += 4096LL;
      if ( !--v5 )
      {
        v24 = v78;
        break;
      }
    }
  }
  LOBYTE(v38) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)v38 != 2 )
    v12 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    LOBYTE(v38) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
  }
  else
  {
    _InterlockedAnd(v12, 0xBFFFFFFF);
    _InterlockedDecrement(v12);
  }
  if ( v24 )
  {
    v39 = v82;
    if ( v82 < 0xFFFFF68000000000uLL || (LOBYTE(v38) = -1, v82 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v40 = ((v82 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v41 = *(_QWORD *)v40;
      if ( v40 >= 0xFFFFF6FB7DBED000uLL
        && v40 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v41 & 1) != 0
        && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
      {
        v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v71 )
        {
          v72 = *((_QWORD *)&v71->Flink + ((v40 >> 3) & 0x1FF));
          if ( (v72 & 0x20) != 0 )
            v41 |= 0x20uLL;
          if ( (v72 & 0x42) != 0 )
            v41 |= 0x42uLL;
        }
      }
      v83 = v41;
      v43 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v83) >> 12) & 0xFFFFFFFFFFLL)
                               - 0x220000000000LL);
      v38 = (unsigned __int64)*(unsigned int *)v43 >> 4;
      if ( (v38 & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(v42, v39, v84);
        LOBYTE(v38) = 8;
        while ( 1 )
        {
          LOBYTE(v38) = v38 - 1;
          v59 = v38;
          v60 = v84[(unsigned __int8)v38];
          if ( v60 )
            break;
          if ( !(_BYTE)v38 )
            return v38;
        }
        v38 = *v43 & 0xFFFFFFFFFFFE000FuLL;
        *v43 = v38 | (16 * (((unsigned __int64)(v59 & 7) << 10) | v60 & 0x3FF));
      }
    }
  }
  return v38;
}
