/*
 * XREFs of MiInitializeProtoPfn @ 0x140554ED0
 * Callers:
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  int v14; // ebp
  BOOL v15; // eax
  __int64 v16; // r8
  int v17; // r11d
  int v19; // [rsp+50h] [rbp+18h] BYREF
  int v20; // [rsp+58h] [rbp+20h] BYREF

  v20 = a4;
  LOBYTE(v20) = 0;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v11 = MiLockProtoPoolPage((unsigned __int64)a2, (__int64)&v20);
    if ( v11 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19, v8, v9, v10);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiInitializePfn(v7, a2, a3, 23);
  v13 = MiMakeValidPte(0LL, a1, a3 | 0x80000000, v12) & 0xFFFFFFFFFFFFFEFFuLL;
  v14 = 0;
  v15 = MiPteInShadowRange((unsigned __int64)a2);
  LOWORD(v17) = 1;
  if ( v15 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = v17;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_14;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_14;
    }
    if ( ((unsigned __int8)v13 & (unsigned __int8)v17) != 0 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *a2 = v13;
  if ( v14 )
    MiWritePteShadow((__int64)a2, v13, v16);
  *(_WORD *)(v7 + 32) += v17;
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v11, v20);
}
