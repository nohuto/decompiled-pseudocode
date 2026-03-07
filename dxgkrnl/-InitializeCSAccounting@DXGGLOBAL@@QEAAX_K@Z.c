void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, __int64 a2)
{
  __int64 v4; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 2128), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v4 = *((_QWORD *)this + 272);
  if ( a2 != v4 )
  {
    if ( *((_DWORD *)this + 530) )
      WdLogSingleEntry1(3LL, v4);
    *((_QWORD *)this + 272) = a2;
    memset((char *)this + 2296, 0, 0x49C30uLL);
    *((_OWORD *)this + 19027) = 0LL;
    *((_QWORD *)this + 38056) = 0LL;
    *((_BYTE *)this + 304424) = 1;
    *((_DWORD *)this + 530) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
