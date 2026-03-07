void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 58);
  if ( (v3 & 0x801) != 0 )
  {
    if ( (v3 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 8), a2, a3);
    if ( (*((_DWORD *)this + 58) & 0x800) != 0 )
      Win32FreePool(*((void **)this + 33));
  }
}
