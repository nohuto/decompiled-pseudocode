__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *v1; // rsi
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS SessionTokenManager; // ebx
  struct _ERESOURCE *v5; // rax

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              0x73634344u);
  v3 = v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  memset(v2, 0, sizeof(struct _ERESOURCE));
  SessionTokenManager = ExInitializeResourceLite(v3);
  if ( SessionTokenManager < 0 )
  {
LABEL_7:
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    return (unsigned int)SessionTokenManager;
  }
  *((_QWORD *)v1 + 1) = v3;
  SessionTokenManager = DirectComposition::CChannelGroup::Initialize((DirectComposition::CConnection *)((char *)v1 + 16));
  if ( SessionTokenManager >= 0 )
  {
    v5 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                gpLeakTrackingAllocator,
                                68LL,
                                0x68uLL,
                                0x73634344u);
    v3 = v5;
    if ( v5 )
    {
      memset(v5, 0, sizeof(struct _ERESOURCE));
      SessionTokenManager = DirectComposition::CSystemChannel::Create(
                              v1,
                              (struct DirectComposition::CSystemChannel **)v1 + 19);
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = DxgkGetSessionTokenManager((char *)v1 + 264);
      goto LABEL_7;
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)SessionTokenManager;
}
