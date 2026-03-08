/*
 * XREFs of BiGetDriveLayoutBlock @ 0x140830E1C
 * Callers:
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 * Callees:
 *     BiGetDriveLayoutInformation @ 0x1408301F8 (BiGetDriveLayoutInformation.c)
 *     BiGetPhysicalDriveName @ 0x140A5A720 (BiGetPhysicalDriveName.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetDriveLayoutBlock(PCWSTR SourceString, PVOID *a2, __int64 a3)
{
  int DriveLayoutInformation; // edi
  char *v7; // rax
  int v8; // ecx

  *a2 = 0LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  DriveLayoutInformation = BiGetDriveLayoutInformation(SourceString);
  if ( DriveLayoutInformation >= 0
    || (DriveLayoutInformation = BiGetPhysicalDriveName(SourceString), DriveLayoutInformation >= 0)
    && (DriveLayoutInformation = BiGetDriveLayoutInformation(0LL),
        ExFreePoolWithTag(0LL, 0x4B444342u),
        DriveLayoutInformation >= 0) )
  {
    *(_DWORD *)a3 = 0;
    v7 = (char *)*a2;
    v8 = *(_DWORD *)*a2;
    if ( !v8 )
    {
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = *((_DWORD *)v7 + 2);
      return (unsigned int)DriveLayoutInformation;
    }
    if ( v8 == 1 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      *(_OWORD *)(a3 + 8) = *(_OWORD *)(v7 + 8);
      return (unsigned int)DriveLayoutInformation;
    }
    DriveLayoutInformation = -1073741811;
  }
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0x4B444342u);
    *a2 = 0LL;
  }
  return (unsigned int)DriveLayoutInformation;
}
