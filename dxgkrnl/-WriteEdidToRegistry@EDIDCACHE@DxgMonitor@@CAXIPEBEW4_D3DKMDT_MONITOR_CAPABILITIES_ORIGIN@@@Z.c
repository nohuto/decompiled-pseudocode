/*
 * XREFs of ?WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C03C13A0
 * Callers:
 *     ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0217AC0 (-AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z @ 0x1C03C1044 (-OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z.c)
 */

void __fastcall DxgMonitor::EDIDCACHE::WriteEdidToRegistry(
        unsigned int a1,
        unsigned __int8 *a2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a3)
{
  __int64 v4; // rdi
  int v5; // eax
  const WCHAR *v6; // rdx
  NTSTATUS v7; // eax
  const WCHAR *v8; // r9
  PCWSTR Path; // [rsp+50h] [rbp-18h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  v10 = a3;
  Path = 0LL;
  v11 = 0;
  v4 = a1;
  v5 = DxgMonitor::EDIDCACHE::OpenEdidRegistryForTarget(a1, 0xF003Fu, (void **)&Path, &v11);
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(3LL, v5, (unsigned int)v4);
    return;
  }
  v6 = Path;
  if ( !Path )
  {
    WdLogSingleEntry1(1LL, 154LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"InternalMonEdidHandle", 154LL, 0LL, 0LL, 0LL, 0LL);
    v6 = Path;
  }
  v7 = RtlWriteRegistryValue(0x40000000u, v6, L"EDID", 3u, a2, 0x80u);
  if ( v7 < 0 )
  {
    v8 = L"EDID";
LABEL_9:
    WdLogSingleEntry3(3LL, v7, v4, v8);
    goto LABEL_10;
  }
  v7 = RtlWriteRegistryValue(0x40000000u, Path, L"Origin", 4u, &v10, 4u);
  if ( v7 < 0 )
  {
    v8 = L"Origin";
    goto LABEL_9;
  }
LABEL_10:
  ZwClose((HANDLE)Path);
}
