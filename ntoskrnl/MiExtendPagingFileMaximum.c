/*
 * XREFs of MiExtendPagingFileMaximum @ 0x140636BC4
 * Callers:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140636AEC (MiDerefPageFileSpaceBitmaps.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  KIRQL v6; // al
  __int64 v7; // rbp
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __int64 *v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned int v13; // edi
  ULONG v14; // edx
  ULONG v15; // edi
  __int128 v16; // xmm1
  _DWORD *v17; // rax
  void *v18; // rbx
  volatile LONG *v19; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  __int64 *v25; // r15
  unsigned int v26; // edi
  unsigned __int64 v27; // r12
  __int64 v28; // rbx
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rbp
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  _DWORD *v39[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v40; // [rsp+30h] [rbp-68h]
  __int64 v41; // [rsp+40h] [rbp-58h]
  int v42; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v43; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v44; // [rsp+B0h] [rbp+18h] BYREF
  __int64 *v45; // [rsp+B8h] [rbp+20h]

  v44 = a3;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v7 = *(_QWORD *)(a1 + 112);
  v8 = (unsigned __int64 *)(a1 + 216);
  v9 = v6;
  v10 = *(unsigned int *)(v7 + 8);
  v42 = *(_DWORD *)(v7 + 8);
  if ( a3 )
  {
    v11 = (__int64 *)(((*v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v45 = v11;
    v12 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = (((unsigned __int64)(unsigned int)dword_140C692CC * v10) >> 12)
        + ((((unsigned int)dword_140C692CC * v10) & 0xFFF) != 0);
    memmove((void *)v12, v11, 8 * v43);
    memset(v11, 0, 8 * v43);
    LODWORD(v10) = v42;
  }
  else
  {
    v45 = 0LL;
    v12 = 0LL;
    v43 = 0LL;
  }
  v13 = 8 * (((unsigned int)v10 >> 6) + ((v10 & 0x3F) != 0));
  memmove(*(void **)(a2 + 16), *(const void **)(v7 + 16), v13);
  memmove(*(void **)(a2 + 32), *(const void **)(v7 + 32), v13);
  v14 = *(_DWORD *)(v7 + 8);
  v15 = 8 * v13 - v14;
  if ( v15 )
  {
    RtlSetBits((PRTL_BITMAP)(a2 + 8), v14, v15);
    RtlSetBits((PRTL_BITMAP)(a2 + 24), *(_DWORD *)(v7 + 24), v15);
  }
  *(_QWORD *)(a1 + 8) = *(unsigned int *)(a2 + 8);
  v16 = *(_OWORD *)(v7 + 16);
  v39[1] = *(_DWORD **)(v7 + 8);
  v39[0] = (_DWORD *)v7;
  v41 = *(_QWORD *)(v7 + 32);
  v40 = v16;
  v17 = MiDerefPageFileSpaceBitmaps(a1, v39, 1);
  *(_QWORD *)(a1 + 112) = a2;
  v18 = v17;
  v19 = (volatile LONG *)(a1 + 232);
  *v8 = v44;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v24 = (v23 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  v25 = v45;
  if ( v45 )
  {
    v26 = v43;
    if ( v43 )
    {
      v27 = v43;
      do
      {
        v44 = MI_READ_PTE_LOCK_FREE(v12);
        if ( (v44 & 1) != 0 )
        {
          v28 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFFLL)
              - 0x220000000000LL;
          if ( (*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != v12 )
          {
            v29 = (unsigned __int8)MiLockPageInline(v28);
            v30 = ExAcquireSpinLockExclusive(v19);
            v44 = MI_READ_PTE_LOCK_FREE(v12);
            if ( (v44 & 1) != 0
              && v28 == 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFFLL)
                      - 0x220000000000LL
              && (*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != v12 )
            {
              v44 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              MiSetPfnPteFrame(v28, (v44 >> 12) & 0xFFFFFFFFFFLL);
              *(_QWORD *)(v28 + 8) = v12;
            }
            ExReleaseSpinLockExclusiveFromDpcLevel(v19);
            if ( KiIrqlFlags )
            {
              v31 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v31 >= 2u )
              {
                v32 = KeGetCurrentPrcb();
                v33 = v32->SchedulerAssist;
                v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
                v24 = (v34 & v33[5]) == 0;
                v33[5] &= v34;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)v32);
              }
            }
            __writecr8(v30);
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              v35 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v35 >= 2u )
              {
                v36 = KeGetCurrentPrcb();
                v37 = v36->SchedulerAssist;
                v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
                v24 = (v38 & v37[5]) == 0;
                v37[5] &= v38;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)v36);
              }
            }
            __writecr8(v29);
          }
        }
        v12 += 8LL;
        --v27;
      }
      while ( v27 );
      v26 = v43;
      v25 = v45;
    }
    MiReleasePtes((__int64)&qword_140C695C0, v25, v26);
  }
}
