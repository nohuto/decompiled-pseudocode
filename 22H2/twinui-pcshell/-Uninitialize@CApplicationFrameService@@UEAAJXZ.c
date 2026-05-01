/*
 * XREFs of ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x1801E6A80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x1801E6A04 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationFrameService::Uninitialize(CApplicationFrameService *this)
{
  CCrashDetector::StopMonitoring((CApplicationFrameService *)((char *)this + 160));
  if ( *((_DWORD *)this + 38) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 56LL))(*((_QWORD *)this + 17));
    *((_DWORD *)this + 38) = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  return 0LL;
}
