/*
 * XREFs of ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1801204D4
 * Callers:
 *     _lambda_ca5215f49b461d52db1d3f757407fb7b_::operator() @ 0x18011B950 (_lambda_ca5215f49b461d52db1d3f757407fb7b_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_InitCoro$1 @ 0x18011FA3C (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_I.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+148h] [rbp+10h] BYREF

  v4 = operator new(0x108uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__InitCoro_1(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
