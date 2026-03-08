/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0120F30
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C011F950 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0120BA0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C014F784 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02B720C (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // r11d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // r11d
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
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
      if ( v12 == 9 )
      {
LABEL_11:
        if ( (int)v11 > v6 || (v13 = 128, v4 < v7[4 * (int)v11]) )
          v13 = -128;
        LODWORD(v11) = v13 + v11;
        goto LABEL_15;
      }
      v21 = v12 - 1;
      if ( !v21 )
        goto LABEL_43;
      v22 = v21 - 1;
      if ( !v22 )
      {
LABEL_39:
        if ( (int)v11 <= v6 && v4 >= v7[4 * (int)v11] )
          v20 = 1;
        else
          v20 = -1;
        LODWORD(v11) = v20 + v11;
LABEL_43:
        if ( (int)v11 > v6 || v4 < v7[4 * (int)v11] )
          v3 = -1;
        LODWORD(v11) = v3 + v11;
        goto LABEL_46;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_35:
        if ( (int)v11 > v6 || (v19 = 2, v4 < v7[4 * (int)v11]) )
          v19 = -2;
        LODWORD(v11) = v19 + v11;
        goto LABEL_39;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
LABEL_31:
        if ( (int)v11 > v6 || (v18 = 4, v4 < v7[4 * (int)v11]) )
          v18 = -4;
        LODWORD(v11) = v18 + v11;
        goto LABEL_35;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
LABEL_27:
        if ( (int)v11 > v6 || (v17 = 8, v4 < v7[4 * (int)v11]) )
          v17 = -8;
        LODWORD(v11) = v17 + v11;
        goto LABEL_31;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
LABEL_23:
        if ( (int)v11 <= v6 && v4 >= v7[4 * (int)v11] )
          v16 = 16;
        else
          v16 = -16;
        LODWORD(v11) = v16 + v11;
        goto LABEL_27;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
LABEL_19:
        if ( (int)v11 > v6 || (v15 = 32, v4 < v7[4 * (int)v11]) )
          v15 = -32;
        LODWORD(v11) = v15 + v11;
        goto LABEL_23;
      }
      if ( v27 == 1 )
      {
LABEL_15:
        if ( (int)v11 > v6 || (v14 = 64, v4 < v7[4 * (int)v11]) )
          v14 = -64;
        LODWORD(v11) = v14 + v11;
        goto LABEL_19;
      }
LABEL_46:
      result = (struct GPRUN *)&v7[4 * (int)v11];
      if ( v4 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
        return (struct GPRUN *)v7;
      return result;
    }
    v28 = v12 - 10;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 != 1 )
                  goto LABEL_46;
                LODWORD(v11) = v2[152] + (v4 < v7[4 * v11] ? -16384 : 0x4000);
              }
              if ( (int)v11 > v6 || (v34 = 0x2000, v4 < v7[4 * (int)v11]) )
                v34 = -8192;
              LODWORD(v11) = v34 + v11;
            }
            if ( (int)v11 > v6 || (v35 = 4096, v4 < v7[4 * (int)v11]) )
              v35 = -4096;
            LODWORD(v11) = v35 + v11;
          }
          if ( (int)v11 > v6 || (v36 = 2048, v4 < v7[4 * (int)v11]) )
            v36 = -2048;
          LODWORD(v11) = v36 + v11;
        }
        if ( (int)v11 > v6 || (v37 = 1024, v4 < v7[4 * (int)v11]) )
          v37 = -1024;
        LODWORD(v11) = v37 + v11;
      }
      if ( (int)v11 > v6 || (v38 = 512, v4 < v7[4 * (int)v11]) )
        v38 = -512;
      LODWORD(v11) = v38 + v11;
    }
    if ( (int)v11 > v6 || (v39 = 256, v4 < v7[4 * (int)v11]) )
      v39 = -256;
    LODWORD(v11) = v39 + v11;
    goto LABEL_11;
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
