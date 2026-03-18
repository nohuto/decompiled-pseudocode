/*
 * XREFs of CreateSharedSystemVisualBitmapObject @ 0x1C0210D30
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x1C0058874 (CreateSharedResourceObject.c)
 */

__int64 __fastcall CreateSharedSystemVisualBitmapObject(_QWORD *a1)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = CreateSharedResourceObject(0xC4u, 0x80000000, &v3);
  *a1 = v3;
  return result;
}
