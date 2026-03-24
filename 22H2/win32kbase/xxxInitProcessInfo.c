/*
 * XREFs of xxxInitProcessInfo @ 0x1C00B8BC4
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003D2A0 (xxxUserProcessCallout.c)
 * Callees:
 *     GetProcessLuid @ 0x1C000DDD0 (GetProcessLuid.c)
 *     CitProcessCallout @ 0x1C0047420 (CitProcessCallout.c)
 *     WPP_RECORDER_SF_sq @ 0x1C004849C (WPP_RECORDER_SF_sq.c)
 *     xxxSetProcessInitState @ 0x1C0048570 (xxxSetProcessInitState.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0057570 (WPP_RECORDER_SF_qDD.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0073324 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     SetAppStarting @ 0x1C00960E0 (SetAppStarting.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C00967D0 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00C7470 (-GetSpriteFillColor@@YAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124850 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  bool v6; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  int v14; // edx
  unsigned int SpriteFillColor; // eax
  __int64 v16; // rcx
  void *v17; // rcx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // edi
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  char v24; // al
  int v25; // eax
  const char *v27; // rax
  __int64 v28; // xmm1_8
  unsigned int v29; // ecx
  int Win32KFilterSet; // eax
  int v31; // ecx
  int v32; // [rsp+20h] [rbp-50h]
  PVOID v33; // [rsp+40h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-28h] BYREF
  PVOID P; // [rsp+50h] [rbp-20h] BYREF
  __int128 v36; // [rsp+58h] [rbp-18h]
  __int64 v37; // [rsp+68h] [rbp-8h]
  int v38; // [rsp+90h] [rbp+20h] BYREF

  v6 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v33) = 0;
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
    if ( v11 >= 0 )
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v33);
    MarkImmersiveProcess((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 205) ^= (*((_DWORD *)a1 + 205) ^ (a5 << 7)) & 0x80;
    if ( v12 < 0 )
      return (unsigned int)v12;
    v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v12 < 0 )
    {
      return (unsigned int)v12;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v38) >= 0 )
        *((_DWORD *)a1 + 222) = v38;
      else
        *((_DWORD *)a1 + 222) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v33 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 205) |= 2u;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_qDD(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v14,
          18,
          18,
          (__int64)&WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids,
          *(_QWORD *)a1,
          *((_DWORD *)a1 + 220),
          *((_DWORD *)a1 + 221));
      }
      SpriteFillColor = GetSpriteFillColor();
      v16 = *(_QWORD *)a1;
      *((_DWORD *)a1 + 273) = SpriteFillColor;
      if ( PsGetProcessWow64Process(v16) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v17 = *(void **)a1;
      *((_QWORD *)a1 + 113) = -1LL;
      *((_QWORD *)a1 + 114) = -1LL;
      xxxSetProcessInitState(v17, 128);
      SetAppStarting((__int64)a1);
      v21 = -1073741637;
      v22 = *(_OWORD *)((char *)a1 + 296);
      v23 = *((_QWORD *)a1 + 39);
      *((_QWORD *)a1 + 47) = gppiList;
      gppiList = (__int64)a1;
      v24 = *((_DWORD *)a1 + 205) & 0x30;
      v37 = v23;
      v36 = v22;
      if ( v24 != 16 && (gdwPUDFlags & 0x8000000) != 0 )
      {
        v25 = qword_1C02563C0 ? qword_1C02563C0() : -1073741637;
        if ( v25 >= 0 )
        {
          if ( qword_1C02563C8 ? qword_1C02563C8(*(_QWORD *)a1) : 0 )
            *((_DWORD *)a1 + 3) |= 0x100u;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = "set";
        if ( (*((_DWORD *)a1 + 3) & 0x100) == 0 )
          v27 = "NOT";
        WPP_RECORDER_SF_sq((unsigned int)"NOT", v18, v19, v20, v32, (__int64)v27, (char)a1);
      }
      v28 = *((_QWORD *)a1 + 39);
      v36 = *(_OWORD *)((char *)a1 + 296);
      v37 = v28;
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 780));
      *((_DWORD *)a1 + 100) = gcSysExpunge;
      *((_DWORD *)a1 + 190) = 0;
      CitProcessCallout((__int64)a1, 1);
      v29 = *((_DWORD *)a1 + 205) & 0xFFB87FFF;
      *((_WORD *)a1 + 142) = 96;
      *((_DWORD *)a1 + 205) = v29;
      *((_DWORD *)a1 + 70) = 24592;
      if ( (v29 & 0x30) == 0x20 )
        *((_DWORD *)a1 + 205) = v29 | 0x100000;
      Win32KFilterSet = PsGetWin32KFilterSet();
      v31 = 0;
      if ( Win32KFilterSet == 5 )
        v31 = 0x1000000;
      *((_DWORD *)a1 + 205) = v31 & 0xF7FFFFFF | *((_DWORD *)a1 + 205) & 0xF6FFFFFF;
      if ( *((_WORD *)gpsi + 3499) )
      {
        if ( qword_1C0255F78 )
          v21 = qword_1C0255F78();
        if ( v21 < 0 )
        {
          *((_WORD *)a1 + 142) = *((_WORD *)gpsi + 3499);
        }
        else if ( qword_1C0255F80 )
        {
          qword_1C0255F80(a1);
        }
      }
      return 0LL;
    }
  }
  return result;
}
