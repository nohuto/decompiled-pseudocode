__int64 __fastcall DXGSYNCOBJECT::CreatePeriodicFrameNotification(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER **a2,
        struct ADAPTER_RENDER **a3,
        struct DXGADAPTER *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  DXGDODPRESENT *v11; // r9
  unsigned int PeriodicFrameNotification; // eax
  struct _VIDSCH_SYNC_OBJECT *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // esi

  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  if ( (*((_DWORD *)a4 + 109) & 0x100) != 0 )
  {
    if ( !a2 )
    {
      WdLogSingleEntry1(1LL, 1945LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncAdapter != nullptr", 1945LL, 0LL, 0LL, 0LL, 0LL);
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(this, a2[366]);
    PeriodicFrameNotification = DXGDODPRESENT::CreatePeriodicFrameNotification(
                                  v11,
                                  (struct DXGADAPTER *)a2,
                                  VidSchSyncObject,
                                  (unsigned __int64)v11,
                                  a6,
                                  (struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *)((char *)this + 200),
                                  (unsigned __int64 *)this + 23);
    *((_DWORD *)this + 48) = a6;
    *((_QWORD *)this + 22) = a4;
  }
  else
  {
    v13 = DXGSYNCOBJECT::GetVidSchSyncObject(this, a3[366]);
    PeriodicFrameNotification = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64, _QWORD, char *, char *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 936LL))(
                                  *(_QWORD *)(v14 + 744),
                                  v13,
                                  a5,
                                  a6,
                                  (char *)this + 200,
                                  (char *)this + 168);
  }
  v15 = PeriodicFrameNotification;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
  return v15;
}
