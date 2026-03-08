/*
 * XREFs of ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1C001F00C
 * Callers:
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C01FDDB0 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, void **a3)
{
  void *v3; // rbx
  void *v5; // rcx
  ULONG Length; // ebp
  void *v9; // r14
  NTSTATUS v10; // eax
  int v11; // edi
  void *v12; // rcx
  ULONG ResultLength; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v5 = *a3;
  *a3 = 0LL;
  Length = 1024;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  while ( 1 )
  {
    v9 = v3;
    v3 = (void *)operator new[](Length, 0x4D677844u, 256LL);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( !v3 )
      break;
    ResultLength = 0;
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v3, Length, &ResultLength);
    Length = ResultLength;
    v11 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      goto LABEL_8;
  }
  WdLogSingleEntry1(2LL, Length);
  v11 = -1073741801;
LABEL_8:
  if ( v11 >= 0 )
  {
    v12 = *a3;
    *a3 = v3;
    if ( !v12 )
      return (unsigned int)v11;
    goto LABEL_11;
  }
  if ( v3 )
  {
    v12 = v3;
LABEL_11:
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)v11;
}
