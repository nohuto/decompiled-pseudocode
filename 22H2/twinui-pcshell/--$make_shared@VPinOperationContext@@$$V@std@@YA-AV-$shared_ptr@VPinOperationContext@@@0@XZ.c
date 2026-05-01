/*
 * XREFs of ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x1801342E8
 * Callers:
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138320 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18013858C (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_18013858C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::make_shared<PinOperationContext,>(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x70uLL);
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj<PinOperationContext>::`vftable';
  *((_QWORD *)v3 + 8) = 7LL;
  *((_QWORD *)v3 + 12) = 7LL;
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_WORD *)v3 + 20) = 0;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_WORD *)v3 + 36) = 0;
  *((_QWORD *)v3 + 13) = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v3;
  result = a1;
  *(_QWORD *)a1 = v3 + 4;
  return result;
}
