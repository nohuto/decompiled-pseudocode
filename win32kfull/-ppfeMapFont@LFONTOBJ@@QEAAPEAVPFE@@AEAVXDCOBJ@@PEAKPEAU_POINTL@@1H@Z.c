/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C011AC70
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreGetCharSet @ 0x1C0111B08 (GreGetCharSet.c)
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0111D54 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 *     GreGetTextFaceW @ 0x1C011A714 (GreGetTextFaceW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0290B74 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00E90D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C011B194 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0150274 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        DC **a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  int v6; // r12d
  float *v7; // rsi
  unsigned int *v8; // rbp
  int v11; // r15d
  struct Gre::Base::SESSION_GLOBALS *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  DC *v15; // rdx
  char v16; // bl
  int v17; // esi
  __int64 v18; // r10
  int v19; // r12d
  Gre::Base *v20; // rcx
  __int64 v21; // rbp
  struct PFE *v22; // rsi
  __int64 v23; // rbx
  int v24; // eax
  unsigned int *v25; // rbx
  _DWORD *v26; // rcx
  int v27; // edx
  struct PFE *result; // rax
  int v29; // ecx
  __int64 v30; // r9
  unsigned int v31; // eax
  unsigned int v32; // edx
  DC *v33; // rcx
  char v34; // cl
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rax
  char v38; // al
  int v39; // edx
  __int64 v40; // [rsp+50h] [rbp-88h]
  float *v41; // [rsp+58h] [rbp-80h]
  __int64 v42; // [rsp+60h] [rbp-78h]
  __int64 v43; // [rsp+68h] [rbp-70h]
  __int64 v44; // [rsp+70h] [rbp-68h]
  _QWORD v45[12]; // [rsp+78h] [rbp-60h] BYREF
  int v46; // [rsp+E0h] [rbp+8h]
  int v47; // [rsp+E8h] [rbp+10h]

  v6 = 0;
  v7 = (float *)*a2;
  v8 = a3;
  v42 = *(_QWORD *)this;
  v41 = (float *)*a2;
  v40 = *(_QWORD *)this + 40LL;
  v11 = 0;
  v43 = *((_QWORD *)*a2 + 6);
  v47 = 0;
  v12 = Gre::Base::Globals(this);
  v14 = SGDGetSessionState(v13);
  v15 = *a2;
  v44 = *(_QWORD *)(v14 + 32);
  if ( (*((_DWORD *)*a2 + 62) & 1) != 0 )
    goto LABEL_38;
  v16 = *(_BYTE *)(*(_QWORD *)this + 302LL);
  if ( (*((_DWORD *)v15 + 9) & 1) != 0 || *((_DWORD *)v15 + 8) == 1 )
  {
    if ( (*((_DWORD *)v12 + 41) & 2) != 0 )
    {
      if ( v16 == 3 )
        goto LABEL_13;
    }
    else if ( (unsigned __int8)(v16 - 4) > 2u )
    {
      goto LABEL_13;
    }
    if ( *((_QWORD *)v15 + 62) )
    {
      GreAcquireHmgrSemaphore();
      v17 = *(_DWORD *)(*((_QWORD *)*a2 + 62) + 96LL);
      v47 = v17;
      if ( v17 == 6 || v17 == 4 || v17 == 5 )
      {
        v11 = 0x10000;
        if ( v16 == 6 )
        {
          v11 = 1342242816;
        }
        else if ( v16 == 5 || (*((_DWORD *)v12 + 41) & 0x10) != 0 )
        {
          v11 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v7 = v41;
    }
  }
LABEL_13:
  if ( !a6 )
  {
    if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(*((_QWORD *)v12 + 241) + 1573016LL) )
    {
      *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*((_QWORD *)v12 + 241) + 1573016LL);
    }
    v46 = 0;
    if ( *(int *)(*(_QWORD *)this + 32LL) > 0 )
    {
      v18 = v40;
      v19 = 1;
      v20 = 0LL;
      v21 = v40;
      while ( 1 )
      {
        if ( v43 == *(_QWORD *)v21
          && *(float *)(v21 + 8) == v7[80]
          && *(float *)(v21 + 12) == v7[81]
          && *(float *)(v21 + 16) == v7[82]
          && *(float *)(v21 + 20) == v7[83] )
        {
          v22 = *(struct PFE **)(v21 + 24);
          if ( v22 )
          {
            v45[0] = *(_QWORD *)v22;
            v23 = v45[0];
            if ( *(_QWORD *)(v23 + 128) != *((_QWORD *)Gre::Base::Globals(v20) + 796)
              || PFFOBJ::pPvtDataMatch((PFFOBJ *)v45) )
            {
              v24 = *(_DWORD *)(v21 + 32);
              if ( v11 )
              {
                if ( (v24 & 0x10010000) == v11 && v47 == *(_DWORD *)(v21 + 48) )
                {
LABEL_28:
                  v25 = a5;
                  v26 = (_DWORD *)(v42 + 56LL * v46);
                  *a3 = v26[18];
                  a4->x = v26[19];
                  a4->y = v26[20];
                  *a5 = v26[21];
                  goto LABEL_29;
                }
              }
              else if ( (v24 & 0x10000) == 0 )
              {
                goto LABEL_28;
              }
            }
            v18 = v40;
          }
          v29 = *(_DWORD *)(*(_QWORD *)this + 32LL);
          if ( v19 < v29 )
          {
            memmove((void *)(v18 + 56LL * v46), (const void *)(v18 + 56LL * v19), (unsigned int)(56 * (v29 - v46) - 56));
            v18 = v40;
          }
          --v19;
          LODWORD(v20) = v46 - 1;
          --*(_DWORD *)(*(_QWORD *)this + 32LL);
          v21 -= 56LL;
        }
        v20 = (Gre::Base *)(unsigned int)((_DWORD)v20 + 1);
        ++v19;
        v46 = (int)v20;
        v21 += 56LL;
        if ( (int)v20 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
          break;
        v7 = v41;
      }
      v8 = a3;
      v6 = (int)v20;
    }
  }
LABEL_38:
  v30 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) == 0 || (unsigned int)DC::bDpiScaleTransform(*a2) )
    v31 = 0;
  else
    v31 = 64;
  v25 = a5;
  result = ppfeGetAMatch(
             (struct XDCOBJ *)a2,
             (struct tagENUMLOGFONTEXDVW *)(v30 + 276),
             (const unsigned __int16 *)(v30 + 208),
             v30,
             v31,
             v8,
             a4,
             a5,
             a6);
  v22 = result;
  if ( !result )
    return result;
  if ( (*((_DWORD *)*a2 + 62) & 1) == 0 )
  {
    if ( !v11
      || (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) == 0
      || (v32 = *v8, *v8 |= 0x10000u, v33 = *a2, (*((_DWORD *)*a2 + 9) & 1) == 0) && *((_DWORD *)v33 + 8) != 1
      || !*((_QWORD *)v33 + 62)
      || (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) == 0 )
    {
LABEL_53:
      if ( !a6 )
      {
        if ( v6 >= 3 )
        {
          v6 = 0;
          *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        }
        v36 = 56LL * v6;
        *(_QWORD *)(v36 + v42 + 40) = v43;
        *(_QWORD *)(v36 + v42 + 64) = result;
        *(_DWORD *)(v36 + v42 + 72) = *v8;
        *(_DWORD *)(v36 + v42 + 76) = a4->x;
        *(_DWORD *)(v36 + v42 + 80) = a4->y;
        v37 = 14LL * v6;
        *(float *)(v42 + 4 * v37 + 48) = v41[80];
        *(float *)(v42 + 4 * v37 + 52) = v41[81];
        *(float *)(v42 + 4 * v37 + 56) = v41[82];
        *(float *)(v42 + 4 * v37 + 60) = v41[83];
        *(_DWORD *)(v36 + v42 + 84) = *a5;
        *(_DWORD *)(v36 + v42 + 88) = v47;
        ++*(_DWORD *)(*(_QWORD *)this + 32LL);
      }
      goto LABEL_29;
    }
    v34 = *(_BYTE *)(*(_QWORD *)this + 302LL);
    if ( v34 != 5 )
    {
      if ( v34 == 4 )
        goto LABEL_53;
      if ( v34 == 6 )
      {
        v35 = v32 | 0x50010000;
        goto LABEL_52;
      }
      if ( (*((_BYTE *)v12 + 164) & 0x12) != 0x12 )
        goto LABEL_53;
    }
    v35 = v32 | 0x10010000;
LABEL_52:
    *v8 = v35;
    goto LABEL_53;
  }
LABEL_29:
  v27 = *(_DWORD *)(v44 + 18736);
  if ( v27 && (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) == 0 )
  {
    if ( (v38 = *((_BYTE *)v25 + 3), v39 = *(_DWORD *)(v44 + 18740) | v27, !v38) && (v39 & 2) != 0
      || v38 == -1 && (v39 & 1) != 0 )
    {
      *v25 = *v25 & 0xFF0000FF | (*(unsigned __int16 *)(v44 + 18744) << 8);
    }
  }
  *(_DWORD *)(*((_QWORD *)*a2 + 122) + 4LL) = *v25 >> 8;
  result = v22;
  *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x10u;
  return result;
}
