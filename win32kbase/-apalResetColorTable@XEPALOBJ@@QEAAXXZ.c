/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00D0240
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006C084 (-vRemoveRefPalettes@@YAXK@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(int **this)
{
  int *v1; // rax
  int *v3; // rcx

  v1 = *this;
  v3 = (int *)*((_QWORD *)*this + 15);
  if ( v3 != v1 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  *((_QWORD *)*this + 14) = *((_QWORD *)*this + 16);
  *((_QWORD *)*this + 15) = *this;
}
