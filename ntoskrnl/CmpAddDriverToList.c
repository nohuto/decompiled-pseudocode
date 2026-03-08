/*
 * XREFs of CmpAddDriverToList @ 0x140B340F4
 * Callers:
 *     CmpFindDrivers @ 0x140B34758 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpValueToData @ 0x1407FEFF8 (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x140B33EDC (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x140B34B00 (CmpGetNodeName.c)
 */

char __fastcall CmpAddDriverToList(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        PCUNICODE_STRING Source,
        char **a6,
        char a7)
{
  int TagIndex; // r12d
  bool v8; // zf
  char *v10; // r15
  char *v11; // rdi
  __int64 CellPaged; // rax
  __int64 v13; // r14
  const WCHAR *NodeName; // rax
  const WCHAR *v15; // rsi
  char *v16; // rax
  PCUNICODE_STRING v17; // rax
  unsigned __int16 v18; // cx
  _WORD *v19; // r13
  unsigned int ValueByName; // eax
  unsigned int v21; // esi
  ULONG_PTR CellFlat; // rax
  PVOID v23; // r14
  unsigned int v24; // esi
  const UNICODE_STRING *v25; // rsi
  __int64 (__fastcall *v26)(_QWORD, _QWORD, __int64); // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  char **v29; // rax
  char *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // esi
  ULONG_PTR v33; // rax
  _DWORD *v34; // rsi
  unsigned int v35; // eax
  unsigned int v36; // esi
  ULONG_PTR v37; // rax
  int v38; // r14d
  unsigned __int16 v39; // ax
  int v40; // r13d
  unsigned int v41; // esi
  unsigned int v42; // eax
  char v43; // si
  __int64 (__fastcall *v45)(__int64, _QWORD, __int64); // rax
  __int64 v46; // rcx
  ULONG_PTR v47; // rax
  unsigned __int16 v48; // ax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  size_t Size; // [rsp+38h] [rbp-61h] BYREF
  __int64 v53; // [rsp+40h] [rbp-59h] BYREF
  __int64 v54; // [rsp+48h] [rbp-51h]
  __int64 v55; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING v56; // [rsp+58h] [rbp-41h] BYREF
  __int64 v57; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-29h] BYREF
  __int64 v59; // [rsp+80h] [rbp-19h] BYREF
  __int64 v60; // [rsp+88h] [rbp-11h] BYREF
  __int64 v61; // [rsp+90h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 v63; // [rsp+E8h] [rbp+4Fh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+F8h] [rbp+5Fh]
  unsigned int v65; // [rsp+100h] [rbp+67h]

  v65 = a4;
  BugCheckParameter3a = a3;
  TagIndex = -1;
  v57 = 0xFFFFFFFFLL;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v61 = 0xFFFFFFFFLL;
  v60 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(Size) = 0;
  v59 = 0xFFFFFFFFLL;
  v55 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  v53 = 0xFFFFFFFFLL;
  v63 = 0;
  v56 = 0LL;
  a7 = 0;
  Destination = 0LL;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v57);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v57);
  v54 = CellPaged;
  v13 = CellPaged;
  if ( !CellPaged
    || (NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, CellPaged, &v63), (v15 = NodeName) == 0LL) )
  {
    v43 = 0;
    goto LABEL_53;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
    || (v16 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                        144LL,
                        0LL,
                        540101955LL),
        (v11 = v16) == 0LL) )
  {
    (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v15, v63);
    v10 = 0LL;
    v43 = 0;
    goto LABEL_53;
  }
  memset(v16, 0, 0x90uLL);
  v17 = Source;
  v18 = v63;
  *((_QWORD *)v11 + 8) = BugCheckParameter3;
  v10 = v11;
  *(UNICODE_STRING *)(v11 + 72) = *v17;
  *((_QWORD *)v11 + 5) = 0LL;
  *((_QWORD *)v11 + 3) = 0LL;
  v19 = v11 + 120;
  *((_QWORD *)v11 + 16) = v15;
  *((_WORD *)v11 + 60) = v18 - 2;
  *((_WORD *)v11 + 61) = v18;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v13, (int)&CmpImagePathString);
  v21 = ValueByName;
  if ( ValueByName != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, ValueByName, &v53);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, ValueByName, (unsigned int *)&v53);
    if ( !CellFlat )
    {
      v43 = 0;
      goto LABEL_53;
    }
    v23 = CmpValueToData(BugCheckParameter3, v21, CellFlat, (unsigned int *)&Size);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v53);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v53);
    if ( !v23 )
      goto LABEL_103;
    v24 = Size;
    v56.Buffer = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                              (unsigned int)Size,
                              0LL,
                              540233027LL);
    if ( !v56.Buffer )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v55);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v55);
      v43 = a7;
