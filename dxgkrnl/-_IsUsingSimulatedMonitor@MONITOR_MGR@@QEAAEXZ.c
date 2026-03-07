char __fastcall MONITOR_MGR::_IsUsingSimulatedMonitor(MONITOR_MGR *this)
{
  char *v2; // rdx
  MONITOR_MGR *v3; // rcx
  char *v4; // rax
  char v5; // bl
  char *v6; // rcx
  DXGFASTMUTEX *v8; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (MONITOR_MGR *)((char *)this + 80));
  v2 = (char *)this + 40;
  v3 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v3 == (MONITOR_MGR *)((char *)this + 40) )
    goto LABEL_8;
  v4 = (char *)v3 - 152;
  if ( !v3 )
    v4 = 0LL;
  if ( !v4 )
  {
LABEL_8:
    v5 = 0;
  }
  else
  {
    v5 = 1;
    while ( *((_DWORD *)v4 + 78) == 1 )
    {
      v6 = (char *)*((_QWORD *)v4 + 19);
      if ( v6 != v2 )
      {
        v4 = v6 - 152;
        if ( !v6 )
          v4 = 0LL;
        if ( v4 )
          continue;
      }
      goto LABEL_8;
    }
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v8);
  return v5;
}
