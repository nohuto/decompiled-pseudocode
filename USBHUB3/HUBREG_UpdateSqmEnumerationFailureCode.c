__int64 __fastcall HUBREG_UpdateSqmEnumerationFailureCode(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 2432);
  return HUBREG_WriteValueToDeviceHardwareKey(a1, (__int64)L",.", 4u, 4, (__int64)&v2);
}
