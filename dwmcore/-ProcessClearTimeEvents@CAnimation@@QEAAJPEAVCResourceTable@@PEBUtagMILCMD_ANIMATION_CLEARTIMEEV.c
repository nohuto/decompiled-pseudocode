__int64 __fastcall CAnimation::ProcessClearTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_CLEARTIMEEVENTS *a3)
{
  char *v4; // rcx

  v4 = (char *)this + 152;
  *((_DWORD *)v4 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v4, 0x10u);
  *((_DWORD *)this + 46) = 0;
  return 0LL;
}
