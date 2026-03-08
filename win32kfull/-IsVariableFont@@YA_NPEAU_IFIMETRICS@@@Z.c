/*
 * XREFs of ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C0115CAC
 * Callers:
 *     cjCopyFontDataW @ 0x1C0004330 (cjCopyFontDataW.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00BA744 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C0112704 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C0115C50 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall IsVariableFont(struct _IFIMETRICS *a1)
{
  __int64 dpwszStyleName; // rdx
  char result; // al
  int v3; // ecx

  if ( (a1->flInfo & 0x4000001) == 0 )
    return 0;
  if ( a1->cjIfiExtra <= 0xC )
    return 0;
  dpwszStyleName = (unsigned int)a1[1].dpwszStyleName;
  result = 0;
  if ( !(_DWORD)dpwszStyleName )
    return 0;
  if ( *(ULONG *)((char *)&a1->cjIfiExtra + dpwszStyleName) )
  {
    v3 = *(ULONG *)((char *)&a1->cjThis + dpwszStyleName);
    if ( v3 == 134248052 || v3 == 134248035 )
      return 1;
  }
  return result;
}
