/*
 * XREFs of MiInitializeTransitionPfn @ 0x140214B28
 * Callers:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x1402EAAAC (MiInitializeNewImageSectionProtos.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiProtectionToCacheAttribute @ 0x14028A2D0 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  char v10; // al
  char v11; // al
  unsigned __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 result; // rax
  bool v21; // zf

  v6 = 48 * a1 - 0x220000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2, a2, a3);
  *(_QWORD *)v6 = 0LL;
  v8 = ContainingPageTable;
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
    v9 = *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL);
  *(_QWORD *)(v6 + 16) = v9;
  *(_QWORD *)(v6 + 40) |= 0x8000000000000000uLL;
  MiSetPfnPteFrame(v6, v8);
  v10 = *(_BYTE *)(v6 + 34);
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(v6 + 8) = a2;
  if ( (v10 & 0x10) != 0 )
    v11 = v10 & 0xF8 | 3;
  else
    v11 = v10 & 0xF8 | 2;
  *(_BYTE *)(v6 + 34) = v11;
  v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 5) & 0x1F;
  v13 = MiProtectionToCacheAttribute(v12);
  MiFinalizePageAttribute(v6, v13, 1LL);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
  {
    v14 = MiSwizzleInvalidPte(32 * ((unsigned int)v12 | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40));
    v15 = 0;
    if ( !(unsigned int)MiPteInShadowRange(a2) )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow(v17, v16, v18) )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v21 = (v14 & 1) == 0;
        goto LABEL_17;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v21 = (v14 & 1) == 0;
LABEL_17:
      if ( !v21 )
        v14 |= 0x8000000000000000uLL;
    }
LABEL_6:
    *a2 = v14;
    if ( v15 )
      MiWritePteShadow(a2, v14);
  }
  v19 = 48 * v8 - 0x220000000000LL;
  MiLockNestedPageAtDpcInline(v19);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
