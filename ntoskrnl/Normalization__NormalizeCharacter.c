/*
 * XREFs of Normalization__NormalizeCharacter @ 0x1409BE3B8
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x1409BD480 (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x1409BE1FC (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x1405ADF90 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1405ADFC0 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x1405ADFF4 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x1405AE02C (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x1405AE10C (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x1405AE1C4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x1405AE250 (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x1405AE32C (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1405AE3B8 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1405AE3E4 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1405AE434 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1405AE580 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1405AE600 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1405AE678 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x1409BD480 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1409BD590 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  int v8; // edx
  char v9; // r14
  unsigned __int8 v10; // bp
  int v11; // eax
  int v12; // r9d
  char v13; // al
  unsigned __int16 *v15; // rax
  int v16; // ecx
  unsigned __int8 v17; // r15
  char v18; // dl
  __int16 *v19; // r8
  int v20; // edx
  __int64 v21; // rcx
  unsigned __int8 v22; // r15
  int CanCombinableCharactersCombine; // eax
  char v24; // dl
  bool v25; // zf
  int StartBasePair; // eax
  int v27; // eax
  int StartBase; // eax
  int v29; // eax
  __int64 v30; // r10
  char v31; // r9
  __int64 v32; // rax
  int v33; // eax
  char v34; // di
  char v35; // r8
  char v36; // di
  char v37; // al
  int v38; // eax
  char v39; // di
  char v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  char v44; // al
  unsigned __int16 *v45; // r10
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // edi
  unsigned __int16 v49; // si
  unsigned __int16 v50; // di
  int LastChar; // eax
  unsigned int v52; // r9d
  int v53; // eax
  int v54; // r9d
  unsigned __int16 *v55; // r8
  int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // r8
  unsigned __int16 *v59; // r9
  unsigned __int16 *v60; // r10
  __int64 v61; // r10

  v5 = a3;
  if ( !a3 )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_126;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_126:
          v44 = NormBuffer__Append(a4, a2);
          goto LABEL_96;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, a4);
      }
      if ( v5 != 254 )
        break;
      v15 = *(unsigned __int16 **)(a4 + 16);
      if ( v15 == *(unsigned __int16 **)(a4 + 8) )
        return 3221227287LL;
      v16 = *v15;
      *(_QWORD *)(a4 + 16) = v15 + 1;
      if ( (unsigned __int16)(v16 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = v16 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_32:
      if ( !v5 )
        goto LABEL_26;
    }
    if ( v5 != 255 )
      break;
    if ( a2 < 44032 )
    {
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v55 = *(unsigned __int16 **)(a4 + 16);
        if ( v55 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v56 = *v55;
        *(_QWORD *)(a4 + 16) = v55 + 1;
        v57 = ComposeHangulLV(a2, v56);
        if ( !v57 )
        {
          *(_QWORD *)(a4 + 16) = v58;
          goto LABEL_26;
        }
        a2 = v57;
        if ( v60 == v59 )
          goto LABEL_26;
        v46 = *v60;
        *(_QWORD *)(a4 + 16) = v60 + 1;
        v47 = v57;
LABEL_120:
        v53 = ComposeHangulLVT(v47, v46);
        if ( !v53 )
        {
          *(_QWORD *)(a4 + 16) = v61;
          goto LABEL_26;
        }
LABEL_115:
        a2 = v53;
        goto LABEL_26;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v53 = ComposeHangulLV(v54, a2);
        goto LABEL_115;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( IsHangulLV(LastChar) )
        {
          NormBuffer__RewindOutputCharacter(a4);
          v53 = ComposeHangulLVT(v52, (unsigned int)a2);
          goto LABEL_115;
        }
LABEL_26:
        v13 = NormBuffer__Append(a4, a2);
LABEL_27:
        if ( !v13 )
          return 3221225507LL;
        return 0LL;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
    }
    else
    {
      if ( a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( !IsHangulLV(a2) )
            goto LABEL_26;
          v45 = *(unsigned __int16 **)(a4 + 16);
          if ( v45 == *(unsigned __int16 **)(a4 + 8) )
            goto LABEL_26;
          v46 = *v45;
          *(_QWORD *)(a4 + 16) = v45 + 1;
          v47 = (unsigned int)a2;
          goto LABEL_120;
        }
        v48 = a2 - 44032;
        if ( !NormBuffer__AppendEx(a4, (unsigned __int16)((__int16)v48 / 588 + 4352), 0, 0) )
          return 3221225507LL;
        v49 = v48 % 588 / 28 + 4449;
        if ( !NormBuffer__AppendEx(a4, v49, 0, 0) )
          return 3221225507LL;
        v50 = (unsigned __int16)(v48 % 28) != 0 ? v48 % 28 + 4519 : 0;
        if ( v50 )
        {
          if ( !NormBuffer__AppendEx(a4, v50, 0, 0) )
            return 3221225507LL;
          v49 = v50;
        }
        *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
        *(_DWORD *)(a4 + 88) = v49;
LABEL_109:
        *(_WORD *)(a4 + 92) = 0;
        return 0LL;
      }
      if ( (unsigned int)(a2 - 55216) <= 0x16 || (unsigned int)(a2 - 55243) <= 0x30 )
        goto LABEL_26;
    }
    v5 = -5;
  }
  v8 = *(unsigned __int8 *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !(_BYTE)v8 )
    goto LABEL_95;
  v9 = v8 & 0xC0;
  v10 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v10 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      if ( !NormBuffer__AppendEx(a4, a2, v8 & 0x3F, v8 & 0xC0) )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      *(_BYTE *)(a4 + 92) = v10;
      *(_BYTE *)(a4 + 93) = v9;
      return 0LL;
    }
    NormBuffer__GetLastChar(a4);
    v17 = *(_BYTE *)(a4 + 72);
    if ( !v17 || v17 == 63 || (v18 = *(_BYTE *)(a4 + 73), (v18 & 0xBF) == 0) )
    {
      v18 = *(_BYTE *)(a4 + 73);
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
      *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
      *(_BYTE *)(a4 + 92) = v17;
      *(_BYTE *)(a4 + 93) = v18;
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    if ( v9 == (char)0x80 || (((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & 0xBF) == 0 )
    {
      NormBuffer__IsBlocked((_QWORD *)a4, v10);
      goto LABEL_46;
    }
    if ( !v17 || v17 == 63 )
    {
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(a4);
        a2 = v41;
        v42 = *(_QWORD *)(a1 + 40);
        v43 = (v41 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v41 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v9 = *(_BYTE *)(v43 + v42 - 128) & 0xC0;
        v10 = *(_BYTE *)(v43 + v42 - 128) & 0x3F;
      }
LABEL_74:
      v20 = a2;
      v21 = a4;
      goto LABEL_47;
    }
    if ( v18 )
    {
      if ( v18 != 64 )
      {
        if ( NormBuffer__IsBlocked((_QWORD *)a4, v10) )
          goto LABEL_46;
        v22 = *(_BYTE *)(a4 + 92);
        if ( !v22 || v22 == 63 || *(_BYTE *)(a4 + 93) == 64 )
        {
          CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
          if ( CanCombinableCharactersCombine )
          {
            v24 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                                   + *(_QWORD *)(a1 + 32)) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(*(_QWORD *)(a4 + 80) - 2LL) = CanCombinableCharactersCombine;
            *(_DWORD *)(a4 + 88) = CanCombinableCharactersCombine;
            *(_BYTE *)(a4 + 93) = v24 & 0xC0;
            v25 = (v24 & 0xC0) == 64;
            *(_BYTE *)(a4 + 92) = v24 & 0x3F;
LABEL_83:
            if ( v25 )
              NormBuffer__RecheckStartCombinations(a4);
            return 0LL;
          }
          if ( !v22 || v22 == 63 )
            goto LABEL_46;
        }
        if ( v22 <= v10 )
          goto LABEL_46;
        if ( v22 == *(_BYTE *)(a1 + 116) )
        {
          if ( v10 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v10 != *(_BYTE *)(a1 + 115) )
              goto LABEL_46;
            goto LABEL_63;
          }
        }
        else if ( v22 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
        {
LABEL_63:
          StartBasePair = NormBuffer__LastStartBasePair(a4);
          v27 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
          if ( v27 )
          {
LABEL_78:
            v34 = *(_BYTE *)((v27 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v27 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            v35 = v34 & 0x3F;
            v36 = v34 & 0xC0;
            v37 = NormBuffer__ReplaceLastStartBasePair(a4, v27, v35, v36);
LABEL_81:
            if ( !v37 )
              return 3221225507LL;
            v25 = v36 == 64;
            goto LABEL_83;
          }
LABEL_46:
          v19 = *(__int16 **)(a4 + 104);
          v20 = a2;
          v21 = a4;
          if ( v19 != *(__int16 **)(a4 + 40) )
          {
            v13 = NormBuffer__Insert((_QWORD *)a4, a2, v19);
            goto LABEL_27;
          }
LABEL_47:
          v13 = NormBuffer__AppendEx(v21, v20, v10, v9);
          goto LABEL_27;
        }
        StartBase = NormBuffer__LastStartBase(a4);
        v29 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
        if ( !v29 )
          goto LABEL_46;
LABEL_80:
        v39 = *(_BYTE *)((v29 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v29 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128);
        v40 = v39 & 0x3F;
        v36 = v39 & 0xC0;
        v37 = NormBuffer__ReplaceLastStartBase(a4, v29, v40, v36);
        goto LABEL_81;
      }
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(a4);
        v31 = *(_BYTE *)((v30 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)((v30 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128);
        if ( !NormBuffer__AppendEx(a4, v30, v31 & 0x3F, v31 & 0xC0) )
          return 3221225507LL;
        v32 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v32 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
    }
    if ( v17 <= v10 )
      goto LABEL_74;
    if ( v17 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_74;
LABEL_77:
        v33 = NormBuffer__LastStartBasePair(a4);
        v27 = Normalization__CanCombinableCharactersCombine(a1, v33, a2);
        if ( !v27 )
          goto LABEL_74;
        goto LABEL_78;
      }
    }
    else if ( v17 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_77;
    }
    v38 = NormBuffer__LastStartBase(a4);
    v29 = Normalization__CanCombinableCharactersCombine(a1, v38, a2);
    if ( !v29 )
      goto LABEL_74;
    goto LABEL_80;
  }
  switch ( v8 )
  {
    case 127:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_95:
      v44 = NormBuffer__AppendEx(a4, a2, 0, 0);
LABEL_96:
      if ( !v44 )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      goto LABEL_109;
    case 191:
      return Normalization__AppendDecomposedChar(a1, a2, a4);
    case 192:
      v11 = NormBuffer__GetLastChar(a4);
      if ( !(unsigned int)Normalization__CanCombinableCharactersCombine(a1, v11, a2) )
        goto LABEL_74;
      NormBuffer__RewindOutputCharacter(a4);
      a2 = v12;
      goto LABEL_32;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(a4 + 16) == *(_QWORD *)(a4 + 8) )
    goto LABEL_74;
  return 3221227287LL;
}
