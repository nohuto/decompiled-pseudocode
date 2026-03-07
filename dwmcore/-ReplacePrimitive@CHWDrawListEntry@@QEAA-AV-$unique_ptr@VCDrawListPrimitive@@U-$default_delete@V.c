__int64 *__fastcall CHWDrawListEntry::ReplacePrimitive(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax

  v3 = (__int64 *)(a1 + 64);
  v5 = *v3;
  *v3 = 0LL;
  *a2 = v5;
  std::unique_ptr<CDrawListPrimitive>::operator=<std::default_delete<CDrawListPrimitive>,0>(v3, a3);
  return a2;
}
