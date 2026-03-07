void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EngDeleteClip(*((CLIPOBJ **)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  v3 = *((_QWORD *)a1 + 3);
  if ( v3 )
    bDeleteSurface(v3, v2);
}
