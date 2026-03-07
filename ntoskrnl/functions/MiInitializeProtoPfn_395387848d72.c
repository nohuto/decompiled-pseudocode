__int64 __fastcall MiInitializeProtoPfn(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  int v11; // ebp
  BOOL v12; // eax
  __int64 v13; // r8
  int v14; // r11d
  int v16; // [rsp+60h] [rbp+18h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  LOBYTE(v17) = 0;
  v7 = 48 * a1 - 0x220000000000LL;
  v8 = MiLockProtoPoolPageForce((signed __int64)a2, (__int64)&v17);
  v16 = 0;
  v9 = v8;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiInitializePfn(v7, a2, a3, 23);
  v10 = MiMakeValidPte(0LL, a1, a3 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  v11 = 0;
  v12 = MiPteInShadowRange((unsigned __int64)a2);
  LOWORD(v14) = 1;
  if ( v12 )
  {
    if ( MiPteHasShadow() )
    {
      v11 = v14;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_11;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_11;
    }
    if ( ((unsigned __int8)v10 & (unsigned __int8)v14) != 0 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_11:
  *a2 = v10;
  if ( v11 )
    MiWritePteShadow((__int64)a2, v10, v13);
  *(_WORD *)(v7 + 32) += v14;
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v9, v17);
}
