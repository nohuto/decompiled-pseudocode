__int64 __fastcall MonitoredFenceHelper::Update(
        MonitoredFenceHelper *this,
        struct ADAPTER_RENDER **a2,
        UINT64 a3,
        __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD **v8; // rbx
  struct _KTHREAD **v9; // rbp
  int v10; // ebx
  char *v11; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  if ( a3 != *(_QWORD *)this )
  {
    MonitoredFenceHelper::DestroySynchObject(this);
    result = MonitoredFenceHelper::CreateSynchObject(this, (struct DXGDEVICE *)a2, a3);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)this = a3;
  }
  v8 = *(struct _KTHREAD ***)(*((_QWORD *)this + 4) + 32LL);
  v9 = v8 + 4;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 4));
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v8, a2[2]);
  if ( VidSchSyncObject )
  {
    v11 = (char *)this + 8;
    ObfReferenceObject(v11);
    v10 = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT **, __int64 *, char *, char, char, struct ADAPTER_RENDER *, _QWORD))(*(_QWORD *)(*((_QWORD *)a2[2] + 92) + 8LL) + 664LL))(
            1LL,
            &VidSchSyncObject,
            &v13,
            v11,
            1,
            1,
            a2[100],
            0LL);
    if ( v10 < 0 )
      ObfDereferenceObject(v11);
  }
  else
  {
    v10 = -1073741811;
    WdLogSingleEntry1(3LL, 2097LL);
  }
  DXGFASTMUTEX::Release(v9);
  return (unsigned int)v10;
}
