__int64 __fastcall HalpMcUpdateMicrocode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  v3 = 0;
  if ( HalpMcUpdateMicrocodeFuncEx )
  {
    LOBYTE(a3) = HalpMcUpdateSelfHosting;
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))HalpMcUpdateMicrocodeFuncEx)(1LL, a2, a3);
  }
  return v3;
}
