/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C00046BC
 * Callers:
 *     cjCopyFontDataW @ 0x1C0004330 (cjCopyFontDataW.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW2(
        struct XDCOBJ *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 v12; // rdi
  _BOOL8 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // edx
  char v21; // al
  __int16 v22; // ax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int16 v29; // cx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD v36[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v37[2]; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v38[2]; // [rsp+30h] [rbp-10h] BYREF
  int v39; // [rsp+78h] [rbp+38h] BYREF
  int v40; // [rsp+80h] [rbp+40h] BYREF

  v12 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v13 = *(_WORD *)(v12 + 56) != 0;
  if ( *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62) == 0 || !v13 )
    return 0LL;
  if ( (*(_DWORD *)(v12 + 48) & 0x3000010) != 0 )
  {
    a5 = 0;
    bFToL(v13, &a5, 0LL);
    *(_DWORD *)(a2 + 8) = a5;
    v14 = (unsigned int)*(__int16 *)(v12 + 60);
    a5 = 0;
    bFToL(v14, &a5, 0LL);
    *(_DWORD *)(a2 + 12) = a5;
    a5 = 0;
    bFToL(v15, &a5, 0LL);
    *(_DWORD *)(a2 + 20) = a5;
    v16 = *(unsigned __int16 *)(v12 + 68);
    LOWORD(v16) = *(_WORD *)(v12 + 64) + v16 - *(_WORD *)(v12 + 62) - *(_WORD *)(v12 + 60) - *(_WORD *)(v12 + 66);
    a5 = 0;
    if ( (__int16)v16 <= 0 )
      LOWORD(v16) = 0;
    bFToL(v16, &a5, 0LL);
    *(_DWORD *)(a2 + 24) = a5;
    a5 = 0;
    bFToL(v17, &a5, 0LL);
    *(_DWORD *)(a2 + 28) = a5;
    a5 = 0;
    bFToL(v18, &a5, 0LL);
    *(_DWORD *)(a2 + 32) = a5;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62);
    *(_DWORD *)(a2 + 12) = *(__int16 *)(v12 + 60);
    *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v12 + 60) + *(_WORD *)(v12 + 62) - *(_WORD *)(v12 + 56));
    v29 = *(_WORD *)(v12 + 64)
        + *(_WORD *)(v12 + 68)
        - *(_WORD *)(v12 + 62)
        - *(_WORD *)(v12 + 60)
        - *(_WORD *)(v12 + 66);
    if ( v29 <= 0 )
      v29 = 0;
    *(_DWORD *)(a2 + 24) = v29;
    *(_DWORD *)(a2 + 28) = *(__int16 *)(v12 + 76);
    *(_DWORD *)(a2 + 32) = *(__int16 *)(v12 + 78);
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, a1, 0x402u);
  if ( !v38[0] )
    return 0LL;
  if ( (*(_DWORD *)(v38[0] + 32LL) & 2) != 0 )
    goto LABEL_8;
  v36[1] = 0;
  v36[0] = 1065353216;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v38, (struct VECTORFL *)v36, (struct VECTORFL *)v36, 1uLL) )
    return 0LL;
  EFLOAT::eqLength(&v39, &a5, v36);
  v37[0] = 0;
  v37[1] = 1065353216;
  if ( (*(_DWORD *)(v38[0] + 32LL) & 2) == 0
    && !EXFORMOBJ::bXform((EXFORMOBJ *)v38, (struct VECTORFL *)v37, (struct VECTORFL *)v37, 1uLL) )
  {
    return 0LL;
  }
  EFLOAT::eqLength(&v40, &a5, v37);
  a5 = 0;
  bFToL(v30, &a5, 0LL);
  *(_DWORD *)(a2 + 8) = a5;
  a5 = 0;
  bFToL(v31, &a5, 0LL);
  *(_DWORD *)(a2 + 12) = a5;
  a5 = 0;
  bFToL(v32, &a5, 0LL);
  *(_DWORD *)(a2 + 28) = a5;
  a5 = 0;
  bFToL(v33, &a5, 0LL);
  *(_DWORD *)(a2 + 32) = a5;
  a5 = 0;
  bFToL(v34, &a5, 0LL);
  *(_DWORD *)(a2 + 20) = a5;
  a5 = 0;
  bFToL(v35, &a5, 0LL);
  *(_DWORD *)(a2 + 24) = a5;
