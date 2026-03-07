__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::_GetFinalMinLuminanceValueFromRaw(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a2 )
      return (unsigned int)(int)((float)((float)(a1 * a1) * 0.000015379001) * (double)(a2 / 0x2710) / 100.0 * 10000.0);
  }
  return result;
}
