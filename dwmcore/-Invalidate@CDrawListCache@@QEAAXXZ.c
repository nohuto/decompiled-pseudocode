void __fastcall CDrawListCache::Invalidate(CDrawListCache *this)
{
  if ( *((_QWORD *)this + 4) )
  {
    if ( *((_BYTE *)this + 102) )
      ++dword_1803E2AFC;
    else
      ++dword_1803E2AF0;
    *((_QWORD *)this + 4) = 0LL;
    CDrawListCache::ReleaseDrawListEntries(this);
    *((_WORD *)this + 50) = 0;
    *((_BYTE *)this + 102) = 0;
  }
}
