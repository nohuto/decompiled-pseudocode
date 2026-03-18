/*
 * XREFs of ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x1C01F2AB8
 * Callers:
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x1C01F3508 (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall VPTPContact::VPTPContact(__int64 a1, int a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 result; // rax

  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_DWORD *)(a1 + 28) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  v4 = (_QWORD *)*a3;
  if ( (__int64 *)*a3 == a3 )
  {
    InputExtensibilityCallout::CoreMsgSendMessage(a1, 19);
    a3 = *(__int64 **)(a1 + 32);
    v4 = (_QWORD *)*a3;
  }
  if ( (__int64 *)v4[1] != a3 )
    __fastfail(3u);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = a3;
  v4[1] = a1;
  result = a1;
  *a3 = a1;
  return result;
}
