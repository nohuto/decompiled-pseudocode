BOOL __stdcall EngQueryDeviceAttribute(
        HDEV hdev,
        ENG_DEVICE_ATTRIBUTE devAttr,
        PVOID pvIn,
        ULONG cjInSize,
        PVOID pvOut,
        ULONG cjOutSize)
{
  BOOL v6; // r8d

  v6 = 0;
  if ( pvOut && devAttr == QDA_ACCELERATION_LEVEL && cjOutSize == 4 )
  {
    v6 = 1;
    *(_DWORD *)(struct HDEV__ *)pvOut = hdev[647];
  }
  return v6;
}
