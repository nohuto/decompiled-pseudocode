char __fastcall MONITOR_MGR::_IsMonitorInMonitorList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  struct DXGMONITOR **v4; // rcx
  char v5; // bl
  struct DXGMONITOR *v6; // rax
  DXGFASTMUTEX *v8; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (MONITOR_MGR *)((char *)this + 80));
  v4 = (struct DXGMONITOR **)((char *)this + 40);
  v5 = 0;
  if ( a2 )
  {
    v6 = *v4;
    if ( *v4 != (struct DXGMONITOR *)v4 )
    {
      while ( v6 != (struct DXGMONITOR *)((char *)a2 + 152) )
      {
        if ( v4 == (struct DXGMONITOR **)v6 )
          goto LABEL_8;
        v6 = *(struct DXGMONITOR **)v6;
      }
      v5 = 1;
    }
  }
LABEL_8:
  MUTEX_LOCK::~MUTEX_LOCK(&v8);
  return v5;
}
