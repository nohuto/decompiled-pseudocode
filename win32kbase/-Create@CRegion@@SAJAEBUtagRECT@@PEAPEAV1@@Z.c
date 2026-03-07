__int64 __fastcall CRegion::Create(struct _RECTL *a1, struct CRegion **a2)
{
  int v4; // edi
  __int64 Pool2; // rax
  struct CRegion *v6; // rbx

  *a2 = 0LL;
  v4 = -1073741801;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1852273223LL);
  v6 = (struct CRegion *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 12) = 0;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)Pool2 = &CRegion::`vftable';
    *(_DWORD *)(Pool2 + 8) = 1;
    v4 = CRegion::InitializeFromRect((CRegion *)Pool2, a1);
    if ( v4 < 0 )
      (**(void (__fastcall ***)(struct CRegion *))v6)(v6);
    else
      *a2 = v6;
  }
  return (unsigned int)v4;
}
