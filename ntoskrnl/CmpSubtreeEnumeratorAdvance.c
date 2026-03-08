/*
 * XREFs of CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8
 * Callers:
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A18A38 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
 * Callees:
 *     CmpHashCompressedComponent @ 0x14074BDE4 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByName @ 0x140775070 (CmpFindKcbInHashEntryByName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpPopulateKcbStack @ 0x1407AF248 (CmpPopulateKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A146E0 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpKeyEnumStackAdvance @ 0x140A209E8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A20C04 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackReset @ 0x140A2152C (CmpKeyEnumStackReset.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorAdvance(__int64 a1)
{
  unsigned int v2; // ebx
  __int16 v3; // cx
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 KcbInHashEntryByName; // rax
  __int16 v8; // dx
  __int64 KcbAtLayerHeight; // r14
  __int64 v10; // r9
  __int64 EntryAtLayerHeight; // rax
  __int16 v12; // dx
  bool v13; // zf
  unsigned __int8 *v14; // r12
  int v15; // ebp
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __m128i v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *(_WORD *)a1;
  v19[0] = 0LL;
  if ( v3 < 0 )
  {
    return (unsigned int)-2147483622;
  }
  else
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 96) + 408LL * v3;
      if ( !*(_BYTE *)v4 )
      {
        CmpKeyEnumStackBeginEnumerationForKeyNodeStack(v4 + 56, *(_QWORD *)(v4 + 16), 0LL);
        *(_BYTE *)v4 = 1;
      }
      if ( (unsigned int)CmpKeyEnumStackAdvance(v4 + 56) != -2147483622 )
        break;
      CmpKeyEnumStackReset(v4 + 56);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_BYTE *)v4 = 0;
      v3 = *(_WORD *)a1 - 1;
      *(_WORD *)a1 = v3;
      if ( v3 < 0 )
        return (unsigned int)-2147483622;
    }
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v6, *(_WORD *)(a1 + 2));
      v10 = 0LL;
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v4 + 64, v8);
          if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
            break;
          v8 = v12 - 1;
          if ( v8 < 0 )
            goto LABEL_15;
        }
        v10 = *(_QWORD *)(EntryAtLayerHeight + 16);
      }
LABEL_15:
      v13 = (*(_BYTE *)(v10 + 2) & 0x20) == 0;
      v14 = (unsigned __int8 *)(v10 + 76);
      v15 = *(unsigned __int16 *)(v10 + 72);
      v19[0].m128i_i64[1] = v10 + 76;
      v19[0].m128i_i16[0] = v15;
      v19[0].m128i_i16[1] = v15;
      if ( v13 )
      {
        v17 = CmpHashUnicodeComponent(v19);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                                 *(_QWORD *)(KcbAtLayerHeight + 32),
                                 v17 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                 KcbAtLayerHeight,
                                 (__int64)v19);
      }
      else
      {
        v16 = CmpHashCompressedComponent((unsigned __int8 *)(v10 + 76), v15);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                                 *(_QWORD *)(KcbAtLayerHeight + 32),
                                 v16 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                 KcbAtLayerHeight,
                                 v14,
                                 v15);
      }
    }
    else
    {
      KcbInHashEntryByName = 0LL;
    }
    *(_QWORD *)(v4 + 424) = v4 + 64;
    if ( KcbInHashEntryByName )
    {
      CmpPopulateKcbStack(v4 + 24, KcbInHashEntryByName);
      *(_QWORD *)(v4 + 416) = v18;
    }
    ++*(_WORD *)a1;
  }
  return v2;
}
