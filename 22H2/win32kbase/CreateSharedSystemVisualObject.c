/*
 * XREFs of CreateSharedSystemVisualObject @ 0x1C0092630
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x1C0092D24 (CreateSharedResourceObject.c)
 */

__int64 __fastcall CreateSharedSystemVisualObject(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = CreateSharedResourceObject(196LL, &v3);
  *a1 = v3;
  return result;
}
