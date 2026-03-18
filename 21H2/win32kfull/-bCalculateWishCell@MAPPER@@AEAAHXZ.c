/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C001E92C
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001D8F0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001EDA4 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013AE1C (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 */

__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // r14d
  unsigned int v6; // esi
  int v7; // edi
  float v8; // xmm0_4
  int v9; // r12d
  BOOL v10; // r10d
  bool v11; // cf
  bool v12; // zf
  float v13; // xmm0_4
  int v14; // r10d
  BOOL v15; // r9d
  float v16; // xmm0_4
  BOOL v17; // r11d
  int v18; // r8d
  int v19; // r13d
  __int64 v20; // rcx
  int v21; // r11d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edi
  float *v26; // [rsp+20h] [rbp-10h] BYREF
  int v27; // [rsp+60h] [rbp+30h] BYREF

  v2 = lNormAngle(*(unsigned int *)(*((_QWORD *)this + 1) + 12LL));
  v3 = *((_DWORD *)this + 63);
  v4 = v2;
  if ( (v3 & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 976LL) + 340LL) & 0x802) == 0x802 || (v3 & 0x40) != 0 )
    {
      *((_DWORD *)this + 44) = v2;
      *((_DWORD *)this + 63) = v3 | 0x1C;
      return 1LL;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v26, *(struct XDCOBJ **)this, 0x204u);
    v6 = 0;
    v7 = *((_DWORD *)this + 63);
    v8 = v26[1];
    v9 = (__PAIR64__(*v26 > 0.0, *v26) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    v10 = v8 > 0.0;
    v11 = v8 > 0.0;
    v12 = v8 == 0.0;
    v13 = v26[2];
    v14 = v10 - (!v11 && !v12);
    v15 = v13 > 0.0;
    v11 = v13 > 0.0;
    v12 = v13 == 0.0;
    v16 = v26[3];
    v17 = !v11 && !v12;
    v18 = v15 - v17;
    v19 = (__PAIR64__(v16 < 0.0, 0.0) - LODWORD(v16)) >> 32;
    v20 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 976LL) + 340LL) & 0x40;
    if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 976LL) + 340LL) & 0x40) == 0 )
      v19 = (__PAIR64__(v16 > 0.0, LODWORD(v16)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    v21 = v17 - v15;
    if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 976LL) + 340LL) & 0x40) == 0 )
      v21 = v18;
    if ( (v7 & 0x81000) == 0 )
    {
      if ( v4 != 900 * (v4 / 900)
        || (v20 = (v21 + v14) | (v9 - v19) | ((unsigned __int8)v9 ^ (unsigned __int8)~(_BYTE)v14) & 1u) != 0 )
      {
        v25 = v7 | 0x20;
LABEL_25:
        *((_DWORD *)this + 63) = v25;
        return v6;
      }
      v22 = (v14 & 0x384)
          + (v21 & 0xA8C)
          + v4
          + (((__PAIR64__(*v26 > 0.0, *v26) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708);
      *((_DWORD *)this + 44) = v22;
      if ( v22 >= 3600 )
        *((_DWORD *)this + 44) = v22 - 3600;
      v7 |= 0x80000u;
      *((_DWORD *)this + 63) = v7;
    }
    if ( (v7 & 8) == 0 )
    {
      v27 = 0;
      bFToL(v20, &v27, 0LL);
      v23 = v27;
      *((_DWORD *)this + 41) = v27;
      if ( v23 < 0 )
        v23 = -v23;
      *((_DWORD *)this + 41) = (v23 + 8) >> 4;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) && (v7 & 0x10) == 0 )
    {
      v27 = 0;
      bFToL(v20, &v27, 0LL);
      v24 = v27;
      *((_DWORD *)this + 42) = v27;
      if ( v24 < 0 )
        v24 = -v24;
      *((_DWORD *)this + 42) = (v24 + 8) >> 4;
    }
    v25 = v7 | 0x1C;
    v6 = 1;
    goto LABEL_25;
  }
  return 0LL;
}
