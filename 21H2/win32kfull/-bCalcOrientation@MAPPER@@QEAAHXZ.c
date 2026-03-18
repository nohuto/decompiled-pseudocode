/*
 * XREFs of ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C001F0A4
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001D8F0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001EDA4 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall MAPPER::bCalcOrientation(__int64 **this)
{
  int v1; // r8d
  int v3; // edi
  int v4; // r9d
  __int64 result; // rax
  __int64 v6; // r10
  int v7; // ecx
  float v8; // xmm0_4
  bool v9; // dl
  bool v10; // cf
  bool v11; // zf
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // r11d
  BOOL v15; // r10d
  float v16; // xmm0_4
  int v17; // r10d
  BOOL v18; // r9d
  float v19; // xmm0_4
  BOOL v20; // esi
  int v21; // r8d
  int v22; // ebp
  int v23; // ecx
  int v24; // esi
  int v25; // r8d
  unsigned int v26; // edx
  int v27; // r10d
  float *v28; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 63);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = 0;
    v4 = *((_DWORD *)this[1] + 2);
    *((_DWORD *)this + 44) = v4;
    if ( v4 )
    {
      v6 = **this;
      v7 = *(_DWORD *)(*(_QWORD *)(v6 + 976) + 340LL);
      if ( (v7 & 2) != 0 && (v7 & 0x1000) == 0 )
      {
        v8 = *(float *)(v6 + 332);
        v9 = v8 > 0.0;
        v10 = v8 > 0.0;
        v11 = v8 == 0.0;
        v12 = *(float *)(v6 + 320);
        LOBYTE(v3) = v12 < 0.0;
        if ( (v12 > 0.0) - v3 != v9 - (!v10 && !v11) )
          *((_DWORD *)this + 44) = -v4;
      }
    }
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 976) + 340LL) & 0x802) == 0x802 || (v1 & 0x40) != 0 )
  {
    *((_DWORD *)this + 44) = *((_DWORD *)this[1] + 3);
LABEL_3:
    result = 1LL;
    *((_DWORD *)this + 63) = v1 | 0x80000;
    return result;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v28, (struct XDCOBJ *)*this, 0x204u);
  v13 = v28[1];
  v15 = v13 > 0.0;
  v10 = v13 > 0.0;
  v11 = v13 == 0.0;
  v16 = v28[2];
  v17 = v15 - (!v10 && !v11);
  v18 = v16 > 0.0;
  v10 = v16 > 0.0;
  v11 = v16 == 0.0;
  v19 = v28[3];
  v20 = !v10 && !v11;
  v21 = v18 - v20;
  v22 = (__PAIR64__(v19 < 0.0, 0.0) - LODWORD(v19)) >> 32;
  v23 = *(_DWORD *)(*(_QWORD *)(**this + 976) + 340LL) & 0x40;
  if ( !v23 )
    v22 = (__PAIR64__(v19 > 0.0, LODWORD(v19)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v24 = v20 - v18;
  if ( (v23 & 0x40) == 0 )
    v24 = v21;
  v25 = *((_DWORD *)this[1] + 3);
  if ( v25 != 900 * (v25 / 900) )
    return 0;
  v26 = 1;
  v14 = (__PAIR64__(*v28 > 0.0, *v28) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (v24 + v17) | (v14 - v22) | (v14 ^ ~v17) & 1 )
  {
    return 0;
  }
  else
  {
    v27 = (v24 & 0xA8C)
        + v25
        + (((__PAIR64__(*v28 > 0.0, *v28) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708)
        + (v17 & 0x384);
    *((_DWORD *)this + 44) = v27;
    if ( v27 >= 3600 )
      *((_DWORD *)this + 44) = v27 - 3600;
    *((_DWORD *)this + 63) |= 0x80000u;
  }
  return v26;
}
