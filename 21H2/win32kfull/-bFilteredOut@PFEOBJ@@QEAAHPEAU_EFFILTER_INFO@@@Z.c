/*
 * XREFs of ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C001201C
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0012370 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C013AD14 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C001EC24 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BA560 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFEOBJ::bFilteredOut(__int64 **this, struct _EFFILTER_INFO *a2)
{
  __int64 *v2; // r9
  int v5; // ecx
  _DWORD *v6; // r8
  int v7; // edx
  unsigned int v8; // edi
  __int64 v10; // rdx
  unsigned __int8 v11; // bl
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
  v10 = *v2;
  v13[0] = v10;
  if ( *(struct PFT **const *)(v10 + 128) == gpPFTPrivate )
  {
    v12 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v13);
    if ( v12 && !*((_DWORD *)v12 + 1) )
      goto LABEL_20;
    return 1;
  }
  if ( !*(_DWORD *)(v10 + 56) )
    return 1;
LABEL_20:
  if ( *((_DWORD *)a2 + 5) && (*((_DWORD *)*this + 3) & 1) == 0 )
    return 1;
  if ( (*((_DWORD *)*this + 3) & 0x44) != 0 )
    return 1;
  if ( *((_DWORD *)a2 + 9) != 1 )
  {
    v11 = *((_BYTE *)a2 + 36);
    if ( jMapCharset(v11, (struct PFEOBJ *)this) != v11 )
      return 1;
  }
  return v8;
}
