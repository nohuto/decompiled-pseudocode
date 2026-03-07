void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this)
{
  unsigned int v2; // edx
  DXGADAPTERSYNCOBJECT *v3; // rdi
  struct DXGPROCESS *Current; // rax
  _BYTE v5[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 2033LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 2033LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 50) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v2 = *((_DWORD *)this + 20);
  if ( v2 )
  {
    if ( (*((_DWORD *)this + 71) & 0x10) != 0 )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 36), v2);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v5);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 20));
      if ( v5[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
    }
    *((_DWORD *)this + 20) = 0;
  }
  if ( (*((_DWORD *)this + 51) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
    v3 = (DXGSYNCOBJECT *)((char *)this + 296);
  }
  else
  {
    v3 = (DXGSYNCOBJECT *)((char *)this + 296);
    DXGADAPTERSYNCOBJECT::Stop((DXGSYNCOBJECT *)((char *)this + 296));
  }
  Current = DXGPROCESS::GetCurrent();
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), Current);
  if ( (*((_DWORD *)this + 51) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(v3);
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}
