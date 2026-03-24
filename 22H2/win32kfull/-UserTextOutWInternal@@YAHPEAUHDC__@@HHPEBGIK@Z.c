/*
 * XREFs of ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C025E5F0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00AAC5C (GreExtTextOutWInternal.c)
 */

__int64 __fastcall UserTextOutWInternal(HDC a1, LONG a2, LONG a3, unsigned __int16 *a4, unsigned int a5)
{
  return GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, a5, 0LL, 0LL, 0);
}
