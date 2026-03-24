/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x14027C5B0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        __int64 Process,
        _QWORD *a2,
        int a3,
        __int64 SchedulerAssist,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // r11
  _QWORD *v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 Address; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  char v28; // r10
  unsigned int v29; // r13d
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rdi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned __int8 CurrentIrql; // r12
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int8 v39; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v41; // eax
  bool v42; // zf
  int v43; // [rsp+20h] [rbp-78h]
  int v44; // [rsp+24h] [rbp-74h] BYREF
  int v45; // [rsp+28h] [rbp-70h] BYREF
  __int64 v46; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-58h]
  unsigned __int64 v49; // [rsp+A0h] [rbp+8h]
  _QWORD *v50; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v51; // [rsp+B8h] [rbp+20h]

  v51 = SchedulerAssist;
  v50 = a2;
  v49 = Process;
  v6 = SchedulerAssist;
  v7 = a2;
  v8 = Process;
  v9 = 0LL;
  v10 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v48 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v13 = 48LL * *v7 - 0x58000000000LL;
      if ( v13 != qword_140C4ED70 )
        break;
LABEL_129:
      v6 += 8LL;
      v7 = v50 + 1;
      v51 = v6;
      v50 = v7;
      if ( (unsigned __int64)v7 >= v48 )
        return result;
    }
    v14 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, 0xFFFFFA8000000000uLL, SchedulerAssist)
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v15 = *(_QWORD *)(Process + 1928);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * ((v6 >> 3) & 0x1FF));
        v17 = v14 | 0x20;
        Process = (unsigned __int8)v16;
        LOBYTE(Process) = v16 & 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = v14;
        v14 = v17;
        if ( (v16 & 0x42) != 0 )
          v14 = v17 | 0x42;
      }
    }
    v19 = (unsigned __int8)a6;
    v46 = v14;
    v18 = v14;
    LOBYTE(v19) = (a6 & 0x40) != 0;
    LOBYTE(v43) = 0;
    v20 = 0LL;
    if ( (a6 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v14) )
      {
        v21 = v14;
      }
      else
      {
        v22 = v14;
        if ( qword_140C4DF40 && (v14 & 0x10) == 0 )
          v22 = v14 & ~qword_140C4DF40;
        v46 = MI_READ_PTE_LOCK_FREE(v22 >> 16);
        v23 = MI_READ_PTE_LOCK_FREE(&v46);
        v21 = MI_READ_PTE_LOCK_FREE(48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
      }
      v43 = MmMakeProtectNotWriteCopy[(v21 >> 5) & 0x1F];
      v18 = MiSwizzleInvalidPte(32LL * (v43 & 0x1F));
    }
    else
    {
      v24 = v14;
      if ( (v14 & 0x400) != 0 || (v14 & 0x800) == 0 )
      {
LABEL_30:
        *(_QWORD *)(v13 + 16) = v18;
        if ( (_BYTE)v19 )
        {
          LODWORD(Address) = v20;
        }
        else
        {
          if ( (a6 & 0x10) != 0
            && (*(_QWORD *)(v13 + 40) |= 0x8000000000000000uLL,
                Process = (__int64)&v46,
                (unsigned __int64)&v46 >= 0xFFFFF6FB7DBED000uLL)
            && (Process = (__int64)&v46, (unsigned __int64)&v46 <= v12) )
          {
            if ( (unsigned int)MiPteHasShadow(&v46, v24, v20, v19)
              && (v24 & 1) != 0
              && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
            {
              Process = (__int64)KeGetCurrentThread()->ApcState.Process;
              v20 = *(_QWORD *)(Process + 1928);
              if ( v20 )
              {
                v27 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v46 >> 3) & 0x1FF));
                if ( (v27 & 0x20) != 0 )
                  v26 |= 0x20uLL;
                if ( (v27 & 0x42) != 0 )
                  v26 |= 0x42uLL;
              }
              else
              {
                v26 = v46;
              }
            }
          }
          else
          {
            v26 = v24;
          }
          v43 = (v26 >> 5) & 0x1F;
          Address = (v26 >> 5) & 0x1F;
          if ( v43 == 24 )
          {
            Process = 0x7FFFFFFEFFFFLL;
            LOBYTE(v43) = 24;
            if ( v8 <= 0x7FFFFFFEFFFFLL )
            {
              Address = (__int64)MiLocateAddress(v8);
              LOBYTE(v43) = v28;
              LODWORD(Address) = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
            }
          }
        }
        if ( (_DWORD)Address )
        {
          if ( (_DWORD)Address == 31 )
          {
            v29 = 1;
          }
          else
          {
            Process = (unsigned int)Address >> 3;
            if ( (_DWORD)Process == 3 && (Address & 7) != 0 )
              v29 = 2;
            else
              v29 = Process != 1;
          }
        }
        else
        {
          v29 = 3;
        }
        SchedulerAssist = 0xFFFFFFFFFLL;
        if ( v10 == 0xFFFFFFFFFLL )
        {
          v24 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v30 = 0xFFFFF6FB7DBED000uLL;
          v31 = *(_QWORD *)v24;
          v20 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v24 >= 0xFFFFF6FB7DBED000uLL
            && v24 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(Process, v24, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFFFFFFLL)
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v33 = *((_QWORD *)&Flink->Flink + ((v24 >> 3) & 0x1FF));
              v24 = v31 | 0x20;
              if ( (v33 & 0x20) == 0 )
                v24 = v31;
              v31 = v24;
              if ( (v33 & 0x42) != 0 )
                v31 = v24 | 0x42;
            }
          }
          v47 = v31;
          if ( (unsigned __int64)&v47 >= v30
            && (unsigned __int64)&v47 <= v20
            && (unsigned int)MiPteHasShadow(&v47, v24, v20, SchedulerAssist)
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            v24 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v24 )
            {
              v34 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v47 >> 3) & 0x1FF));
              v24 = v31 | 0x20;
              if ( (v34 & 0x20) == 0 )
                v24 = v31;
              v31 = v24;
              if ( (v34 & 0x42) != 0 )
                v31 = v24 | 0x42;
            }
          }
          v10 = SchedulerAssist & (v31 >> 12);
          v9 = 48 * v10 - 0x58000000000LL;
        }
        v35 = v6;
        if ( (a6 & 0x20) != 0 )
          v35 = v6 & 0x7FFFFFFFFFFFFFFFLL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          v24 = (-1LL << (CurrentIrql + 1)) & 4;
          v20 = (unsigned int)v24 | *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v20;
        }
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44, v24, v20, SchedulerAssist);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        *(_BYTE *)(v13 + 34) |= 0x20u;
        v37 = a5;
        if ( a5 )
          v37 = a5 + 32;
        *(_QWORD *)v13 = v37;
        Process = *(unsigned __int8 *)(v13 + 34);
        if ( *(unsigned __int8 *)(v13 + 34) >> 6 != v29 )
        {
          MiChangePageAttribute(v13, v29, 1LL);
          Process = *(unsigned __int8 *)(v13 + 34);
        }
        *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v13 + 32) = 1;
        if ( (a6 & 8) != 0 )
          *(_BYTE *)(v13 + 35) ^= (*(_BYTE *)(v13 + 35) ^ a6) & 7;
        v38 = v10 ^ *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 8) = v35;
        LOBYTE(Process) = Process & 0xF8 | 2;
        *(_QWORD *)(v13 + 40) ^= v38 & 0xFFFFFFFFFLL;
        *(_BYTE *)(v13 + 34) = Process;
        if ( a6 < 0 )
          *(_BYTE *)(v13 + 35) |= 0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              Process = (unsigned int)CurrentIrql + 1;
              v24 = -1LL << (CurrentIrql + 1);
              SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
              v41 = ~(unsigned __int16)v24;
              v42 = (v41 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v20 = (unsigned int)v41 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v20;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( (v14 & 0x400) == 0 && (v14 & 0x800) != 0 )
        {
          v6 = v51;
        }
        else
        {
          v24 = 32 * (((*v50 & 0xFFFFFFFFFLL) << 7) | v43 & 0x1F | 0x40);
          if ( qword_140C4DF40 )
          {
            if ( (qword_140C4DF40 & v24) != 0 )
              v24 |= 0x10uLL;
            else
              v24 |= qword_140C4DF40;
          }
          result = 0xFFFFF6FB7DBED000uLL;
          v6 = v51;
          if ( v51 >= 0xFFFFF6FB7DBED000uLL )
          {
            result = 0xFFFFF6FB7DBED7F8uLL;
            if ( v51 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (unsigned int)MiPteHasShadow(Process, v24, v20, SchedulerAssist) )
              {
                if ( !HIBYTE(word_140C4E008) && (v24 & 1) != 0 )
                  v24 |= 0x8000000000000000uLL;
                *(_QWORD *)v6 = v24;
                result = MiWritePteShadow(v6, v24);
                goto LABEL_123;
              }
              result = (unsigned __int64)KeGetCurrentThread();
              Process = *(_QWORD *)(result + 184);
              if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v24 & 1) != 0 )
              {
                result = 0x8000000000000000uLL;
                v24 |= 0x8000000000000000uLL;
              }
            }
          }
          *(_QWORD *)v6 = v24;
        }
LABEL_123:
        if ( (a6 & 0x40) == 0 )
        {
          v45 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v45, v24, v20, SchedulerAssist);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          result = *(_QWORD *)(v9 + 24);
          Process = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v9 + 24) = Process;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = v51;
        }
        v8 = v49;
        v12 = 0xFFFFF6FB7DBED7F8uLL;
        goto LABEL_129;
      }
      if ( qword_140C4DF40 && (v14 & 0x10) == 0 )
        v18 = v14 & ~qword_140C4DF40;
      Process = 6 * ((v18 >> 12) & 0xFFFFFFFFFLL);
      v18 = *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
    }
    v24 = v18;
    v46 = v18;
    goto LABEL_30;
  }
  return result;
}
