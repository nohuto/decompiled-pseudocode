__int64 __fastcall sub_14005045C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 + 392;
  if ( L"Transmit descriptor written back" != *(wchar_t **)(v2 + 16) )
    result = sub_1400011A8((_QWORD *)v2, (__int64)L"Transmit descriptor written back", 0x20uLL);
  if ( L"Transmit queue empty" != *(wchar_t **)(a1 + 448) )
    result = sub_1400011A8((_QWORD *)(a1 + 432), (__int64)L"Transmit queue empty", 0x14uLL);
  if ( L"Link status changed" != *(wchar_t **)(a1 + 488) )
    result = sub_1400011A8((_QWORD *)(a1 + 472), (__int64)L"Link status changed", 0x13uLL);
  if ( L"Receive descriptor minimum threshold reached" != *(wchar_t **)(a1 + 568) )
    result = sub_1400011A8((_QWORD *)(a1 + 552), (__int64)L"Receive descriptor minimum threshold reached", 0x2CuLL);
  if ( L"Rx miss" != *(wchar_t **)(a1 + 648) )
    result = sub_1400011A8((_QWORD *)(a1 + 632), (__int64)L"Rx miss", 7uLL);
  if ( L"Receive descriptor written back" != *(wchar_t **)(a1 + 688) )
    result = sub_1400011A8((_QWORD *)(a1 + 672), (__int64)L"Receive descriptor written back", 0x1FuLL);
  if ( L"MDIO access complete" != *(wchar_t **)(a1 + 768) )
    result = sub_1400011A8((_QWORD *)(a1 + 752), (__int64)L"MDIO access complete", 0x14uLL);
  if ( L"Internal PHY interrupt" != *(wchar_t **)(a1 + 808) )
    result = sub_1400011A8((_QWORD *)(a1 + 792), (__int64)L"Internal PHY interrupt", 0x16uLL);
  if ( L"General purpose interrupt SDP 0" != *(wchar_t **)(a1 + 848) )
    result = sub_1400011A8((_QWORD *)(a1 + 832), (__int64)L"General purpose interrupt SDP 0", 0x1FuLL);
  if ( L"General purpose interrupt SDP 1" != *(wchar_t **)(a1 + 888) )
    result = sub_1400011A8((_QWORD *)(a1 + 872), (__int64)L"General purpose interrupt SDP 1", 0x1FuLL);
  if ( L"General purpose interrupt SDP 2" != *(wchar_t **)(a1 + 928) )
    result = sub_1400011A8((_QWORD *)(a1 + 912), (__int64)L"General purpose interrupt SDP 2", 0x1FuLL);
  if ( L"General purpose interrupt SDP 3" != *(wchar_t **)(a1 + 968) )
    result = sub_1400011A8((_QWORD *)(a1 + 952), (__int64)L"General purpose interrupt SDP 3", 0x1FuLL);
  if ( L"Probe tap interrupt" != *(wchar_t **)(a1 + 1008) )
    result = sub_1400011A8((_QWORD *)(a1 + 992), (__int64)L"Probe tap interrupt", 0x13uLL);
  if ( L"Manageability event detected" != *(wchar_t **)(a1 + 1128) )
    result = sub_1400011A8((_QWORD *)(a1 + 1112), (__int64)L"Manageability event detected", 0x1CuLL);
  if ( L"Time sync" != *(wchar_t **)(a1 + 1168) )
    result = sub_1400011A8((_QWORD *)(a1 + 1152), (__int64)L"Time sync", 9uLL);
  if ( L"Fatal error" != *(wchar_t **)(a1 + 1288) )
    result = sub_1400011A8((_QWORD *)(a1 + 1272), (__int64)L"Fatal error", 0xBuLL);
  if ( L"PCI exception" != *(wchar_t **)(a1 + 1368) )
    result = sub_1400011A8((_QWORD *)(a1 + 1352), (__int64)L"PCI exception", 0xDuLL);
  if ( L"DMA coalescing clock control event" != *(wchar_t **)(a1 + 1408) )
    result = sub_1400011A8((_QWORD *)(a1 + 1392), (__int64)L"DMA coalescing clock control event", 0x22uLL);
  if ( L"Software watchdog" != *(wchar_t **)(a1 + 1448) )
    result = sub_1400011A8((_QWORD *)(a1 + 1432), (__int64)L"Software watchdog", 0x11uLL);
  if ( L"Detected malicious driver behavior" != *(wchar_t **)(a1 + 1528) )
    result = sub_1400011A8((_QWORD *)(a1 + 1512), (__int64)L"Detected malicious driver behavior", 0x22uLL);
  if ( L"Tcp timer" != *(wchar_t **)(a1 + 1568) )
    result = sub_1400011A8((_QWORD *)(a1 + 1552), (__int64)L"Tcp timer", 9uLL);
  if ( L"Device reset asserted" != *(wchar_t **)(a1 + 1608) )
    result = sub_1400011A8((_QWORD *)(a1 + 1592), (__int64)L"Device reset asserted", 0x15uLL);
  if ( L"Interrupt asserted" != *(wchar_t **)(a1 + 1648) )
    return sub_1400011A8((_QWORD *)(a1 + 1632), (__int64)L"Interrupt asserted", 0x12uLL);
  return result;
}
