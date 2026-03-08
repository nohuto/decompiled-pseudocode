/*
 * XREFs of KeInitializeEnumerationContextFromGroup @ 0x140457F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeEnumerationContextFromGroup(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a2;
  result = *((unsigned __int16 *)a2 + 4);
  *(_QWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 8) = v2;
  return result;
}
