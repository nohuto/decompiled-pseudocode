/*
 * XREFs of HsaFlGetPermissions @ 0x14052F4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaFlGetPermissions(_DWORD *a1)
{
  return *a1 & 2 | 1u;
}
