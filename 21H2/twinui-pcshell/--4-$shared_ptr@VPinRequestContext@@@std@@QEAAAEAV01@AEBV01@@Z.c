/*
 * XREFs of ??4?$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801365D4
 * Callers:
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138490 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1801386FC (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_1801386FC.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::shared_ptr<PinRequestContext>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = v8[1];
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
