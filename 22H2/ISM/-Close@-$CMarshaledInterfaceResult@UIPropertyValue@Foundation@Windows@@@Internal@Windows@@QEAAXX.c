/*
 * XREFs of ?Close@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAXXZ @ 0x1801132AC
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180116AC0 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVector@PEAUHSTRING__@@@Collections@Foundatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18001BA10 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z @ 0x180047700 (--4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1CMarshaledInterface@@QEAA@XZ @ 0x180111444 (--1CMarshaledInterface@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>::Close(__int64 a1)
{
  __int64 *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&v7);
  Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&v5);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  v2 = (__int64 *)(a1 + 16);
  v3 = 0LL;
  if ( &v6 != (__int64 *)(a1 + 16) )
  {
    v4 = *v2;
    *v2 = 0LL;
    v3 = v4;
  }
  v6 = v5;
  v5 = v3;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
  CMarshaledInterface::operator=(&v7, (char *)(a1 + 24));
  ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 32));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v5);
  CMarshaledInterface::~CMarshaledInterface((CMarshaledInterface *)&v7);
}
