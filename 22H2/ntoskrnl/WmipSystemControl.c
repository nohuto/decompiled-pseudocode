/*
 * XREFs of WmipSystemControl @ 0x1406A25D0
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x1406A25F4 (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(WmipWmiLibInfo, a1, a2);
}
