/*
 * XREFs of CmpIsLoadType @ 0x140B3493C
 * Callers:
 *     CmpFindDrivers @ 0x140B34758 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1407FE71C (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1407FEFF8 (CmpValueToData.c)
 *     CmpGetNodeName @ 0x140B34B00 (CmpGetNodeName.c)
 */

char __fastcall CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        int a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter3a,
        __int64 a7,
        ULONG_PTR a8,
        __int64 a9,
        _DWORD *a10)
{
  char v10; // bl
  unsigned int v12; // r12d
  unsigned int ValueByName; // r15d
  ULONG_PTR v14; // r13
  ULONG_PTR v15; // rsi
  __int64 CellPaged; // rax
  ULONG_PTR v17; // r14
  int v18; // r12d
  ULONG_PTR v19; // rax
  _DWORD *v20; // r14
  char v21; // al
  __int64 v22; // rcx
  _DWORD *v23; // r14
  bool v24; // zf
  const WCHAR *NodeName; // rax
  const WCHAR *v26; // r12
  unsigned int SubKeyByName; // eax
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // esi
  ULONG_PTR v31; // rax
  PVOID v32; // rsi
  unsigned int v33; // eax
  __int64 v34; // rax
  ULONG_PTR v35; // rsi
  const WCHAR *v36; // rax
  const WCHAR *v37; // r14
  unsigned int v38; // eax
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // esi
  ULONG_PTR v43; // rax
  _DWORD *v44; // rsi
  char v45; // cl
  __int64 v47; // [rsp+38h] [rbp-59h] BYREF
  __int64 v48; // [rsp+40h] [rbp-51h] BYREF
  __int64 v49; // [rsp+48h] [rbp-49h]
  __int64 v50; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v51; // [rsp+58h] [rbp-39h] BYREF
  __int64 v52; // [rsp+60h] [rbp-31h] BYREF
  __int64 v53; // [rsp+68h] [rbp-29h] BYREF
  __int64 v54; // [rsp+70h] [rbp-21h] BYREF
  __int64 v55; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int16 v57; // [rsp+D8h] [rbp+47h] BYREF
  int v58; // [rsp+E8h] [rbp+57h]
  __int64 v59; // [rsp+F0h] [rbp+5Fh]

  v59 = a4;
  v58 = a3;
  v10 = 0;
  v48 = 0xFFFFFFFFLL;
  v54 = 0xFFFFFFFFLL;
  v12 = -1;
  v24 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  ValueByName = -1;
  v53 = 0xFFFFFFFFLL;
  v14 = 0LL;
  v47 = 0xFFFFFFFFLL;
  v15 = 0LL;
  v55 = 0xFFFFFFFFLL;
  v52 = 0xFFFFFFFFLL;
  v50 = 0xFFFFFFFFLL;
  v51 = 0;
  DestinationString = 0LL;
  v57 = 0;
  if ( v24 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v54);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v54);
  v49 = CellPaged;
  if ( !CellPaged )
    return CellPaged;
  v17 = BugCheckParameter3a;
  if ( BugCheckParameter3a && a7 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, CellPaged, &v57);
    v26 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(v17);
        if ( SubKeyByName != -1 )
        {
          v28 = (*(_BYTE *)(v17 + 140) & 1) != 0
              ? HvpGetCellFlat(v17, SubKeyByName, &v47)
              : HvpGetCellPaged(v17, SubKeyByName, (unsigned int *)&v47);
          if ( v28 )
          {
            v15 = v17;
            ValueByName = CmpFindValueByName(v17, v28, (int)&CmpStartString);
            if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v17, &v47);
            else
              HvpReleaseCellPaged(v17, (unsigned int *)&v47);
          }
        }
      }
      (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v26, v57);
      v57 = 0;
      if ( ValueByName != -1 )
        goto LABEL_88;
    }
    v29 = CmpFindValueByName(BugCheckParameter3, v49, (int)L"\b\n");
    v30 = v29;
    if ( v29 == -1 )
      goto LABEL_18;
    v31 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v29, &v52)
        : HvpGetCellPaged(BugCheckParameter3, v29, (unsigned int *)&v52);
    if ( !v31 )
      goto LABEL_18;
    v32 = CmpValueToData(BugCheckParameter3, v30, v31, &v51);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v52);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v52);
    if ( !v32 )
      goto LABEL_18;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v55);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v55);
    v33 = CmpFindSubKeyByName(v17);
    v12 = v33;
    if ( v33 != -1 )
    {
      v34 = (*(_BYTE *)(v17 + 140) & 1) != 0
          ? HvpGetCellFlat(v17, v33, &v47)
          : HvpGetCellPaged(v17, v33, (unsigned int *)&v47);
      if ( v34 )
      {
        v15 = v17;
        ValueByName = CmpFindValueByName(v17, v34, (int)&CmpStartString);
        if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v17, &v47);
        else
          HvpReleaseCellPaged(v17, (unsigned int *)&v47);
        if ( ValueByName != -1 )
          goto LABEL_88;
      }
    }
    CellPaged = v49;
  }
  if ( v59 && a5 )
  {
    v35 = a8;
    if ( a8 && a9 )
    {
      v36 = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, CellPaged, &v57);
      v37 = v36;
      if ( v36 )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, v36) >= 0 )
        {
          v38 = CmpFindSubKeyByName(v35);
          if ( v38 != -1 )
          {
            if ( (*(_BYTE *)(v35 + 140) & 1) != 0
               ? HvpGetCellFlat(v35, v38, &v53)
               : HvpGetCellPaged(v35, v38, (unsigned int *)&v53) )
            {
              v14 = v35;
              v12 = CmpFindSubKeyByName(v35);
              if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v35, &v53);
              else
                HvpReleaseCellPaged(v35, (unsigned int *)&v53);
            }
          }
        }
        (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v37, v57);
      }
    }
    else
    {
      v14 = BugCheckParameter3;
      v12 = CmpFindSubKeyByName(BugCheckParameter3);
    }
    if ( v12 != -1 )
    {
      v40 = (*(_BYTE *)(v14 + 140) & 1) != 0
          ? HvpGetCellFlat(v14, v12, &v47)
          : HvpGetCellPaged(v14, v12, (unsigned int *)&v47);
      if ( v40 )
      {
        v15 = v14;
        ValueByName = CmpFindValueByName(v14, v40, a5);
        if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v14, &v47);
        else
          HvpReleaseCellPaged(v14, (unsigned int *)&v47);
        if ( ValueByName != -1 )
        {
LABEL_88:
          v18 = v49;
          goto LABEL_7;
        }
      }
    }
  }
  v18 = v49;
  v15 = BugCheckParameter3;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v49, (int)&CmpStartString);
