__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 3032);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
