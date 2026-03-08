/*
 * XREFs of ApiSetEditionDoPointerDPITransforms @ 0x1C023D3EC
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C0208CD0 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     EditionDoPointerDPITransforms @ 0x1C00F6462 (EditionDoPointerDPITransforms.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionDoPointerDPITransforms(_OWORD *a1, __int64 a2, __int64 a3))(_QWORD)
{
  PDEVICE_OBJECT v4; // rcx
  char v5; // bl
  void *v6; // r9
  __int64 (__fastcall *result)(_QWORD); // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  void *v13; // r8
  _OWORD v14[7]; // [rsp+40h] [rbp-88h] BYREF

  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v6 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      244,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD))qword_1C02D7B68;
  if ( qword_1C02D7B68 )
  {
    result = (__int64 (__fastcall *)(_QWORD))qword_1C02D7B68(v4, a2, a3, v6);
    if ( (int)result >= 0 )
    {
      v8 = a1[1];
      v14[0] = *a1;
      v14[2] = a1[2];
      v9 = a1[4];
      v14[1] = v8;
      v10 = a1[3];
      v14[4] = v9;
      v11 = a1[6];
      v14[3] = v10;
      v12 = a1[5];
      v14[6] = v11;
      v14[5] = v12;
      result = EditionDoPointerDPITransforms(v14);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)a2 || v5 )
  {
    v13 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v13) = v5;
    return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                             WPP_GLOBAL_Control->AttachedDevice,
                                             a2,
                                             (_DWORD)v13,
                                             WPP_GLOBAL_Control->DeviceExtension,
                                             5,
                                             10,
                                             245,
                                             (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}
