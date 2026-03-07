void __fastcall MiMapWithLargePages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        int a7)
{
  __int64 v7; // r11
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  int v10; // ebp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // ebp
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rdi
  unsigned __int8 v21; // al
  unsigned __int8 v22; // r14
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rbx
  int v25; // r12d
  __int64 v26; // r8
  unsigned __int64 *v27; // r14
  unsigned __int64 v28; // r13
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v30; // rdi
  int v31; // r12d
  __int64 v32; // r8
  bool v33; // zf
  __int64 v34; // rcx
  volatile LONG *SharedVm; // rbx
  bool v36; // zf
  unsigned __int64 v38; // [rsp+78h] [rbp+10h]
  unsigned __int64 v40; // [rsp+88h] [rbp+20h]
  unsigned __int8 v41[8]; // [rsp+98h] [rbp+30h]

  v7 = a3;
  v8 = MiLargePageSizes[a5];
  v9 = a1;
  v38 = v8;
  v10 = a6 & 7;
  v40 = a4 / v8;
  v11 = a4 / v8;
  v12 = v8 * (a4 / v8);
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= qword_140C65820 && ((*(_QWORD *)(48 * a3 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v14 = *(unsigned __int8 *)(48 * a3 - 0x21FFFFFFFFDELL) >> 6;
    if ( !v14 )
    {
      v10 |= 8u;
      goto LABEL_5;
    }
LABEL_24:
    if ( v14 == 2 )
      v10 |= 0x18u;
    goto LABEL_5;
  }
  v14 = a7;
  if ( a7 )
    goto LABEL_24;
  v10 |= 0x10u;
LABEL_5:
  v15 = v10 | 0xA0000000;
  if ( !(a4 % v8) )
    goto LABEL_6;
  v27 = (unsigned __int64 *)(v13 + 8 * v12);
  v28 = v13 + 8 * a4;
  ValidPte = MiMakeValidPte(0LL, v12 + a3, v15);
  if ( (unsigned __int64)v27 >= v28 )
    goto LABEL_32;
  do
  {
    v30 = ValidPte;
    v31 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v27) )
      goto LABEL_28;
    if ( MiPteHasShadow() )
    {
      v31 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_28;
      v33 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_28;
      v33 = (ValidPte & 1) == 0;
    }
    if ( !v33 )
      v30 = ValidPte | 0x8000000000000000uLL;
LABEL_28:
    *v27 = v30;
    if ( v31 )
      MiWritePteShadow((__int64)v27, v30, v32);
    ++v27;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( (unsigned __int64)v27 < v28 );
  v9 = a1;
  v8 = v38;
LABEL_32:
  v11 = v40;
  v7 = a3;
LABEL_6:
  v16 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !a5 )
  {
    v34 = 1LL;
    do
    {
      v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v34;
    }
    while ( v34 );
  }
  v17 = MiMakeValidPte(0LL, v7, v15 | 0x4000000);
  v18 = 0LL;
  v19 = v16 + 8 * v11;
  v20 = v17;
  if ( a5 )
  {
    v21 = MiLockWorkingSetShared(v9);
  }
  else
  {
    SharedVm = (volatile LONG *)MiGetSharedVm(v9);
    v21 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
  }
  v41[0] = v21;
  v22 = v21;
  if ( v16 < v19 )
  {
    v23 = v8 << 12;
    while ( 1 )
    {
      if ( !a5 )
        goto LABEL_14;
      if ( v18 )
      {
        if ( (v16 & 0xFFF) != 0 )
          goto LABEL_14;
        MiUnlockPageTableInternal(v9, v18);
      }
      v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v9, v18, 0);
LABEL_14:
      v24 = v20;
      v25 = 0;
      if ( MiPteInShadowRange(v16) )
      {
        if ( MiPteHasShadow() )
        {
          v25 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v36 = (v20 & 1) == 0;
            goto LABEL_52;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v36 = (v20 & 1) == 0;
LABEL_52:
          if ( !v36 )
            v24 = v20 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v24;
      if ( v25 )
        MiWritePteShadow(v16, v24, v26);
      v16 += 8LL;
      v20 ^= (v20 ^ (v23 + v20)) & 0xFFFFFFFFFF000LL;
      if ( v16 >= v19 )
      {
        v22 = v41[0];
        break;
      }
    }
  }
  if ( a5 )
  {
    if ( v18 )
      MiUnlockPageTableInternal(v9, v18);
    MiUnlockWorkingSetShared(v9, v22);
  }
  else
  {
    MiUnlockWorkingSetExclusive(v9, v22);
  }
}
