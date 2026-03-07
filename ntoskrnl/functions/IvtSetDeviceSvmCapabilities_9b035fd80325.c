__int64 __fastcall IvtSetDeviceSvmCapabilities(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( a3 )
    return IvtAllocateContextTable(a1, a2);
  else
    return 0LL;
}
