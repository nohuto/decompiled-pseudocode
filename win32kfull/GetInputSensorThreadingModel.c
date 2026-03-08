/*
 * XREFs of GetInputSensorThreadingModel @ 0x1C00F56D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputSensorThreadingModel(int a1)
{
  int v1; // eax

  v1 = 0;
  if ( !a1 )
    return 1LL;
  LOBYTE(v1) = a1 != 1;
  return (unsigned int)(v1 + 1);
}
