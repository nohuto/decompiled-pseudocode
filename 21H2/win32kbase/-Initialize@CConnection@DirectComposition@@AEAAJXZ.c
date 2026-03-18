/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C005ADDC
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C005ACC4 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0009F64 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0045200 (Win32AllocPoolNonPaged.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C00C4EFC (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *v1; // rdi
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rsi
  NTSTATUS v4; // ebx
  struct _ERESOURCE *v5; // rax

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(0x68uLL, 1935885124);
  v3 = v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  memset(v2, 0, sizeof(struct _ERESOURCE));
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
LABEL_8:
    Win32FreePool((char *)v3);
    return (unsigned int)v4;
  }
  *((_QWORD *)v1 + 1) = v3;
  v4 = DirectComposition::CChannelGroup::Initialize((DirectComposition::CConnection *)((char *)v1 + 16));
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(0x68uLL, 1935885124);
  v3 = v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  memset(v5, 0, sizeof(struct _ERESOURCE));
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
    goto LABEL_8;
  *((_QWORD *)v1 + 31) = v3;
  v4 = DirectComposition::CSystemChannel::Create(v1, (struct DirectComposition::CSystemChannel **)v1 + 19);
  if ( v4 >= 0 )
    return (unsigned int)DxgkGetSessionTokenManager((char *)v1 + 256);
  return (unsigned int)v4;
}
