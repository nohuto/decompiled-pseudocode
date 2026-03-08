/*
 * XREFs of KeAndAffinityEx @ 0x14056CD60
 * Callers:
 *     <none>
 * Callees:
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 */

__int64 __fastcall KeAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  return KiAndAffinityEx(a1, a2, a3, 0x14u);
}
