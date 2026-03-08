/*
 * XREFs of ZwOpenPrivateNamespace @ 0x140414910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPrivateNamespace(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
