/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x14063F9FC
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x140228948 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  int v7; // r8d
  unsigned __int8 v8; // bl
  unsigned int v9; // ecx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  int v18; // r13d
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  int v27; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh]
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-B0h]
  _QWORD v33[24]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v33, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  v30 = 0LL;
  AnyMultiplexedVm = 0LL;
  v5 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 288);
    v7 = 1;
    v28 = 1;
    v8 = 0;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 64);
    v28 = 0;
    v6 = ((v2 >> 9) & 0x7FFFFFFFF8LL) + 8LL * ((v9 >> 12) + ((v9 & 0xFFF) != 0)) - 0x98000000000LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v7 = 0;
    v8 = v10;
  }
  LOBYTE(v27) = v8;
  v32 = v6 + 8LL * (((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0));
  v33[3] = 0LL;
  LODWORD(v33[1]) = 20;
  v11 = (__int64)(v6 << 25) >> 16;
  if ( v6 < v32 )
  {
    while ( 1 )
    {
      if ( v7 )
      {
        if ( v3 )
        {
          if ( (v6 & 0xFFF) != 0 )
            goto LABEL_14;
          MiUnlockProtoPoolPage(v3, v8);
        }
        v12 = MiLockProtoPoolPage(v6, (unsigned __int8 *)&v27);
        v8 = v27;
        v30 = v12;
      }
      else
      {
        if ( v5 )
        {
          if ( (v6 & 0xFFF) != 0 )
            goto LABEL_14;
          MiFlushTbList((int *)v33);
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
        }
        v5 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v5, 0);
      }
LABEL_14:
      v13 = MI_READ_PTE_LOCK_FREE(v6);
      v31 = v13;
      if ( !v13 )
        goto LABEL_40;
      if ( (v13 & 1) != 0 )
      {
        LOBYTE(v15) = MiGetWsleContents(v14, v11) & 0xF;
        if ( (_BYTE)v15 == 9 )
          MiWriteWsle(v15, v11);
        MiInsertTbFlushEntry((__int64)v33, v11, 1LL, 0);
        v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        LODWORD(v29) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v29);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        MiDecrementShareCount(v16);
      }
      else
      {
        v16 = MiLockTransitionLeafPageEx(v6, 0LL, 0);
      }
      v17 = ZeroPte;
      v18 = 0;
      if ( MiPteInShadowRange(v6) )
      {
        if ( MiPteHasShadow() )
        {
          v18 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v20 = (ZeroPte & 1) == 0;
            goto LABEL_29;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v20 = (ZeroPte & 1) == 0;
LABEL_29:
          if ( !v20 )
            v17 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v17;
      if ( v18 )
        MiWritePteShadow(v6, v17, v19);
      v21 = *(_QWORD *)(v16 + 24);
      if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(
          0x1Au,
          0x18951uLL,
          v6,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v16 + 0x220000000000LL) >> 4),
          *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0xF8 | 6;
      *(_QWORD *)(v16 + 24) = v21 & 0xC000000000000000uLL | (v21 + 1) & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
      v22 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      MiLockNestedPageAtDpcInline(v22);
      *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v23 = *(_QWORD *)(v16 + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
      v20 = v28 == 0;
      *(_QWORD *)(v16 + 40) = v23;
      if ( !v20 )
        *(_QWORD *)(v16 + 40) = v23 & 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v16 + 8) = 0LL;
      v24 = *(_QWORD *)(v16 + 16);
      if ( qword_140C657C0 && (v24 & 0x10) == 0 )
        v24 &= ~qword_140C657C0;
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_QWORD *)(v16 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v16 + 16), HIDWORD(v24));
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v25);
      v8 = v27;
LABEL_40:
      v3 = v30;
      v6 += 8LL;
      v11 += 4096LL;
      if ( v6 >= v32 )
        break;
      v7 = v28;
    }
  }
  MiFlushTbList((int *)v33);
  if ( v28 )
    return MiUnlockProtoPoolPage(v3, v8);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
