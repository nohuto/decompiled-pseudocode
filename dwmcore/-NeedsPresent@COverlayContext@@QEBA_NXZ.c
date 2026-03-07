bool __fastcall COverlayContext::NeedsPresent(COverlayContext *this)
{
  __int64 v1; // rax
  CDirectFlipInfo *v2; // rcx

  if ( *((_BYTE *)this + 11310) )
    return 0;
  if ( *((_BYTE *)this + 11024) != *((_BYTE *)this + 11296) )
    return 1;
  if ( *((_BYTE *)this + 11025) != *((_BYTE *)this + 11305) )
    return 1;
  v1 = *((_QWORD *)this + 913);
  if ( 0x6DB6DB6DB6DB6DB7LL * ((*((_QWORD *)this + 914) - v1) >> 5) != *((_DWORD *)this + 2820) )
    return 1;
  while ( v1 != *((_QWORD *)this + 914) )
  {
    if ( *(_BYTE *)(v1 + 184) )
      return 1;
    v1 += 224LL;
  }
  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 1396);
  return v2 && CDirectFlipInfo::PresentNeeded(v2);
}
