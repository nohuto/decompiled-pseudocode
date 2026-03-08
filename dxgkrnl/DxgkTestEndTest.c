/*
 * XREFs of DxgkTestEndTest @ 0x1C0358C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkTestEndTest(__int64 a1)
{
  __int64 result; // rax

  qword_1C013B400 = 0LL;
  result = ExReleasePushLockExclusiveEx(&qword_1C013C070, 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