LABEL_55:
      v13 = v54;
      goto LABEL_56;
    }
    memmove(v56.Buffer, v23, v24);
    v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v56.Length = v24;
    v56.MaximumLength = v24;
    if ( v8 )
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v55);
    else
      HvpReleaseCellFlat(BugCheckParameter3, &v55);
    LODWORD(v13) = v54;
LABEL_18:
    v25 = Source;
    v26 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24);
    Destination.MaximumLength = Source->Length + 92 + *v19;
    Destination.Buffer = (wchar_t *)v26(Destination.MaximumLength, 0LL, 540298563LL);
    if ( Destination.Buffer )
    {
      if ( RtlAppendUnicodeStringToString(&Destination, &CmpRegistryRootKeyPath) >= 0
        && RtlAppendUnicodeStringToString(&Destination, v25) >= 0
        && RtlAppendUnicodeStringToString(&Destination, &CmpServicesSubKeyPath) >= 0
        && RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v11 + 120)) >= 0 )
      {
        v27 = *((_QWORD *)v11 + 3);
        if ( v27 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v27, *((unsigned __int16 *)v11 + 8));
        v28 = *((_QWORD *)v11 + 5);
        *((UNICODE_STRING *)v11 + 1) = v56;
        v56 = 0LL;
        if ( v28 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v28, *((unsigned __int16 *)v11 + 16));
        v29 = a6;
        *((UNICODE_STRING *)v11 + 2) = Destination;
        v30 = *v29;
        Destination = 0LL;
        if ( *((char ***)v30 + 1) != v29 )
          __fastfail(3u);
        *(_QWORD *)v11 = v30;
        *((_QWORD *)v11 + 1) = v29;
        *((_QWORD *)v30 + 1) = v11;
        v10 = 0LL;
        *v29 = v11;
        v31 = CmpFindValueByName(BugCheckParameter3, v13, (int)&CmpErrorControlString);
        v32 = v31;
        if ( v31 == -1 )
        {
          *((_DWORD *)v11 + 35) = 1;
        }
        else
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v33 = HvpGetCellFlat(BugCheckParameter3, v31, &v53);
          else
            v33 = HvpGetCellPaged(BugCheckParameter3, v31, (unsigned int *)&v53);
          if ( !v33 )
            goto LABEL_81;
          v34 = CmpValueToData(BugCheckParameter3, v32, v33, (unsigned int *)&Size);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v53);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v53);
          if ( !v34 )
            goto LABEL_81;
          *((_DWORD *)v11 + 35) = *v34;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v59);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v59);
        }
        v35 = CmpFindValueByName(BugCheckParameter3, v13, (int)&CmpGroupString);
        v36 = v35;
        if ( v35 == -1 )
        {
          v38 = (_DWORD)v11 + 104;
          *((_WORD *)v11 + 52) = 0;
          *((_WORD *)v11 + 53) = 0;
          *((_QWORD *)v11 + 14) = 0LL;
          goto LABEL_48;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v37 = HvpGetCellFlat(BugCheckParameter3, v35, &v53);
        else
          v37 = HvpGetCellPaged(BugCheckParameter3, v35, (unsigned int *)&v53);
        if ( v37 )
        {
          *((_QWORD *)v11 + 14) = CmpValueToData(BugCheckParameter3, v36, v37, (unsigned int *)&Size);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v53);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v53);
          if ( *((_QWORD *)v11 + 14) )
          {
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v60);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v60);
            v38 = (_DWORD)v11 + 104;
            v39 = Size - 2;
            *((_WORD *)v11 + 52) = Size - 2;
            if ( v39 <= (unsigned __int16)Size )
            {
              *((_WORD *)v11 + 53) = v39;
LABEL_48:
              v40 = v54;
              v41 = CmpFindValueByName(BugCheckParameter3, v54, (int)&CmpDriverDependencyString);
              if ( v41 == -1 )
              {
                *((_DWORD *)v11 + 22) = 0;
                *((_QWORD *)v11 + 12) = 0LL;
LABEL_50:
                v42 = CmpFindValueByName(BugCheckParameter3, v40, (int)&CmpTagString);
                if ( v42 != -1 )
                  TagIndex = CmpFindTagIndex(BugCheckParameter3a, v42, v65, v38);
                *((_DWORD *)v11 + 34) = TagIndex;
                v43 = 1;
                goto LABEL_53;
              }
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v47 = HvpGetCellFlat(BugCheckParameter3, v41, &v53);
              else
                v47 = HvpGetCellPaged(BugCheckParameter3, v41, (unsigned int *)&v53);
              if ( v47 )
              {
                *((_QWORD *)v11 + 12) = CmpValueToData(BugCheckParameter3, v41, v47, (unsigned int *)&Size);
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, &v53);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v53);
                if ( *((_QWORD *)v11 + 12) )
                {
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(BugCheckParameter3, &v61);
                  else
                    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v61);
                  v48 = Size - 2;
                  *((_WORD *)v11 + 44) = Size - 2;
                  if ( v48 <= (unsigned __int16)Size )
                  {
                    *((_WORD *)v11 + 45) = v48;
                    goto LABEL_50;
                  }
                }
              }
            }
          }
        }
