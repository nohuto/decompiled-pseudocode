/*
 * XREFs of MiDecrementHugeContext @ 0x1403D0A68
 * Callers:
 *     MiGetHugePageToZero @ 0x1402E41D8 (MiGetHugePageToZero.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x1402F309C (MiDereferenceAnyActiveHugeContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x1403BA8F4 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiStopPageAccessor @ 0x1402FD06C (MiStopPageAccessor.c)
 *     MiRemoveFaultNode @ 0x1403D0F48 (MiRemoveFaultNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockHugePfn @ 0x14061EFAC (MiLockHugePfn.c)
 *     MiReleaseLargeZeroingVa @ 0x140652CD8 (MiReleaseLargeZeroingVa.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDecrementHugeContext(char *P, __int64 a2)
{
  bool v2; // zf
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rdx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v13; // eax
  struct _KPRCB *v14; // rcx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r11
  _DWORD *v17; // r9
  int v18; // eax

  v2 = (*((_DWORD *)P + 81))-- == 1;
  if ( !v2 )
    return;
  v5 = (__int64 *)(P + 80);
  v6 = *v5;
  if ( *v5 )
  {
    v7 = (__int64 **)v5[1];
    if ( *(__int64 **)(v6 + 8) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( *((_DWORD *)P + 82) != 512 )
    {
      if ( P[70] )
        goto LABEL_31;
      v8 = *((_QWORD *)P + 3);
      if ( P[68] )
      {
        if ( !v8 )
          goto LABEL_31;
        v9 = (unsigned __int8)MiLockHugePfn(*((_QWORD *)P + 3));
        MiStopPageAccessor(v8, 1);
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140C67A78 + 4
                                                      * ((((__int64)(v8 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((__int64)(v8 - qword_140C67A70) >> 3) & 0x1F)));
        if ( !KiIrqlFlags )
          goto LABEL_30;
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_30;
        if ( CurrentIrql > 0xFu )
          goto LABEL_30;
        if ( (unsigned __int8)v9 > 0xFu )
          goto LABEL_30;
        if ( CurrentIrql < 2u )
          goto LABEL_30;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v2 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( !v2 )
          goto LABEL_30;
        v14 = CurrentPrcb;
      }
      else
      {
        if ( !v8 )
          goto LABEL_31;
        v9 = (unsigned __int8)MiLockPageInline(*((_QWORD *)P + 3));
        MiStopPageAccessor(v8, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags
          || (v15 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
          || v15 > 0xFu
          || (unsigned __int8)v9 > 0xFu
          || v15 < 2u
          || (v16 = KeGetCurrentPrcb(),
              v17 = v16->SchedulerAssist,
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1)),
              v2 = (v18 & v17[5]) == 0,
              v17[5] &= v18,
              !v2) )
        {
LABEL_30:
          __writecr8(v9);
LABEL_31:
          if ( a2 )
            MiReleaseLargeZeroingVa(a2, 1LL);
          goto LABEL_7;
        }
        v14 = v16;
      }
      KiRemoveSystemWorkPriorityKick(v14);
      goto LABEL_30;
    }
  }
LABEL_7:
  if ( P[69] )
    MiRemoveFaultNode(P);
  ExFreePoolWithTag(P, 0);
}
