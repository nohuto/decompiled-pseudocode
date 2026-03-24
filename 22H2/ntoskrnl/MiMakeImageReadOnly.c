/*
 * XREFs of MiMakeImageReadOnly @ 0x140332500
 * Callers:
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  int v12; // r14d
  __int64 v13; // r8
  bool v14; // zf
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h]

  v1 = a1 + 128;
  v15 = 17;
  v2 = 0LL;
  v16 = a1 + 128;
  if ( a1 != -128 )
  {
    while ( (*(_WORD *)(v1 + 32) & 0x3E) == 2 )
    {
LABEL_3:
      v1 = *(_QWORD *)(v1 + 16);
      v16 = v1;
      if ( !v1 )
        return;
    }
    v3 = *(_QWORD *)(v1 + 8);
    v4 = *(unsigned int *)(v1 + 44);
    *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 32) & 0xFFC1 | 2;
    v5 = v3 + 8 * v4;
    if ( v3 >= v5 )
    {
LABEL_15:
      if ( v15 != 17 )
      {
        MiUnlockProtoPoolPage(v2, v15);
        v15 = 17;
      }
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (v3 & 0xFFF) == 0 || v15 == 17 )
      {
        if ( v15 != 17 )
          MiUnlockProtoPoolPage(v2, v15);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v3, (__int64)&v15);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v3, 0, 0LL);
        }
      }
      v6 = MiLockLeafPage(v3, 0LL);
      v7 = MI_READ_PTE_LOCK_FREE(v3);
      if ( v6 )
        break;
      if ( (v7 & 0x400) != 0 || v7 )
      {
        v8 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        v9 = 0;
        if ( !MiPteInShadowRange(v3) )
          goto LABEL_11;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v9 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
LABEL_33:
            if ( (v8 & 1) != 0 )
              v8 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_33;
        }
LABEL_11:
        *(_QWORD *)v3 = v8;
        if ( v9 )
          MiWritePteShadow(v3, v8, v10);
      }
LABEL_13:
      v3 += 8LL;
      if ( v3 >= v5 )
      {
        v1 = v16;
        goto LABEL_15;
      }
    }
    if ( (v7 & 1) != 0 )
    {
LABEL_22:
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_13;
    }
    v11 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
    v12 = 0;
    if ( !MiPteInShadowRange(v3) )
    {
LABEL_19:
      *(_QWORD *)v3 = v11;
      if ( v12 )
        MiWritePteShadow(v3, v11, v13);
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
      goto LABEL_22;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_19;
      v14 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_19;
      v14 = (v11 & 1) == 0;
    }
    if ( !v14 )
      v11 |= 0x8000000000000000uLL;
    goto LABEL_19;
  }
}
