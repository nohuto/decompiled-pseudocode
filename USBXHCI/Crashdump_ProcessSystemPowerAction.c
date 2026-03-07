ULONG __fastcall Crashdump_ProcessSystemPowerAction(__int64 a1, int a2)
{
  int v3; // edx
  ULONG result; // eax

  v3 = a2 - 4;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = DbgPrintEx(0x93u, 3u, "XHCIDUMP: Going to S4\n");
      *(_DWORD *)(a1 + 584) = 1;
    }
  }
  else
  {
    result = DbgPrintEx(0x93u, 3u, "XHCIDUMP: Going to S3\n");
    *(_DWORD *)(a1 + 584) = 5;
  }
  return result;
}
