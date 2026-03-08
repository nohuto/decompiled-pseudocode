/*
 * XREFs of ?IsSupportedForCpuClipping@CEllipseGeometry@@UEBA_NPEA_N@Z @ 0x180228450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CEllipseGeometry::IsSupportedForCpuClipping(CEllipseGeometry *this, bool *a2)
{
  if ( a2 )
    *a2 = 0;
  return CCommonRegistryData::m_flCpuClipFlatteningTolerance > 0.0;
}
