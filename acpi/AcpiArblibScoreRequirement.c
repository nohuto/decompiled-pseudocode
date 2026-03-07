signed __int64 __fastcall AcpiArblibScoreRequirement(struct _IO_RESOURCE_DESCRIPTOR *a1)
{
  unsigned __int64 v1; // r8
  signed __int64 result; // rax
  unsigned __int64 Alignment; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+68h] [rbp+28h] BYREF

  MinimumAddress = 0LL;
  MaximumAddress = 0LL;
  Alignment = 0LL;
  if ( (int)AcpiArblibUnpackRequirement(a1, &MinimumAddress, &MaximumAddress, &Alignment) < 0 )
    ACPIInternalError(0x50113uLL);
  v1 = Alignment;
  if ( !Alignment )
    v1 = 1LL;
  result = (MaximumAddress - (~(v1 - 1) & (v1 + MinimumAddress - 1)) + 1) / v1;
  if ( result < 0 )
    return 0xFFFFFFFFLL;
  if ( result > 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
