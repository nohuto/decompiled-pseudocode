/*
 * XREFs of MiScrubLargePage @ 0x14065C38C
 * Callers:
 *     MiScrubLargePageRegions @ 0x140A437AC (MiScrubLargePageRegions.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPageListCollision @ 0x1402FD02C (MiPageListCollision.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiRemoveFaultNode @ 0x1403D0F48 (MiRemoveFaultNode.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubInterrupted @ 0x14065BE30 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x14065CB10 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargePage(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v5; // r14d
  __int64 v6; // rdi
  _DWORD *v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int8 v10; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int64 UltraMapping; // rdx
  unsigned __int64 v17; // rsi
  unsigned int i; // ecx
  int ProtectionPfnCompatible; // eax
  int v20; // r8d
  unsigned __int64 ValidPte; // rbx
  __int64 v22; // r8
  int v23; // ecx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdi
  __int64 v26; // r8
  volatile signed __int64 *v27; // rsi
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // edx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r12
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  int v44; // ecx
  unsigned __int64 v45; // r12
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  int v50; // [rsp+20h] [rbp-108h]
  int v51; // [rsp+40h] [rbp-E8h]
  int v52; // [rsp+40h] [rbp-E8h]
  __int64 v53; // [rsp+48h] [rbp-E0h]
  int v54; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+50h] [rbp-D8h]
  __int64 v56; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v57; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v58; // [rsp+68h] [rbp-C0h]
  int v59; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-B0h]
  _QWORD *v61; // [rsp+80h] [rbp-A8h]
  __int64 v62; // [rsp+88h] [rbp-A0h] BYREF
  _DWORD *v63; // [rsp+90h] [rbp-98h]
  unsigned __int64 v64; // [rsp+98h] [rbp-90h]
  _QWORD v65[17]; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int8 v67; // [rsp+140h] [rbp+18h]
  __int64 *v68; // [rsp+148h] [rbp+20h]
  int v69; // [rsp+148h] [rbp+20h]
  BOOL v70; // [rsp+148h] [rbp+20h]

  v3 = a3;
  v5 = 0;
  v59 = 0;
  v62 = 0LL;
  v57 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v68 = &MiLargePageSizes[a3];
  v53 = *v68;
  v61 = v65;
  memset(v65, 0, 0x50uLL);
  BYTE1(v65[9]) = 1;
  v7 = (_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3;
  v63 = v7;
  *v7 |= 0x100u;
  v8 = MiTryUnlinkNodeLargePages(v6, a2, v3, 1LL, 512, &v59, (unsigned __int64)v65);
  v58 = v8;
  v60 = v8;
  if ( !v8 )
  {
    *v7 &= ~0x100u;
    return 1LL;
  }
  v10 = MiLockPageInline(v8);
  v67 = v10;
  if ( BYTE6(v65[8]) )
  {
    MiRemoveFaultNode((__int64)v65);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v10);
    *v63 &= ~0x100u;
    return 1LL;
  }
  UltraMapping = MiGetUltraMapping((unsigned __int64 *)(32 * v3 + a1 + 48), v3, *v68, 0);
  v55 = UltraMapping;
  v17 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = v3; i <= 1; ++i )
    v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65[4] = v17;
  LODWORD(v65[8]) = v3;
  v65[5] = UltraMapping;
  v65[6] = UltraMapping + (v53 << 12) - 1;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v8);
  v20 = -1543503872;
  if ( (unsigned int)v3 > 1 )
    v20 = -1610612736;
  ValidPte = MiMakeValidPte(
               v17,
               0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4),
               ProtectionPfnCompatible | (unsigned int)v20);
  if ( (unsigned int)v3 <= 1 )
  {
    if ( MiPteInShadowRange(v17) )
    {
      if ( MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C6697C) )
          goto LABEL_22;
      }
      else
      {
        v23 = 0;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_22:
          if ( (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      v23 = 0;
    }
    *(_QWORD *)v17 = ValidPte;
    if ( v23 )
      MiWritePteShadow(v17, ValidPte, v22);
    goto LABEL_42;
  }
  v24 = v17 + 8 * v53;
  while ( v17 < v24 )
  {
    v25 = ValidPte;
    v69 = 0;
    if ( !MiPteInShadowRange(v17) )
      goto LABEL_38;
    if ( MiPteHasShadow() )
    {
      v69 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_38;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_38;
    }
    if ( (ValidPte & 1) != 0 )
      v25 = ValidPte | 0x8000000000000000uLL;
LABEL_38:
    *(_QWORD *)v17 = v25;
    if ( v69 )
      MiWritePteShadow(v17, v25, v26);
    ValidPte ^= (ValidPte ^ ((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
    v17 += 8LL;
  }
  v8 = v58;
  v10 = v67;
LABEL_42:
  v27 = (volatile signed __int64 *)(v8 + 24);
  v64 = v8 + 24;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && v10 <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v15 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)v29);
    }
  }
  __writecr8(v67);
  v51 = 0;
  v56 = v8;
  v32 = v8 + 48 * v53;
  v58 = v32;
  v33 = v55;
  while ( 1 )
  {
    if ( v8 >= v32 )
    {
      v44 = 0;
      goto LABEL_75;
    }
    v52 = MiScrubPage(a1, v8, v33, 0LL, v50);
    v70 = MiScrubInterrupted(a1);
    v34 = (unsigned __int8)MiLockPageInline(v56);
    v54 = BYTE6(v65[8]);
    v35 = v52;
    if ( HIBYTE(v65[8]) )
      v35 = 0;
    v51 = v35;
    if ( BYTE6(v65[8]) || v70 || v35 < 0 )
      break;
    _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v36 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
        v15 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v37);
      }
    }
    __writecr8(v34);
    v8 += 48LL;
    v60 = v8;
    v33 = v55 + 4096;
    v55 += 4096LL;
    v32 = v58;
  }
  MiRemoveFaultNode((__int64)v61);
  if ( !v54 )
    MiPageListCollision(v56, 0, 0);
  _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v40 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v40 >= 2u )
    {
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
      v15 = (v43 & v42[5]) == 0;
      v42[5] &= v43;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)v41);
    }
  }
  __writecr8(v34);
  v44 = 1;
LABEL_75:
  if ( !v44 )
  {
    v45 = (unsigned __int8)MiLockPageInline(v56);
    MiRemoveFaultNode((__int64)v61);
    if ( !BYTE6(v65[8]) )
      MiPageListCollision(v56, 0, 0);
    _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v46 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
        v15 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
    }
    __writecr8(v45);
  }
  if ( v51 < 0 )
  {
    v62 = 4096LL;
    v57 = (0xAAAAAAAAAAAAB000uLL * ((__int64)(v8 + 0x220000000000LL) >> 4)) | 1;
    MmMarkPhysicalMemoryAsBad((int *)&v57, &v62);
  }
  *v63 &= ~0x100u;
  LOBYTE(v5) = v51 >= 0;
  return v5;
}
