/*
 * XREFs of ?GetDisplayDriverCapsExtension@MONITOR_MGR@@UEBA?AU_DXGK_DISPLAY_DRIVERCAPS_EXTENSION@@XZ @ 0x1C01E04C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall MONITOR_MGR::GetDisplayDriverCapsExtension(MONITOR_MGR *this, _DWORD *a2)
{
  _DWORD *result; // rax

  result = a2;
  *a2 = *(_DWORD *)(*((_QWORD *)this + 3) + 24LL);
  return result;
}
