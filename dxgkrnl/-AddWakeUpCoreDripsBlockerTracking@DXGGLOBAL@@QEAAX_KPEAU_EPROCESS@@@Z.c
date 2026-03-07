void __fastcall DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, struct _EPROCESS *a3)
{
  unsigned int FirstProfilerInterface; // eax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *((_DWORD *)this + 530) && *((_BYTE *)this + 304376) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 2128), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
      DripsBlockerTrackingHelper::AddWakeUpToProcessEntry((char *)this + 2296, a2, a3, FirstProfilerInterface);
      if ( v7[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 427LL);
  }
}
