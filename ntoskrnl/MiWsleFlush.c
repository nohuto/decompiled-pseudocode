/*
 * XREFs of MiWsleFlush @ 0x14032B4A0
 * Callers:
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWsleProtection @ 0x140229ECC (MiGetWsleProtection.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x1402FEB1C (MiLockedPageTableHasActiveLargeEntries.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiCheckReservePageFileSpace @ 0x14032D670 (MiCheckReservePageFileSpace.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140346D60 (MiUnlockNestedPageTableWritePte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiClonePteReadonly @ 0x140660C44 (MiClonePteReadonly.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v6; // edi
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  signed __int64 v9; // rbp
  __int64 *v10; // r15
  unsigned __int64 v11; // rax
  signed __int64 v12; // r12
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  char *v15; // rbp
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned int v22; // ecx
  char v23; // r11
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  int WsleProtection; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rsi
  unsigned __int64 v35; // rbp
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v43; // r8
  BOOL HasShadow; // eax
  __int64 v45; // r8
  int v46; // [rsp+20h] [rbp-68h] BYREF
  __int64 v47; // [rsp+28h] [rbp-60h] BYREF
  signed __int64 v48; // [rsp+30h] [rbp-58h]
  signed __int64 v49; // [rsp+38h] [rbp-50h]

  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v37 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v38 = v8 | 0x20;
      if ( (v37 & 0x20) == 0 )
        v38 = *(_QWORD *)v7;
      v8 = v38;
      if ( (v37 & 0x42) != 0 )
        v8 = v38 | 0x42;
    }
  }
  v47 = v8;
  v49 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47) >> 12) & 0xFFFFFFFFFFLL);
  v9 = v49 - 0x220000000000LL;
  v10 = (__int64 *)(v49 - 0x220000000000LL + 40);
  v11 = *(_QWORD *)(v49 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v48 = v49 - 0x220000000000LL;
  if ( v11 > 1 && *v10 >= 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    if ( *(_WORD *)(v9 + 32) > 1u )
      return 0LL;
    v46 = 0;
    v12 = v49 - 0x220000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v46);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *v10 >= 0
      || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v9 + 32) > 1u )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
  }
  else
  {
    v12 = 0LL;
    if ( *v10 >= 0
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL
      && (v8 & 0x42) != 0
      && (*(_DWORD *)(a1 - 540) & 0x8000) != 0 )
    {
      MiCaptureWriteWatchDirtyBit(a1 - 1664, a2, 0LL);
    }
  }
  v13 = *v10;
  v14 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( *v10 < 0 )
  {
    v26 = MI_READ_PTE_LOCK_FREE(v7);
    WsleProtection = MiGetWsleProtection(a2, HIBYTE(v26) & 0xF | (16 * ((v26 >> 60) & 7)));
    if ( WsleProtection )
    {
      v47 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    }
    else
    {
      v29 = MiSwizzleInvalidPte(((*(_QWORD *)(v48 + 8) | 0x8000000000000000uLL) << 16) | 0x400);
      v47 = v29;
      v31 = v29;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v8 & 0xA00) == 0 && v8 < 0 )
      {
        v29 |= 8uLL;
        v47 = v29;
        v31 = v29;
      }
      if ( v28 >= 0 && (v13 & 0x10000000000LL) == 0 && v28 )
      {
        v47 = v31 | 0x800;
      }
      else if ( (a3 & 2) != 0 )
      {
        if ( (unsigned int)MiClonePteReadonly(v30, v28, v29) )
          v47 = v43 | 8;
      }
    }
    goto LABEL_17;
  }
  if ( a2 < 0xFFFFF68000000000uLL )
  {
    v15 = (char *)a1;
LABEL_11:
    v16 = 0;
    goto LABEL_12;
  }
  v15 = (char *)a1;
  if ( a2 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_11;
  v16 = 1;
  MiLockPageTableInternal(a1, v7, 0);
  if ( (*(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    MiUnlockPageTableInternal(a1, v7);
    if ( !v12 )
      return 0LL;
    goto LABEL_94;
  }
  if ( (unsigned int)MiLockedPageTableHasActiveLargeEntries(a2) )
  {
    MiUnlockPageTableInternal(a1, v7);
    if ( !v12 )
      return 0LL;
LABEL_94:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
LABEL_12:
  if ( (((unsigned __int64)*v10 >> 60) & 7) == 4 && v15 == MiGetAnyMultiplexedVm(2) )
  {
    v32 = a2 & 0xFFFFFFFFFFFFF000uLL;
    if ( (MiFlags & 0x2000000) != 0 )
    {
      v39 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * (v49 >> 4), 0LL, 0x80000000);
      v33 = MI_READ_PTE_LOCK_FREE(v39);
      MiUnmapPageInHyperSpaceWorker(v39, 0x11u);
    }
    else
    {
      v33 = MI_READ_PTE_LOCK_FREE(v32);
    }
    v34 = v33 | 2;
    v47 = v34;
    v35 = v34;
    v14 |= 4uLL;
    v6 = 1;
    if ( MiPteInShadowRange(v7) )
    {
      if ( MiPteHasShadow() )
      {
        v41 = v34;
        if ( !HIBYTE(word_140C6697C) && (v34 & 1) != 0 )
          v41 = v34 | 0x8000000000000000uLL;
        *(_QWORD *)v7 = v41;
        MiWritePteShadow(v7, v41, v40);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v34 & 1) != 0 )
      {
        v35 = v34 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v7 = v35;
LABEL_76:
    MiInsertTbFlushEntry((__int64)a4, v32, 1LL, 0);
    MiFlushTbList(a4);
    goto LABEL_26;
  }
  v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47);
  v18 = (32 * ((*(_DWORD *)(v48 + 16) >> 5) & 0x1F | 0x40LL)) | v17 & 0xFFFFFFFFFF000LL;
  if ( qword_140C657C0 )
  {
    if ( (qword_140C657C0 & v18) != 0 )
      v18 |= 0x10uLL;
    else
      v18 |= qword_140C657C0;
  }
  v47 = v18;
  if ( v16 )
  {
    MiUnlockNestedPageTableWritePte(v15, v7, v18, 0LL, v46, v47, v48);
    MiInsertTbFlushEntry((__int64)a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    goto LABEL_27;
  }
LABEL_17:
  v19 = *(_QWORD *)v7;
  v20 = 0xFFFFF6FB7DBED000uLL;
  v21 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBED7F8uLL || !(HasShadow = MiPteHasShadow()) )
  {
    v22 = ((unsigned int)MiFlags >> 26) & 3;
    if ( v22 <= 1 )
    {
      if ( !v22 )
        goto LABEL_33;
      if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL && (v19 & 0x80u) == 0LL )
        LOBYTE(v19) = 32;
    }
    else if ( (MiFlags & 0x2000000) != 0 )
    {
      _mm_lfence();
    }
    if ( (v19 & 0x20) == 0 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v23 = _InterlockedExchange64((volatile __int64 *)v7, v47);
      if ( v7 >= v20 && v7 <= v21 )
        MiWritePteShadow(v7, v47, v20);
      if ( (v23 & 0x20) == 0 )
        goto LABEL_26;
      goto LABEL_35;
    }
  }
LABEL_33:
  v25 = v47;
  if ( MiPteInShadowRange(v7) )
  {
    if ( MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C6697C) && (v25 & 1) != 0 )
        v25 |= 0x8000000000000000uLL;
      *(_QWORD *)v7 = v25;
      MiWritePteShadow(v7, v25, v45);
      goto LABEL_35;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v25 & 1) != 0 )
      v25 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)v7 = v25;
LABEL_35:
  MiInsertTbFlushEntry((__int64)a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
LABEL_26:
  v15 = (char *)a1;
LABEL_27:
  if ( v12 )
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v6 && *v10 >= 0 )
    MiCheckReservePageFileSpace(v48, v7, v15, v21);
  return v14;
}
