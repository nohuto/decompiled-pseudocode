void __fastcall MonitorAPIProcessTerminating(void *a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 i; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  OPM::CMonitorPDO *v6; // [rsp+50h] [rbp+18h] BYREF
  char v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8728LL);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v7, (struct OPM::CMutex *)(v2 + 32));
  v3 = 0;
  v5 = 0;
  if ( *(_DWORD *)(v2 + 16) )
  {
    if ( **(_QWORD **)(v2 + 8) )
      goto LABEL_8;
    for ( i = 0LL; (unsigned __int8)OPM::CList<CPhysicalMonitorHandle>::GetNextElementIndex(v2 + 8, i, &v5); i = v3 )
    {
      v3 = v5;
LABEL_8:
      v6 = 0LL;
      OPM::CList<CPhysicalMonitorHandle>::GetElement(v2 + 8, v3, &v6);
      if ( OPM::CMonitorPDO::DoesProcessOwnProtectedOutput(v6, a1) )
        OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(v2 + 8, v6, v3, v2);
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v7);
}
