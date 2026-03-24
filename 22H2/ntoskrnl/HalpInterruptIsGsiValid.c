/*
 * XREFs of HalpInterruptIsGsiValid @ 0x1408646E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403789CC (HalpInterruptGsiToLine.c)
 */

bool __fastcall HalpInterruptIsGsiValid(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return (int)HalpInterruptGsiToLine(a1, &v2) >= 0;
}
