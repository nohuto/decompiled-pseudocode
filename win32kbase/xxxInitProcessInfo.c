/*
 * XREFs of xxxInitProcessInfo @ 0x1C0070EFC
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C006F63C (CitProcessCallout.c)
 *     ?SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C006F7F4 (-SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C006F8F8 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C006F9B4 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C0070B50 (-GetSpriteFillColor@@YAKXZ.c)
 *     GetProcessLuid @ 0x1C00727F0 (GetProcessLuid.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C00BB514 (IszzzCalcStartCursorHideSupported.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1C00BD94C (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00DC8F8 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  int v5; // edi
  __int64 result; // rax
  NTSTATUS v11; // eax
  int v12; // r8d
  NTSTATUS v13; // esi
  int v14; // ecx
  int v15; // edx
  int SpriteFillColor; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int Win32KFilterSet; // eax
  int v22; // ecx
  _BYTE v23[4]; // [rsp+60h] [rbp-20h] BYREF
  PVOID v24; // [rsp+64h] [rbp-1Ch] BYREF
  int v25; // [rsp+6Ch] [rbp-14h]
  PVOID TokenInformation; // [rsp+70h] [rbp-10h] BYREF
  PVOID P; // [rsp+78h] [rbp-8h] BYREF
  char v28; // [rsp+B0h] [rbp+30h] BYREF

  v5 = 0;
  v24 = 0LL;
  TokenInformation = 0LL;
  P = 0LL;
  if ( (*((_DWORD *)a1 + 3) & 0x8000) != 0 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = xxxCheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v28);
    *((_DWORD *)a1 + 3) |= 0x8000u;
    *((_QWORD *)a1 + 37) = 0LL;
    *((_QWORD *)a1 + 38) = 0LL;
    *((_DWORD *)a1 + 78) = 0;
    *((_DWORD *)a1 + 169) = 3;
    *((_DWORD *)a1 + 170) = 3;
    HIDWORD(TokenInformation) = a4;
    v11 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    v13 = v11;
    if ( UIPrivelegeIsolation::fEnforce )
    {
      if ( v11 < 0 || (v14 = HIDWORD(TokenInformation)) != 0 && (_DWORD)TokenInformation != 4096 )
      {
        v13 = -1073741823;
LABEL_54:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v28);
        return (unsigned int)v13;
      }
      *((_DWORD *)a1 + 216) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 217) = v14;
    }
    v15 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qDD(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        18,
        12,
        (__int64)&WPP_55b8abaf247d38ec9a9d8de03bae7632_Traceguids,
        *(_QWORD *)a1,
        *((_DWORD *)a1 + 216),
        *((_DWORD *)a1 + 217));
    }
    if ( v13 >= 0 )
      v13 = SeQueryInformationToken(Token, TokenUIAccess, &v24);
    if ( (_DWORD)v24 )
    {
      *((_DWORD *)a1 + 3) |= 0x80080000;
      *((_DWORD *)a1 + 203) |= 2u;
    }
    SetProcessType((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 203) ^= (*((_DWORD *)a1 + 203) ^ (a5 << 7)) & 0x80;
    if ( v13 >= 0 )
    {
      v13 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
      if ( v13 >= 0 )
      {
        if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, (char *)&v24 + 4) >= 0 )
          *((_DWORD *)a1 + 218) = HIDWORD(v24);
        else
          *((_DWORD *)a1 + 218) = 0;
        ExFreePoolWithTag(P, 0);
        P = 0LL;
        SpriteFillColor = GetSpriteFillColor();
        v17 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 269) = SpriteFillColor;
        if ( PsGetProcessWow64Process(v17) )
          *((_DWORD *)a1 + 3) |= 0x80u;
        *((_QWORD *)a1 + 111) = -1LL;
        *((_QWORD *)a1 + 112) = -1LL;
        v18 = *((_DWORD *)a1 + 3);
        if ( (v18 & 0x20) == 0 )
        {
          *((_DWORD *)a1 + 3) = v18 | 0x22;
          gdwPUDFlags |= 0x8000000u;
          if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
          {
            CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)v23);
            if ( qword_1C02D65A8 )
              qword_1C02D65A8(0LL, 0LL);
            --gdwDeferWinEvent;
          }
        }
        *((_QWORD *)a1 + 46) = gppiList;
        gppiList = (__int64)a1;
        if ( qword_1C02D76C0 )
          qword_1C02D76C0(a1);
        GetProcessLuid(0LL, (PLUID)((char *)a1 + 772));
        *((_DWORD *)a1 + 98) = gcSysExpunge;
        *((_DWORD *)a1 + 188) = 0;
        CitProcessCallout((__int64)a1, 1);
        *((_DWORD *)a1 + 203) &= ~0x8000u;
        v19 = *((_DWORD *)a1 + 203) & 0xFFFEFFFF;
        *((_DWORD *)a1 + 203) = v19;
        if ( (v19 & 0x60000) != 0 )
        {
          v25 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3964LL);
        }
        v20 = *((_DWORD *)a1 + 203) & 0xFFBFFFFF;
        *((_WORD *)a1 + 142) = 96;
        *((_DWORD *)a1 + 203) = v20;
        *((_DWORD *)a1 + 70) = 24592;
        if ( (v20 & 0x30) == 0x20 )
          *((_DWORD *)a1 + 203) = v20 | 0x100000;
        Win32KFilterSet = PsGetWin32KFilterSet();
        v22 = 0;
        if ( Win32KFilterSet == 5 )
          v22 = 0x1000000;
        *((_DWORD *)a1 + 203) = v22 & 0xF7FFFFFF | *((_DWORD *)a1 + 203) & 0xF6FFFFFF;
        if ( *((_WORD *)gpsi + 3499) )
        {
          if ( qword_1C02D6580 && (int)qword_1C02D6580() >= 0 )
          {
            if ( qword_1C02D6588 )
              qword_1C02D6588(a1);
          }
          else
          {
            *((_WORD *)a1 + 142) = *((_WORD *)gpsi + 3499);
          }
        }
        if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage() )
        {
          if ( gbImInitialized )
            v5 = 1;
          *((_DWORD *)a1 + 72) = *((_DWORD *)a1 + 72) & 0xFFFFFFEF | (16 * v5);
        }
      }
    }
    goto LABEL_54;
  }
  return result;
}
