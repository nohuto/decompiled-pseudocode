void __fastcall DXGGLOBAL::FinalizeCSAccountingAndSendETW(DXGGLOBAL *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v3[4]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-14h]
  void *v5; // [rsp+38h] [rbp-10h]

  PDOBaseEnum::PDOBaseEnum((PDOBaseEnum *)v3);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGGLOBAL *)((char *)this + 2128), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  DripsBlockerTrackingHelper::FinalizeTracking((DXGGLOBAL *)((char *)this + 2296));
  DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
    (DXGGLOBAL *)((char *)this + 2296),
    *((_QWORD *)this + 272),
    v4,
    (unsigned __int64 *)v5);
  *((_DWORD *)this + 530) = 0;
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
  if ( v5 )
    operator delete(v5);
}
