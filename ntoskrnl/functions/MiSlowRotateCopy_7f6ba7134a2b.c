char __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 v4; // rsi
  int v6; // edx
  char result; // al
  int v8; // r15d
  int v9; // ebp
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  int v16; // edi
  __int64 v17; // r8
  bool v18; // zf
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+70h] [rbp+8h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v19 = 0LL;
  v20 = 0LL;
  v6 = *(_DWORD *)(a3 + 48) & 0xC00;
  result = v6 == 3072;
  v8 = 0;
  if ( (*(_DWORD *)(a3 + 48) & 0x380) != 0 && v6 == 3072 )
    v9 = 2;
  else
    v9 = v6 != 1024;
  if ( v4 )
  {
    v10 = a1 - a2;
    v21 = a1 - a2;
    do
    {
      MiGetPteMappingSet(1, 2LL, (__int64)&v19);
      v11 = (unsigned __int64)v20;
      v12 = (__int64)(v20 + 1);
      MiInitializeSlowPte(v20, *v3, v9);
      MiInitializeSlowPte((unsigned __int64 *)v12, *(unsigned __int64 *)((char *)v3 + v10), v9);
      KeCopyPage(v12 << 25 >> 16, (__int64)(v11 << 25) >> 16);
      v13 = ZeroPte;
      if ( MiPteInShadowRange(v11) )
      {
        if ( MiPteHasShadow() )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
            v13 = ZeroPte | 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v13 = ZeroPte | 0x8000000000000000uLL;
          }
          v11 = (unsigned __int64)v20;
        }
      }
      *(_QWORD *)v11 = v13;
      if ( v8 )
        MiWritePteShadow(v11, v13, v14);
      v15 = ZeroPte;
      v8 = 0;
      v16 = 0;
      if ( !MiPteInShadowRange(v12) )
        goto LABEL_25;
      if ( MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v18 = (ZeroPte & 1) == 0;
          goto LABEL_23;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (ZeroPte & 1) == 0;
LABEL_23:
        if ( !v18 )
          v15 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_25:
      *(_QWORD *)v12 = v15;
      if ( v16 )
        MiWritePteShadow(v12, v15, v17);
      result = MiReturnPteMappingSet((__int64)&v19);
      v10 = v21;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
