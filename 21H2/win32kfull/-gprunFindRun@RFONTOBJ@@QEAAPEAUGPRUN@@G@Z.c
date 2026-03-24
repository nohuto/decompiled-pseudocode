/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0099480
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0095270 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0095DA0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C0097F90 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098AC0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0098FC0 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00E7B58 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C01197E0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0158C60 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__fastcall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  _DWORD *v2; // rax
  int v3; // ebx
  unsigned int v4; // r9d
  _DWORD *v5; // rcx
  int v6; // r10d
  _DWORD *v7; // r8
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  struct GPRUN *result; // rax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // r11d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // r11d
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // eax
  int v39; // eax

  v2 = *(_DWORD **)this;
  v3 = 0;
  v4 = a2;
  v5 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  v6 = v2[151];
  v7 = v5 + 4;
  if ( v6 )
  {
    if ( (unsigned int)a2 < *v7 )
      return (struct GPRUN *)v7;
    v11 = (int)v2[152];
    v12 = v2[153];
    if ( v12 <= 9 )
    {
      if ( v12 != 9 )
      {
        v29 = v12 - 1;
        if ( !v29 )
        {
LABEL_63:
          if ( (int)v11 > v6 || v4 < v7[4 * (int)v11] )
            v3 = -1;
          LODWORD(v11) = v3 + v11;
LABEL_67:
          result = (struct GPRUN *)&v7[4 * (int)v11];
          if ( v4 - *(_DWORD *)result < *((_DWORD *)result + 1) )
            return result;
          return (struct GPRUN *)v7;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
LABEL_59:
          if ( (int)v11 > v6 || v4 < v7[4 * (int)v11] )
            v28 = -1;
          else
            v28 = 1;
          LODWORD(v11) = v28 + v11;
          goto LABEL_63;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
LABEL_55:
          if ( (int)v11 > v6 || (v27 = 2, v4 < v7[4 * (int)v11]) )
            v27 = -2;
          LODWORD(v11) = v27 + v11;
          goto LABEL_59;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
LABEL_51:
          if ( (int)v11 > v6 || (v26 = 4, v4 < v7[4 * (int)v11]) )
            v26 = -4;
          LODWORD(v11) = v26 + v11;
          goto LABEL_55;
        }
        v33 = v32 - 1;
        if ( !v33 )
        {
LABEL_47:
          if ( (int)v11 > v6 || (v25 = 8, v4 < v7[4 * (int)v11]) )
            v25 = -8;
          LODWORD(v11) = v25 + v11;
          goto LABEL_51;
        }
        v34 = v33 - 1;
        if ( !v34 )
        {
LABEL_43:
          if ( (int)v11 <= v6 && v4 >= v7[4 * (int)v11] )
            v24 = 16;
          else
            v24 = -16;
          LODWORD(v11) = v24 + v11;
          goto LABEL_47;
        }
        v35 = v34 - 1;
        if ( !v35 )
        {
LABEL_39:
          if ( (int)v11 > v6 || (v23 = 32, v4 < v7[4 * (int)v11]) )
            v23 = -32;
          LODWORD(v11) = v23 + v11;
          goto LABEL_43;
        }
        if ( v35 != 1 )
          goto LABEL_67;
LABEL_35:
        if ( (int)v11 > v6 || (v22 = 64, v4 < v7[4 * (int)v11]) )
          v22 = -64;
        LODWORD(v11) = v22 + v11;
        goto LABEL_39;
      }
    }
    else
    {
      v13 = v12 - 10;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v36 = v16 - 1;
              if ( v36 )
              {
                v37 = v36 - 1;
                if ( v37 )
                {
                  if ( v37 != 1 )
                    goto LABEL_67;
                  LODWORD(v11) = v2[152] + (v4 < v7[4 * v11] ? -16384 : 0x4000);
                }
                if ( (int)v11 > v6 || (v38 = 0x2000, v4 < v7[4 * (int)v11]) )
                  v38 = -8192;
                LODWORD(v11) = v38 + v11;
              }
              if ( (int)v11 > v6 || (v39 = 4096, v4 < v7[4 * (int)v11]) )
                v39 = -4096;
              LODWORD(v11) = v39 + v11;
            }
            if ( (int)v11 > v6 || (v17 = 2048, v4 < v7[4 * (int)v11]) )
              v17 = -2048;
            LODWORD(v11) = v17 + v11;
          }
          if ( (int)v11 > v6 || (v18 = 1024, v4 < v7[4 * (int)v11]) )
            v18 = -1024;
          LODWORD(v11) = v18 + v11;
        }
        if ( (int)v11 > v6 || (v19 = 512, v4 < v7[4 * (int)v11]) )
          v19 = -512;
        LODWORD(v11) = v19 + v11;
      }
      if ( (int)v11 > v6 || (v20 = 256, v4 < v7[4 * (int)v11]) )
        v20 = -256;
      LODWORD(v11) = v20 + v11;
    }
    if ( (int)v11 > v6 || (v21 = 128, v4 < v7[4 * (int)v11]) )
      v21 = -128;
    LODWORD(v11) = v21 + v11;
    goto LABEL_35;
  }
  v8 = &v5[4 * (*v5 - 1) + 4];
  if ( v4 > *v8 + v8[1] - 1 )
    return (struct GPRUN *)v7;
  v9 = v5 + 4;
  if ( v7 > v8 )
    return (struct GPRUN *)v7;
  while ( v4 - *v9 >= v9[1] )
  {
    v9 += 4;
    if ( v9 > v8 )
      return (struct GPRUN *)v7;
  }
  return (struct GPRUN *)v9;
}
