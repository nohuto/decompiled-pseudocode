void __fastcall VIDMM_LINEAR_POOL::FreeBlock(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  char *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx

  if ( *(_BYTE *)this )
  {
    v2 = (char *)this + 88;
    *((_BYTE *)a2 + 56) = 1;
    v3 = (_QWORD *)((char *)a2 + 24);
    v4 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
      __fastfail(3u);
    *v3 = v4;
    v3[1] = v2;
    *(_QWORD *)(v4 + 8) = v3;
    *(_QWORD *)v2 = v3;
  }
  else
  {
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  }
}
