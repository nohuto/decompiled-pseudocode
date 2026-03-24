/*
 * XREFs of MxMapVa @ 0x140A43F9C
 * Callers:
 *     MxMapPfnRange @ 0x140A43D1C (MxMapPfnRange.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14028CAF0 (MiFillPteHierarchy.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1403579D0 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x140402430 (KeZeroPages.c)
 *     MxGetNextPage @ 0x140A44314 (MxGetNextPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 v2; // rcx
  BOOL v3; // r15d
  int i; // edi
  unsigned __int64 v5; // rsi
  __int64 NextPage; // rdx
  __int64 v8; // r9
  unsigned __int64 ValidPte; // rbx
  int v10; // edi
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  int v17; // ebp
  __int64 v18; // r8
  unsigned __int64 v19[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)a1;
  memset(v19, 0, sizeof(v19));
  v3 = qword_140C52890 > 0x20000;
  MiFillPteHierarchy(v2, v19);
  for ( i = 3; ; --i )
  {
    v5 = v19[i];
    if ( (*(_QWORD *)v5 & 1) == 0 )
      break;
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v5 & 0x80u) != 0LL )
    {
      *(_DWORD *)(a1 + 32) = i;
      return 1LL;
    }
LABEL_5:
    if ( !i )
      return 1LL;
  }
  if ( i == 1 && v3 )
  {
    NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL);
    if ( NextPage != -1 )
    {
      qword_140C4EFD8 += 512LL;
      ValidPte = MiMakeValidPte(v5, NextPage, 3019898884LL, v8);
      v10 = 0;
      if ( !MiPteInShadowRange(v5) )
        goto LABEL_13;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C4E008) )
          goto LABEL_41;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_41:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_13:
      *(_QWORD *)v5 = ValidPte;
      if ( v10 )
        MiWritePteShadow(v5, ValidPte, v11);
      v12 = *(_DWORD *)(a1 + 12);
      if ( !v12 )
      {
        if ( v5 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v5 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          goto LABEL_18;
        }
        v12 = 1;
      }
      if ( v12 == 1 )
        KeZeroPages((__m128i *)((__int64)(v5 << 25) >> 16 << 25 >> 16), 0x200000uLL);
LABEL_18:
      *(_DWORD *)(a1 + 32) = 1;
      return 1LL;
    }
  }
  v14 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  if ( v14 != -1 )
  {
    ++qword_140C4EFD8;
    if ( i || *(_DWORD *)(a1 + 12) == 1 )
      MiFillPhysicalPages(v14, v13, 0LL, v15);
    v16 = MiMakeValidPte(v5, v14, i != 0 ? -1744830460 : -1342177276, v15);
    v17 = 0;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
LABEL_35:
        if ( (v16 & 1) != 0 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_35;
    }
LABEL_26:
    *(_QWORD *)v5 = v16;
    if ( v17 )
      MiWritePteShadow(v5, v16, v18);
    goto LABEL_5;
  }
  return 0LL;
}
