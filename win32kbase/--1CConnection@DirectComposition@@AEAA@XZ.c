void __fastcall DirectComposition::CConnection::~CConnection(DirectComposition::CConnection *this)
{
  __int64 v2; // rcx
  DirectComposition::CChannel *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rdx

  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
  if ( v3 )
    DirectComposition::CChannel::Release(v3);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    v7 = (void *)*((_QWORD *)this + 1);
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  }
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  `vector destructor iterator'(
    (char *)this + 392,
    464LL,
    300LL,
    (void (__fastcall *)(char *))DirectComposition::CConnection::CFrameStats::~CFrameStats);
  v6 = (void *)*((_QWORD *)this + 26);
  if ( v6 )
    ObfDereferenceObject(v6);
  DirectComposition::CChannelGroup::~CChannelGroup((DirectComposition::CConnection *)((char *)this + 16));
}
