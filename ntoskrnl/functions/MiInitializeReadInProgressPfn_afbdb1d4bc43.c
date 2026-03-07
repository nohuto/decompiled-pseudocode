char __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // r11
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  unsigned int v20; // r15d
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r10
  unsigned __int8 CurrentIrql; // r15
  __int64 v26; // rax
  signed __int64 v27; // rax
  signed __int64 v28; // rax
  char v29; // al
  _DWORD *SchedulerAssist; // r8
  __int64 v31; // r10
  int v32; // edx
  bool v33; // zf
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 **Address; // rax
  __int64 v37; // rdx
  __int64 **v38; // rbp
  unsigned int v39; // edx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v41; // rcx
  signed __int64 v42; // rdx
  unsigned __int8 v43; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v45; // r9
  int v46; // eax
  char v48; // [rsp+20h] [rbp-D8h]
  __int64 v49; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v50; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C0h]
  int v52; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+48h] [rbp-B0h]
  __int64 v54; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-A0h]
  __int128 v56; // [rsp+60h] [rbp-98h]
  __int128 v57; // [rsp+70h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-78h]
  signed __int64 v59; // [rsp+88h] [rbp-70h]
  __int128 v60; // [rsp+90h] [rbp-68h]
  __int128 v61; // [rsp+A0h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-48h]
  signed __int64 v63; // [rsp+B8h] [rbp-40h]
  unsigned int v65; // [rsp+108h] [rbp+10h]

  v6 = 0LL;
  v53 = 0LL;
  v7 = 0LL;
  v49 = 0x3FFFFFFFFFLL;
  v9 = a2;
  v10 = (unsigned __int64)&a2[a3];
  v11 = a1;
  v55 = v10;
  v12 = 0x3FFFFFFFFFLL;
  if ( (unsigned __int64)a2 < v10 )
  {
    v13 = 1;
    v50 = 0xFFFFFF0000000000uLL;
    do
    {
      LOBYTE(v10) = 0;
      v14 = 48LL * *v9 - 0x220000000000LL;
      if ( v14 != qword_140C69380 )
      {
        LOBYTE(v10) = *(_BYTE *)(v14 + 34) & 7;
        if ( (_BYTE)v10 != 7 || *(_QWORD *)(v14 + 8) != -3LL )
        {
          v15 = *(_QWORD *)a4;
          v16 = (a6 & 0x40) != 0;
          if ( (a6 & 0x40) != 0 )
          {
            v33 = (unsigned int)MiIsPrototypePteVadLookup(v15) == 0;
            v34 = v15;
            if ( v33 )
            {
              if ( qword_140C657C0 && (v15 & 0x10) == 0 )
                v34 = v15 & ~qword_140C657C0;
              v34 = *(_QWORD *)(48 * ((*(_QWORD *)(v34 >> 16) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16);
            }
            *(_QWORD *)(v14 + 16) = MiSwizzleInvalidPte(32LL * (MmMakeProtectNotWriteCopy[((unsigned __int64)v34 >> 5) & 0x1F] & 0x1F));
            v48 = v21;
          }
          else
          {
            if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
            {
              v17 = *(_QWORD *)a4;
              v18 = *(_QWORD *)a4;
            }
            else
            {
              v35 = *(_QWORD *)a4;
              if ( qword_140C657C0 && (v15 & 0x10) == 0 )
                v35 = v15 & ~qword_140C657C0;
              v17 = *(_QWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16);
              v18 = v17;
            }
            v19 = v17 >> 5;
            *(_QWORD *)(v14 + 16) = v18;
            if ( (a6 & 0x10) != 0 )
              *(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL;
            v20 = v19 & 0x1F;
            v48 = v20;
            v21 = v20;
            if ( v20 == 24 )
            {
              v48 = 24;
              if ( v11 <= 0x7FFFFFFEFFFFLL )
              {
                MiLockVadTree(1LL);
                Address = MiLocateAddress(a1);
                LOBYTE(v37) = 17;
                v38 = Address;
                MiUnlockVadTree(1LL, v37);
                v39 = *((_DWORD *)v38 + 12);
                v13 = 1;
                v6 = v53;
                v12 = v49;
                v16 = (a6 & 0x40) != 0;
                v21 = (v39 >> 7) & 0x1F;
                v48 = 24;
              }
            }
          }
          v65 = v13;
          if ( v21 )
          {
            if ( v21 == 31 )
            {
              v65 = v13;
            }
            else if ( v21 >> 3 == 3 )
            {
              if ( (v21 & 7) != 0 )
                v65 = 2;
            }
            else if ( v21 >> 3 == 1 )
            {
              v65 = 0;
            }
          }
          else
          {
            v65 = 3;
          }
          if ( v12 == 0x3FFFFFFFFFLL )
          {
            v22 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v23 = *(_QWORD *)v22;
            if ( v22 >= 0xFFFFF6FB7DBED000uLL
              && v22 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v23 & 1) != 0
              && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v41 = *((_QWORD *)&Flink->Flink + ((v22 >> 3) & 0x1FF));
                if ( (v41 & 0x20) != 0 )
                  v23 |= 0x20uLL;
                if ( (v41 & 0x42) != 0 )
                  v23 |= 0x42uLL;
              }
            }
            v54 = v23;
            v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFFLL;
            v49 = v12;
            v16 = (a6 & 0x40) != 0;
            v7 = 48 * v12 - 0x220000000000LL;
          }
          v51 = a4;
          v24 = a4;
          if ( (a6 & 0x20) != 0 )
          {
            v24 = a4 & 0x7FFFFFFFFFFFFFFFLL;
            v51 = a4 & 0x7FFFFFFFFFFFFFFFLL;
          }
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v31) = 4;
            else
              v31 = (-1LL << (CurrentIrql + 1)) & 4;
            v32 = v31 | SchedulerAssist[5];
            v24 = v51;
            SchedulerAssist[5] = v32;
          }
          v52 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v52);
              while ( *(__int64 *)(v14 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
            v12 = v49;
            v16 = (a6 & 0x40) != 0;
            v24 = v51;
          }
          *(_BYTE *)(v14 + 34) |= 0x20u;
          v26 = a5;
          if ( a5 )
            v26 = a5 + 32;
          *(_QWORD *)v14 = v26;
          if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v65 )
          {
            MiChangePageAttribute(v14, v65, 1LL, v12);
            v12 = v49;
            v16 = (a6 & 0x40) != 0;
            v24 = v51;
          }
          *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v14 + 32) = 1;
          if ( (a6 & 8) != 0 )
            *(_BYTE *)(v14 + 35) ^= (*(_BYTE *)(v14 + 35) ^ a6) & 7;
          v27 = *(_QWORD *)(v14 + 40);
          v58 = 0LL;
          v59 = v27;
          v62 = 0LL;
          v63 = v12 & 0xFFFFFFFFFFLL | v50 & v27;
          v56 = 0LL;
          v57 = 0LL;
          v60 = 0LL;
          v61 = 0LL;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 40), v63, v27);
          v63 = v28;
          if ( v59 != v28 )
          {
            do
            {
              v59 = v28;
              v42 = v28;
              v63 = v12 & 0xFFFFFFFFFFLL | v50 & v28;
              v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 40), v63, v28);
              v63 = v28;
            }
            while ( v42 != v28 );
          }
          v29 = *(_BYTE *)(v14 + 34);
          *(_QWORD *)(v14 + 8) = v24;
          *(_BYTE *)(v14 + 34) = v29 & 0xF8 | 2;
          if ( a6 < 0 )
            *(_BYTE *)(v14 + 35) |= 0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v43 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v45 = CurrentPrcb->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v33 = (v46 & v45[5]) == 0;
              v45[5] &= v46;
              if ( v33 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                v16 = (a6 & 0x40) != 0;
              }
              v12 = v49;
            }
          }
          LOBYTE(v10) = CurrentIrql;
          __writecr8(CurrentIrql);
          if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
          {
            v10 = 32 * (((*v9 & 0xFFFFFFFFFFLL) << 7) | v48 & 0x1F | 0x40);
            if ( qword_140C657C0 )
            {
              if ( (qword_140C657C0 & v10) != 0 )
                v10 |= 0x10uLL;
              else
                v10 |= qword_140C657C0;
            }
            *(_QWORD *)a4 = v10;
          }
          v11 = a1;
          v13 = 1;
          if ( !v16 )
            v53 = ++v6;
        }
      }
      ++v9;
      a4 += 8LL;
    }
    while ( (unsigned __int64)v9 < v55 );
    if ( v6 )
    {
      LODWORD(v50) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      LOBYTE(v10) = -1;
      *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + v6)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return v10;
}
