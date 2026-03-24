/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C015A07C
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C015D000 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FB2C (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0179364 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01795E8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0179B00 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0159304 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159500 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01598CC (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0159C24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD **v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // esi
  int v7; // edx
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  int v10; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      28,
      (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  v4 = (_QWORD **)((char *)a1 + 448);
  v5 = *(_QWORD *)(v2 + 480);
  v6 = 1;
  if ( !gDeviceArbitrationType )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 29, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
    goto LABEL_13;
  }
  rimAbRemoveGlobalPenDeadzoneIfExpired((__int64)a1);
  rimAbUpdateDeadzonesAndResurrectContacts((__int64)a1, v2);
  v8 = *v4;
  while ( v8 != v4 )
  {
    v9 = v8 - 1;
    v8 = (_QWORD *)*v8;
    if ( *v9 != v5 )
      v6 &= rimAbSuppressLowerRankActivityForFrame(a1, *v9, v5);
  }
  rimAbSuppressLowerRankActivityInFrame((__int64)a1, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v10, 1, 30, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v6);
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        1,
        31,
        (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
    }
  }
  return v6;
}
