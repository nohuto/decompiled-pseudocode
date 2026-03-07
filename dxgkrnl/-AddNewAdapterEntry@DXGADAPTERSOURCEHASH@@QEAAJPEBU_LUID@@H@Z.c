__int64 __fastcall DXGADAPTERSOURCEHASH::AddNewAdapterEntry(DXGADAPTERSOURCEHASH *this, const struct _LUID *a2, int a3)
{
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = DXGADAPTERSOURCEHASH::AddEntry(this, a2, 0, a3) == 0LL ? 0xC0000017 : 0;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
