/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1801CEB80
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x1801CDCAC (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _Init_thread_footer @ 0x1800910E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091150 (_Init_thread_header.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF384 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CImmersiveWindowManager::RuntimeClassInitialize(
        CImmersiveWindowManager *this,
        struct IIAMServiceProvider *a2)
{
  int v4; // esi
  struct IIAMServiceProvider *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180653384 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180653384);
    if ( dword_180653384 == -1 )
    {
      xmmword_180652730 = IID_IApplicationActivationHistory;
      xmmword_180652740 = 0LL;
      xmmword_180652750 = (__int128)IID_IImmersiveWindowManager;
      xmmword_180652760 = 0LL;
      Init_thread_footer(&dword_180653384);
    }
  }
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveWindowManager *)((char *)this + 72),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_180652730,
         2LL);
  if ( v4 >= 0 && *((struct IIAMServiceProvider **)this + 32) != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    v6 = (struct IIAMServiceProvider *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  return (unsigned int)v4;
}
