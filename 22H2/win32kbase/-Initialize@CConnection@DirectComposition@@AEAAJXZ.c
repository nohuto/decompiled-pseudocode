/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00ADAF8
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00ADA00 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C00ADC34 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C00ADCC4 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *v1; // rbp
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rsi
  NTSTATUS SessionTokenManager; // ebx
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rdi
  int v7; // eax

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( !v3 )
    return (unsigned int)-1073741801;
  SessionTokenManager = ExInitializeResourceLite(v3);
  if ( SessionTokenManager < 0 )
  {
LABEL_14:
    if ( !v3 )
      return (unsigned int)SessionTokenManager;
    Win32FreePool((__int64)v3);
    v6 = 0LL;
    goto LABEL_20;
  }
  *((_QWORD *)v1 + 1) = v3;
  v3 = 0LL;
  SessionTokenManager = DirectComposition::CChannelGroup::Initialize((DirectComposition::CConnection *)((char *)v1 + 16));
  if ( SessionTokenManager < 0 )
    return (unsigned int)SessionTokenManager;
  v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v6 = v5;
  if ( v5 )
    memset(v5, 0, sizeof(struct _ERESOURCE));
  else
    v6 = 0LL;
  v7 = SessionTokenManager;
  if ( !v6 )
    v7 = -1073741801;
  SessionTokenManager = v7;
  if ( v7 >= 0 )
  {
    SessionTokenManager = ExInitializeResourceLite(v6);
    if ( SessionTokenManager >= 0 )
    {
      *((_QWORD *)v1 + 30) = v6;
      SessionTokenManager = DirectComposition::CSystemChannel::Create(
                              v1,
                              (struct DirectComposition::CSystemChannel **)v1 + 19);
      if ( SessionTokenManager < 0 )
        return (unsigned int)SessionTokenManager;
      SessionTokenManager = DxgkGetSessionTokenManager((char *)v1 + 248);
      goto LABEL_14;
    }
  }
LABEL_20:
  if ( v6 )
    Win32FreePool((__int64)v6);
  return (unsigned int)SessionTokenManager;
}
