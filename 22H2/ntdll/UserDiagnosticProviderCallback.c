/*
 * XREFs of UserDiagnosticProviderCallback @ 0x1800FCED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall UserDiagnosticProviderCallback(__int64 a1, int a2)
{
  char result; // al

  if ( a2 == 1 )
  {
    g_isErrorOriginProviderEnabled = 1;
  }
  else
  {
    result = -(a2 != 0);
    g_isErrorOriginProviderEnabled &= result;
  }
  return result;
}
