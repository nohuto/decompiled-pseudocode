__int64 __fastcall IsSurfaceLockable(struct _SURFOBJ *a1, struct DHPDEV__ **a2)
{
  PVOID pvBits; // rdx
  struct DHPDEV__ *v5; // rax
  DHPDEV dhpdev; // rdx

  pvBits = a1->pvBits;
  if ( pvBits && !a1->iType && pvBits >= MmSystemRangeStart )
    return 0LL;
  v5 = 0LL;
  dhpdev = a1->dhpdev;
  if ( dhpdev )
    v5 = (struct DHPDEV__ *)*((_QWORD *)dhpdev + 1);
  if ( a2 )
    *a2 = v5;
  return 1LL;
}
