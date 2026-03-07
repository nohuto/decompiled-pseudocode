unsigned __int8 __fastcall FxpBugCheckCallbackFilter(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned __int8 IsAddressKnownToWdf; // dl
  void *v4; // rcx
  __int64 v5; // r9

  IsAddressKnownToWdf = 0;
  if ( FxDriverGlobals->FxForceLogsInMiniDump )
    return 1;
  switch ( (_DWORD)KiBugCheckData )
  {
    case 0xA:
      goto LABEL_10;
    case 0x1E:
      goto LABEL_16;
    case 0x20:
      v4 = *(&KiBugCheckData + 1);
      goto LABEL_11;
    case 0x50:
      v4 = *(&KiBugCheckData + 3);
      goto LABEL_11;
    case 0x7E:
    case 0x8E:
LABEL_16:
      v4 = *(&KiBugCheckData + 2);
LABEL_11:
      IsAddressKnownToWdf = FxpIsAddressKnownToWdf(v4, FxDriverGlobals);
      if ( IsAddressKnownToWdf )
        *(_BYTE *)(v5 + 347) = 1;
      return IsAddressKnownToWdf;
    case 0xD1:
LABEL_10:
      v4 = *(&KiBugCheckData + 4);
      goto LABEL_11;
  }
  return IsAddressKnownToWdf;
}
