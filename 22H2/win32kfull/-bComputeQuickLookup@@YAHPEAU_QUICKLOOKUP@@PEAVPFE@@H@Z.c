/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00FEBD4
 * Callers:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C006407C (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00E67D4 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00E6908 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0297780 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C006407C (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C009EC80 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C009EDA0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, int a3)
{
  ULONG v3; // ebx
  struct _QUICKLOOKUP *v5; // r14
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // di
  struct _FD_GLYPHSET *v8; // rax
  struct _FD_GLYPHSET *v9; // r15
  ULONG cRuns; // eax
  WCRUN *awcrun; // rdx
  __int64 v12; // r10
  int wcLow; // r9d
  unsigned __int16 v14; // r8
  int cGlyphs; // edi
  void **v16; // r14
  int v17; // r8d
  USHORT v18; // bp
  __int64 v19; // r12
  int v20; // r10d
  int v21; // eax
  _DWORD *v22; // r8
  unsigned int v23; // eax
  int v24; // r11d
  __int64 v25; // r9
  char v27; // cl
  __int64 v28; // r10
  unsigned int v29; // edi
  unsigned int v30; // r8d
  unsigned int v31; // eax
  _DWORD *v32; // rdi
  unsigned __int64 i; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+78h] [rbp+10h]
  __int64 *v38; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v38 = (__int64 *)a2;
  v5 = a1;
  v6 = 0;
  v7 = -1;
  if ( a2 )
  {
    if ( !a1 )
      v5 = PFEOBJ::pql((struct PFE **)&v38);
    if ( !a3 && *((_QWORD *)v5 + 1) )
    {
      return 1;
    }
    else
    {
      v8 = PFEOBJ::pfdg(&v38);
      v9 = v8;
      if ( v8 )
      {
        cRuns = v8->cRuns;
        if ( cRuns )
        {
          awcrun = v9->awcrun;
          v12 = cRuns;
          do
          {
            wcLow = awcrun->wcLow;
            v14 = wcLow;
            if ( v7 <= (unsigned __int16)wcLow )
              v14 = v7;
            cGlyphs = awcrun->cGlyphs;
            if ( v6 < (unsigned int)(wcLow + cGlyphs) )
              v6 = wcLow + cGlyphs - 1;
            ++awcrun;
            v7 = v14;
            --v12;
          }
          while ( v12 );
        }
        *(_WORD *)v5 = v7;
        *((_WORD *)v5 + 1) = v6;
        v16 = (void **)((char *)v5 + 8);
        if ( a3 )
        {
          if ( *v16 )
            memset(*v16, 0, 0x2000uLL);
          else
            *v16 = PALLOCMEM2(0x2000uLL, 1802400071LL, 1);
          v7 = 0;
        }
        else
        {
          *v16 = PALLOCMEM2((unsigned int)(4 * ((v6 - v7 + 32) / 32)), 1802400071LL, 1);
        }
        if ( *v16 )
        {
          if ( v9->cRuns )
          {
            v17 = v7;
            v37 = v7;
            do
            {
              v36 = v3;
              v18 = v9->awcrun[v36].cGlyphs;
              v19 = (unsigned int)((v9->awcrun[v36].wcLow - v17) / 32);
              v20 = (v9->awcrun[v36].wcLow - v17) % 32;
              v21 = v18 - v17;
              v22 = *v16;
              v23 = (v9->awcrun[v36].wcLow - 1 + v21) / 32;
              v24 = *((_DWORD *)*v16 + v19);
              v25 = v23;
              if ( (_DWORD)v19 == v23 )
              {
                v22[v19] = v24 | ((unsigned int)(-1 << (32 - v18)) >> v20);
              }
              else
              {
                v27 = v20;
                v28 = (unsigned int)(v19 + 1);
                v29 = v23 - v28;
                v22[v19] = v24 | (0xFFFFFFFF >> v27);
                v30 = v19 + 1;
                if ( (unsigned int)v28 < v23
                  && v29 >= 4
                  && ((char *)*v16 + 4 * v28 > (char *)v16 || (char *)*v16 + 4 * v23 - 4 < (char *)v16) )
                {
                  v31 = v23 - (v29 & 3);
                  do
                    v30 += 4;
                  while ( v30 < v31 );
                  v32 = (char *)*v16 + 4 * v28;
                  for ( i = (16 * ((unsigned __int64)(v31 - (unsigned int)v28 + 3) >> 2)) >> 2; i; --i )
                    *v32++ = -1;
                }
                if ( v30 < (unsigned int)v25 )
                {
                  v34 = 4LL * v30;
                  v35 = (unsigned int)v25 - v30;
                  do
                  {
                    *(_DWORD *)((char *)*v16 + v34) = -1;
                    v34 += 4LL;
                    --v35;
                  }
                  while ( v35 );
                }
                *((_DWORD *)*v16 + v25) |= -1 << (31 - (v9->awcrun[v36].wcLow - v37 - 1 + v9->awcrun[v36].cGlyphs) % 32);
              }
              v17 = v37;
              ++v3;
            }
            while ( v3 < v9->cRuns );
          }
          PFEOBJ::vFreepfdg(&v38);
          return 1;
        }
        else
        {
          PFEOBJ::vFreepfdg(&v38);
        }
      }
    }
  }
  return v3;
}
