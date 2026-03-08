/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x1C004AC40
 * Callers:
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 * Callees:
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C004AAB0 (AMLIGetNamespaceOverrideObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  Object = AMLIGetNamespaceOverrideObject(a2, &v9);
  if ( Object >= 0 )
  {
    v6 = v9;
    Object = ReadObject(a1, v9 + 64, a3);
    DereferenceObjectEx(v6, v7);
  }
  return (unsigned int)Object;
}
