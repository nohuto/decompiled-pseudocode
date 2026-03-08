/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140A4F724
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140A4FB10 (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140A4F678 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslEnvGetProcessWowInfo @ 0x140A54488 (AslEnvGetProcessWowInfo.c)
 *     AslEnvVerifyGuestProcessorSupport @ 0x140A54AAC (AslEnvVerifyGuestProcessorSupport.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned int v1; // edi
  unsigned __int64 i; // rbx
  __int16 v4; // [rsp+40h] [rbp+8h] BYREF
  __int16 v5; // [rsp+42h] [rbp+Ah]

  v5 = HIWORD(a1);
  v4 = 0;
  v1 = 0;
  if ( (int)AslEnvGetProcessWowInfo(&v4, 0LL) >= 0 )
  {
    for ( i = 0LL; i < 0x3C; i += 12LL )
    {
      if ( (*(_DWORD *)((_BYTE *)&qword_140049600 + i + 8) & 0x1F) != 0
        && (int)AslEnvVerifyGuestProcessorSupport(&v4, *(unsigned __int16 *)((char *)&qword_140049600 + i + 4)) >= 0 )
      {
        v1 |= SdbGuestHostArchsToRuntimePlatformFlag(*(_WORD *)((char *)&qword_140049600 + i + 4), &v4);
      }
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v1;
}
