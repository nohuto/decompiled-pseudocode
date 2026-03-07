void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  DXGDEVICE *v2; // rbp
  char *v3; // rsi
  char *i; // rbx

  if ( !*((_BYTE *)this + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 144LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 8159LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsDeviceLockExclusiveOwner() || GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      8159LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = this;
  if ( (*((_BYTE *)this + 1901) & 1) == 0 )
  {
    v3 = (char *)this + 528;
    for ( i = (char *)*((_QWORD *)this + 66); i != v3 && i; i = *(char **)i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 2) + 760LL) + 8LL) + 904LL))(*((_QWORD *)i + 4));
  }
}
