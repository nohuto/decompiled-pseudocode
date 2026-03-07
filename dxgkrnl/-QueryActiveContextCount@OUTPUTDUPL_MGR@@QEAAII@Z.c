__int64 __fastcall OUTPUTDUPL_MGR::QueryActiveContextCount(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  struct DXGFASTMUTEX *v2; // rbx
  unsigned int v3; // ebx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v3 = *((_DWORD *)v2 + 16);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  return v3;
}
