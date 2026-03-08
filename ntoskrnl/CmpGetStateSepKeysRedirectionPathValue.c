/*
 * XREFs of CmpGetStateSepKeysRedirectionPathValue @ 0x140B34C18
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140B34BB0 (CmpFindRedirectedDriverServiceStateNode.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1407FE71C (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1407FEFF8 (CmpValueToData.c)
 *     CmpFindHiveSubKey @ 0x140B32F34 (CmpFindHiveSubKey.c)
 */

char __fastcall CmpGetStateSepKeysRedirectionPathValue(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int SubKeyByName; // edi
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int ValueByName; // edi
  ULONG_PTR v12; // rax
  PVOID v13; // rax
  bool v14; // zf
  __int64 v15; // r9
  unsigned __int16 v16; // r8
  unsigned __int16 i; // dx
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+94h] [rbp+34h]

  v24 = HIDWORD(a3);
  v18 = 0xFFFFFFFFLL;
  v19 = 0xFFFFFFFFLL;
  v20 = 0xFFFFFFFFLL;
  v23 = 0;
  v22 = 0LL;
  v21 = 0xFFFFFFFFLL;
  if ( !CmpFindHiveSubKey(BugCheckParameter3, a2, (__int128 *)L"pr", &v22, (unsigned int *)&v21) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  if ( SubKeyByName == -1 )
    return 0;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, &v18)
       : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, (unsigned int *)&v18)) )
    return 0;
  v9 = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
  if ( v9 == -1 )
    return 0;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v9, &v19)
      : HvpGetCellPaged(BugCheckParameter3, v9, (unsigned int *)&v19);
  if ( !v10 )
    return 0;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v10, (int)&CmpTargetNtPathString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v19);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
  if ( ValueByName == -1 )
    return 0;
  v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, ValueByName, &v20)
      : HvpGetCellPaged(BugCheckParameter3, ValueByName, (unsigned int *)&v20);
  if ( !v12 )
    return 0;
  v13 = CmpValueToData(BugCheckParameter3, ValueByName, v12, &v23);
  v14 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  *(_QWORD *)(a4 + 8) = v13;
  if ( v14 )
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v20);
  else
    HvpReleaseCellFlat(BugCheckParameter3, &v20);
  v15 = *(_QWORD *)(a4 + 8);
  if ( !v15 )
    return 0;
  v16 = v23;
  *(_WORD *)(a4 + 2) = v23;
  *(_WORD *)a4 = 0;
  if ( v16 )
  {
    for ( i = 0; i < v16; *(_WORD *)a4 = i )
    {
      if ( !*(_WORD *)(v15 + 2 * ((unsigned __int64)i >> 1)) )
        break;
      i += 2;
    }
  }
  return 1;
}
