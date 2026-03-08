/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C01D9994
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D9870 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(__int64 a1, unsigned int a2, bool *a3, bool *a4, char *a5)
{
  char v5; // di
  __int64 v8; // rbx
  int IsMonitorVirtualModeDisabled; // eax
  __int64 v10; // rsi
  char v11; // al
  bool v12; // al
  char *v13; // rcx
  char v15; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  if ( a1 && a2 != -1 && a3 && a4 )
  {
    v8 = *(_QWORD *)(a1 + 2920);
    if ( v8 )
    {
      v15 = 0;
      IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(a1, a2, &v15);
      v10 = IsMonitorVirtualModeDisabled;
      if ( IsMonitorVirtualModeDisabled == -1073741632 )
      {
        v11 = 0;
        LODWORD(v10) = 0;
      }
      else
      {
        if ( IsMonitorVirtualModeDisabled < 0 )
        {
          WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v10;
        }
        v11 = v15;
      }
      if ( v11 )
      {
        *a3 = 1;
        v12 = 1;
      }
      else
      {
        *a3 = *(_BYTE *)(v8 + 289) == 0;
        v12 = *(_BYTE *)(v8 + 290) == 0;
      }
      v13 = a5;
      *a4 = v12;
      if ( v13 )
      {
        if ( *a3 || (*(_DWORD *)(v8 + 24) & 0x20) == 0 )
          v5 = 1;
        *v13 = v5;
      }
      return (unsigned int)v10;
    }
    WdLogSingleEntry1(2LL, 9698LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      9698LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
