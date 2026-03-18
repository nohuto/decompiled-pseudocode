/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C0188460
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0187468 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0187FE0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD **v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // r14d
  __int64 v9; // r8
  __int64 v10; // r8
  _QWORD *v11; // rbx
  __int64 *v12; // rax

  v3 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      28,
      (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
  v5 = (_QWORD **)((char *)a1 + 448);
  v6 = *(_QWORD *)(v3 + 472);
  v7 = 1;
  if ( gDeviceArbitrationType )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired((__int64)a1, a2, a3);
    rimAbUpdateDeadzonesAndResurrectContacts((__int64)a1, v3, v9);
    v11 = *v5;
    while ( v11 != v5 )
    {
      v12 = v11 - 1;
      v11 = (_QWORD *)*v11;
      if ( *v12 != v6 )
        v7 &= rimAbSuppressLowerRankActivityForFrame(a1, *v12, v6);
    }
    rimAbSuppressLowerRankActivityInFrame((__int64)a1, v6, v10);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        30,
        (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
        v7);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        29,
        (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      31,
      (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
  return v7;
}
