/*
 * XREFs of ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C03CA064
 * Callers:
 *     ?GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z @ 0x1C0214634 (-GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x1C03C9E7C (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::_GetAppOverrideKey(
        __int64 **this,
        const struct _UNICODE_STRING *a2,
        unsigned __int64 *a3)
{
  WCHAR *v6; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  WCHAR *v9; // rdi
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64 *, __int64, _QWORD, WCHAR *); // rax
  NTSTATUS appended; // edi
  unsigned int Length; // esi
  unsigned __int64 v14; // rax
  ULONG HashValue[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 130;
  while ( 1 )
  {
    v7 *= 2;
    v8 = 2LL * v7;
    v9 = v6;
    if ( !is_mul_ok(v7, 2uLL) )
      v8 = -1LL;
    v6 = (WCHAR *)operator new[](v8, 0x4D677844u, 256LL);
    if ( v9 )
      operator delete(v9);
    if ( !v6 )
      break;
    v10 = **this;
    v11 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, WCHAR *))(v10 + 96);
    LOBYTE(v10) = 1;
    appended = v11(*this, v10, v7, v6);
    if ( appended >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v6);
      DestinationString.MaximumLength = 2 * v7 - 2;
      appended = RtlAppendUnicodeStringToString(&DestinationString, a2);
    }
    if ( appended != -2147483643 && appended != -1073741789 )
    {
      if ( appended < 0 )
      {
        WdLogSingleEntry2(2LL, this, appended);
LABEL_22:
        operator delete(v6);
        return (unsigned int)appended;
      }
      *(_QWORD *)HashValue = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v6);
      Length = DestinationString.Length;
      DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
      appended = RtlHashUnicodeString(&DestinationString, 1u, 0, HashValue);
      if ( appended < 0 )
        WdLogSingleEntry0(1LL);
      if ( Length <= 2 )
      {
        if ( appended < 0 )
          goto LABEL_22;
      }
      else
      {
        DestinationString.MaximumLength -= DestinationString.Length;
        v14 = (unsigned __int64)DestinationString.Length >> 1;
        DestinationString.Length = Length - DestinationString.Length;
        DestinationString.Buffer = &v6[v14];
        appended = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue[1]);
        if ( appended < 0 )
        {
          WdLogSingleEntry0(1LL);
          goto LABEL_22;
        }
      }
      *a3 = *(_QWORD *)HashValue;
      goto LABEL_22;
    }
    appended = -1073741789;
    if ( v7 >= 0x410 )
      goto LABEL_22;
  }
  WdLogSingleEntry0(6LL);
  return (unsigned int)-1073741801;
}
