BOOLEAN __fastcall PpmHvSetVirtualProcessorQos(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 34112);
  v3 = *(_QWORD *)(a1 + 35000);
  *(_DWORD *)(a1 + 34116) = v2;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = v2;
    *(_DWORD *)(v3 + 12) = 1;
    HvlpSetRegister64(589851LL, 4294967294LL);
  }
  return PpmEventVpQosChange(a1);
}
