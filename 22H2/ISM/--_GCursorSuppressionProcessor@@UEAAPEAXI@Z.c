/*
 * XREFs of ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x180137FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334A8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@SpatialInteractions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18007AAB8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@S.c)
 */

CursorSuppressionProcessor *__fastcall CursorSuppressionProcessor::`scalar deleting destructor'(
        CursorSuppressionProcessor *this,
        char a2)
{
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  volatile int *v5; // rdx

  v4 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    *((_QWORD *)this + 10) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v4);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v5);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
