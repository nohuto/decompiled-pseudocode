/*
 * XREFs of NtUnloadKey @ 0x14066C530
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKey(__int64 a1)
{
  return CmUnloadKey(a1, 0LL, 0LL, 0LL);
}
