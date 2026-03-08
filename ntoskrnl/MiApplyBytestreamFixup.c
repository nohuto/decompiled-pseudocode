/*
 * XREFs of MiApplyBytestreamFixup @ 0x140302E3C
 * Callers:
 *     MiSwitchBaseAddress @ 0x14069F7C4 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
