__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetSerializationSizeInBytes(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
    return (unsigned int)(140 * v1 + 4);
  else
    return 144LL;
}
