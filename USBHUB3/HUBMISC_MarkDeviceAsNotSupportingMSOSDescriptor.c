__int64 __fastcall HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor(__int64 a1)
{
  __int16 v2; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x80u);
  v2 = 0;
  return HUBREG_AssignUsbflagsValueForDevice(a1, L"\b\n", &v2, 2LL);
}
