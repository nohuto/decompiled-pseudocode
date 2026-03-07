__int64 __fastcall MONITOR_MGR::_GetUsb4TargetList(MONITOR_MGR *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // r15d
  struct DXGFASTMUTEX *v4; // rbp
  _QWORD *v6; // r14
  _QWORD *v8; // rax
  __int64 v9; // rbx
  DXGFASTMUTEX **i; // rcx
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = (MONITOR_MGR *)((char *)this + 80);
  v6 = (_QWORD *)((char *)this + 40);
  *a2 = 0;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v14, (MONITOR_MGR *)((char *)this + 80));
  v8 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (__int64)(v8 - 19);
    if ( !v8 )
      v9 = 0LL;
  }
  for ( i = (DXGFASTMUTEX **)&v14; ; i = (DXGFASTMUTEX **)&v15 )
  {
    MUTEX_LOCK::~MUTEX_LOCK(i);
    if ( !v9 )
      return 0LL;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v14, v9, 0);
    if ( *(_BYTE *)(*(_QWORD *)(v9 + 264) + 8LL) )
      break;
LABEL_9:
    if ( v14 )
    {
      ExReleaseResourceLite((PERESOURCE)(v14 + 24));
      KeLeaveCriticalRegion();
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v15, v4);
    v12 = *(_QWORD **)(v9 + 152);
    if ( v12 == v6 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = (__int64)(v12 - 19);
      if ( !v12 )
        v9 = 0LL;
    }
  }
  v11 = *a2;
  if ( *a2 < v3 )
  {
    *a3 = *(_DWORD *)(v9 + 180);
    *a2 = v11 + 1;
    ++a3;
    goto LABEL_9;
  }
  if ( v14 )
  {
    ExReleaseResourceLite((PERESOURCE)(v14 + 24));
    KeLeaveCriticalRegion();
  }
  return 3221225507LL;
}
