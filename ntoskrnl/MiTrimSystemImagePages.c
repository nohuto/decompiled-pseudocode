/*
 * XREFs of MiTrimSystemImagePages @ 0x1402B0298
 * Callers:
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  char v17; // si
  __int64 v18; // rax
  unsigned __int64 ContainingPageTable; // r15
  bool v21; // zf
  int v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp+10h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v24 = a3;
  v3 = 0LL;
  v5 = a1;
  if ( (unsigned __int64)a1 <= a2 )
  {
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v6 & 1) == 0 && (v6 & 0x400) != 0 )
        break;
LABEL_21:
      if ( (unsigned __int64)++v5 > a2 )
        return v3;
    }
    v23 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v7 + 40) >= 0 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(&v23);
      v9 = MiSwizzleInvalidPte(v11 & 0xFFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v7 + 16) >> 5) & 0x1F | 0x40LL)));
    }
    else
    {
      v9 = MiSwizzleInvalidPte((*(_QWORD *)(v7 + 8) << 16) | 0x400LL);
      if ( v8 >= 0 && (v10 & 0x10000000000LL) == 0 && v8 )
        v9 |= 0x800uLL;
    }
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v5) )
    {
LABEL_9:
      *v5 = v9;
      if ( v12 )
        MiWritePteShadow(v5, v9);
      v16 = 0LL;
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v17 = *(_BYTE *)(v7 + 35) & 0xF7;
      v21 = (v23 & 0x42) == 0;
      *(_BYTE *)(v7 + 35) = v17;
      if ( !v21 )
      {
        v18 = MiCaptureDirtyBitToPfn(v7);
        v17 = *(_BYTE *)(v7 + 35);
        v16 = v18;
      }
      if ( *(__int64 *)(v7 + 40) >= 0 )
        ContainingPageTable = -1LL;
      else
        ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v5);
      *(_BYTE *)(v7 + 35) = v17 & 0xF8 | 2;
      MiDecrementShareCount(v7);
      if ( ContainingPageTable != -1LL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 48 * ContainingPageTable - 0x220000000000LL;
        v22 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v22);
          while ( *(__int64 *)(v7 + 24) < 0 );
        }
        MiDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        MiReleasePageFileInfo((__int64)&MiSystemPartition, v16, 1);
      ++v3;
      goto LABEL_21;
    }
    if ( (unsigned int)MiPteHasShadow(v14, v13, v15) )
    {
      v12 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v21 = (v9 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v21 = (v9 & 1) == 0;
    }
    if ( !v21 )
      v9 |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
  return v3;
}
