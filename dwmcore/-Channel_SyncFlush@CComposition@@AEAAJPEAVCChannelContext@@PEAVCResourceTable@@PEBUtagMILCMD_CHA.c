__int64 __fastcall CComposition::Channel_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SYNCFLUSH *a4)
{
  _QWORD *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx
  struct CChannelContext *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v4 = (_QWORD *)((char *)this + 512);
  v5 = *((_DWORD *)this + 134);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v7, 0x5AAu, 0LL);
    return v7;
  }
  v7 = 0;
  if ( v6 <= *((_DWORD *)this + 133) )
  {
    *(_QWORD *)(*v4 + 8LL * *((unsigned int *)this + 134)) = a2;
    *((_DWORD *)this + 134) = v6;
    goto LABEL_4;
  }
  v8 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 512, 8u, (__int64)v4, &v12);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
    goto LABEL_9;
  }
LABEL_4:
  CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)v12 + 8));
  return v7;
}
