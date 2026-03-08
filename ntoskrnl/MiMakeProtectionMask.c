/*
 * XREFs of MiMakeProtectionMask @ 0x140320CC0
 * Callers:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiInitializePoolCommitPacket @ 0x140330760 (MiInitializePoolCommitPacket.c)
 *     MiConvertContiguousMemoryParameters @ 0x1403B5118 (MiConvertContiguousMemoryParameters.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x14062CC90 (MmMapMdl.c)
 *     MiValidateAllocationType @ 0x1407C5194 (MiValidateAllocationType.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1407C7210 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x1407D0AE0 (MiInitializeCreateSectionPacket.c)
 *     MiMapViewOfSectionCommon @ 0x1407D4E50 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1407D51F0 (MiMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
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
