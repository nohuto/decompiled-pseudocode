/*
 * XREFs of NtUnloadKeyEx @ 0x14066C5B0
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  char v2; // r8

  v2 = 1;
  return CmUnloadKey(TargetKey, 0LL, v2, Event);
}
