/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914
 * Callers:
 *     CLIPOBJ_bEnum @ 0x1C0005BE0 (CLIPOBJ_bEnum.c)
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C000710C (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0007458 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0009148 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     EngAlphaBlend @ 0x1C002D3E0 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C002FC4C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0037530 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049AEC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0085DF4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C01576DC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028C190 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C028F38C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02B0D80 (NtGdiCLIPOBJ_bEnum.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C4920 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C4C24 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  int *v4; // r14
  unsigned int v7; // ebx
  int *v8; // rdx
  int v9; // ebp
  int v10; // r12d
  int i; // edi
  __int64 v12; // rcx
  _DWORD *v13; // r8
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // esi
  _DWORD *v21; // rdx
  int v22; // r8d
  int v23; // esi
  _DWORD *v24; // rdi
  int j; // edx
  __int64 v26; // rcx
  int v27; // r8d
  unsigned int v29; // r12d
  unsigned int v30; // r8d
  int v31; // edi
  int v32; // esi
  unsigned int v33; // ebx
  int v34; // ecx
  __int64 v35; // rax
  int v36; // [rsp+30h] [rbp+10h]

  v4 = (int *)(a3 + 4);
  if ( a2 >= 0x14 )
  {
    v7 = a2 - 4;
    if ( a4 )
      *a4 = 4;
    *(_DWORD *)a3 = 0;
    v8 = (int *)*((_QWORD *)this + 10);
    if ( !*((_DWORD *)this + 32) )
    {
      v9 = v8[1];
      v10 = v8[2];
      for ( i = *((_DWORD *)this + 22); i; i = *((_DWORD *)this + 22) )
      {
        v12 = *((unsigned int *)this + 24);
        v13 = (_DWORD *)*((_QWORD *)this + 10);
        if ( (_DWORD)v12 == *((_DWORD *)this + 26) )
        {
          v20 = *((_DWORD *)this + 27);
          if ( v20 >= 2 )
          {
            if ( v13[1] <= *((_DWORD *)this + 17) )
            {
LABEL_36:
              *((_DWORD *)this + 22) = 0;
              return 0LL;
            }
            v21 = (_DWORD *)((char *)v13 - (unsigned int)(4 * *(v13 - 1) + 16));
          }
          else
          {
            if ( v13[2] >= *((_DWORD *)this + 19) )
              goto LABEL_36;
            v21 = (_DWORD *)((char *)v13 + (unsigned int)(4 * *v13 + 16));
          }
          *((_QWORD *)this + 10) = v21;
          *((_DWORD *)this + 22) = i - 1;
          v9 = v21[1];
          v10 = v21[2];
          if ( (v20 & 1) != 0 )
          {
            v26 = (unsigned int)(*v21 - 2);
            *((_DWORD *)this + 26) = -2;
            *((_DWORD *)this + 24) = v26;
            if ( (_DWORD)v26 != -2 )
            {
              v27 = *((_DWORD *)this + 18);
              do
              {
                if ( v21[v26 + 3] < v27 )
                  break;
                v26 = (unsigned int)(v26 - 2);
                *((_DWORD *)this + 24) = v26;
              }
              while ( (_DWORD)v26 != -2 );
            }
          }
          else
          {
            *((_DWORD *)this + 24) = 0;
            v22 = *v21;
            *((_DWORD *)this + 26) = *v21;
            if ( v22 )
            {
              v23 = *((_DWORD *)this + 16);
              v24 = v21;
              for ( j = 0; j != v22; *((_DWORD *)this + 24) = j )
              {
                if ( v24[j + 1 + 3] > v23 )
                  break;
                j += 2;
              }
            }
          }
        }
        else
        {
          v14 = v13[v12 + 3];
          v15 = v13[(unsigned int)(v12 + 1) + 3];
          v16 = *((_DWORD *)this + 16);
          if ( v16 <= v14 )
            v16 = v14;
          *v4 = v16;
          v17 = *((_DWORD *)this + 18);
          if ( v17 >= v15 )
            v17 = v15;
          v4[2] = v17;
          if ( v16 >= v17 )
          {
            *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
          }
          else
          {
            v18 = *((_DWORD *)this + 17);
            if ( v18 <= v9 )
              v18 = v9;
            v4[1] = v18;
            v19 = *((_DWORD *)this + 19);
            if ( v19 >= v10 )
              v19 = v10;
            v7 -= 16;
            v4[3] = v19;
            v4 += 4;
            *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
            if ( a4 )
              *a4 += 16;
            ++*(_DWORD *)a3;
            if ( v7 < 0x10 )
              return 1LL;
          }
        }
      }
      return 0LL;
    }
    v29 = *((_DWORD *)this + 27);
    v30 = *((_DWORD *)this + 24);
    v31 = *((_DWORD *)this + 26);
    v32 = *((_DWORD *)this + 22);
    v33 = v7 >> 4;
    v36 = *((_DWORD *)this + 25);
    while ( 1 )
    {
      if ( !v32 )
        return 0LL;
      if ( v30 == v31 )
      {
        if ( v29 >= 2 )
          v8 = (int *)((char *)v8 - (unsigned int)(4 * *(v8 - 1) + 16));
        else
          v8 = (int *)((char *)v8 + (unsigned int)(4 * *v8 + 16));
        *((_DWORD *)this + 22) = v32 - 1;
        if ( !*v8 )
          goto LABEL_57;
        if ( (v29 & 1) != 0 )
        {
          v30 = *v8 - 2;
          v31 = -2;
        }
        else
        {
          v30 = 0;
          v31 = *v8;
        }
      }
      --v33;
      v34 = v8[v30 + 3];
      v35 = v30 + 1;
      v30 += v36;
      *v4 = v34;
      v4[2] = v8[v35 + 3];
      v4[1] = v8[1];
      v4[3] = v8[2];
      v4 += 4;
      ++*(_DWORD *)a3;
      if ( a4 )
        *a4 += 16;
      if ( !v33 )
      {
        *((_DWORD *)this + 24) = v30;
        *((_DWORD *)this + 26) = v31;
        *((_QWORD *)this + 10) = v8;
        return 1LL;
      }
LABEL_57:
      v32 = *((_DWORD *)this + 22);
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
