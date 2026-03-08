/*
 * XREFs of ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C02FE280
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01C1E30 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FDEE0 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FDFD8 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01C2134 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDwordToParticularRegValue(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        const struct _UNICODE_STRING *a4,
        const unsigned __int16 *ValueData)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdi
  const wchar_t *v9; // r9
  HANDLE v10; // r8
  NTSTATUS v11; // eax
  void *v12; // rdx
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-18h] BYREF
  PCWSTR Path; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+38h] BYREF
  int v20; // [rsp+ACh] [rbp+3Ch]

  v20 = HIDWORD(a4);
  Handle = 0LL;
  KeyHandle = 0LL;
  Path = 0LL;
  v19 = 0;
  v7 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, this, 0LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = Handle;
    if ( !Handle )
    {
      WdLogSingleEntry1(1LL, 601LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKeyRootHandle", 601LL, 0LL, 0LL, 0LL, 0LL);
      v10 = Handle;
    }
    v11 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v10, a2, &v19);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v12 = KeyHandle;
      if ( !KeyHandle )
      {
        WdLogSingleEntry1(1LL, 616LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PerMonSettingsKeyHandle", 616LL, 0LL, 0LL, 0LL, 0LL);
        v12 = KeyHandle;
      }
      if ( a3->Length )
      {
        v13 = OpenRegistrySubkey((PHANDLE)&Path, 0xF003Fu, v12, a3, &v19);
        v8 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry1(2LL, v13);
          v9 = L"Unable to open/create HKey subkey for monitor set (Status = 0x%I64x)";
          goto LABEL_16;
        }
        v12 = (void *)Path;
        if ( !Path )
        {
          WdLogSingleEntry1(1LL, 633LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorIdKeyHandle", 633LL, 0LL, 0LL, 0LL, 0LL);
          v12 = (void *)Path;
        }
      }
      v14 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)v12, L"DpiValue", 4u, &ValueData, 4u);
      v8 = v14;
      if ( v14 >= 0 )
        goto LABEL_17;
      WdLogSingleEntry1(2LL, v14);
      v9 = L"Failed to write DPI value to HKey subkey. (Status = 0x%I64x)";
    }
    else
    {
      WdLogSingleEntry1(2LL, v11);
      v9 = L"Unable to open/create HKey subkey (Status = 0x%I64x)";
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    v9 = L"Failed to open HKey root (Status = 0x%I64x)";
  }
LABEL_16:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v8;
}
