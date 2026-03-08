/*
 * XREFs of KeAndAffinityEx2 @ 0x14056CD80
 * Callers:
 *     <none>
 * Callees:
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 */

__int64 __fastcall KeAndAffinityEx2(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return KiAndAffinityEx(a1, a2, (_BYTE *)a3, v3);
}
