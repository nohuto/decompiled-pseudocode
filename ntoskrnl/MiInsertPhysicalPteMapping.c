/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x14029F690
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14029F4D8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14062E820 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiProtectionToCacheAttribute @ 0x14028A2D0 (MiProtectionToCacheAttribute.c)
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiAssignInitialPageAttribute @ 0x14039DE84 (MiAssignInitialPageAttribute.c)
 *     MiLookupIoPageNode @ 0x1403AB558 (MiLookupIoPageNode.c)
 *     MiShowBadMapper @ 0x14062EC9C (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int ProtectionPfnCompatible; // ebx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int64 ValidPte; // rbx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 UsedPtesHandle; // rax
  volatile signed __int32 *v16; // rbx
  __int64 result; // rax
  int v18; // eax
  bool v19; // zf
  int v20; // [rsp+50h] [rbp+18h] BYREF

  ProtectionPfnCompatible = a3;
  v7 = MiProtectionToCacheAttribute(a3);
  if ( v6 <= qword_140C65820 && (v8 = 6 * v6, ((*(_QWORD *)(8 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
  {
    v9 = 8 * v8 - 0x220000000000LL;
    if ( !*(_WORD *)(v9 + 32) )
      MiShowBadMapper(a2, 3uLL);
    if ( (*(_BYTE *)(v9 + 34) & 0xC0) == 0xC0 )
      MiAssignInitialPageAttribute(v9, v7);
    if ( *(unsigned __int8 *)(v9 + 34) >> 6 != v7 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v9);
  }
  else
  {
    ProtectionPfnCompatible &= 7u;
    v18 = MiLookupIoPageNode(a2);
    if ( v18 )
    {
      if ( v18 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 0x10u;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000);
  v11 = 0;
  if ( (unsigned int)MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v13, v12, v14) )
    {
      v11 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_10;
      v19 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_10;
      v19 = (ValidPte & 1) == 0;
    }
    if ( !v19 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_10:
  *(_QWORD *)a1 = ValidPte;
  if ( v11 )
    MiWritePteShadow(a1, ValidPte);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
  v20 = 0;
  v16 = (volatile signed __int32 *)(48
                                  * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                  - 0x21FFFFFFFFE8LL);
  while ( _interlockedbittestandset64(v16, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(__int64 *)v16 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ (*(_QWORD *)v16 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
