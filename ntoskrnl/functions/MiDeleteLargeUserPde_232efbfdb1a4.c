void __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  int v13; // r15d
  unsigned __int64 i; // rcx
  unsigned __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // r8
  bool v18; // zf
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+70h] [rbp+18h]
  int v24; // [rsp+78h] [rbp+20h]

  v22 = a1;
  v3 = *(_QWORD *)(a1 + 168);
  v4 = a1;
  v7 = *(_DWORD *)(v3 + 120);
  v23 = v7;
  if ( a3 == 3 )
  {
    v8 = MI_READ_PTE_LOCK_FREE(a2);
    LOBYTE(v7) = v23;
    v9 = v8;
  }
  else
  {
    v9 = *(_QWORD *)a2;
  }
  v10 = v9 & 1;
  if ( (v9 & 1) == 0 && qword_140C657C0 && (v9 & 0x10) == 0 )
    v9 &= ~qword_140C657C0;
  v11 = (v9 >> 12) & 0xFFFFFFFFFFLL;
  v12 = (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v13 = v7 & 0x10;
  v24 = v13;
  if ( (v7 & 0x10) != 0 )
  {
    MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 40LL), a2, (unsigned __int64 *)(v3 + 128));
    goto LABEL_33;
  }
  if ( !a3 )
  {
    for ( i = 0LL; i < v12; ++i )
      *(_QWORD *)(a2 + 8 * i) = ZeroPte;
    goto LABEL_27;
  }
  if ( !v10 )
  {
    v15 = ZeroPte;
    v16 = 0;
    if ( MiPteInShadowRange(a2) )
    {
      if ( MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v18 = (ZeroPte & 1) == 0;
          goto LABEL_22;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (ZeroPte & 1) == 0;
LABEL_22:
        if ( !v18 )
          v15 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v15;
    if ( v16 )
      MiWritePteShadow(a2, v15, v17);
    v13 = v24;
    v4 = v22;
    goto LABEL_27;
  }
  MiRewritePteWithLockBit(*(_QWORD *)(v4 + 24), (__int64 *)a2, ZeroPte);
LABEL_27:
  if ( (v23 & 0x1000) != 0 )
  {
    if ( !*(_QWORD *)(v3 + 16) )
      *(_QWORD *)(v3 + 16) = a2;
    *(_QWORD *)(v3 + 24) = a2 - 8 + 8 * v12;
  }
  if ( a3 != 3 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
    MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v12);
  }
LABEL_33:
  v20 = 48 * v11 - 0x220000000000LL;
  if ( v10 )
  {
    v21 = *(_QWORD *)(v4 + 16);
    if ( a3 )
      MiInsertLargeTbFlushEntry(v21, a3, a2);
    else
      MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, v12, 0);
  }
  if ( !v13 && *(__int64 *)(v20 + 40) >= 0 )
  {
    LODWORD(v22) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    *(_QWORD *)v20 ^= (*(_QWORD *)v20 ^ (*(_QWORD *)(*(_QWORD *)(v3 + 32) + 48LL) >> 3)) & 0xFFFFFFFFFFELL;
    *(_QWORD *)(*(_QWORD *)(v3 + 32) + 48LL) = v20;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v23 & 0x810) != 0 && !a3 )
    *(_DWORD *)(v4 + 8) = 15;
}
