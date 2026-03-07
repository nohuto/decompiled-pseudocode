unsigned __int8 **__fastcall DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int8 **a2,
        unsigned int *a3)
{
  int v4; // esi
  unsigned int v7; // esi
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rbx

  *a3 = 0;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v7 = v4 << 7;
    v8 = (unsigned __int8 *)operator new[](v7, 0x4D677844u, 256LL);
    v9 = v8;
    if ( v8 )
    {
      DxgMonitor::EdidMonitorDescriptor::_GetContiguousEDID(this, v7, a3, v8);
      if ( v7 != *a3 )
        WdLogSingleEntry0(1LL);
    }
    else
    {
      WdLogSingleEntry0(3LL);
    }
    *a2 = v9;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
