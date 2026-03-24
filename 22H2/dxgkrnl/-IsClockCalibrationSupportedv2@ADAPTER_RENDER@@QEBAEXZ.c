/*
 * XREFs of ?IsClockCalibrationSupportedv2@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003EFD8
 * Callers:
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D6980 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     DxgkQueryClockCalibration @ 0x1C0225A30 (DxgkQueryClockCalibration.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsClockCalibrationSupportedv2(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( *(_QWORD *)(v1 + 816) )
    return *(_DWORD *)(v1 + 2328) >= 0x2000;
  return result;
}
