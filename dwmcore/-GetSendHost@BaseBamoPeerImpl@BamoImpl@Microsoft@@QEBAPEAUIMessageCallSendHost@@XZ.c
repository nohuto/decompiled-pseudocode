/*
 * XREFs of ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800ACFF4
 * Callers:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800ACE04 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801DDFA8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801E0248 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x1801E1F84 (-UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ.c)
 * Callees:
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1801B694C (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

struct IMessageCallSendHost *__fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v4; // rax

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  if ( !*((_BYTE *)this + 48) )
    return *(struct IMessageCallSendHost **)(*(_QWORD *)(v1 + 32) + 72LL);
  v4 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v1 + 32));
  if ( v4 )
    return (struct Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)v4 + 16);
  return (struct IMessageCallSendHost *)v2;
}
