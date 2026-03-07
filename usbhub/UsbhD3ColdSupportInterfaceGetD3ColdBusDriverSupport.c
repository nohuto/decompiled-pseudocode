__int64 __fastcall UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport(__int64 a1, bool *a2)
{
  *a2 = (*(_DWORD *)(a1 + 1180) & 0x10) != 0;
  return 0LL;
}
