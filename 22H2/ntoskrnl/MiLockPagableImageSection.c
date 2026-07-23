/*
 * XREFs of MiLockPagableImageSection @ 0x14029CB80
 * Callers:
 *     MmUnlockPagableImageSection @ 0x14029B0A0 (MmUnlockPagableImageSection.c)
 *     PoRunDownDeviceObject @ 0x140360358 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403A67F0 (HalpPowerStateCallback.c)
 *     IopLiveDumpUnLockPages @ 0x14050A218 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableSectionByHandle @ 0x14063C7E0 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x1406FE5A0 (MmLockPagableDataSection.c)
 *     IopLiveDumpLockPages @ 0x140898718 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x1408AE014 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408BA6C8 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408C95AC (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3658 (PopDirectedDripsNotifyAppsAndServices.c)
 *     KiInitializeMTRR @ 0x140A4CEC4 (KiInitializeMTRR.c)
 *     MiLockPagableSections @ 0x140A545BC (MiLockPagableSections.c)
 * Callees:
 *     MiUnlockImageSection @ 0x14029B0C0 (MiUnlockImageSection.c)
 *     MmUnlockLoadedModuleListShared @ 0x14029CDE4 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14029CF18 (MmLockLoadedModuleListShared.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x14063C7FC (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  ULONG_PTR v9; // r8
  char *v10; // rsi
  PIMAGE_NT_HEADERS v11; // r8
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v13; // rdx
  __int64 v14; // r9
  volatile signed __int32 *v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 v17; // r11
  unsigned __int64 SectionAlignment; // r10
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int8 v21; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 == 1 )
    return;
  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2)
    || (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
  {
    return;
  }
  v7 = 0LL;
  v21 = 17;
  MmLockLoadedModuleListShared(&v21, v4, v5, v6);
  v8 = (_QWORD *)qword_140C4CD60;
  if ( !qword_140C4CD60 )
    goto LABEL_10;
  while ( 1 )
  {
    v9 = *(v8 - 23);
    if ( BugCheckParameter2 > v9 + (unsigned int)(*((_DWORD *)v8 - 42) - 1) )
    {
      v8 = (_QWORD *)v8[1];
      goto LABEL_21;
    }
    if ( BugCheckParameter2 >= v9 )
      break;
    v8 = (_QWORD *)*v8;
LABEL_21:
    if ( !v8 )
      goto LABEL_10;
  }
  if ( v8 )
    v7 = v8 - 29;
LABEL_10:
  MmUnlockLoadedModuleListShared(v21);
  if ( !v7 )
    KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
  v10 = (char *)v7[6];
  v11 = RtlImageNtHeader(v10);
  BugCheckParameter4 = v11->FileHeader.NumberOfSections;
  v13 = (__int64)(BugCheckParameter2 - v11->FileHeader.SizeOfOptionalHeader - (_QWORD)v11 - 24) / 40;
  if ( (unsigned int)v13 >= (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v13, BugCheckParameter4);
  v14 = *(unsigned int *)(BugCheckParameter2 + 16);
  v15 = (volatile signed __int32 *)(v7[28] + 4LL * (unsigned int)v13);
  v16 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (unsigned int)v14 < v16 )
    v14 = v16;
  v17 = (unsigned __int64)&v10[*(unsigned int *)(BugCheckParameter2 + 12)];
  SectionAlignment = v11->OptionalHeader.SectionAlignment;
  v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( SectionAlignment > 0x1000 )
    SectionAlignment = 4096LL;
  v20 = (((~(SectionAlignment - 1) & (v17 + SectionAlignment + v14 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
  if ( (_DWORD)v2 == 1 )
    MiLockImageSection(v7, v15, v19, v20 - 0x98000000008LL);
  else
    MiUnlockImageSection(v15, v19, v20 - 0x98000000008LL, BugCheckParameter2);
}
