/*
 * XREFs of xxxInitProcessInfo @ 0x1C0036A38
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 *     ?SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C00364A4 (-SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C00365D0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C003668C (-GetSpriteFillColor@@YAKXZ.c)
 *     GetProcessLuid @ 0x1C0037670 (GetProcessLuid.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C003772C (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C00AB9E4 (IszzzCalcStartCursorHideSupported.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1C00ADC54 (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00CFFF4 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  int v5; // edi
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // esi
  int v13; // ecx
  char v14; // dl
  int SpriteFillColor; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int Win32KFilterSet; // eax
  int v21; // ecx
  _BYTE v22[4]; // [rsp+60h] [rbp-20h] BYREF
  PVOID v23; // [rsp+64h] [rbp-1Ch] BYREF
  int v24; // [rsp+6Ch] [rbp-14h]
  PVOID TokenInformation; // [rsp+70h] [rbp-10h] BYREF
  PVOID P; // [rsp+78h] [rbp-8h] BYREF
  char v27; // [rsp+B0h] [rbp+30h] BYREF

  v5 = 0;
  v23 = 0LL;
  TokenInformation = 0LL;
  P = 0LL;
  if ( (*((_DWORD *)a1 + 3) & 0x8000) != 0 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = xxxCheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v27);
    *((_DWORD *)a1 + 3) |= 0x8000u;
    *((_QWORD *)a1 + 37) = 0LL;
    *((_QWORD *)a1 + 38) = 0LL;
    *((_DWORD *)a1 + 78) = 0;
    *((_DWORD *)a1 + 169) = 3;
    *((_DWORD *)a1 + 170) = 3;
    HIDWORD(TokenInformation) = a4;
    v11 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    v12 = v11;
    if ( UIPrivelegeIsolation::fEnforce )
    {
      if ( v11 < 0 || (v13 = HIDWORD(TokenInformation)) != 0 && (_DWORD)TokenInformation != 4096 )
      {
        v12 = -1073741823;
LABEL_54:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v27);
        return (unsigned int)v12;
      }
      *((_DWORD *)a1 + 222) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 223) = v13;
    }
    v14 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v14 = 0;
    }
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v14,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0xEu,
        0xCu,
        (__int64)&WPP_58e5e48e7cdb3be4103bc9d4c641fa22_Traceguids,
        *(_QWORD *)a1,
        *((_DWORD *)a1 + 222),
        *((_DWORD *)a1 + 223));
    if ( v12 >= 0 )
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v23);
    if ( (_DWORD)v23 )
    {
      *((_DWORD *)a1 + 3) |= 0x80080000;
      *((_DWORD *)a1 + 204) |= 2u;
    }
    SetProcessType((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 204) ^= (*((_DWORD *)a1 + 204) ^ (a5 << 7)) & 0x80;
    if ( v12 >= 0 )
    {
      v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
      if ( v12 >= 0 )
      {
        if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, (char *)&v23 + 4) >= 0 )
          *((_DWORD *)a1 + 224) = HIDWORD(v23);
        else
          *((_DWORD *)a1 + 224) = 0;
        ExFreePoolWithTag(P, 0);
        P = 0LL;
        SpriteFillColor = GetSpriteFillColor();
        v16 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 275) = SpriteFillColor;
        if ( PsGetProcessWow64Process(v16) )
          *((_DWORD *)a1 + 3) |= 0x80u;
        *((_QWORD *)a1 + 114) = -1LL;
        *((_QWORD *)a1 + 115) = -1LL;
        v17 = *((_DWORD *)a1 + 3);
        if ( (v17 & 0x20) == 0 )
        {
          *((_DWORD *)a1 + 3) = v17 | 0x22;
          gdwPUDFlags |= 0x8000000u;
          if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
          {
            CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)v22);
            if ( qword_1C0295430 )
              qword_1C0295430(0LL, 0LL);
            --gdwDeferWinEvent;
          }
        }
        *((_QWORD *)a1 + 46) = gppiList;
        gppiList = (__int64)a1;
        if ( qword_1C0296548 )
          qword_1C0296548(a1);
        GetProcessLuid(0LL, (PLUID)((char *)a1 + 772));
        *((_DWORD *)a1 + 98) = gcSysExpunge;
        *((_DWORD *)a1 + 188) = 0;
        CitProcessCallout((__int64)a1, 1);
        *((_DWORD *)a1 + 204) &= ~0x8000u;
        v18 = *((_DWORD *)a1 + 204) & 0xFFFEFFFF;
        *((_DWORD *)a1 + 204) = v18;
        if ( (v18 & 0x60000) != 0 )
        {
          v24 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3957LL);
        }
        v19 = *((_DWORD *)a1 + 204) & 0xFFBFFFFF;
        *((_WORD *)a1 + 142) = 96;
        *((_DWORD *)a1 + 204) = v19;
        *((_DWORD *)a1 + 70) = 24592;
        if ( (v19 & 0x30) == 0x20 )
          *((_DWORD *)a1 + 204) = v19 | 0x100000;
        Win32KFilterSet = PsGetWin32KFilterSet();
        v21 = 0;
        if ( Win32KFilterSet == 5 )
          v21 = 0x1000000;
        *((_DWORD *)a1 + 204) = v21 & 0xF7FFFFFF | *((_DWORD *)a1 + 204) & 0xF6FFFFFF;
        if ( *((_WORD *)gpsi + 3499) )
        {
          if ( qword_1C0295408 && (int)qword_1C0295408() >= 0 )
          {
            if ( qword_1C0295410 )
              qword_1C0295410(a1);
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
