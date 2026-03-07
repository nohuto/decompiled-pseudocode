__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  char CpuVendor; // di
  __int64 McaPcrContext; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  CpuVendor = HalpGetCpuVendor();
  McaPcrContext = HalpGetMcaPcrContext(a1);
  LOBYTE(v4) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v4, a1, McaPcrContext);
  if ( CpuVendor == 1 )
  {
    LOBYTE(v6) = 1;
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource, v6, a1);
  }
  return result;
}
