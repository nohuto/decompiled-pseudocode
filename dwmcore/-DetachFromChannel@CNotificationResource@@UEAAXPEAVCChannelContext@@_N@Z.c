void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  __int64 v2; // r11
  _DWORD *v5; // rdi
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( (struct CChannelContext *)v2 == a2 )
  {
    if ( v2 && *(_DWORD *)(v2 + 76) )
    {
      v5 = (_DWORD *)((char *)this + 64);
      if ( *((_DWORD *)this + 16) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 24LL);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v6 + 80LL))(
          v6,
          *(unsigned int *)(v2 + 76),
          (unsigned int)*v5,
          0LL);
        v2 = *((_QWORD *)this + 6);
      }
    }
    else
    {
      v5 = (_DWORD *)((char *)this + 64);
    }
    *v5 = 0;
  }
  if ( a2 == (struct CChannelContext *)v2 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
      CAnimationLoggingManager::RemoveResourceDebugInfo(*(CAnimationLoggingManager **)(v2 + 64), this);
    *((_QWORD *)this + 6) = 0LL;
  }
}
