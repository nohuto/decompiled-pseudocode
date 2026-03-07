void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, struct SURFACE *a2)
{
  if ( (*((_DWORD *)this + 61) & 0x20) != 0 )
  {
    if ( a2 )
      GreDereferenceObject(*((_QWORD *)a2 + 4), 1LL);
    *((_DWORD *)this + 61) &= ~0x20u;
  }
}
