/*
 * XREFs of WmipSystemControl @ 0x14061E8F0
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x14061E914 (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(WmipWmiLibInfo, a1, a2);
}
