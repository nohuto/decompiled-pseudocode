/*
 * XREFs of ApiSetEditionFindNodeQueuedMessage @ 0x1C01CB628
 * Callers:
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C018E6BC (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     EditionFindNodeQueuedMessage @ 0x1C01FBDF0 (EditionFindNodeQueuedMessage.c)
 */

__int64 __fastcall ApiSetEditionFindNodeQueuedMessage(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 NodeQueuedMessage; // rbx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v15[7]; // [rsp+30h] [rbp-88h] BYREF

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      274,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  NodeQueuedMessage = 0LL;
  if ( qword_1C02587F8 )
    v8 = qword_1C02587F8();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = a1[1];
    v15[0] = *a1;
    v15[2] = a1[2];
    v10 = a1[4];
    v15[1] = v9;
    v11 = a1[3];
    v15[4] = v10;
    v12 = a1[6];
    v15[3] = v11;
    v13 = a1[5];
    v15[6] = v12;
    v15[5] = v13;
    NodeQueuedMessage = EditionFindNodeQueuedMessage(v15, v5, a3, a4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      275,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return NodeQueuedMessage;
}
