/*
 * XREFs of Controller_ExecuteDSM @ 0x1C006E4A4
 * Callers:
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C001A3D0 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_QuerySupportedDSMs @ 0x1C001E6D4 (Controller_QuerySupportedDSMs.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0033374 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006E400 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006EC7C (Controller_ConfigureS0IdleSettings.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x1C0073C40 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0078248 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 * Callees:
 *     WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C0014D60 (WPP_RECORDER_SF_q_guid_LLLLL.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C001E860 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C00373EC (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1C00375C4 (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x1C00376CC (WPP_RECORDER_SF_q_guid_Ld.c)
 */

__int64 __fastcall Controller_ExecuteDSM(__int64 *a1, const void *a2, int a3, int a4, void *a5, unsigned __int16 a6)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  int v11; // ecx
  unsigned __int16 *Pool2; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // rbx
  __int64 v17; // rcx
  rsize_t v18; // r9
  void *v19; // r8
  rsize_t v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  int v27; // [rsp+20h] [rbp-99h]
  int v28; // [rsp+60h] [rbp-59h]
  _QWORD v30[2]; // [rsp+80h] [rbp-39h] BYREF
  int v31; // [rsp+90h] [rbp-29h]
  int v32; // [rsp+94h] [rbp-25h]
  rsize_t DstSize; // [rsp+98h] [rbp-21h]
  void *Src; // [rsp+A0h] [rbp-19h]
  __int64 v35; // [rsp+A8h] [rbp-11h]
  int v36; // [rsp+B0h] [rbp-9h]
  __int128 v37; // [rsp+B4h] [rbp-5h]

  v6 = 0;
  v7 = *a1;
  Src = a5;
  HIDWORD(v30[0]) = 0;
  v35 = 0LL;
  v11 = 4;
  if ( a6 >= 4u )
    v11 = a6;
  DstSize = a6;
  v28 = v11 + 56;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)(v11 + 56), 1229146200LL);
  v16 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 1130980673;
    *((_DWORD *)Pool2 + 1) = 1297302623;
    *((_DWORD *)Pool2 + 2) = v28;
    *((_DWORD *)Pool2 + 3) = 4;
    *((_DWORD *)Pool2 + 4) = 1048578;
    memcpy_s(Pool2 + 10, 0x10uLL, a2, 0x10uLL);
    v17 = 4LL;
    if ( v16[9] >= 4u )
      v17 = v16[9];
    v18 = DstSize;
    v19 = Src;
    v20 = DstSize;
    *(_DWORD *)((char *)v16 + v17 + 24) = a3;
    *(_DWORD *)((char *)v16 + v17 + 20) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 28) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 32) = a4;
    *(unsigned __int16 *)((char *)v16 + v17 + 36) = 2;
    *(unsigned __int16 *)((char *)v16 + v17 + 38) = a6;
    memcpy_s((char *)v16 + v17 + 40, v20, v19, v18);
    v31 = v28;
    v30[0] = 1LL;
    v32 = 0;
    v30[1] = v16;
    v37 = 0LL;
    v36 = 1114596673;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, v7);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01023 + 1488))(
            WdfDriverGlobals,
            v21,
            0LL,
            3325956LL);
    if ( v22 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q_guid_Ld(a1[9], v23, v24, v25, (unsigned int)v30, v7, (__int64)a2, a4, v22);
    }
    else
    {
      if ( DWORD1(v37) && WORD5(v37) )
      {
        v23 = WORD5(v37) - 1;
        if ( (unsigned __int64)WORD5(v37) - 1 > 3 )
          v23 = 3;
        v6 = HIDWORD(v37) & ((256 << (8 * v23)) - 1);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q_guid_LLLLL(
          a1[9],
          v23,
          WORD5(v37),
          DWORD1(v37),
          (unsigned int)v30,
          v7,
          (__int64)a2,
          a3,
          a4,
          v6,
          SBYTE4(v37),
          SBYTE10(v37));
    }
    ExFreePoolWithTag(v16, 0x49434858u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(a1[9], v13, v14, v15, v27, (__int64)a2);
  }
  return v6;
}
