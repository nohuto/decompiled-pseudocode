/*
 * XREFs of MiValidateInPage @ 0x14023AEE0
 * Callers:
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140284A0C (MiFlushEntireTbDueToAttributeChange.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140680124 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x140680358 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x1408D7F20 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  _DWORD *v1; // r9
  ULONG_PTR v2; // rbx
  int v3; // r8d
  __int64 v5; // r12
  __int64 *v6; // r14
  __int64 v7; // rcx
  int v8; // edx
  unsigned __int64 v9; // r15
  __int64 *v10; // r13
  unsigned int v11; // r8d
  int v12; // ebp
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // r9
  int v18; // ebp
  PVOID MappedSystemVa; // r8
  int v20; // r15d
  int v21; // edi
  __int64 v22; // rbp
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 result; // rax
  int v29; // eax
  CSHORT MdlFlags; // ax
  int v31; // edi
  int v32; // r8d
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PMDL v38; // rcx
  char BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+40h] [rbp-68h]
  ULONG_PTR v42; // [rsp+48h] [rbp-60h]
  int v43; // [rsp+50h] [rbp-58h]
  unsigned int v44; // [rsp+B0h] [rbp+8h]
  unsigned int v45; // [rsp+B8h] [rbp+10h]
  PVOID v46; // [rsp+C0h] [rbp+18h]
  _KPROCESS *Process; // [rsp+C8h] [rbp+20h]

  v1 = (_DWORD *)(a1 + 272);
  v2 = *(_QWORD *)(a1 + 208);
  v3 = *(_DWORD *)(a1 + 184);
  v42 = v2;
  if ( *(_QWORD *)(a1 + 256) )
    v1 = *(_DWORD **)(a1 + 256);
  v45 = 0;
  v5 = *(_QWORD *)(v2 + 96);
  MemoryDescriptorList = (PMDL)v1;
  v6 = (__int64 *)(v1 + 12);
  v7 = (unsigned int)v1[10];
  v8 = v1[11];
  v9 = ((unsigned __int64)(((_WORD)v8 + (unsigned __int16)v1[8]) & 0xFFF) + v7 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64 *)&v1[2 * (unsigned int)v9 + 12];
  *(_QWORD *)(a1 + 96) += (unsigned int)(v3 - v7 - v8);
  v11 = v3 - v1[11] - v1[10];
  v12 = 2;
  v44 = 0;
  *(_DWORD *)(a1 + 188) += ((v11 & 0xFFF) != 0) + (v11 >> 12);
  v13 = *(_QWORD *)(v5 + 40);
  if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
    v12 = 0;
  v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(48 * *v6 - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
  v43 = v14;
  if ( (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (v12 & 2) != 0 )
  {
    v16 = v12 | 1;
  }
  else
  {
    v16 = v12;
    if ( (MiFlags & 0x40000) != 0 && (v14 & 2) != 0 )
      v44 = 3;
  }
  v17 = 0x4000LL;
  if ( (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
  {
    v16 |= 4u;
    if ( (MiFlags & 0x4000) != 0 && (v16 & 1) != 0 )
      v16 &= ~4u;
  }
  v18 = v14 & 2;
  if ( (v14 & 2) != 0 && (MiFlags & 0x40000) != 0 )
  {
    v38 = MemoryDescriptorList;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    MiFlushEntireTbDueToAttributeChange(v38, v14, v15, v17);
  }
  MappedSystemVa = 0LL;
  v46 = 0LL;
  if ( (v16 & 2) != 0
    && (unsigned int)v9 > 1
    && (MdlFlags = MemoryDescriptorList->MdlFlags, (MdlFlags & 0x4000) != 0)
    && ((MdlFlags & 5) == 0
      ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010))
      : (MappedSystemVa = MemoryDescriptorList->MappedSystemVa),
        (v46 = MappedSystemVa) != 0LL) )
  {
    v31 = v13 & 0xFFFFFFF8;
    if ( (v16 & 1) != 0 && !*(_QWORD *)(v5 + 56) )
    {
      result = MiGetSectionStrongImageReference(v5, v14, MappedSystemVa);
      if ( (int)result < 0 )
        return result;
    }
    v32 = (_DWORD)v9 << 12;
    v20 = (int)Process;
    if ( (int)SeValidateImageData(v31, (_DWORD)v46, v32, *(_QWORD *)(a1 + 96), v18 != 0 ? 2 : 0, (__int64)Process) < 0 )
    {
      MappedSystemVa = 0LL;
      v46 = 0LL;
    }
    else
    {
      MappedSystemVa = v46;
    }
  }
  else
  {
    v20 = (int)Process;
  }
  if ( v6 >= v10 )
    return v45;
  v21 = v42;
  v22 = 0LL;
  while ( 1 )
  {
    v23 = 48 * *v6 - 0x58000000000LL;
    v16 ^= ((unsigned __int8)v16 ^ (unsigned __int8)(2 * v16)) & 8;
    if ( v23 == qword_140C4ED70 )
      goto LABEL_22;
    if ( MappedSystemVa )
    {
      MiMarkPfnVerified(v23, v44);
      goto LABEL_17;
    }
    if ( (v16 & 2) != 0 )
    {
      v29 = MiValidateImagePfn(v21, *(_QWORD *)(a1 + 96), v20, -1, BugCheckOnFailure, v43, *v6, 0);
      if ( v29 < 0 )
        break;
    }
LABEL_17:
    if ( (v16 & 8) == 0 )
      goto LABEL_22;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    {
      v24 = (unsigned __int64)MemoryDescriptorList->MappedSystemVa + 4096 * (v22 >> 3);
      v25 = (__int64 *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v26 = MI_READ_PTE_LOCK_FREE(v25);
      if ( (v26 & 0x42) == 0 )
      {
        v33 = v26 | 0x842;
        if ( !(unsigned int)MiPteInShadowRange(v25, v27) )
          goto LABEL_44;
        if ( (unsigned int)MiPteHasShadow(v35, v34, v36, v37) )
        {
          if ( !HIBYTE(word_140C4E008) && (v33 & 1) != 0 )
            v33 |= 0x8000000000000000uLL;
          *v25 = v33;
          MiWritePteShadow(v25, v33);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v33 & 1) != 0 )
          {
            v33 |= 0x8000000000000000uLL;
          }
LABEL_44:
          *v25 = v33;
        }
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(v24, 0LL);
      }
    }
    if ( (int)MiRelocateImagePfn(v42, 0LL, Priority, 2) < 0 )
      goto LABEL_73;
    v21 = v42;
LABEL_22:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v6;
    ++*(_DWORD *)(a1 + 188);
    v22 += 8LL;
    if ( v6 >= v10 )
      return v45;
    MappedSystemVa = v46;
    v20 = (int)Process;
  }
  if ( v29 != -1073741670 )
  {
    v45 = -1073740748;
    if ( (v16 & 1) != 0 && (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
      v16 |= 8u;
    goto LABEL_17;
  }
LABEL_73:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v45;
}