LABEL_8:
  v19 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 44) = a7;
  *(_DWORD *)(a2 + 48) = a8;
  *(_DWORD *)(a2 + 16) = v19;
  *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v12 + 46);
  *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v12 + 52) & 1) != 0);
  *(_BYTE *)(a2 + 61) = *(_BYTE *)(v12 + 52) & 2;
  *(_BYTE *)(a2 + 62) = *(_BYTE *)(v12 + 52) & 0x10;
  *(_WORD *)(a2 + 52) = *(_WORD *)(v12 + 112);
  *(_WORD *)(a2 + 54) = *(_WORD *)(v12 + 114);
  *(_WORD *)(a2 + 56) = *(_WORD *)(v12 + 116);
  *(_WORD *)(a2 + 58) = *(_WORD *)(v12 + 118);
  *(_BYTE *)(a2 + 64) = *(_BYTE *)(v12 + 44);
  v20 = *(_DWORD *)(v12 + 48);
  v21 = *(_BYTE *)(v12 + 45);
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 68) = 0;
  *(_BYTE *)(a2 + 63) = (a4 != 0 ? 8 : 0) | v21 & 0xF0 | (v20 >> 1) & 2 | ((v20 & 1) != 0 ? 6 : 0) | ((v20 & 8) != 0 ? 0xA : 0) | ((v20 & 0x401000) == 0);
  v22 = *(_WORD *)(v12 + 52);
  if ( (v22 & 0x21) != 0 )
  {
    v23 = 0;
    if ( (v22 & 1) != 0 )
    {
      *(_DWORD *)(a2 + 68) = 1;
      v23 = 1;
    }
    if ( (*(_BYTE *)(v12 + 52) & 0x20) == 0 )
      goto LABEL_11;
    v23 |= 0x20u;
  }
  else
  {
    v23 = 64;
  }
  *(_DWORD *)(a2 + 68) = v23;
LABEL_11:
  if ( (*(_DWORD *)(v12 + 48) & 0x20000000) != 0 )
  {
    v23 |= 0x10000u;
    *(_DWORD *)(a2 + 68) = v23;
  }
  v24 = *(_DWORD *)(v12 + 48);
  if ( v24 < 0 )
  {
    if ( (v24 & 0x4000) != 0 )
    {
      v23 |= 0x80000u;
      *(_DWORD *)(a2 + 68) = v23;
    }
    if ( (*(_DWORD *)(v12 + 48) & 0x4000000) != 0 )
      v23 |= 0x20000u;
    else
      v23 |= 0x100000u;
    *(_DWORD *)(a2 + 68) = v23;
  }
  if ( (*(_DWORD *)(v12 + 48) & 0x40000) != 0 )
  {
    v25 = v23 | 0x200000;
    *(_DWORD *)(a2 + 68) = v25;
    if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
      *(_DWORD *)(a2 + 68) = v25 | 0x40000;
  }
  *(_DWORD *)(a2 + 72) = *(__int16 *)(v12 + 56);
  *(_DWORD *)(a2 + 76) = *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62);
  *(_DWORD *)(a2 + 80) = *(__int16 *)(v12 + 76);
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v12 + 108);
  *(_BYTE *)(a2 + 5) = *(_BYTE *)(v12 + 109);
  *(_BYTE *)(a2 + 6) = *(_BYTE *)(v12 + 110);
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(v12 + 111);
  v26 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  if ( *(_DWORD *)(v26 + 4) > 4u && (v27 = *(int *)(v26 + 196), (_DWORD)v27) )
  {
    *(_OWORD *)(a2 + 84) = *(_OWORD *)(v27 + v12);
    *(_QWORD *)(a2 + 100) = *(_QWORD *)(v27 + v12 + 16);
  }
  else
  {
    *(_OWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 100) = 0LL;
  }
  return 1LL;
}
