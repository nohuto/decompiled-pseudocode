/*
 * XREFs of CreateSharedSystemVisualBitmapObject @ 0x1C000DDF0
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x1C00A19E4 (CreateSharedResourceObject.c)
 */

__int64 __fastcall CreateSharedSystemVisualBitmapObject(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = CreateSharedResourceObject(197LL, &v3);
  *a1 = v3;
  return result;
}
