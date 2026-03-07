__int64 __fastcall PciGetRootBusCapability(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // bl
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *(_DWORD *)(a2 + 24) = PciRootBusFeaturesSupported;
  *(_DWORD *)(a2 + 28) = PciRootBusFeaturesControlRequest;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 304);
  v4 = AcpiEvaluateDsmMethodOnPciRootBus(a1, &v7);
  v5 = v7;
  if ( v4 < 0 )
    v5 = 0;
  AcpiUpdatePciRootFromDsmEvaluation(a1);
  result = *(unsigned int *)(a1 + 220);
  *(_DWORD *)a2 = result;
  if ( v5 )
  {
    *(_BYTE *)(a2 + 4) = 1;
    *(_DWORD *)(a2 + 8) = *(unsigned __int8 *)(a1 + 231);
    result = *(unsigned __int16 *)(a1 + 232);
    *(_DWORD *)(a2 + 12) = result;
    if ( (*(_BYTE *)(a1 + 230) & 4) != 0 )
      *(_BYTE *)(a2 + 16) = 1;
    if ( (*(_BYTE *)(a1 + 230) & 1) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
  }
  return result;
}
