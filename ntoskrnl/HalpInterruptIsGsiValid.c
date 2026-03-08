/*
 * XREFs of HalpInterruptIsGsiValid @ 0x140930530
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 */

bool __fastcall HalpInterruptIsGsiValid(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return (int)HalpInterruptGsiToLine(a1, &v2) >= 0;
}
