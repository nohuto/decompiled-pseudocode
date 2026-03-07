struct _VIDSCH_SYNC_OBJECT *__fastcall DXGDEVICE::GetBroadcastPresentSyncObject(DXGDEVICE *this)
{
  char *v1; // rbx
  _QWORD *v3; // rdx
  int v4; // ecx
  _DWORD v6[20]; // [rsp+50h] [rbp-58h] BYREF

  v1 = (char *)this + 208;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 208));
  if ( !*((_QWORD *)this + 240) )
  {
    memset(v6, 0, sizeof(v6));
    v3 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = 3;
    if ( *(int *)(v3[2] + 2820LL) >= 2400 )
      v4 = 5;
    v6[0] = v4;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int64, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(v3[92] + 8LL)
                                                                                                  + 608LL))(
           v3[93],
           0LL,
           v6,
           10LL,
           0LL,
           0LL,
           (char *)this + 1920,
           0LL) < 0 )
      return 0LL;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + 240);
}
