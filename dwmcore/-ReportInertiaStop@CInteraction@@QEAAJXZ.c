__int64 __fastcall CInteraction::ReportInertiaStop(CInteraction *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  signed int LastError; // eax

  v2 = 0;
  v3 = *((_QWORD *)this + 216);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 232LL))(v3, *((_QWORD *)g_pComposition + 62));
    v4 = *((_QWORD *)this + 216);
    if ( v4 )
    {
      *((_QWORD *)this + 216) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  if ( !(unsigned int)ReportInertia(*((unsigned int *)this + 426), 6LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
    else
      return (unsigned int)LastError;
  }
  return v2;
}
