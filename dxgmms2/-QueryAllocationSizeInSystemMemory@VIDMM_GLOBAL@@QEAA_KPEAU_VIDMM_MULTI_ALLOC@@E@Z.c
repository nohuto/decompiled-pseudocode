unsigned __int64 __fastcall VIDMM_GLOBAL::QueryAllocationSizeInSystemMemory(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        char a3)
{
  _QWORD *v3; // rax

  v3 = **(_QWORD ***)a2;
  if ( a3 )
    return *v3;
  else
    return v3[1];
}
