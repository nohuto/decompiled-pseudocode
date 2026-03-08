/*
 * XREFs of XLATEOBJ_cGetPalette @ 0x1C02DDE00
 * Callers:
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02D01A0 (NtGdiXLATEOBJ_cGetPalette.c)
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C007CAB0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall XLATEOBJ_cGetPalette(XLATEOBJ *pxlo, ULONG iPal, ULONG cPal, ULONG *pPal)
{
  ULONG v4; // r10d
  ULONG *v5; // rax
  ULONG *pulXlate; // rdx
  ULONG *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !pxlo )
    return v4;
  if ( iPal == 4 )
  {
    pulXlate = pxlo[1].pulXlate;
  }
  else
  {
    if ( iPal != 5 )
    {
      if ( iPal == 1 )
        v5 = pxlo[1].pulXlate;
      else
        v5 = *(ULONG **)&pxlo[2].iUniq;
      v8 = v5;
      if ( v5 )
        return XEPALOBJ::ulGetEntries((XEPALOBJ *)&v8, 0, cPal, (struct tagPALETTEENTRY *)pPal, 1);
      return v4;
    }
    pulXlate = *(ULONG **)&pxlo[2].iUniq;
  }
  if ( pulXlate && !pulXlate[7] && cPal == 3 )
  {
    v4 = 3;
    *pPal = **((_DWORD **)pulXlate + 14);
    pPal[1] = *(_DWORD *)(*((_QWORD *)pulXlate + 14) + 4LL);
    pPal[2] = *(_DWORD *)(*((_QWORD *)pulXlate + 14) + 8LL);
  }
  return v4;
}
