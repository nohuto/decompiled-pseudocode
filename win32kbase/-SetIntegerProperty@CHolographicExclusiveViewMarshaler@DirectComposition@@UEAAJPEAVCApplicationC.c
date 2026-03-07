__int64 __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( a3 )
  {
    v5 = -1073741811;
    if ( a3 == 3 && !*((_QWORD *)this + 9) && (*((_DWORD *)this + 4) & 0x20) != 0 )
    {
      *((_QWORD *)this + 9) = a4;
      return 0;
    }
  }
  else
  {
    *((_DWORD *)this + 14) = a4;
    *((_DWORD *)this + 15) = (unsigned int)PsGetCurrentProcessId();
    *a5 = 1;
  }
  return v5;
}
