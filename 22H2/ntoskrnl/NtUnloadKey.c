/*
 * XREFs of NtUnloadKey @ 0x14066C530
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  return CmUnloadKey(TargetKey, 0LL, 0LL, 0LL);
}
