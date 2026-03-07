ULONG_PTR __fastcall HalpDisableCmciOnProcessor(ULONG_PTR Argument)
{
  __int64 i; // rbx
  _BYTE *v2; // rcx
  __int64 v3; // r8

  for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
  {
    v2 = HalpCmcErrorSource;
    v3 = *(_QWORD *)(i + 172);
    *(_BYTE *)(i + 128) = 1;
    v2[48] = 0;
    HalpCmciSetProcessorConfig((__int64)v2, 0, v3);
  }
  return 0LL;
}
