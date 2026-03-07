void *__fastcall VIDMM_GLOBAL::GetAllocationSection(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v2; // rbx
  void *v3; // rcx

  v2 = **a2;
  v3 = *(void **)(v2 + 384);
  if ( v3 )
    ObfReferenceObject(v3);
  return *(void **)(v2 + 384);
}
