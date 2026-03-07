__int64 __fastcall DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(DXGHWQUEUE *this)
{
  struct DXGDEVICESYNCOBJECT **v1; // rbx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v5; // rax
  int SyncObject; // eax
  unsigned int v7; // esi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  _BYTE v9[8]; // [rsp+68h] [rbp-9h] BYREF
  char v10; // [rsp+70h] [rbp-1h]
  _QWORD v11[10]; // [rsp+78h] [rbp+7h] BYREF

  v1 = (struct DXGDEVICESYNCOBJECT **)((char *)this + 88);
  if ( *((_QWORD *)this + 11) )
    return 0LL;
  memset(v11, 0, sizeof(v11));
  *((_QWORD *)this + 12) = 0LL;
  v11[1] = 0LL;
  LODWORD(v11[0]) = 5;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v9, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v9);
  v5 = DXGGLOBAL::GetGlobal();
  SyncObject = DXGGLOBAL::CreateSyncObject(
                 (__int64)v5,
                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                 *(struct DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL),
                 1 << *(_DWORD *)(*((_QWORD *)this + 2) + 400LL),
                 (__int64)v11,
                 4u,
                 0,
                 0LL,
                 0LL,
                 v1,
                 0LL,
                 0LL);
  v7 = SyncObject;
  if ( SyncObject >= 0 )
  {
    if ( v10 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v9);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(*((_QWORD *)*v1 + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)*v1 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)*v1 + 2) + 16LL));
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                                                                 + 736LL)
                                                                                     + 8LL)
                                                                         + 272LL))(
      *((_QWORD *)this + 5),
      VidSchSyncObject,
      0LL);
    if ( v10 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  }
  else
  {
    WdLogSingleEntry2(3LL, this, SyncObject);
    if ( v10 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v9);
    if ( *v1 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(*v1);
      *v1 = 0LL;
    }
  }
  return v7;
}
