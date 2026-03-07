char __fastcall VIDMM_GLOBAL::UnderCleanupLimit(VIDMM_GLOBAL *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 1764)
    || *((_QWORD *)this + 895) < (unsigned __int64)qword_1C0076440
    && *((_DWORD *)this + 1792) < (unsigned int)dword_1C0076448 )
  {
    return 1;
  }
  return v1;
}
