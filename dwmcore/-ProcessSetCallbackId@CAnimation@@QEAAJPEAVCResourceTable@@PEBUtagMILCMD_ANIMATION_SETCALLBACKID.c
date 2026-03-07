__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETCALLBACKID *a3)
{
  _DWORD *v3; // rbx
  __int64 v6; // rdx
  CComposition *v8; // rcx
  int AttachedChannel; // eax
  __int64 v10; // rcx
  struct CChannelContext *v11; // rbx
  unsigned int v12; // esi
  struct CChannelContext *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v3 = (_DWORD *)((char *)this + 296);
  v6 = *((unsigned int *)this + 75);
  if ( (_DWORD)v6 && *v3 )
    CMessageConversationHost::FlushCallbackId(
      *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1240LL),
      v6,
      (unsigned int)*v3);
  v8 = (CComposition *)*((_QWORD *)this + 2);
  *v3 = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v8, *((_DWORD *)a2 + 12), &v14);
  v11 = v14;
  v12 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, AttachedChannel, 0x1F9u, 0LL);
  else
    *((_DWORD *)this + 75) = *((_DWORD *)v14 + 20);
  if ( v11 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v11);
  return v12;
}
