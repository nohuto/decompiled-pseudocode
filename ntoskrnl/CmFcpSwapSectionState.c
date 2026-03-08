/*
 * XREFs of CmFcpSwapSectionState @ 0x14079C17C
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpSwapSectionState(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rdx

  v3 = *a1;
  *a1 = *a2;
  v4 = a2[1];
  *a2 = v3;
  v5 = a1[1];
  a1[1] = v4;
  result = a2[2];
  a2[1] = v5;
  v7 = a1[2];
  a1[2] = result;
  a2[2] = v7;
  return result;
}
