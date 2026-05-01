/*
 * XREFs of _lambda_ca5215f49b461d52db1d3f757407fb7b_::operator() @ 0x18011BAC0
 * Callers:
 *     wistd::__function::__func__lambda_ca5215f49b461d52db1d3f757407fb7b__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18011BBC0 (wistd--__function--__func__lambda_ca5215f49b461d52db1d3f757407fb7b__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x180120644 (-BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 */

char __fastcall lambda_ca5215f49b461d52db1d3f757407fb7b_::operator()(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  char result; // al
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  try
  {
    result = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync();
  }
  catch ( ... )
  {
    v2 = (_DWORD *)winrt::to_hresult(&v6);
    return CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[60],winrt::hresult,unsigned short const (&)[1]>(
             v3,
             v2,
             v4);
  }
  return result;
}
