/*
 * XREFs of CmGetCallbackVersion @ 0x140A0C540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CmGetCallbackVersion(PULONG Major, PULONG Minor)
{
  if ( Major )
    *Major = 1;
  if ( Minor )
    *Minor = 1;
}
