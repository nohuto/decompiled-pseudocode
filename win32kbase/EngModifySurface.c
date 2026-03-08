/*
 * XREFs of EngModifySurface @ 0x1C00A3E40
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C018BB00 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z @ 0x1C00A4010 (-dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C00A40A0 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00BC754 (HmgShareLockIgnoreStockBit.c)
 */

BOOL __stdcall EngModifySurface(
        HSURF hsurf,
        HDEV hdev,
        FLONG flHooks,
        FLONG flSurface,
        DHSURF dhsurf,
        PVOID pvScan0,
        LONG lDelta,
        PVOID pvReserved)
{
  __int64 v11; // rbx
  __int64 v12; // rax
  _BOOL8 v13; // r9
  int v14; // r10d
  HDEV v15; // rax
  FLONG v16; // r14d
  BOOL v17; // ecx
  BOOL v18; // edi
  __int16 v19; // ax
  __int16 v20; // dx
  __int16 v21; // ax
  unsigned int v22; // r10d
  int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax

  v11 = 0LL;
  if ( !hdev
    || (v12 = HmgShareLockIgnoreStockBit(hsurf), (v11 = v12) == 0)
    || (v13 = pvReserved == 0LL, (flSurface & 0xFFFFFFF0) != 0) )
  {
    v18 = 0;
    if ( !v11 )
      return v18;
    goto LABEL_22;
  }
  v14 = *(_DWORD *)(v12 + 112);
  if ( (v14 & 0x400000) == 0 && *(_WORD *)(v12 + 100) != 1 )
    LODWORD(v13) = 0;
  v15 = *(HDEV *)(v12 + 48);
  if ( v15 && v15 != hdev )
    LODWORD(v13) = 0;
  v16 = flHooks & 0xFFFFB7FF;
  if ( v14 < 0 && (((_DWORD)hdev[43] & 0x3B5EF) != v16 || ((_DWORD)hdev[10] & 0x400) == 0) )
    LODWORD(v13) = 0;
  if ( pvScan0 && lDelta )
  {
    v18 = 0;
    if ( (v16 & 0x1000) != 0 || (flSurface & 1) == 0 )
      v18 = v13;
    if ( !v18 )
      goto LABEL_22;
    *(_QWORD *)(v11 + 80) = pvScan0;
    *(_DWORD *)(v11 + 88) = lDelta;
    *(_WORD *)(v11 + 100) = 0;
    if ( lDelta <= 0 )
    {
      *(_QWORD *)(v11 + 72) = (char *)pvScan0 + lDelta * (*(_DWORD *)(v11 + 60) - 1);
      *(_WORD *)(v11 + 102) &= ~1u;
    }
    else
    {
      *(_QWORD *)(v11 + 72) = pvScan0;
      *(_WORD *)(v11 + 102) |= 1u;
    }
  }
  else
  {
    v17 = 0;
    if ( (v16 & 0x29) == 0x29 )
      v17 = v13;
    v18 = dhsurf != 0LL && (flSurface & 1) != 0 && v17;
    if ( !v18 )
      goto LABEL_22;
    *(_QWORD *)(v11 + 80) = 0LL;
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_DWORD *)(v11 + 88) = 0;
    if ( *(_WORD *)(v11 + 100) != 1 )
      *(_WORD *)(v11 + 100) = 3;
  }
  v19 = *(_WORD *)(v11 + 102);
  v20 = v19 | 0x20;
  v21 = v19 & 0xFFDF;
  if ( (flSurface & 1) == 0 )
    v20 = v21;
  *(_WORD *)(v11 + 102) = v20;
  if ( (flSurface & 2) != 0 )
    v22 = v14 | 0x200;
  else
    v22 = v14 & 0xFFFFFDFF;
  *(_DWORD *)(v11 + 112) = v22;
  v23 = *(_DWORD *)(v11 + 116);
  if ( (flSurface & 4) != 0 )
    v24 = v23 | 0x100;
  else
    v24 = v23 & 0xFFFFFEFF;
  v25 = v24;
  v26 = v24 | 0x2000;
  v27 = v25 & 0xFFFFDFFF;
  if ( (flSurface & 8) == 0 )
    v26 = v27;
  *(_DWORD *)(v11 + 116) = v26;
  *(_QWORD *)(v11 + 24) = dhsurf;
  *(_QWORD *)(v11 + 136) = 0LL;
  SURFACE::hdev((SURFACE *)v11, hdev);
  SURFACE::dhpdev((SURFACE *)v11, *((struct DHPDEV__ **)hdev + 221));
  *(_DWORD *)(v11 + 112) = v16 | *(_DWORD *)(v11 + 112) & 0xFFFC4A10;
LABEL_22:
  HmgDecrementShareReferenceCountEx((int *)v11, 0LL);
  return v18;
}
