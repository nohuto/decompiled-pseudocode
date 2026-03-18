/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C001CC60
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0018120 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C001C490 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C001C7E0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0288EC4 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BA560 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v8; // rbp
  struct _POINTL *v9; // rsi
  unsigned int *v10; // r11
  __int64 v12; // r10
  __int64 v14; // r9
  char v15; // bl
  unsigned int v16; // eax
  int v17; // r13d
  __int64 v18; // rdx
  int v19; // r13d
  __int64 v20; // rbx
  struct PFE *v21; // rsi
  int v22; // eax
  __int64 v23; // rax
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int *v26; // rbx
  struct PFE *result; // rax
  unsigned int v28; // edx
  __int64 v29; // rcx
  char v30; // cl
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rax
  _DWORD *v34; // rcx
  int v35; // ecx
  struct tagPvtData *v36; // rax
  char v37; // cl
  char v38; // al
  __int64 v39; // [rsp+50h] [rbp-68h]
  _QWORD v40[12]; // [rsp+58h] [rbp-60h] BYREF
  int v41; // [rsp+C0h] [rbp+8h]
  unsigned int v42; // [rsp+C8h] [rbp+10h]

  v6 = *(_QWORD *)a2;
  v7 = 0;
  v8 = *(_QWORD *)this;
  v9 = a4;
  v10 = a3;
  v42 = 0;
  v41 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v14 = *(_QWORD *)this + 40LL;
  v39 = v12;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1) != 0 )
  {
LABEL_33:
    v17 = a6;
    goto LABEL_34;
  }
  v15 = *(_BYTE *)(v8 + 302);
  if ( (*(_DWORD *)(v6 + 36) & 1) != 0 || *(_DWORD *)(v6 + 32) == 1 )
  {
    if ( (gulFontInformation & 2) != 0 )
    {
      if ( v15 == 3 )
        goto LABEL_13;
    }
    else if ( (unsigned __int8)(v15 - 4) > 2u )
    {
      goto LABEL_13;
    }
    if ( *(_QWORD *)(v6 + 496) )
    {
      GreAcquireHmgrSemaphore(gulFontInformation, a2, a3, v14);
      v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 496LL) + 96LL);
      v42 = v16;
      if ( v16 == 6 || v16 >= 4 && v16 <= 5 )
      {
        v41 = 0x10000;
        if ( v15 == 6 )
        {
          v41 = 1342242816;
        }
        else if ( v15 == 5 || (gulFontInformation & 0x10) != 0 )
        {
          v41 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v12 = v39;
      v14 = v8 + 40;
      v10 = a3;
    }
  }
LABEL_13:
  v17 = a6;
  if ( !a6 )
  {
    v18 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(gpGdiSharedMemory + 1573016LL) )
    {
      *(_DWORD *)(v18 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
      v18 = *(_QWORD *)this;
    }
    if ( *(int *)(v18 + 32) > 0 )
    {
      v19 = 1;
      v20 = v14;
      while ( 1 )
      {
        if ( v12 == *(_QWORD *)v20
          && *(float *)(v20 + 8) == *(float *)(v6 + 320)
          && *(float *)(v20 + 12) == *(float *)(v6 + 324)
          && *(float *)(v20 + 16) == *(float *)(v6 + 328)
          && *(float *)(v20 + 20) == *(float *)(v6 + 332) )
        {
          v21 = *(struct PFE **)(v20 + 24);
          if ( v21 )
          {
            v40[0] = *(_QWORD *)v21;
            if ( *(struct PFT **const *)(v40[0] + 128LL) != gpPFTPrivate
              || (v36 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v40), v12 = v39, v14 = v8 + 40, v36) )
            {
              v22 = *(_DWORD *)(v20 + 32);
              if ( v41 )
              {
                if ( (v22 & 0x10010000) == v41 && v42 == *(_DWORD *)(v20 + 48) )
                {
LABEL_54:
                  v26 = a5;
                  v34 = (_DWORD *)(v8 + 56LL * v7);
                  *a3 = v34[18];
                  a4->x = v34[19];
                  a4->y = v34[20];
                  *a5 = v34[21];
                  goto LABEL_55;
                }
              }
              else if ( (v22 & 0x10000) == 0 )
              {
                goto LABEL_54;
              }
            }
          }
          v23 = *(_QWORD *)this;
          v24 = *(_DWORD *)(*(_QWORD *)this + 32LL);
          if ( v19 < v24 )
          {
            memmove((void *)(v14 + 56LL * v7), (const void *)(v14 + 56LL * v19), (unsigned int)(56 * (v24 - v7) - 56));
            v23 = *(_QWORD *)this;
            v14 = v8 + 40;
            v12 = v39;
          }
          --*(_DWORD *)(v23 + 32);
          --v7;
          --v19;
          v20 -= 56LL;
        }
        ++v7;
        ++v19;
        v20 += 56LL;
        if ( v7 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
        {
          v10 = a3;
          v9 = a4;
          goto LABEL_33;
        }
      }
    }
  }
