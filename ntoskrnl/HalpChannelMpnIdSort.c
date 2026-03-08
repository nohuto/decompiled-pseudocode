/*
 * XREFs of HalpChannelMpnIdSort @ 0x140B8F7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpChannelMpnIdSort(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // cx

  v2 = a1[4];
  v3 = a2[4];
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
