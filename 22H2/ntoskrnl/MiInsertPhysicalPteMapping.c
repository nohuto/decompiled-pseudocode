/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x1402EB468
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402EB224 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6798 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14023B32C (MiMakeProtectionPfnCompatible.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiLookupIoPageNode @ 0x1402EB6EC (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x1403C6590 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14052D12C (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 ValidPte; // rbx
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 UsedPtesHandle; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  volatile signed __int32 *v26; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  unsigned __int8 v31; // cl
  bool v32; // zf
  int v33; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v8 = MiProtectionToCacheAttribute(a3);
  if ( v6 <= 0xFFFFFFFFFLL && (v9 = 6 * v6, ((*(_QWORD *)(8 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0) )
  {
    v30 = 8 * v9 - 0x58000000000LL;
    if ( !*(_WORD *)(v30 + 32) )
      MiShowBadMapper(a2);
    v31 = *(_BYTE *)(v30 + 34);
    if ( (v31 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v30, v8);
      v31 = *(_BYTE *)(v30 + 34);
    }
    if ( v31 >> 6 != v8 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v30);
  }
  else
  {
    v10 = MiLookupIoPageNode(a2);
    if ( !v10 )
      KeBugCheckEx(0x1Au, 0x61949uLL, a2, 1uLL, 0LL);
    ProtectionPfnCompatible &= 7u;
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 48) + 2 * ((a2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v10 + 40))) >> 14;
    if ( v11 )
    {
      if ( v11 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000, v7);
  v13 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_8;
      v32 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v32 = (ValidPte & 1) == 0;
    }
    if ( !v32 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *(_QWORD *)a1 = ValidPte;
  if ( v13 )
    MiWritePteShadow(a1, ValidPte);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16, v14);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v19, v20);
  v21 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = *(_QWORD *)v21;
  if ( MiPteInShadowRange(v21)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v23 = v22 | 0x20;
      v29 = *((_QWORD *)&Flink->Flink + ((v21 >> 3) & 0x1FF));
      if ( (v29 & 0x20) == 0 )
        v23 = v22;
      v22 = v23;
      if ( (v29 & 0x42) != 0 )
        v22 = v23 | 0x42;
    }
  }
  v33 = 0;
  v26 = (volatile signed __int32 *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v26, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33, v23, v24, v25);
    while ( *(__int64 *)v26 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v26 ^= (*(_QWORD *)v26 ^ (*(_QWORD *)v26 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