LABEL_34:
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) != 0
    && ((v35 = *(_DWORD *)(*(_QWORD *)a2 + 520LL), (v35 & 1) == 0) || (v35 & 2) != 0) )
  {
    v25 = 64;
  }
  else
  {
    v25 = 0;
  }
  v26 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             v14,
             v25,
             v10,
             v9,
             a5,
             v17);
  v21 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1) != 0 )
      goto LABEL_55;
    if ( v41 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
      {
        v28 = *a3;
        *a3 |= 0x10000u;
        v29 = *(_QWORD *)a2;
        if ( ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v29 + 32) == 1)
          && *(_QWORD *)(v29 + 496)
          && (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
        {
          v30 = *(_BYTE *)(*(_QWORD *)this + 302LL);
          if ( v30 == 6 )
          {
            v31 = v28 | 0x50010000;
            goto LABEL_48;
          }
          if ( v30 != 4 && (v30 == 5 || (gulFontInformation & 0x12) == 0x12) )
          {
            v31 = v28 | 0x10010000;
LABEL_48:
            *a3 = v31;
          }
        }
      }
    }
    if ( !v17 )
    {
      if ( v7 >= 3 )
      {
        v7 = 0;
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      }
      v32 = 56LL * v7;
      *(_QWORD *)(v32 + v8 + 40) = v39;
      *(_QWORD *)(v32 + v8 + 64) = result;
      *(_DWORD *)(v32 + v8 + 72) = *a3;
      *(_DWORD *)(v32 + v8 + 76) = a4->x;
      *(_DWORD *)(v32 + v8 + 80) = a4->y;
      v33 = 14LL * v7;
      *(_DWORD *)(v8 + 4 * v33 + 48) = *(_DWORD *)(v6 + 320);
      *(_DWORD *)(v8 + 4 * v33 + 52) = *(_DWORD *)(v6 + 324);
      *(_DWORD *)(v8 + 4 * v33 + 56) = *(_DWORD *)(v6 + 328);
      *(_DWORD *)(v8 + 4 * v33 + 60) = *(_DWORD *)(v6 + 332);
      *(_DWORD *)(v32 + v8 + 84) = *a5;
      *(_DWORD *)(v32 + v8 + 88) = v42;
      ++*(_DWORD *)(*(_QWORD *)this + 32LL);
    }
LABEL_55:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) != 0 )
      goto LABEL_56;
    v37 = *((_BYTE *)v26 + 3);
    v38 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( v37 )
    {
      if ( v37 != -1 || (v38 & 1) == 0 )
        goto LABEL_56;
    }
    else if ( (v38 & 2) == 0 )
    {
      goto LABEL_56;
    }
    *v26 = *v26 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_56:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 4LL) = *v26 >> 8;
    result = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) &= ~0x10u;
  }
  return result;
}
