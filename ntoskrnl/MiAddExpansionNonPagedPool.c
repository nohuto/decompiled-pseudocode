/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x140394B74
 * Callers:
 *     MiFreeLargeInitializationCodePages @ 0x140391BEC (MiFreeLargeInitializationCodePages.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiReturnPhysicalPoolPages @ 0x1402D878C (MiReturnPhysicalPoolPages.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  int v8; // ebx
  unsigned __int8 v9; // al
  char v10; // cl
  unsigned __int64 v11; // rbp
  char v12; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  if ( a2 )
  {
    v2 = MiSwizzleInvalidPte(128LL);
    v4 = 48 * v3 - 0x220000000000LL;
    v6 = 0LL;
    v7 = v4 + 48 * v5;
    v8 = -1;
    do
    {
      if ( v8 != *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4)) + 2) )
      {
        if ( v6 )
        {
          MiReturnPhysicalPoolPages(v6, 0);
          v6 = 0LL;
        }
        v8 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4)) + 2);
      }
      v9 = MiLockPageInline(v4);
      v10 = *(_BYTE *)(v4 + 34);
      *(_QWORD *)(v4 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(v4 + 34) = v10 & 0xC7;
      v11 = v9;
      *(_BYTE *)(v4 + 35) &= ~0x20u;
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 16) = v2;
      MiSetPfnIdentity(v4, 0);
      *(_BYTE *)(v4 + 35) |= 0x10u;
      MiSetPfnPteFrame(v4, 0LL);
      if ( (*(_BYTE *)(v4 + 34) & 0xC0) != 0x40 )
        MiChangePageAttribute(v4, 1, 3u);
      v12 = *(_BYTE *)(v4 + 34) & 0xFD;
      *(_QWORD *)(v4 + 8) = -8LL;
      *(_BYTE *)(v4 + 34) = v12 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v11);
      *(_QWORD *)v4 = v6;
      v6 = v4;
      v4 += 48LL;
    }
    while ( v4 < v7 );
    MiReturnPhysicalPoolPages(v6, 0);
  }
}
