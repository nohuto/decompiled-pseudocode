__int64 __fastcall DxgkReportDeviceDirectedPowerDown(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 3032) )
      return PoFxCompleteDirectedPowerDown();
  }
  return result;
}
