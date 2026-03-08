/*
 * XREFs of AslEnvVerifyGuestProcessorSupport @ 0x140A54AAC
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140A4F724 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x140A54488 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall AslEnvVerifyGuestProcessorSupport(__int16 *a1, __int16 a2)
{
  __int16 v3; // r8
  int ProcessWowInfo; // ebx
  unsigned __int64 v5; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  if ( a1 )
  {
    v3 = *a1;
  }
  else
  {
    ProcessWowInfo = AslEnvGetProcessWowInfo(&v7, 0LL);
    if ( ProcessWowInfo < 0 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)ProcessWowInfo;
    }
    v3 = v7;
  }
  v5 = 0LL;
  while ( *(_WORD *)((char *)&unk_140C09520 + v5) != v3 || *(_WORD *)((char *)&unk_140C09520 + v5 + 2) != a2 )
  {
    v5 += 16LL;
    if ( v5 >= 0x80 )
      return (unsigned int)-1073741637;
  }
  return 0;
}
