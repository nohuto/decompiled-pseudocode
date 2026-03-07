void __fastcall VfPendingCheckForChanges(__int16 a1)
{
  if ( (a1 & 0x200) != 0 && !VfForcedPendingLog )
  {
    if ( (unsigned int)VfForcedPendingLogLength > 0x100000 )
      VfForcedPendingLogLength = 0x100000;
    VfForcedPendingLog = ExAllocatePool3(
                           64LL,
                           (unsigned __int64)(unsigned int)VfForcedPendingLogLength << 9,
                           0x50466656u,
                           (__int64)&VfExtendedParameters,
                           1u);
  }
}
