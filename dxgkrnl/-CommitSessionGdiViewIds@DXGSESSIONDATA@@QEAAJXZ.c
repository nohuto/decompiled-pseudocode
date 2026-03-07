__int64 __fastcall DXGSESSIONDATA::CommitSessionGdiViewIds(DXGSESSIONDATA *this)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGSESSIONDATA *)((char *)this + 19088), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  if ( *((_QWORD *)this + 2394) )
  {
    *((_DWORD *)this + 4784) += *((_DWORD *)this + 4785);
    *((_DWORD *)this + 4785) = 0;
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
  return 0LL;
}
