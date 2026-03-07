__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(*(_BYTE *)(a1 + 2170), 0x31u) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
