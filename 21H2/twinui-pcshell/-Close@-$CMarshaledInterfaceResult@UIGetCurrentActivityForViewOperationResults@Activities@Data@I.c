/*
 * XREFs of ?Close@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAXXZ @ 0x1802A0D3C
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1802A3BF0 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGetCurrentActivityForViewOper.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180086554 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008CD70 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800C7308 (--4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7878 (--1-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Close(
        __int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v3);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v3, (__int64 *)(a1 + 16));
  CMarshaledInterface::operator=(&v4, (__int64 *)(a1 + 24));
  ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 32));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  return Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>(&v4);
}
