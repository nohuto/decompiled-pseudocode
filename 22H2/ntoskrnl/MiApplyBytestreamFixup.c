/*
 * XREFs of MiApplyBytestreamFixup @ 0x1402FA184
 * Callers:
 *     MiSwitchBaseAddress @ 0x14066AF78 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
