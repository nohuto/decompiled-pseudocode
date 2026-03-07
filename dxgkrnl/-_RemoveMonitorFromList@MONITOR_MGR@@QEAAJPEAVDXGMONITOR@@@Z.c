__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  _QWORD **v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  DXGFASTMUTEX *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v10, (MONITOR_MGR *)((char *)this + 80));
  v4 = (_QWORD **)((char *)this + 40);
  if ( !a2 || (v5 = *v4, *v4 == v4) )
  {
    v6 = (_QWORD *)((char *)a2 + 152);
LABEL_12:
    WdLogSingleEntry0(1LL);
  }
  else
  {
    v6 = (_QWORD *)((char *)a2 + 152);
    while ( v5 != v6 )
    {
      if ( v4 == v5 )
        goto LABEL_12;
      v5 = (_QWORD *)*v5;
    }
  }
  v7 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --*((_DWORD *)this + 8);
  MUTEX_LOCK::~MUTEX_LOCK(&v10);
  return 0LL;
}
