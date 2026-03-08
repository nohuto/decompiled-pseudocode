/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C02A1C30
 * Callers:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00B7C2C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0150304 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0122194 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0122298 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0150304 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, int a3)
{
  struct _QUICKLOOKUP *v5; // r14
  unsigned int v6; // edi
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // si
  __int64 *v9; // rbx
  struct _FD_GLYPHSET *v11; // rax
  struct _FD_GLYPHSET *v12; // r13
  WCRUN *awcrun; // rdx
  ULONG cRuns; // eax
  __int64 v15; // r10
  int wcLow; // r9d
  int cGlyphs; // r11d
  unsigned __int16 v18; // r8
  void *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // r10d
  WCRUN *v23; // r11
  USHORT v24; // r14
  int v25; // r9d
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // r10
  int v29; // esi
  __int64 v30; // rbp
  int v31; // edx
  __int64 v32; // r9
  unsigned int v33; // r8d
  unsigned int v34; // esi
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-48h]
  int v39; // [rsp+78h] [rbp+10h]
  __int64 *v40; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1;
  SGDGetSessionState(a1);
  v6 = 0;
  v40 = (__int64 *)a2;
  v7 = 0;
  v8 = -1;
  if ( !a2 )
    return 0LL;
  if ( !v5 )
    v5 = PFEOBJ::pql((struct PFE **)&v40);
  v9 = (__int64 *)((char *)v5 + 8);
  if ( !a3 && *v9 )
    return 1LL;
  v11 = PFEOBJ::pfdg((PFEOBJ *)&v40);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  awcrun = v11->awcrun;
  cRuns = v11->cRuns;
  if ( cRuns )
  {
    v15 = cRuns;
    do
    {
      wcLow = awcrun->wcLow;
      cGlyphs = awcrun->cGlyphs;
      v18 = wcLow;
      if ( v8 <= (unsigned __int16)wcLow )
        v18 = v8;
      if ( v7 < (unsigned int)(wcLow + cGlyphs) )
        v7 = wcLow + cGlyphs - 1;
      ++awcrun;
      v8 = v18;
      --v15;
    }
    while ( v15 );
  }
  *(_WORD *)v5 = v8;
  *((_WORD *)v5 + 1) = v7;
  if ( a3 )
  {
    v19 = (void *)*((_QWORD *)v5 + 1);
    if ( v19 )
      memset_0(v19, 0, 0x2000uLL);
    else
      *((_QWORD *)v5 + 1) = Win32AllocPoolZInit(0x2000LL, 1802400071LL);
    v8 = 0;
  }
  else
  {
    v20 = 4 * ((v7 - v8 + 32) / 32);
    if ( v20 )
      v21 = Win32AllocPoolZInit(v20, 1802400071LL);
    else
      v21 = 0LL;
    *v9 = v21;
  }
  if ( !*v9 )
  {
    PFEOBJ::vFreepfdg(&v40);
    return 0LL;
  }
  if ( v12->cRuns )
  {
    v22 = v8;
    v23 = v12->awcrun;
    v39 = v8;
    while ( 1 )
    {
      v38 = v6;
      v24 = v23[v38].cGlyphs;
      v25 = v23[v38].wcLow - v22;
      v26 = (unsigned int)(v25 / 32);
      v27 = v24 - v22;
      v28 = *v9;
      v29 = *(_DWORD *)(*v9 + 4 * v26);
      v30 = (unsigned int)((v23[v38].wcLow + v27 - 1) / 32);
      v31 = v25 % 32;
      if ( (_DWORD)v26 != (_DWORD)v30 )
        break;
      *(_DWORD *)(v28 + 4 * v26) = v29 | ((unsigned int)(-1 << (32 - v24)) >> v31);
      v22 = v39;
LABEL_42:
      if ( ++v6 >= v12->cRuns )
        goto LABEL_43;
    }
    v32 = (unsigned int)(v26 + 1);
    v33 = v30 - v32;
    *(_DWORD *)(v28 + 4 * v26) = v29 | (0xFFFFFFFF >> v31);
    v34 = v26 + 1;
    if ( (unsigned int)v32 < (unsigned int)v30 )
    {
      if ( v33 < 4
        || *v9 + 4 * v32 <= (unsigned __int64)v9
        && *v9 + 4 * (unsigned __int64)(unsigned int)(v30 - 1) >= (unsigned __int64)v9 )
      {
        goto LABEL_39;
      }
      v35 = v30 - (v33 & 3);
      do
        v34 += 4;
      while ( v34 < v35 );
      memset_0((void *)(*v9 + 4 * v32), -1, 16 * ((unsigned __int64)(v35 - (unsigned int)v32 + 3) >> 2));
      v23 = v12->awcrun;
    }
    if ( v34 >= (unsigned int)v30 )
    {
LABEL_41:
      v22 = v39;
      *(_DWORD *)(*v9 + 4 * v30) |= -1 << (31 - (v23[v38].cGlyphs - v39 - 1 + v23[v38].wcLow) % 32);
      goto LABEL_42;
    }
LABEL_39:
    v36 = (unsigned int)v30 - v34;
    v37 = 4LL * v34;
    do
    {
      *(_DWORD *)(v37 + *v9) = -1;
      v37 += 4LL;
      --v36;
    }
    while ( v36 );
    goto LABEL_41;
  }
LABEL_43:
  PFEOBJ::vFreepfdg(&v40);
  return 1LL;
}
