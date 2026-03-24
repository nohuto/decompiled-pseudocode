/*
 * XREFs of MiMapBBTMemory @ 0x140A552A8
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14027AC68 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14027D47C (MiMakeZeroedPageTablesEx.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiObtainSystemVa @ 0x14030AF30 (MiObtainSystemVa.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeZeroPages @ 0x140402430 (KeZeroPages.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __m128i *v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned __int64 ValidPte; // rdi
  __int64 *v10; // rax
  __int64 *v11; // r15
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rsi
  __int64 *v19; // [rsp+80h] [rbp+18h]
  __m128i *v20; // [rsp+88h] [rbp+20h]

  v1 = 0LL;
  if ( BBTPagesToReserve )
  {
    v3 = *(__m128i **)(*(_QWORD *)(a1 + 240) + 2824LL);
    if ( v3 )
    {
      v1 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_31:
      v18 = v1 << 12;
      KeZeroPages(v3, v18);
      v3->m128i_i64[0] = v18;
      goto LABEL_32;
    }
    v4 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v5 = MiObtainSystemVa(v4 >> 9, 9u);
    v20 = (__m128i *)v5;
    v3 = (__m128i *)v5;
    if ( !v5 )
    {
LABEL_7:
      BBTPagesToReserve = 0LL;
LABEL_32:
      BBTBuffer = (__int64)v3;
      return;
    }
    v6 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v7 = (__int64)&v6[v4 - 1];
    if ( !(unsigned int)MiMakeZeroedPageTablesEx((__int64)v6, v7, 0, 9, 0) )
    {
      MiReturnSystemVa((unsigned __int64)v3, ((v7 << 25) + 0x10000000) >> 16, 9);
      v3 = 0LL;
      goto LABEL_7;
    }
    ValidPte = MiMakeValidPte((unsigned __int64)v6, 0LL, 2684354564LL, v8);
    v10 = (__int64 *)(a1 + 32);
    v11 = *(__int64 **)(a1 + 32);
    v19 = v10;
    if ( v11 == v10 )
    {
LABEL_29:
      if ( v1 < BBTPagesToReserve )
        BBTPagesToReserve = v1;
      goto LABEL_31;
    }
LABEL_9:
    if ( *((_DWORD *)v11 + 4) != 23 )
      goto LABEL_27;
    v12 = v11[4];
    v13 = v11[3];
    if ( v12 + v1 > BBTPagesToReserve )
      v12 = BBTPagesToReserve - v1;
    v1 += v12;
    while ( 1 )
    {
      ValidPte ^= (ValidPte ^ (v13 << 12)) & 0xFFFFFFFFF000LL;
      v14 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v6) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v17 = (ValidPte & 1) == 0;
            goto LABEL_17;
          }
        }
        else
        {
          v16 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v17 = (ValidPte & 1) == 0;
LABEL_17:
            if ( !v17 )
              v14 = ValidPte | 0x8000000000000000uLL;
          }
        }
      }
      else
      {
        v16 = 0;
      }
      *v6 = v14;
      if ( v16 )
        MiWritePteShadow((__int64)v6, v14, v15);
      ++v6;
      ++v13;
      if ( !--v12 )
      {
        if ( v1 == BBTPagesToReserve )
          goto LABEL_28;
        v10 = v19;
LABEL_27:
        v11 = (__int64 *)*v11;
        if ( v11 == v10 )
        {
LABEL_28:
          v3 = v20;
          goto LABEL_29;
        }
        goto LABEL_9;
      }
    }
  }
}
