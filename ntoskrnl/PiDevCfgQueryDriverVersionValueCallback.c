/*
 * XREFs of PiDevCfgQueryDriverVersionValueCallback @ 0x14095C270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgQueryDriverVersionValueCallback(__int64 a1, int a2, _QWORD *a3, int a4, int a5, _QWORD *a6)
{
  if ( a2 == 3 && a4 == 8 && a3 )
    *a6 = *a3;
  return 0LL;
}
