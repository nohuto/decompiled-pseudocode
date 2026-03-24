/*
 * XREFs of ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C00BBB40
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C00BBA10 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C00634D4 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BBF94 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFEOBJ::bFilteredOut(__int64 **this, struct _EFFILTER_INFO *a2)
{
  __int64 *v2; // r9
  int v5; // ecx
  _DWORD *v6; // r8
  int v7; // edx
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned __int8 v10; // bl
  struct tagPvtData *v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *this;
  v5 = *((_DWORD *)*this + 3);
  v6 = (_DWORD *)v2[4];
  if ( (v5 & 2) != 0 )
    return 1;
  v7 = v6[12];
  if ( (v7 & 0x800000) != 0 )
    return 1;
  if ( (v5 & 8) != 0 )
    return 1;
  v8 = 0;
  if ( *((_DWORD *)a2 + 6) )
  {
    if ( (v7 & 2) != 0 )
      return 1;
  }
  if ( *((_DWORD *)a2 + 3) && (v7 & 1) != 0
    || *((_DWORD *)a2 + 4) && (v7 & 1) == 0
    || *(_DWORD *)a2
    && (v5 & 1) == 0
    && (v7 & 2) != 0
    && (*((_DWORD *)a2 + 1) != v6[32] || *((_DWORD *)a2 + 2) != v6[33])
    || *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 8) && (v7 & 2) != 0 )
  {
    return 1;
  }
  v9 = *v2;
  v13[0] = v9;
  if ( *(struct PFT **const *)(v9 + 128) == gpPFTPrivate )
  {
    v12 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v13);
    if ( v12 && !*((_DWORD *)v12 + 1) )
      goto LABEL_11;
    return 1;
  }
  if ( !*(_DWORD *)(v9 + 56) )
    return 1;
LABEL_11:
  if ( *((_DWORD *)a2 + 5) && (*((_DWORD *)*this + 3) & 1) == 0 )
    return 1;
  if ( (*((_DWORD *)*this + 3) & 0x44) != 0 )
    return 1;
  if ( *((_DWORD *)a2 + 9) != 1 )
  {
    v10 = *((_BYTE *)a2 + 36);
    if ( jMapCharset(v10, (struct PFEOBJ *)this) != v10 )
      return 1;
  }
  return v8;
}
