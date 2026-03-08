/*
 * XREFs of ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C01D5D70
 * Callers:
 *     _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01D5A20 (_lambda_8317567312832b51b45aaef017a7684b_--operator().c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C01D5CF8 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall DispBrokerClient::IsClientHandleValid(DispBrokerClient *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v5; // rbx
  __int128 v6; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v7 = 0;
    v6 = 0LL;
    v3 = ZwAlpcQueryInformation(*(_QWORD *)(v2 + 8), 0LL, &v6, 16LL, &v7);
    if ( v3 >= 0 && v7 == 16 )
      return 1;
    v5 = v3;
    WdLogSingleEntry2(2LL, **(unsigned int **)this, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to validate the ALCP port of display broker in session 0x%I64x (Status = 0x%I64x)",
      **(unsigned int **)this,
      v5,
      0LL,
      0LL,
      0LL);
  }
  return 0;
}
