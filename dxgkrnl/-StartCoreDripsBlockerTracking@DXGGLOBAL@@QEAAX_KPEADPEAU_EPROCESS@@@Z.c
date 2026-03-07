void __fastcall DXGGLOBAL::StartCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, char *a3, struct _EPROCESS *a4)
{
  int FirstProfilerInterface; // eax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( a4 )
    {
      if ( *((_DWORD *)this + 530) && *((_BYTE *)this + 304376) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 2128), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
        FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
        DripsBlockerTrackingHelper::AddProcessEntry((char *)this + 2296, a2, a3, a4, FirstProfilerInterface);
        if ( v9[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 510LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 504LL);
  }
}
