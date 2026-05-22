/*
 * XREFs of ??8?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x180048930
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0040 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801356B0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179B94 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180187F90 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>>::operator==(
        _QWORD *a1,
        _QWORD *a2)
{
  return *a1 == *a2;
}
