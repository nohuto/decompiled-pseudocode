NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  int v4; // r15d
  unsigned __int64 MappedSystemVa; // rbp
  unsigned int ProtectionMask; // eax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 ByteCount; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  int v13; // edi
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // r12
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  int v22; // r15d
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  int ProtectionPfnCompatible; // edi
  int v26; // eax
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v28; // rdi
  int v29; // r15d
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  int HasIoTracker; // [rsp+30h] [rbp-128h]
  __int64 v33; // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-118h]
  _QWORD v35[24]; // [rsp+50h] [rbp-108h] BYREF

  memset(v35, 0, 0xB8uLL);
  v4 = 1;
  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v8 = ProtectionMask;
  if ( ProtectionMask == -1
    || (ProtectionMask >> 3) - 1 <= 1
    || ProtectionMask >> 3 == 3 && (ProtectionMask & 7) != 0
    || (ProtectionMask & 5) == 5 )
  {
    return -1073741755;
  }
  v9 = (MappedSystemVa >> 9) & 0x7FFFFFFFF8LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  v35[3] = 0LL;
  v11 = MappedSystemVa & 0xFFF;
  LODWORD(v35[1]) = 20;
  v12 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v13 = 0;
  v14 = (unsigned __int64 *)(v9 - 0x98000000000LL);
  v34 = (v11 + ByteCount + 4095) >> 12;
  HasIoTracker = 0;
  v15 = v12;
  while ( v34 )
  {
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v14);
    v33 = BugCheckParameter4;
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFFLL;
      MiInsertTbFlushEntry((__int64)v35, v15, 1LL, 0);
      if ( v15 == v12 )
        HasIoTracker = MiMappingHasIoTracker(v12);
    }
    else
    {
      if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v14, BugCheckParameter4);
      v18 = BugCheckParameter4;
      if ( qword_140C657C0 )
      {
        if ( (BugCheckParameter4 & 0x10) != 0 )
          v18 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v18 = BugCheckParameter4 & ~qword_140C657C0;
      }
      v17 = (v18 >> 12) & 0xFFFFFFFFFFLL;
      v4 = 0;
      if ( v15 == v12 )
      {
        if ( (BugCheckParameter4 & 8) != 0 )
          v13 = 1;
        HasIoTracker = v13;
      }
    }
    if ( v8 != 24 )
    {
      if ( v17 <= qword_140C65820 && ((*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v8, 48 * v17 - 0x220000000000LL);
      }
      else
      {
        ProtectionPfnCompatible = v8 & 7;
        v26 = MiLookupIoPageNode(v17, 1);
        if ( v26 )
        {
          if ( v26 == 2 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 0x10u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v14, v17, ProtectionPfnCompatible | 0xA0000000);
      v33 = ValidPte;
      v28 = ValidPte;
      if ( v4 )
      {
        MiWriteValidPteNewProtection((unsigned __int64)v14, ValidPte);
LABEL_58:
        v13 = HasIoTracker;
        if ( HasIoTracker && v15 == v12 )
          MiMappingHasIoReferences(v12);
        goto LABEL_38;
      }
      v29 = 0;
      v30 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v14) )
      {
        if ( MiPteHasShadow() )
        {
          v29 = 1;
          if ( !HIBYTE(word_140C6697C) )
            goto LABEL_54;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_54:
          if ( (v28 & 1) != 0 )
            v30 = v28 | 0x8000000000000000uLL;
        }
      }
      *v14 = v30;
      if ( v29 )
        MiWritePteShadow((__int64)v14, v30, v31);
      goto LABEL_58;
    }
    v19 = MiSwizzleInvalidPte((v17 << 12) | 0xB00);
    v33 = v19;
    v20 = v19;
    if ( v21 && v15 == v12 )
    {
      v20 = v19 | 8;
      v33 = v19 | 8;
    }
    v22 = 0;
    v23 = v20;
    if ( MiPteInShadowRange((unsigned __int64)v14) )
    {
      if ( MiPteHasShadow() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C6697C) )
          goto LABEL_33;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_33:
        if ( (v20 & 1) != 0 )
          v23 = v20 | 0x8000000000000000uLL;
      }
    }
    *v14 = v23;
    if ( v22 )
      MiWritePteShadow((__int64)v14, v23, v24);
    v13 = HasIoTracker;
LABEL_38:
    v15 += 4096LL;
    ++v14;
    v4 = 1;
    --v34;
  }
  MiFlushTbList((int *)v35);
  return 0;
}
