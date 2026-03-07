void __fastcall VIDMM_SEGMENT::OfferAllocation(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // rax
  char **v3; // rcx
  char *v4; // rdx

  if ( *((_DWORD *)a2 + 114) == 1 )
  {
    if ( *(_WORD *)(*((_QWORD *)a2 + 67) + 4LL) == 2 )
    {
      *((_DWORD *)a2 + 18) |= 0x40u;
      VIDMM_GLOBAL::MarkGlobalAllocation(this[1], a2, 0LL, 0LL);
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 114) == 2 )
    {
      v2 = (char *)(this + 35);
    }
    else
    {
      if ( *((_DWORD *)a2 + 114) != 3 )
        return;
      v2 = (char *)(this + 37);
    }
    v3 = (char **)*((_QWORD *)v2 + 1);
    v4 = (char *)a2 + 424;
    if ( *v3 != v2 )
      __fastfail(3u);
    *(_QWORD *)v4 = v2;
    *((_QWORD *)v4 + 1) = v3;
    *v3 = v4;
    *((_QWORD *)v2 + 1) = v4;
  }
}
