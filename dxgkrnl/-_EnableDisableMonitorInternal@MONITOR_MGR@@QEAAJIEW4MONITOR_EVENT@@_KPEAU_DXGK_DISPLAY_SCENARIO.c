__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v7; // rsi
  __int64 v10; // r14
  char v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  struct DXGFASTMUTEX *v15; // r14
  __int64 v16; // rax
  __int64 v18; // rax
  DXGMONITOR *v19; // rcx
  DXGFASTMUTEX *v20; // [rsp+30h] [rbp-48h] BYREF
  struct DXGFASTMUTEX *v21; // [rsp+38h] [rbp-40h] BYREF
  DXGFASTMUTEX *v22[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a2;
  v10 = a1;
  v11 = 0;
  if ( a4 - 1 > 1 && a4 != 8 )
    WdLogSingleEntry0(1LL);
  v21 = (struct DXGFASTMUTEX *)(v10 + 80);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v20, (struct DXGFASTMUTEX *)(v10 + 80));
  v12 = v10 + 40;
  v13 = *(_QWORD *)(v10 + 40);
  if ( v13 == v10 + 40 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 - 152;
    if ( !v13 )
      v14 = 0LL;
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v20);
  if ( v14 )
  {
    v15 = v21;
    do
    {
      if ( (_DWORD)v7 == -1 || *(_DWORD *)(v14 + 180) == (_DWORD)v7 )
      {
        v11 = 1;
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v21, v14, 1);
        if ( *(_BYTE *)(*(_QWORD *)(v14 + 264) + 8LL) && a7 )
          *a7 = 1;
        if ( a4 == 1 )
        {
          DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v14, a3 != 0);
        }
        else if ( a4 != 8 || *(_DWORD *)(*(_QWORD *)(v14 + 240) + 16LL) != 1 || a3 )
        {
          DXGMONITOR::_ChangePowerStatus((DXGMONITOR *)v14, a3 != 0);
        }
        if ( v21 )
        {
          ExReleaseResourceLite((PERESOURCE)((char *)v21 + 24));
          KeLeaveCriticalRegion();
        }
        if ( *(_DWORD *)(v14 + 312) != 1 )
        {
          v18 = *(_QWORD *)(v14 + 320);
          if ( v18 )
          {
            if ( *(_DWORD *)(v18 + 312) != 1 )
              WdLogSingleEntry0(1LL);
            RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v20, *(_QWORD *)(v14 + 320), 1);
            v19 = *(DXGMONITOR **)(v14 + 320);
            if ( a4 == 1 )
              DXGMONITOR::_ChangeLIDStatus(v19, a3 != 0);
            else
              DXGMONITOR::_ChangePowerStatus(v19, a3 != 0);
            if ( v20 )
            {
              ExReleaseResourceLite((PERESOURCE)((char *)v20 + 24));
              KeLeaveCriticalRegion();
            }
          }
        }
      }
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v22, v15);
      v16 = *(_QWORD *)(v14 + 152);
      if ( v16 == v12 )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = v16 - 152;
        if ( !v16 )
          v14 = 0LL;
      }
      MUTEX_LOCK::~MUTEX_LOCK(v22);
    }
    while ( v14 );
    v10 = a1;
    if ( v11 )
      goto LABEL_19;
  }
  if ( (_DWORD)v7 == -1 || a4 == 2 || a4 == 8 )
  {
LABEL_19:
    MONITOR_MGR::_IssueMonitorEvent(v10 + 8, (unsigned int)v7, a4, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(v10, (a3 != 0) + 9, v7, 0, 0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, v7, v10);
  }
  return 0LL;
}
