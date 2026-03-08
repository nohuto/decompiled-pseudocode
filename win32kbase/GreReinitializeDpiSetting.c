/*
 * XREFs of GreReinitializeDpiSetting @ 0x1C0195250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReinitializeDpiSetting(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = SGDGetSessionState(a1);
  v2 = *(_QWORD *)(result + 24);
  *(_DWORD *)(v2 + 1280) = 0;
  *(_DWORD *)(v2 + 1288) = 0;
  return result;
}