LABEL_81:
        v43 = 0;
        goto LABEL_53;
      }
      v43 = a7;
LABEL_53:
      if ( v56.Buffer )
        (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v56.Buffer, v56.Length);
      goto LABEL_55;
    }
LABEL_103:
    v43 = 0;
    goto LABEL_53;
  }
  v45 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24);
  v46 = (unsigned int)(unsigned __int16)*v19 + 46;
  v56.MaximumLength = *v19 + 46;
  v43 = 0;
  v56.Buffer = (wchar_t *)v45(v46, 0LL, 540233027LL);
  if ( v56.Buffer )
  {
    if ( RtlAppendUnicodeToString(&v56, L"System32\\Drivers\\") < 0
      || RtlAppendUnicodeStringToString(&v56, (PCUNICODE_STRING)(v11 + 120)) < 0
      || RtlAppendUnicodeToString(&v56, L".sys") < 0 )
    {
      goto LABEL_53;
    }
    goto LABEL_18;
  }
LABEL_56:
  if ( Destination.Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Destination.Buffer, Destination.Length);
  if ( v10 )
  {
    v49 = *((_QWORD *)v10 + 3);
    if ( v49 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v49, *((unsigned __int16 *)v10 + 8));
    v50 = *((_QWORD *)v10 + 5);
    if ( v50 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v50, *((unsigned __int16 *)v10 + 16));
    v51 = *((_QWORD *)v11 + 16);
    if ( v51 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v51, *((unsigned __int16 *)v11 + 60));
    (*(void (__fastcall **)(char *, __int64))(BugCheckParameter3 + 32))(v11, 144LL);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v57);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v57);
  }
  return v43;
}
