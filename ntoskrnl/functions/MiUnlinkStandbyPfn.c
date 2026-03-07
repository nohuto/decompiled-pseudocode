__int64 __fastcall MiUnlinkStandbyPfn(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  char v7; // al
  unsigned __int8 v8; // si
  int v9; // eax
  int v10; // ecx
  unsigned __int64 ValidPte; // rax

  v3 = *a1;
  if ( qword_140C657C0 && (v3 & 0x10) == 0 )
    v3 &= ~qword_140C657C0;
  v5 = (v3 >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  if ( (*(_BYTE *)(v6 + 35) & 0x10) != 0 )
    return 3LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( (MiUnlinkPageFromListEx(48 * v5 - 0x220000000000LL, 0LL) & 3) != 0 )
  {
    MiDiscardTransitionPteEx(48 * v5 - 0x220000000000LL, 0LL);
    return 1LL;
  }
  else
  {
    v7 = *(_BYTE *)(v6 + 34);
    ++*(_WORD *)(v6 + 32);
    *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 6;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL | 1;
    if ( (a2 & 2) != 0 && (unsigned int)MiGetPfnPriority(48 * v5 - 0x220000000000LL) > 2 )
      *(_BYTE *)(v6 + 35) = *(_BYTE *)(v6 + 35) & 0xF8 | 2;
    v8 = *(_BYTE *)(v6 + 34);
    v9 = (*(_DWORD *)(v6 + 16) >> 5) & 7;
    v10 = v8 >> 6;
    if ( v10 )
    {
      if ( v10 == 2 )
        v9 |= 0x18u;
    }
    else
    {
      v9 |= 8u;
    }
    ValidPte = MiMakeValidPte(0LL, v5, v9);
    if ( (a2 & 4) == 0 || !_bittest64((const signed __int64 *)(v6 + 40), 0x35u) )
    {
      *(_BYTE *)(v6 + 34) = v8 | 0x10;
      ValidPte |= 0x42uLL;
    }
    *a1 = ValidPte;
    return 0LL;
  }
}
