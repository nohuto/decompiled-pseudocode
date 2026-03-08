/*
 * XREFs of KiAbThreadRemoveBoosts @ 0x140262A80
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x1402D99E0 (KiAbThreadRemoveBoostsSlow.c)
 */

__int64 __fastcall KiAbThreadRemoveBoosts(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
    return KiAbThreadRemoveBoostsSlow(a1);
  return result;
}
