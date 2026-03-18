/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0098B5C
 * Callers:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0098960 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C010FE6C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029ABC8 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 */

__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  float v6; // xmm0_4
  int v7; // r15d
  BOOL v8; // r10d
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  int v12; // r10d
  BOOL v13; // edx
  __int64 v14; // rcx
  float v15; // xmm0_4
  BOOL v16; // r11d
  int v17; // r8d
  int v18; // r9d
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  float *v23; // [rsp+20h] [rbp-10h] BYREF
  int v24; // [rsp+60h] [rbp+30h] BYREF

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
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v23, *(struct XDCOBJ **)this, 0x204u);
    v6 = v23[1];
    v7 = (__PAIR64__(*v23 > 0.0, *v23) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    v8 = v6 > 0.0;
    v9 = v6 > 0.0;
    v10 = v6 == 0.0;
    v11 = v23[2];
    v12 = v8 - (!v9 && !v10);
    v13 = v11 > 0.0;
    v14 = *(unsigned int *)(*(_QWORD *)(**(_QWORD **)this + 976LL) + 340LL);
    v9 = v11 > 0.0;
    v10 = v11 == 0.0;
    v15 = v23[3];
    v16 = !v9 && !v10;
    v17 = v13 - v16;
    v18 = (__PAIR64__(v15 > 0.0, LODWORD(v15)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    if ( (v14 & 0x40) != 0 )
    {
      v17 = v16 - v13;
      v18 = (__PAIR64__(v15 < 0.0, 0.0) - LODWORD(v15)) >> 32;
    }
    v19 = *((_DWORD *)this + 63);
    if ( (v19 & 0x81000) != 0 )
    {
LABEL_16:
      if ( (v19 & 8) == 0 )
      {
        v24 = 0;
        bFToL(v14, &v24, 0LL);
        v21 = v24;
        if ( v24 < 0 )
          v21 = -v24;
        *((_DWORD *)this + 41) = (v21 + 8) >> 4;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) && (v19 & 0x10) == 0 )
      {
        v24 = 0;
        bFToL(v14, &v24, 0LL);
        v22 = v24;
        if ( v24 < 0 )
          v22 = -v24;
        *((_DWORD *)this + 42) = (v22 + 8) >> 4;
      }
      *((_DWORD *)this + 63) = v19 | 0x1C;
      return 1LL;
    }
    if ( v4 == 900 * (v4 / 900) )
    {
      v14 = (v17 + v12) | (v7 - v18) | ((unsigned __int8)v7 ^ (unsigned __int8)~(_BYTE)v12) & 1u;
      if ( !((v17 + v12) | (v7 - v18) | ((unsigned __int8)v7 ^ (unsigned __int8)~(_BYTE)v12) & 1) )
      {
        v20 = (v12 & 0x384)
            + (v17 & 0xA8C)
            + v4
            + (((__PAIR64__(*v23 > 0.0, *v23) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708);
        *((_DWORD *)this + 44) = v20;
        if ( v20 >= 3600 )
          *((_DWORD *)this + 44) = v20 - 3600;
        v19 |= 0x80000u;
        *((_DWORD *)this + 63) = v19;
        goto LABEL_16;
      }
    }
    *((_DWORD *)this + 63) = v19 | 0x20;
  }
  return 0LL;
}
