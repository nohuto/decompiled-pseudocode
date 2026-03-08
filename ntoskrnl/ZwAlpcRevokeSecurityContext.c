/*
 * XREFs of ZwAlpcRevokeSecurityContext @ 0x140413470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcRevokeSecurityContext(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
