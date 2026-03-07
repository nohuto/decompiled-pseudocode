__int64 __fastcall MiScrubPage(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v9; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // r8

  if ( a3 )
  {
    UltraMapping = a3;
    v9 = 0LL;
    goto LABEL_12;
  }
  UltraMapping = MiGetUltraMapping(a1 + 18, 3u, 1LL, 0);
  v9 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a2);
  ValidPte = MiMakeValidPte(
               (unsigned __int64)v9,
               0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
               ProtectionPfnCompatible | 0xA0000000);
  v12 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( MiPteHasShadow() )
    {
      v12 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
LABEL_8:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_8;
    }
  }
  *v9 = ValidPte;
  if ( v12 )
    MiWritePteShadow((__int64)v9, ValidPte, v13);
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v14 = a1[22];
    KeCopyPage(v14, UltraMapping);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = RtlScrubMemory((PVOID)UltraMapping);
  if ( v14 )
    KeCopyPage(UltraMapping, v14);
  if ( !a3 )
  {
    v16 = ZeroPte;
    v17 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
LABEL_23:
          if ( (ZeroPte & 1) != 0 )
            v16 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_23;
      }
    }
    *v9 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v9, v16, v18);
  }
  ++a1[23];
  return v15;
}
