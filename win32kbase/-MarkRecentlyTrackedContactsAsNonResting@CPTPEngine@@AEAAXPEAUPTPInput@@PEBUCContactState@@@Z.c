void __fastcall CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(
        CPTPEngine *this,
        struct PTPInput *a2,
        const struct CContactState *a3)
{
  CPTPEngine *v3; // r11
  unsigned __int64 v4; // rdi
  char *v5; // r10
  char *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v3 = this;
  if ( a3 )
    a2 = (const struct CContactState *)((char *)a3 + 80);
  v4 = *(_QWORD *)a2;
  v5 = (char *)this + 1208;
  v6 = (char *)this + 3608;
  while ( v5 != v6 )
  {
    if ( (*(_DWORD *)v5 & 1) != 0 && (*(_DWORD *)v5 & 0x80u) != 0 )
    {
      v7 = *((_QWORD *)v5 + 10);
      v8 = v4 - v7;
      if ( v4 <= v7 )
        v8 = *((_QWORD *)v5 + 10) - v4;
      if ( v8 < *((_QWORD *)v3 + 12) * (unsigned __int64)*((unsigned int *)v3 + 99) / 0x3E8 )
        CPTPEngine::SetContactRestingState(v3, (struct CContactState *)v5, 0);
    }
    v5 += 400;
  }
}
