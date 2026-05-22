/*
 * XREFs of ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180035F34
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180035AAC (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x180145B18 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x180146E7C (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemContextProvider::BroadcastMessageToObservers(__int64 a1, __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a1 + 32); ; (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)i[2] + 24LL))(i[2], a2) )
  {
    i = (__int64 *)*i;
    if ( i == *(__int64 **)(a1 + 32) )
      break;
  }
  return 0LL;
}
