/*
 * XREFs of MmMapHotPatchTablePage @ 0x140640C8C
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MmMapHotPatchTablePage(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbp
  char *AnyMultiplexedVm; // r12
  int v8; // r15d
  __int64 v9; // rdi
  int v10; // r13d
  _QWORD *v11; // r14
  __int64 v12; // rsi
  unsigned __int64 ContainingPageTable; // rdi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int16 v19; // r10
  char v20; // r11
  char v21; // al
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int8 v25; // dl
  int v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  unsigned __int8 v28; // [rsp+78h] [rbp+10h] BYREF
  int v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v4 = 0LL;
  v28 = 0;
  v27 = 0LL;
  AnyMultiplexedVm = 0LL;
  v8 = 1;
  if ( a4 != 2 )
    v8 = 3;
  v9 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    v10 = 1;
    v11 = (_QWORD *)(*(_QWORD *)(a3 + 288)
                   + 8
                   * ((v9
                     - 8LL * ((*(_DWORD *)(a3 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a3 + 64) & 0xFFF) != 0))
                     - ((*(_QWORD *)(a3 + 48) >> 9) & 0x7FFFFFFFF8LL)) >> 3));
    v27 = MiLockProtoPoolPage((unsigned __int64)v11, &v28);
  }
  else
  {
    v10 = 0;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v11 = (_QWORD *)(v9 - 0x98000000000LL);
    v4 = (((unsigned __int64)(v9 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v28 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0);
  }
  v12 = 48 * a2 - 0x220000000000LL;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_QWORD *)(v12 + 24) &= ~0x4000000000000000uLL;
  *(_BYTE *)(v12 + 34) |= 0x10u;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v11);
  MiSetPfnPteFrame(48 * a2 - 0x220000000000LL, ContainingPageTable);
  v14 = 48 * ContainingPageTable - 0x220000000000LL;
  MiLockNestedPageAtDpcInline(v14);
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = 32LL;
  if ( v29 != 2 )
    v15 = 96LL;
  v16 = MiSwizzleInvalidPte(v15);
  *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(v16, v17);
  *(_QWORD *)(v12 + 8) = v11;
  if ( v10 )
  {
    *(_QWORD *)(v12 + 40) |= 0x8000000000000000uLL;
    v21 = *(_BYTE *)(v12 + 34) & 0xFB;
    *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(v12 + 34) = v20 | v21;
  }
  else
  {
    *(_WORD *)(v12 + 32) += v19;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v10 )
  {
    v23 = MiSwizzleInvalidPte(32 * (v18 | ((a2 & 0xFFFFFFFFFFLL) << 7) | 0x40));
    v24 = v27;
    v25 = v28;
    *v11 = v23;
    return MiUnlockProtoPoolPage(v24, v25);
  }
  else
  {
    *v11 = MiMakeValidPte((unsigned __int64)v11, a2, v8 | 0x20000000u);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v28);
  }
}
