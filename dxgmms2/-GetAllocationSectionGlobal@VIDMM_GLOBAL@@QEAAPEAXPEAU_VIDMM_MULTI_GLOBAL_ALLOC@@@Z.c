void *__fastcall VIDMM_GLOBAL::GetAllocationSectionGlobal(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)a2 + 48);
  if ( v2 )
    ObfReferenceObject(*((PVOID *)a2 + 48));
  return (void *)v2;
}
