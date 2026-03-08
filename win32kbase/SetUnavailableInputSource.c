/*
 * XREFs of SetUnavailableInputSource @ 0x1C00A59D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetUnavailableInputSource(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
}
