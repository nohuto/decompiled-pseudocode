/*
 * XREFs of ??0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x18002476C
 * Callers:
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180022870 (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@1@AEBV?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@1@@Z @ 0x1800247CC (--0-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@UtagMsgRoutin.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180024874 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
SystemControlDeviceCollection *__fastcall SystemControlDeviceCollection::SystemControlDeviceCollection(
        SystemControlDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3)
{
  int v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+44h] [rbp+1Ch]

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &SystemControlDeviceCollection::`vftable';
  v7 = ((unsigned __int64)this + 2760) >> 32;
  v6 = 0;
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>(
    (char *)this + 2760,
    &v6);
  *((_QWORD *)this + 3) = a3;
  return this;
}
