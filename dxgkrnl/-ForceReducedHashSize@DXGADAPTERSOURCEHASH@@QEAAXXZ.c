void __fastcall DXGADAPTERSOURCEHASH::ForceReducedHashSize(DXGADAPTERSOURCEHASH *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  if ( *((_DWORD *)this + 17) != 4 )
    *((_DWORD *)this + 17) = 4;
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
