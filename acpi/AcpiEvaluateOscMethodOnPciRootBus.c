__int64 __fastcall AcpiEvaluateOscMethodOnPciRootBus(__int64 a1, unsigned __int8 a2, int a3, _DWORD *a4, int *a5)
{
  __int64 v6; // rcx
  int v7; // edx
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 760);
  v10[0] = a2;
  v7 = *a4 | *a5;
  v10[1] = PciRootBusFeaturesSupported;
  v11 = v7;
  v9 = PCI_ROOT_BUS_OSC_UUID;
  result = ACPIAmliEvaluateOsc(v6, (int)&v9, a3, 3, v10);
  if ( (int)result >= 0 )
  {
    if ( (!*a5 || (v11 & *a5) == *a5) && (v11 | *a4) == *a4 )
    {
      *a5 = v11;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
