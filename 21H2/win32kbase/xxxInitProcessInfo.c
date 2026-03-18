/*
 * XREFs of xxxInitProcessInfo @ 0x1C00C7AC8
 * Callers:
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 *     GetProcessLuid @ 0x1C0018FF0 (GetProcessLuid.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C0046C98 (-GetSpriteFillColor@@YAKXZ.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C005A184 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x1C00998A8 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     xxxSetProcessInitState @ 0x1C0099980 (xxxSetProcessInitState.c)
 *     ApiSetEditionPopProcessLaunchForegroundPolicy @ 0x1C00A2AB8 (ApiSetEditionPopProcessLaunchForegroundPolicy.c)
 *     SetAppStarting @ 0x1C00A85A0 (SetAppStarting.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C00A8AFC (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  bool v6; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  int SpriteFillColor; // eax
  __int64 v17; // rcx
  void *v18; // rcx
  HANDLE ProcessId; // rax
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  int v23; // eax
  const char *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // ecx
  int Win32KFilterSet; // eax
  int v30; // ecx
  int v31; // [rsp+20h] [rbp-60h]
  int v32; // [rsp+28h] [rbp-58h]
  int v33; // [rsp+30h] [rbp-50h]
  int v34; // [rsp+38h] [rbp-48h]
  PVOID v35; // [rsp+60h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp-18h] BYREF
  PVOID P; // [rsp+70h] [rbp-10h] BYREF
  int v38; // [rsp+A0h] [rbp+20h] BYREF

  v6 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v35) = 0;
  TokenInformation = 0LL;
  P = 0LL;
  v38 = 0;
  if ( !v6 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = CheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x8000u;
    *((_QWORD *)a1 + 37) = 0LL;
    *((_QWORD *)a1 + 38) = 0LL;
    *((_DWORD *)a1 + 78) = 0;
    *((_DWORD *)a1 + 171) = 3;
    *((_DWORD *)a1 + 172) = 3;
    HIDWORD(TokenInformation) = a4;
    v11 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    v12 = v11;
    if ( UIPrivelegeIsolation::fEnforce )
    {
      if ( v11 < 0 )
        return 3221225473LL;
      v13 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) )
      {
        if ( (_DWORD)TokenInformation != 4096 )
          return 3221225473LL;
      }
      *((_DWORD *)a1 + 220) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 221) = v13;
    }
    else if ( v11 < 0 )
    {
LABEL_14:
      MarkImmersiveProcess((__int64)a1, (__int64)Token, a3);
      *((_DWORD *)a1 + 205) ^= (*((_DWORD *)a1 + 205) ^ (a5 << 7)) & 0x80;
      if ( v12 < 0 )
        return (unsigned int)v12;
      v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
      if ( v12 < 0 )
        return (unsigned int)v12;
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v38) >= 0 )
        *((_DWORD *)a1 + 222) = v38;
      else
        *((_DWORD *)a1 + 222) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v35 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 205) |= 2u;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          18,
          13,
          (__int64)&WPP_ed79ecbb4a1f3750d196ff03f8980747_Traceguids,
          *(_QWORD *)a1,
          *((_DWORD *)a1 + 220),
          *((_DWORD *)a1 + 221));
      }
      SpriteFillColor = GetSpriteFillColor();
      v17 = *(_QWORD *)a1;
      *((_DWORD *)a1 + 273) = SpriteFillColor;
      if ( PsGetProcessWow64Process(v17) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v18 = *(void **)a1;
      *((_QWORD *)a1 + 113) = -1LL;
      *((_QWORD *)a1 + 114) = -1LL;
      xxxSetProcessInitState(v18, 128);
      SetAppStarting((__int64)a1);
      *((_QWORD *)a1 + 47) = gppiList;
      gppiList = (__int64)a1;
      ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
      v20 = ApiSetEditionPopProcessLaunchForegroundPolicy((__int64)ProcessId);
      if ( (*((_DWORD *)a1 + 205) & 0x30) != 0x10 && (gdwPUDFlags & 0x8000000) != 0 )
      {
        v23 = v20 - 2;
        if ( v23 )
        {
          if ( v23 == 1
            || qword_1C029C100
            && (int)qword_1C029C100() >= 0
            && qword_1C029C108
            && (unsigned int)qword_1C029C108(*(_QWORD *)a1) )
          {
            *((_DWORD *)a1 + 3) |= 0x100u;
          }
        }
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v21) = 0;
      }
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = "set";
        if ( (*((_DWORD *)a1 + 3) & 0x100) == 0 )
          v24 = "NOT";
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_sq(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          (unsigned int)"NOT",
          v31,
          v32,
          v33,
          v34,
          (__int64)v24,
          (char)a1);
      }
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 780));
      *((_DWORD *)a1 + 100) = gcSysExpunge;
      *((_DWORD *)a1 + 190) = 0;
      CitProcessCallout((__int64)a1, 1);
      *((_DWORD *)a1 + 205) &= 0xFFFE7FFF;
      v27 = *((unsigned int *)a1 + 205);
      if ( (v27 & 0x60000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v25, v26);
        LODWORD(v27) = *((_DWORD *)a1 + 205);
      }
      v28 = v27 & 0xFFBFFFFF;
      *((_DWORD *)a1 + 70) = 24592;
      *((_DWORD *)a1 + 205) = v28;
      *((_WORD *)a1 + 142) = 96;
      if ( (v28 & 0x30) == 0x20 )
        *((_DWORD *)a1 + 205) = v28 | 0x100000;
      Win32KFilterSet = PsGetWin32KFilterSet();
      v30 = 0;
      if ( Win32KFilterSet == 5 )
        v30 = 0x1000000;
      *((_DWORD *)a1 + 205) = v30 & 0xF7FFFFFF | *((_DWORD *)a1 + 205) & 0xF6FFFFFF;
      if ( *((_WORD *)gpsi + 3499) )
      {
        if ( qword_1C029BCC8 && (int)qword_1C029BCC8() >= 0 )
        {
          if ( qword_1C029BCD0 )
            qword_1C029BCD0(a1);
        }
        else
        {
          *((_WORD *)a1 + 142) = *((_WORD *)gpsi + 3499);
        }
      }
      return 0LL;
    }
    v12 = SeQueryInformationToken(Token, TokenUIAccess, &v35);
    goto LABEL_14;
  }
  return result;
}
