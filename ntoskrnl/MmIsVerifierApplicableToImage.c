__int64 __fastcall MmIsVerifierApplicableToImage(__int64 a1)
{
  if ( (MiFlags & 0x8000) != 0 )
    return 0LL;
  else
    return (unsigned int)KeIsNmiCallbackRegisteredForDriver(
                           *(_QWORD *)(a1 + 48),
                           *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64)) != 0
         ? 0xC0000C0E
         : 0;
}
