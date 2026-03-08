/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C01AD4A0
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C00BC380 (RIMUpdateDeviceForInputMode.c)
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1C01E1F68 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00EF582 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     RIMDeliverConfigRequest @ 0x1C01AD678 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C01ADC20 (RIMFindConfigDeviceForInput.c)
 */

__int16 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  int v7; // edx
  int v8; // ebp
  struct RIMDEV *v9; // rcx
  struct RIMDEV *v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = 0LL;
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
    v8 = RIMFindConfigDeviceForInput(a1, v3, v5, &v11);
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog);
    if ( !v8
      || ((v9 = v11, *(_WORD *)(v3 + 40) != 4) ? (*((_DWORD *)v11 + 46) |= 0x1000u) : (*((_DWORD *)v11 + 46) |= 0x800u),
          LODWORD(v4) = RIMDeliverConfigRequest(v9),
          *(_DWORD *)(*(_QWORD *)(v5 + 472) + 360LL) &= ~0x1000u,
          (int)v4 < 0) )
    {
      v4 = *(_QWORD *)(v5 + 472);
      *(_DWORD *)(v4 + 360) |= 0x1000u;
    }
  }
  return v4;
}
