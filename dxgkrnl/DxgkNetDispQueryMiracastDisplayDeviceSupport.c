__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceSupport(ULONG64 a1)
{
  int MiracastSupportInternal; // edx
  __int64 v4; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v4) = 0;
  v5 = 0;
  v6 = 0LL;
  MiracastSupportInternal = DxgkMiracastQueryMiracastSupportInternal((__int64)&v6);
  if ( MiracastSupportInternal >= 0 )
  {
    HIDWORD(v4) = DWORD1(v6);
    LOBYTE(v4) = v6;
    LOBYTE(v5) = BYTE8(v6);
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_QWORD *)a1 = v4;
    *(_DWORD *)(a1 + 8) = v5;
  }
  return (unsigned int)MiracastSupportInternal;
}
