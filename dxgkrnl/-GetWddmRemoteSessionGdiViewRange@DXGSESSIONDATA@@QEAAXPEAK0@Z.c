void __fastcall DXGSESSIONDATA::GetWddmRemoteSessionGdiViewRange(
        DXGSESSIONDATA *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int v6; // eax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGSESSIONDATA *)((char *)this + 19088), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( *((_DWORD *)this + 4784) )
  {
    *a2 = **((_DWORD **)this + 2394);
    v6 = *(_DWORD *)(*((_QWORD *)this + 2394) + 4LL * (unsigned int)(*((_DWORD *)this + 4784) - 1));
    *((_DWORD *)this + 4787) = v6;
  }
  else
  {
    *a2 = *((_DWORD *)this + 4787);
    v6 = *((_DWORD *)this + 4787) - 1;
  }
  *a3 = v6;
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
