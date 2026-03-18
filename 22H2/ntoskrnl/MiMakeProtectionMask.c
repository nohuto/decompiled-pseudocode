/*
 * XREFs of MiMakeProtectionMask @ 0x140276860
 * Callers:
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiInitializePoolCommitPacket @ 0x1402867E0 (MiInitializePoolCommitPacket.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MmMapIoSpaceEx @ 0x140335810 (MmMapIoSpaceEx.c)
 *     MiConvertContiguousMemoryParameters @ 0x1403B9DD8 (MiConvertContiguousMemoryParameters.c)
 *     MmSetPageProtection @ 0x1403C2610 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x14061EE40 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x14062F110 (MmMapMdl.c)
 *     MiValidateAllocationType @ 0x1406F71F8 (MiValidateAllocationType.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1406F9280 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9820 (MmProtectVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x140721180 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1407216D0 (MiMapViewOfSection.c)
 *     MiInitializeCreateSectionPacket @ 0x140723080 (MiInitializeCreateSectionPacket.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E144 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask1 + (a1 & 0xF));
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask2 + ((unsigned __int8)a1 >> 4));
  }
  result = (unsigned int)v1;
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x600) == 0 )
    {
      result = (unsigned int)result | 0x10;
      goto LABEL_14;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_14:
  if ( (a1 & 0x200) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x400) == 0 )
      return (unsigned int)result | 8;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
