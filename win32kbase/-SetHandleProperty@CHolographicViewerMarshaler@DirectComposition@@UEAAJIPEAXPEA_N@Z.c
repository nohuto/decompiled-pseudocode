__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetHandleProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (_DWORD)a2 == 3 )
  {
    if ( (*((_DWORD *)this + 15) & 8) != 0 || !a3 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      *((_QWORD *)this + 13) = a3;
      *((_QWORD *)this + 16) = PsGetCurrentProcess(this, a2, a3, a4);
      if ( CallerHasScreenDuplicationCapability() )
        *((_DWORD *)this + 31) |= 1u;
      *((_DWORD *)this + 15) |= 8u;
      *a4 = 1;
    }
  }
  return v4;
}
