/*
 * XREFs of AslpFileGetVersionAttributes @ 0x1407A0DEC
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407A11E8 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslpFileMakeBinVersionAttributes @ 0x1407A042C (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407A0528 (AslpFileGetVersionBlock.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407A0A68 (AslpFileMakeStringVersionAttributes.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2)
{
  int VersionBlock; // eax
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 *v6; // r11
  int StringVersionAttributes; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  VersionBlock = AslpFileGetVersionBlock(&v9, &v10, a2);
  if ( VersionBlock < 0 )
  {
    if ( (unsigned int)(VersionBlock + 1073741687) > 2 )
      AslLogCallPrintf(3LL);
    v4 = 0LL;
  }
  else
  {
    v4 = v10;
  }
  AslpFileMakeBinVersionAttributes(a1, v4);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v5, v6);
  if ( StringVersionAttributes < 0 )
    AslLogCallPrintf(1LL);
  else
    return 0;
  return (unsigned int)StringVersionAttributes;
}
