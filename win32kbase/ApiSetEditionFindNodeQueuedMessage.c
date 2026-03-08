/*
 * XREFs of ApiSetEditionFindNodeQueuedMessage @ 0x1C023DF00
 * Callers:
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01F1888 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     EditionFindNodeQueuedMessage @ 0x1C0271868 (EditionFindNodeQueuedMessage.c)
 */

__int64 __fastcall ApiSetEditionFindNodeQueuedMessage(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  PDEVICE_OBJECT v7; // rcx
  char v8; // bl
  void *v9; // r9
  __int64 NodeQueuedMessage; // rdi
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD v17[7]; // [rsp+40h] [rbp-88h] BYREF

  v5 = a2;
  v7 = WPP_GLOBAL_Control;
  v8 = 1;
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
  v9 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      268,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  NodeQueuedMessage = 0LL;
  if ( qword_1C02D7C38 && (int)qword_1C02D7C38(v7, a2, a3, v9) >= 0 )
  {
    v11 = a1[1];
    v17[0] = *a1;
    v17[2] = a1[2];
    v12 = a1[4];
    v17[1] = v11;
    v13 = a1[3];
    v17[4] = v12;
    v14 = a1[6];
    v17[3] = v13;
    v15 = a1[5];
    v17[6] = v14;
    v17[5] = v15;
    NodeQueuedMessage = EditionFindNodeQueuedMessage(v17, v5, a3, a4);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)a2 || v8 )
  {
    LOBYTE(a3) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      269,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return NodeQueuedMessage;
}
