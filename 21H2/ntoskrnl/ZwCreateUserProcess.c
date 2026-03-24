/*
 * XREFs of ZwCreateUserProcess @ 0x1403FBCC0
 * Callers:
 *     RtlpCreateUserProcess @ 0x140A4BDD4 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateUserProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
