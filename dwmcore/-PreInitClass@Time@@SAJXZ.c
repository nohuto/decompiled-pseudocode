__int64 Time::PreInitClass(void)
{
  signed int v0; // ebx
  signed int LastError; // eax
  unsigned int v3; // ecx
  signed int v4; // eax
  unsigned int v5; // ecx

  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Time::s_luFreq) )
  {
    LastError = GetLastError();
    v0 = LastError;
    if ( LastError > 0 )
      v0 = (unsigned __int16)LastError | 0x80070000;
    if ( v0 >= 0 )
      v0 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v0, 0x22u, 0LL);
    return (unsigned int)v0;
  }
  SetLastError(0);
  if ( !QueryPerformanceCounter(&Time::s_luBegin) )
  {
    v4 = GetLastError();
    v0 = v4;
    if ( v4 > 0 )
      v0 = (unsigned __int16)v4 | 0x80070000;
    if ( v0 >= 0 )
      v0 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v0, 0x23u, 0LL);
    return (unsigned int)v0;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / Time::s_luFreq.QuadPart >= 0x12C )
    return 0;
  return 2147549183LL;
}
