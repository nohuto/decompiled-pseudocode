/*
 * XREFs of IvtSlGetPermissions @ 0x14052F560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtSlGetPermissions(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *a1;
  v2 = *a1 & 1;
  result = (unsigned int)v2 | 2;
  if ( (v1 & 2) == 0 )
    return (unsigned int)v2;
  return result;
}
