void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2, bool a3)
{
  unsigned int v6; // edx
  unsigned int *v7; // rbx

  if ( (struct CChannelContext *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 8) + 16LL))((char *)this + 64) == a2 )
  {
    v6 = *((_DWORD *)this + 75);
    v7 = (unsigned int *)((char *)this + 296);
    if ( v6 && *v7 )
      CMessageConversationHost::FlushCallbackId(*(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1240LL), v6, *v7);
    *v7 = 0;
  }
  CResource::DetachFromChannel(this, a2, a3);
}
