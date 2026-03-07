char __fastcall anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(__int64 a1)
{
  char v1; // bl

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 812LL) & 0x8000) != 0 )
    return 1;
  v1 = 0;
  if ( qword_1C02D6FC8 )
  {
    if ( (qword_1C02D6FC8(a1) & 0x10000000000000LL) != 0 )
      return 1;
  }
  return v1;
}
