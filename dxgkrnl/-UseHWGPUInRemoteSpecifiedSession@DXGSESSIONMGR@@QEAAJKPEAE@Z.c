__int64 __fastcall DXGSESSIONMGR::UseHWGPUInRemoteSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2,
        unsigned __int8 *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v7 = -1073741275;
  }
  else
  {
    _mm_lfence();
    v6 = *((_QWORD *)this + 6);
    v7 = 0;
    *a3 = *(_BYTE *)(*(_QWORD *)(v6 + 8 * v3) + 18505LL);
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v7;
}
