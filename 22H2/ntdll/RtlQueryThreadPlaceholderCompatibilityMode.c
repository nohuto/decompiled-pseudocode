/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x1800808D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlQueryThreadPlaceholderCompatibilityMode()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  if ( v0 )
    return v0->PlaceholderCompatibilityMode;
  else
    return -2;
}
