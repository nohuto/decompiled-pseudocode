/*
 * XREFs of KiConnectSwInterrupt @ 0x140B926B4
 * Callers:
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140B6F5B0 (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(struct _MDL *a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
