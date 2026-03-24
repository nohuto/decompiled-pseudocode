/*
 * XREFs of AuthzBasepSetAccessReasons @ 0x1402FAE80
 * Callers:
 *     AuthzBasepAddAccessTypeList @ 0x1402FAD8C (AuthzBasepAddAccessTypeList.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140373854 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x140374344 (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x1403743A4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1403744CC (SepNormalAccessCheckEx.c)
 *     AuthzBasepUpdateParentTypeList @ 0x1405C1698 (AuthzBasepUpdateParentTypeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepSetAccessReasons(int a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r10
  __int64 result; // rax

  v5 = 0LL;
  result = 1LL;
  if ( a4 )
  {
    while ( (_DWORD)result )
    {
      if ( ((unsigned int)result & a1) != 0 && (a5 || !*(_DWORD *)(a4 + 4 * v5)) )
        *(_DWORD *)(a4 + 4 * v5) = a3 | a2;
      v5 = (unsigned int)(v5 + 1);
      result = (unsigned int)(2 * result);
    }
  }
  return result;
}
