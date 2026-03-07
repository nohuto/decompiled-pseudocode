bool __fastcall _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(_VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // rax
  __int64 v6; // rax

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = *(_QWORD *)(v1 + 24);
    if ( *(_BYTE *)(v2 + 28) )
      return 0;
    v4 = *(unsigned __int64 **)(v2 + 64);
    if ( *(_BYTE *)(v2 + 29) )
    {
      if ( *v4 >= v3 )
        return 0;
    }
    else if ( *(_DWORD *)v4 - (int)v3 >= 0 )
    {
      return 0;
    }
    return 1;
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    if ( !v6 )
      return 0;
    return *(_DWORD *)(v6 + 8) > 0;
  }
}
