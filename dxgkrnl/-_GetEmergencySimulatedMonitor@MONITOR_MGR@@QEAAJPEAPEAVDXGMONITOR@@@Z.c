__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(MONITOR_MGR *this, struct DXGMONITOR **a2)
{
  char *v4; // rcx
  char *i; // rax
  char *v6; // rbx
  unsigned int v7; // edi
  DXGFASTMUTEX *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (MONITOR_MGR *)((char *)this + 80));
  v4 = (char *)this + 40;
  for ( i = (char *)*((_QWORD *)this + 5); ; i = (char *)*((_QWORD *)v6 + 19) )
  {
    if ( i == v4 )
      goto LABEL_10;
    v6 = i - 152;
    if ( !i )
      v6 = 0LL;
    if ( !v6 )
    {
LABEL_10:
      v7 = -1073741275;
      v6 = 0LL;
      goto LABEL_11;
    }
    if ( *((_DWORD *)v6 + 78) == 5 )
      break;
  }
  if ( *((_QWORD *)v6 + 40) )
    WdLogSingleEntry0(1LL);
  v7 = 0;
LABEL_11:
  *a2 = (struct DXGMONITOR *)v6;
  MUTEX_LOCK::~MUTEX_LOCK(&v9);
  return v7;
}
