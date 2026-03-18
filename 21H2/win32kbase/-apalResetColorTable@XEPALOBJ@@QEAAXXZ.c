/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0078FC8
 * Callers:
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00181D4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(XEPALOBJ *this)
{
  __int64 v1; // rdx
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(unsigned int **)(*(_QWORD *)this + 120LL);
  if ( v3 != (unsigned int *)v1 )
  {
    HmgDecrementShareReferenceCountEx(v3, 0LL);
    v1 = *(_QWORD *)this;
  }
  *(_QWORD *)(v1 + 112) = *(_QWORD *)(v1 + 128);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = *(_QWORD *)this;
}
