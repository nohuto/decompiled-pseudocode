/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C0208DB8
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BEA8C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C023DCE0 (EditionIsPointerQueuedMessageCoalescable.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  int v7; // r14d
  int v8; // r15d
  PDEVICE_OBJECT v10; // rcx
  char v11; // bl
  void *v12; // r9
  unsigned int IsPointerQueuedMessageCoalescable; // edi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD v20[7]; // [rsp+40h] [rbp-98h] BYREF

  v7 = a3;
  v8 = a2;
  v10 = WPP_GLOBAL_Control;
  v11 = 1;
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
  v12 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      286,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  IsPointerQueuedMessageCoalescable = 0;
  if ( qword_1C029D460 && (int)qword_1C029D460(v10, a2, a3, v12) >= 0 )
  {
    v14 = a1[1];
    v20[0] = *a1;
    v20[2] = a1[2];
    v15 = a1[4];
    v20[1] = v14;
    v16 = a1[3];
    v20[4] = v15;
    v17 = a1[6];
    v20[3] = v16;
    v18 = a1[5];
    v20[6] = v17;
    v20[5] = v18;
    IsPointerQueuedMessageCoalescable = EditionIsPointerQueuedMessageCoalescable((unsigned int)v20, v8, v7, a4, a5, a6);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)a2 || v11 )
  {
    LOBYTE(a3) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      287,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return IsPointerQueuedMessageCoalescable;
}
