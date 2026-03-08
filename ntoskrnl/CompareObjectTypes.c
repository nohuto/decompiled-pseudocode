/*
 * XREFs of CompareObjectTypes @ 0x14066EE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CompareObjectTypes(_DWORD *a1, _DWORD *a2)
{
  return (__PAIR64__(a1[5] > a2[5], a1[5]) - (unsigned int)a2[5]) >> 32;
}
