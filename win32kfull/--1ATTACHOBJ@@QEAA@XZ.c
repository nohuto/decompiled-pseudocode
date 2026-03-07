void __fastcall ATTACHOBJ::~ATTACHOBJ(ATTACHOBJ *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)this + 8 * i));
}
