/*
 * XREFs of UmfdDispatchEscape @ 0x1C0010B54
 * Callers:
 *     NtGdiExtEscape @ 0x1C00108F0 (NtGdiExtEscape.c)
 * Callees:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0010E28 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0011304 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00115F0 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C0011710 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00E7C7C (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F77E8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C011B7B8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0121F44 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C012D464 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C015EF14 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngFntCacheFault @ 0x1C0286140 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D18C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D2C0 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D38C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D48C (-UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02DC6E8 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 */

void __fastcall UmfdDispatchEscape(struct _PATHOBJ *a1)
{
  struct _PATHOBJ *v2; // rdx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int (*v13)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int); // rcx
  int v14; // eax
  struct UmfdTls *v15; // rax
  PATHOBJ *v16; // rcx
  struct UmfdTls *v17; // rax
  PATHOBJ *v18; // rcx
  ULONG v19; // ecx
  ULONG ulFastCheckSum[4]; // [rsp+30h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+40h] [rbp-28h]
  __int128 v22; // [rsp+50h] [rbp-18h]

  *(_OWORD *)ulFastCheckSum = 0LL;
  *(_OWORD *)&ptfx[0].x = 0LL;
  v22 = 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = a1 + 6;
  if ( (unsigned __int64)&a1[6] > MmUserProbeAddress || v2 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)ulFastCheckSum = *(_OWORD *)&a1->fl;
  *(_OWORD *)&ptfx[0].x = *(_OWORD *)&a1[2].fl;
  v22 = *(_OWORD *)&a1[4].fl;
  v3 = ulFastCheckSum[0];
  if ( (int)ulFastCheckSum[0] > 10 )
  {
    switch ( ulFastCheckSum[0] )
    {
      case 0xBu:
        UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_12;
      case 0xCu:
        UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_12;
      case 0xDu:
        UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_12;
      case 0xEu:
        UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_12;
      case 0xFu:
        UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_12;
      case 0x10u:
        UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_12;
    }
    if ( ulFastCheckSum[0] != 17 )
    {
      if ( ulFastCheckSum[0] == 18 )
      {
        UmfdHostLifeTimeManager::OnHostReady();
      }
      else if ( ulFastCheckSum[0] == 19 )
      {
        UmfdHostLifeTimeManager::UninitializeThread();
      }
      goto LABEL_13;
    }
    v19 = (gbJpn98FixPitch != 0) | (*(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? 2 : 0);
    goto LABEL_62;
  }
  if ( ulFastCheckSum[0] == 10 )
  {
    UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
    goto LABEL_12;
  }
  if ( (int)ulFastCheckSum[0] > 5 )
  {
    if ( ulFastCheckSum[0] == 6 )
    {
      v13 = PATHOBJ_bPolyBezierTo;
LABEL_38:
      v14 = UmfdEscPATHOBJ_bCommonTo(v13, v2, *(struct _POINTFIX **)ptfx, ptfx[1].x);
LABEL_39:
      ulFastCheckSum[2] = v14;
      goto LABEL_13;
    }
    if ( ulFastCheckSum[0] == 7 )
    {
      v13 = PATHOBJ_bPolyLineTo;
      goto LABEL_38;
    }
    if ( ulFastCheckSum[0] != 8 )
    {
      EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
      goto LABEL_13;
    }
    v19 = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                             *(_QWORD *)&ptfx[1],
                             (unsigned int)ptfx[0].x,
                             ulFastCheckSum[3],
                             ulFastCheckSum[2]) != 0;
LABEL_62:
    ulFastCheckSum[2] = v19;
    goto LABEL_13;
  }
  switch ( ulFastCheckSum[0] )
  {
    case 5u:
      v17 = UmfdTls::EnsureTls();
      if ( v17 )
      {
        v18 = (PATHOBJ *)*((_QWORD *)v17 + 6);
        if ( v18 )
        {
          v14 = PATHOBJ_bMoveTo(v18, ptfx[0]);
          goto LABEL_39;
        }
      }
LABEL_65:
      ulFastCheckSum[2] = 0;
      goto LABEL_13;
    case 0u:
      UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
LABEL_12:
      v3 = ulFastCheckSum[0];
      goto LABEL_13;
    case 1u:
      UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_12;
  }
  if ( ulFastCheckSum[0] != 2 )
  {
    if ( ulFastCheckSum[0] == 3 )
    {
      UmfdEscFONTOBJ_pifi((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_12;
    }
    if ( ulFastCheckSum[0] == 4 )
    {
      v15 = UmfdTls::EnsureTls();
      if ( v15 )
      {
        v16 = (PATHOBJ *)*((_QWORD *)v15 + 6);
        if ( v16 )
        {
          v14 = PATHOBJ_bCloseFigure(v16);
          goto LABEL_39;
        }
      }
      goto LABEL_65;
    }
  }
LABEL_13:
  if ( v3 > 8 )
  {
    v12 = v3 - 10;
    if ( !v12 )
      goto LABEL_16;
    v9 = v12 - 2;
    if ( !v9 )
      goto LABEL_16;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_16;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_16;
    v8 = v11 - 1;
    if ( v8 )
      goto LABEL_27;
LABEL_31:
    ProbeForWrite(&a1[1], 8uLL, 8u);
    a1[1] = *(struct _PATHOBJ *)&ulFastCheckSum[2];
    return;
  }
  if ( v3 == 8 )
    goto LABEL_16;
  if ( !v3 )
    goto LABEL_16;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_16;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_31;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_31;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_16;
LABEL_27:
  if ( (unsigned int)(v8 - 1) <= 1 )
  {
LABEL_16:
    ProbeForWrite(&a1[1], 4uLL, 8u);
    a1[1].fl = ulFastCheckSum[2];
  }
}
