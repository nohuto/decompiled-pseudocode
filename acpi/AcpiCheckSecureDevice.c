bool __fastcall AcpiCheckSecureDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1008);
  if ( (v1 & 0x80000000) == 0 )
  {
    if ( (unsigned __int8)AcpiIsDeviceSecure() )
      *(_QWORD *)(a1 + 1008) |= 0x2000000000uLL;
    *(_QWORD *)(a1 + 1008) |= 0x80000000uLL;
    v1 = *(_QWORD *)(a1 + 1008);
  }
  return (v1 & 0x2000000000LL) != 0;
}
