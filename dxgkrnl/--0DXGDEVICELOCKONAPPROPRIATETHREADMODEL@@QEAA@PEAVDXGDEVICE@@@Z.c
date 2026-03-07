DXGDEVICELOCKONAPPROPRIATETHREADMODEL *__fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this,
        struct DXGDEVICE *a2)
{
  __int64 v3; // rcx
  _DWORD *v4; // rsi
  int v5; // eax
  struct _KEVENT *v6; // rbx
  __int64 v7; // rbx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8

  *(_QWORD *)this = a2;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v3 + 2552) >= 0x2000 || *(_BYTE *)(v3 + 2852) )
  {
    v4 = (_DWORD *)((char *)this + 8);
    v5 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  }
  else
  {
    v4 = (_DWORD *)((char *)this + 8);
    v5 = 0;
  }
  *v4 = v5;
  v6 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 464LL) == 2 )
  {
    if ( KeReadStateEvent(v6 + 5) )
      goto LABEL_5;
    v9 = v6 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v6 + 4) )
      goto LABEL_5;
    v9 = v6 + 4;
  }
  KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
LABEL_5:
  v7 = *(_QWORD *)this;
  if ( *v4 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v7 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, "g", v11, 40LL);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
    }
  }
  return this;
}
