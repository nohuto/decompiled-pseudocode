void __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // r8
  bool v13; // zf
  bool v14; // zf
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v15 = 17;
  v2 = a1 + 128;
  if ( a1 == -128 )
    return;
  do
  {
    if ( (*(_WORD *)(v2 + 32) & 0x3E) == 2 )
      goto LABEL_3;
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(unsigned int *)(v2 + 44);
    *(_WORD *)(v2 + 32) = *(_WORD *)(v2 + 32) & 0xFFC1 | 2;
    v5 = v3 + 8 * v4;
    while ( v3 < v5 )
    {
      if ( (v3 & 0xFFF) == 0 || !v1 )
      {
        if ( v1 )
          MiUnlockProtoPoolPage(v1, v15);
        v1 = MiLockProtoPoolPageForce(v3, (__int64)&v15);
      }
      v6 = MiLockLeafPage(v3, 0LL);
      v7 = MI_READ_PTE_LOCK_FREE(v3);
      if ( v6 )
      {
        if ( (v7 & 1) == 0 )
        {
          v10 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
          v11 = 0;
          if ( !(unsigned int)MiPteInShadowRange(v3) )
            goto LABEL_17;
          if ( MiPteHasShadow() )
          {
            v11 = 1;
            if ( !HIBYTE(word_140C6697C) )
            {
              v14 = (v10 & 1) == 0;
LABEL_40:
              if ( !v14 )
                v10 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v14 = (v10 & 1) == 0;
            goto LABEL_40;
          }
LABEL_17:
          *(_QWORD *)v3 = v10;
          if ( v11 )
            MiWritePteShadow(v3, v10, v12);
          *(_QWORD *)(v6 + 16) = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_14;
      }
      if ( (v7 & 0x400) != 0 )
      {
        v8 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        if ( !(unsigned int)MiPteInShadowRange(v3) )
          goto LABEL_12;
        if ( MiPteHasShadow() )
        {
          LODWORD(v6) = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v13 = (v8 & 1) == 0;
            goto LABEL_33;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v13 = (v8 & 1) == 0;
LABEL_33:
          if ( !v13 )
            v8 |= 0x8000000000000000uLL;
        }
LABEL_12:
        *(_QWORD *)v3 = v8;
        if ( (_DWORD)v6 )
          MiWritePteShadow(v3, v8, v9);
        goto LABEL_14;
      }
      if ( v7 )
        *(_QWORD *)v3 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
LABEL_14:
      v3 += 8LL;
    }
    if ( v1 )
    {
      MiUnlockProtoPoolPage(v1, v15);
      v1 = 0LL;
    }
LABEL_3:
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
}
