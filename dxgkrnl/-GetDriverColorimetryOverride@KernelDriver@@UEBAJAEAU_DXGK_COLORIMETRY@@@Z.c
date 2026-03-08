/*
 * XREFs of ?GetDriverColorimetryOverride@KernelDriver@@UEBAJAEAU_DXGK_COLORIMETRY@@@Z @ 0x1C0214790
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetMonitorColorimetryOverride @ 0x1C02147C4 (DpiGetMonitorColorimetryOverride.c)
 */

__int64 __fastcall KernelDriver::GetDriverColorimetryOverride(KernelDriver *this, struct _DXGK_COLORIMETRY *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return DpiGetMonitorColorimetryOverride(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 216LL), *((unsigned int *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
