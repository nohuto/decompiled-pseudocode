__int64 __fastcall CreateRegion(struct IRegion **a1)
{
  __int64 Pool2; // rax
  struct IRegion *v3; // rdx

  Pool2 = ExAllocatePool2(256LL, 24LL, 1852273223LL);
  v3 = (struct IRegion *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 12) = 0;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)Pool2 = &CRegion::`vftable';
    *(_DWORD *)(Pool2 + 8) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return v3 == 0LL ? 0xC0000017 : 0;
}
