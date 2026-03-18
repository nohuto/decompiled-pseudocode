/*
 * XREFs of KiConnectSwInterrupt @ 0x140B968C4
 * Callers:
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140B7391C (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(struct _MDL *a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
