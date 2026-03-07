void __fastcall DXGMONITOR::_CleanupMonitorCCDName(DXGMONITOR *this)
{
  __int64 v2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx

  if ( *((_QWORD *)this + 55) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v2 = *((_QWORD *)this + 55);
    if ( (*(_DWORD *)(v2 + 16))-- == 1 )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 55);
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      operator delete(*((void **)this + 55));
    }
    *((_QWORD *)this + 55) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 384) )
  {
    if ( !*((_QWORD *)this + 50) )
      WdLogSingleEntry0(1LL);
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 392));
    *((_QWORD *)this + 50) = 0LL;
    *((_BYTE *)this + 384) = 0;
  }
  *((_QWORD *)this + 52) = 0LL;
  v7 = (void *)*((_QWORD *)this + 54);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 54) = 0LL;
  }
}
