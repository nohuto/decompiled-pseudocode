/*
 * XREFs of IopEnumerateEnvironmentVariablesSysEnv @ 0x14094D850
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueSystemEnvironmentRequest @ 0x14094E098 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesSysEnv(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        PVOID Context,
        ULONG *a6)
{
  __int64 result; // rax
  ULONG *v7; // rbx
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  bool InputBuffer; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(v8[0]) = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  v7 = a6;
  InputBuffer = a3 == 2;
  result = IopIssueSystemEnvironmentRequest(0x52000Cu, &InputBuffer, 1u, Context, *a6, (__int64)v8);
  if ( (_DWORD)result == -1073741789 )
    *v7 = v8[0];
  return result;
}
