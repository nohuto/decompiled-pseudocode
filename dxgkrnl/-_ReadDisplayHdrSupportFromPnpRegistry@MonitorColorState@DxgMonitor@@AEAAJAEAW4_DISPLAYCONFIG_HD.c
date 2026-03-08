/*
 * XREFs of ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1C03C99C0
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217DE8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _wcsnicmp_0 @ 0x1C00243F2 (_wcsnicmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z @ 0x1C03C9954 (-_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
        __int64 **this,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *a2,
        bool *a3)
{
  DxgMonitor::MonitorColorState *v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  _DWORD *v13; // rbx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // eax
  int v21; // r13d
  unsigned int v22; // r15d
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v23; // rdi
  wchar_t **v24; // r14
  int v25; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v29; // [rsp+40h] [rbp-29h]
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v30; // [rsp+48h] [rbp-21h]
  DxgMonitor::MonitorColorState *v31; // [rsp+50h] [rbp-19h]
  bool *v32; // [rsp+58h] [rbp-11h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  __int128 KeyValueInformation; // [rsp+70h] [rbp+7h] BYREF

  *(_DWORD *)a2 = 0;
  *a3 = 0;
  v3 = (DxgMonitor::MonitorColorState *)this;
  v31 = (DxgMonitor::MonitorColorState *)this;
  v4 = this[1];
  v32 = a3;
  v30 = a2;
  LOBYTE(a2) = 1;
  v5 = *v4;
  KeyHandle = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *, __int64, HANDLE *))(v5 + 16))(
         v4,
         a2,
         2LL,
         &KeyHandle);
  v11 = v6;
  if ( v6 < 0 )
  {
    v12 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v3;
    *(_QWORD *)(v12 + 32) = v11;
    goto LABEL_34;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DisplayHdrLevel");
  ResultLength = 0;
  v13 = 0LL;
  KeyValueInformation = 0LL;
  v14 = -1073741772;
  LODWORD(v11) = ZwQueryValueKey(
                   KeyHandle,
                   &DestinationString,
                   KeyValuePartialInformation,
                   &KeyValueInformation,
                   0x10u,
                   &ResultLength);
  v29 = (unsigned int)v11;
  if ( (_DWORD)v11 != -1073741772 )
  {
    if ( (_DWORD)v11 == -1073741789 || (_DWORD)v11 == -2147483643 )
    {
      v13 = (_DWORD *)operator new[](ResultLength, 0x4D677844u, 256LL);
      if ( !v13 )
      {
        WdLogSingleEntry0(2LL);
        v14 = -1073741801;
        goto LABEL_31;
      }
      LODWORD(v11) = ZwQueryValueKey(
                       KeyHandle,
                       &DestinationString,
                       KeyValuePartialInformation,
                       v13,
                       ResultLength,
                       &ResultLength);
      v29 = (unsigned int)v11;
    }
    if ( (int)v11 >= 0 )
    {
      v20 = v13[1];
      if ( v20 != 7 )
      {
        WdLogSingleEntry2(2LL, v3, v20);
        LODWORD(v11) = -1073741788;
        goto LABEL_32;
      }
      v21 = v13[2] >> 1;
      if ( (unsigned int)(v21 - 37) <= 0x95 && v21 - 1 == 37 * ((v21 - 1) / 0x25u) )
      {
        v22 = 0;
        if ( v21 != 37 )
        {
          v23 = v30;
          do
          {
            v24 = &off_1C008DE20;
            while ( wcsnicmp_0((const wchar_t *)v13 + v22 + 6, *v24, 0x25uLL) )
            {
              v24 += 2;
              if ( v24 == (wchar_t **)&_guard_eh_cont_table )
                goto LABEL_23;
            }
            *(_DWORD *)v23 |= *((_DWORD *)v24 + 2);
LABEL_23:
            if ( (_DWORD *)((char *)v13 + 2 * v22 + 12) )
              v25 = wcsnlen((const wchar_t *)v13 + v22 + 6, v21 - v22);
            else
              v25 = 0;
            v22 += v25 + 1;
          }
          while ( v22 < v21 - 37 );
          LODWORD(v11) = v29;
          v3 = v31;
        }
        DxgMonitor::MonitorColorState::_MarkDisplayHDRReadInMonitorStore(v3, v32);
        goto LABEL_32;
      }
      LODWORD(v11) = -1073741823;
      v19 = -1073741823LL;
    }
    else
    {
      v19 = (int)v11;
    }
    WdLogSingleEntry2(2LL, v3, v19);
    goto LABEL_32;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = v3;
LABEL_31:
  LODWORD(v11) = v14;
LABEL_32:
  if ( v13 )
    operator delete(v13);
LABEL_34:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v11;
}
