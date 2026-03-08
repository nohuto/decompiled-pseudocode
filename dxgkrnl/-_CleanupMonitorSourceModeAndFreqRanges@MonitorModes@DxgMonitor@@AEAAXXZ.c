/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1C01FFC4C
 * Callers:
 *     ?OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z @ 0x1C01FD69C (-OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03C7CA8 (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DxgMonitor::MonitorModes::_CleanupMonitorSourceModeAndFreqRanges(DxgMonitor::MonitorModes *this)
{
  _QWORD **v1; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD **v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // r8

  v1 = (_QWORD **)((char *)this + 152);
  if ( *v1 != v1 )
  {
    WdLogSingleEntry1(3LL, this);
    while ( 1 )
    {
      v4 = *v1;
      if ( *v1 == v1 )
        break;
      if ( (_QWORD **)v4[1] != v1 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
LABEL_49:
        __fastfail(3u);
      *v1 = v5;
      v5[1] = v1;
      v6 = v4 - 12;
      if ( !v4 )
        v6 = 0LL;
      operator delete(v6);
    }
  }
  v7 = (_QWORD **)((char *)this + 192);
  if ( *v7 != v7 )
  {
    WdLogSingleEntry1(3LL, this);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 )
        goto LABEL_49;
      v9 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_49;
      *v7 = v9;
      v9[1] = v7;
      v10 = v8 - 6;
      if ( !v8 )
        v10 = 0LL;
      operator delete(v10);
    }
  }
  v3 = (_QWORD *)((char *)this + 128);
  if ( *((_DWORD *)this + 30) )
  {
    if ( (_QWORD *)*v3 == v3 )
      WdLogSingleEntry0(1LL);
    while ( 1 )
    {
      v11 = (_QWORD *)*v3;
      if ( (_QWORD *)*v3 == v3 )
        break;
      if ( (_QWORD *)v11[1] != v3 )
        goto LABEL_49;
      v12 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        goto LABEL_49;
      *v3 = v12;
      *(_QWORD *)(v12 + 8) = v3;
      v13 = v11 - 12;
      if ( !v11 )
        v13 = 0LL;
      operator delete(v13);
    }
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 1024;
  }
  if ( (_QWORD *)*v3 != v3 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 42) )
  {
    v14 = (_QWORD *)((char *)this + 176);
    if ( (_QWORD *)*v14 == v14 )
      WdLogSingleEntry0(1LL);
    v15 = (_QWORD *)*v14;
    if ( (_QWORD *)*v14 != v14 )
    {
      v16 = v15 - 6;
      if ( !v15 )
        v16 = 0LL;
      if ( v16 )
      {
        do
        {
          v17 = v16 + 6;
          v18 = (_QWORD *)v16[6];
          if ( v18 == v14 )
          {
            v19 = 0LL;
          }
          else
          {
            v19 = v18 - 6;
            if ( !v18 )
              v19 = 0LL;
          }
          if ( *(_DWORD *)v16 != 4 )
          {
            if ( (_QWORD *)v18[1] != v17 )
              goto LABEL_49;
            v20 = (_QWORD *)v16[7];
            if ( (_QWORD *)*v20 != v17 )
              goto LABEL_49;
            *v20 = v18;
            v18[1] = v20;
            operator delete(v16);
            --*((_DWORD *)this + 42);
          }
          v16 = v19;
        }
        while ( v19 );
      }
    }
  }
}
