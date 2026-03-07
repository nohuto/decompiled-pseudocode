__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 v2; // rcx
  int v3; // ebp
  __int64 i; // rsi
  unsigned __int64 v5; // rdi
  __int64 NextPage; // rdx
  unsigned __int64 ValidPte; // rbx
  int v8; // esi
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // r8
  unsigned __int64 v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)a1;
  memset(v16, 0, 32);
  MiFillPteHierarchy(v2, v16);
  v3 = 3;
  for ( i = 3LL; ; --i )
  {
    v5 = v16[i];
    if ( (*(_QWORD *)v5 & 1) == 0 )
      break;
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v5 & 0x80u) != 0LL )
      goto LABEL_15;
LABEL_5:
    if ( !i )
      return 1LL;
    --v3;
  }
  if ( i == 1 )
  {
    NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL);
    if ( NextPage != -1 )
    {
      qword_140C69658 += 512LL;
      ValidPte = MiMakeValidPte(v5, NextPage, -1275068412);
      v8 = 0;
      if ( !MiPteInShadowRange(v5) )
      {
LABEL_10:
        *(_QWORD *)v5 = ValidPte;
        if ( v8 )
          MiWritePteShadow(v5, ValidPte, v9);
        if ( *(_DWORD *)(a1 + 12)
          || v5 == ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          || v5 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          KeZeroPages((__m128i *)((__int64)(v5 << 25) >> 16 << 25 >> 16), 0x200000uLL);
        }
LABEL_15:
        *(_DWORD *)(a1 + 32) = v3;
        return 1LL;
      }
      if ( MiPteHasShadow() )
      {
        v8 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_10;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_10;
      }
      if ( (ValidPte & 1) != 0 )
        ValidPte |= 0x8000000000000000uLL;
      goto LABEL_10;
    }
  }
  v12 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  if ( v12 != -1 )
  {
    ++qword_140C69658;
    if ( i || *(_DWORD *)(a1 + 12) )
      MiFillPhysicalPages(v12, v11, 0LL);
    v13 = MiMakeValidPte(v5, v12, i != 0 ? -1744830460 : -1342177276);
    v14 = 0;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_22;
    if ( MiPteHasShadow() )
    {
      v14 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
LABEL_31:
        if ( (v13 & 1) != 0 )
          v13 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_31;
    }
LABEL_22:
    *(_QWORD *)v5 = v13;
    if ( v14 )
      MiWritePteShadow(v5, v13, v15);
    goto LABEL_5;
  }
  return 0LL;
}
