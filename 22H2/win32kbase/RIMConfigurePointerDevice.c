/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C0180590
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C0005CE4 (RIMUpdateDeviceForInputMode.c)
 *     RIMAllocateHidDesc @ 0x1C017F574 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1C01B3D38 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E09A2 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     RIMDeliverConfigRequest @ 0x1C0180768 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C0180D10 (RIMFindConfigDeviceForInput.c)
 */

__int16 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  int v7; // ebp
  char v8; // dl
  const char *v9; // rax
  struct RIMDEV *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-58h]
  struct RIMDEV *v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = a3;
  LOWORD(v4) = *(_WORD *)(a3 + 40) - 4;
  v5 = a2;
  if ( (unsigned __int16)v4 <= 1u )
  {
    if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          (_DWORD)gRimLog,
          3,
          1,
          70,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
      }
    }
    v7 = RIMFindConfigDeviceForInput(a1, v3, v5, &v13);
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = "found config device";
      if ( !v7 )
        v9 = "NO config device found";
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v12,
        1u,
        0x47u,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v9);
    }
    if ( !v7
      || ((v10 = v13, *(_WORD *)(v3 + 40) != 4) ? (*((_DWORD *)v13 + 46) |= 0x1000u) : (*((_DWORD *)v13 + 46) |= 0x800u),
          LODWORD(v4) = RIMDeliverConfigRequest(v10),
          *(_DWORD *)(*(_QWORD *)(v5 + 472) + 360LL) &= ~0x1000u,
          (int)v4 < 0) )
    {
      v4 = *(_QWORD *)(v5 + 472);
      *(_DWORD *)(v4 + 360) |= 0x1000u;
    }
  }
  return v4;
}
