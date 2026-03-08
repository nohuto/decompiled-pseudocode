/*
 * XREFs of ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C024FE90
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutW @ 0x1C0113604 (GreExtTextOutW.c)
 */

__int64 __fastcall UserTextOutWInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  return GreExtTextOutW(a1, a2, a3, 0, 0LL, (__int64)a4, a5);
}
