/*
 * XREFs of NVMeHwTracingEnabled @ 0x1C0003180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NVMeHwTracingEnabled(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 21) = a2;
}
