void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      v12 = v6;
      if ( v6 )
        break;
LABEL_4:
      v5 += 8LL;
      if ( v5 >= a2 )
        return;
    }
    if ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL )
    {
      if ( a3 > 1 )
        MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
      v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
      MiFreeBootPageTable((v7 >> 12) & 0xFFFFFFFFFFLL);
    }
    v8 = ZeroPte;
    v9 = 0;
    if ( !MiPteInShadowRange(v5) )
    {
LABEL_12:
      *(_QWORD *)v5 = v8;
      if ( v9 )
        MiWritePteShadow(v5, v8, v10);
      goto LABEL_4;
    }
    if ( MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_12;
      v11 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v11 = (ZeroPte & 1) == 0;
    }
    if ( !v11 )
      v8 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_12;
  }
}
