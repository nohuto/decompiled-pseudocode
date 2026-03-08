/*
 * XREFs of LdrpOpenKey @ 0x14084370C
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x14039C3E0 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14039C4A0 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140843474 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadLanguageConfigList @ 0x140843624 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 */

NTSTATUS __fastcall LdrpOpenKey(UNICODE_STRING *a1, void *a2, __int64 a3, HANDLE *a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a1;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a4 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a4, 0x20019u, &v5);
}
