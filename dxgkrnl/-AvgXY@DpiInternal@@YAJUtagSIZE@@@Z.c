/*
 * XREFs of ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C00020E8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::AvgXY(DpiInternal *this, struct tagSIZE a2)
{
  return (unsigned int)(((int)this + HIDWORD(this)) / 2);
}
