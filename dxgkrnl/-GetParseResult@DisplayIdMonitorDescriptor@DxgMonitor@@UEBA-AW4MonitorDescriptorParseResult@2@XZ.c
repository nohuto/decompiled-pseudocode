__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetParseResult(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
    return 2 - (unsigned int)((unsigned int)DisplayID_IsValidVersion2(a1 + 24) != 0);
  else
    return 0LL;
}