LABEL_7:
  if ( ValueByName == -1 )
    goto LABEL_18;
  v19 = (*(_BYTE *)(v15 + 140) & 1) != 0
      ? HvpGetCellFlat(v15, ValueByName, &v50)
      : HvpGetCellPaged(v15, ValueByName, (unsigned int *)&v50);
  if ( !v19 )
    goto LABEL_18;
  v20 = CmpValueToData(v15, ValueByName, v19, &v51);
  if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v15, &v50);
  else
    HvpReleaseCellPaged(v15, (unsigned int *)&v50);
  if ( !v20 )
    goto LABEL_18;
  v21 = *(_BYTE *)(v15 + 140) & 1;
  v22 = v15;
  if ( *v20 == v58 )
  {
    v24 = v21 == 0;
LABEL_22:
    if ( v24 )
      HvpReleaseCellPaged(v22, (unsigned int *)&v48);
    else
      HvpReleaseCellFlat(v22, &v48);
    v10 = 1;
    goto LABEL_18;
  }
  if ( v21 )
    HvpReleaseCellFlat(v15, &v48);
  else
    HvpReleaseCellPaged(v15, (unsigned int *)&v48);
  v23 = a10;
  if ( !a10 )
    goto LABEL_18;
  v41 = CmpFindValueByName(BugCheckParameter3, v18, (int)&CmpBootFlagsString);
  v42 = v41;
  if ( v41 == -1 )
    goto LABEL_18;
  v43 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v41, &v50)
      : HvpGetCellPaged(BugCheckParameter3, v41, (unsigned int *)&v50);
  if ( !v43 )
    goto LABEL_18;
  v44 = CmpValueToData(BugCheckParameter3, v42, v43, &v51);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v50);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v50);
  if ( !v44 )
    goto LABEL_18;
  v45 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
  if ( (*v44 & *v23) != 0 )
  {
    v24 = v45 == 0;
    v22 = BugCheckParameter3;
    goto LABEL_22;
  }
  if ( v45 )
    HvpReleaseCellFlat(BugCheckParameter3, &v48);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v48);
LABEL_18:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v54);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v54);
  LOBYTE(CellPaged) = v10;
  return CellPaged;
}
