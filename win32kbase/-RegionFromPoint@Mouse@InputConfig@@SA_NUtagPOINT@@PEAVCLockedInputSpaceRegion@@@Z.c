char __fastcall InputConfig::Mouse::RegionFromPoint(struct tagPOINT a1, struct CLockedInputSpaceRegion *a2)
{
  char *v4; // rax
  char v5; // bl
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v7);
  v4 = (char *)*((_QWORD *)gpInputConfig + 3);
  if ( !v4 )
    v4 = (char *)gpInputConfig + 32;
  v7[0] = v4;
  v5 = InputConfig::RegionFromPoint((const struct CLockedInputSpace *)v7, a1, a2);
  ExReleaseResourceLite(*(PERESOURCE *)v7[1]);
  KeLeaveCriticalRegion();
  return v5;
}
