void __fastcall MULTISURF::~MULTISURF(MULTISURF *this)
{
  if ( (*((_DWORD *)this + 18) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 10) )
      *(_WORD *)(*(_QWORD *)this + 100LL) = 3;
    SURFACE::dhpdev(*(SURFACE **)this, *((struct DHPDEV__ **)this + 3));
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *((_QWORD *)this + 4);
    *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)this + 19);
  }
  SURFMEM::~SURFMEM((MULTISURF *)((char *)this + 40));
}
