/*
 * XREFs of SmpOpenTargetFile @ 0x140017680
 * Callers:
 *     SmpProcessFileRenames @ 0x140009054 (SmpProcessFileRenames.c)
 *     SmpCheckFolderForRedirections @ 0x14000EE7C (SmpCheckFolderForRedirections.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x14000F3BC (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpForceDeleteTargetFile @ 0x140017024 (SmpForceDeleteTargetFile.c)
 *     SmpShuffleMove @ 0x140017C34 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140017E90 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpOpenTargetFile(
        void **a1,
        ACCESS_MASK a2,
        struct _OBJECT_ATTRIBUTES *a3,
        char a4,
        ULONG ShareAccess)
{
  NTSTATUS result; // eax
  _DWORD FileInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-20h] BYREF

  result = NtOpenFile(a1, a2, a3, &IoStatusBlock, ShareAccess, a4 != 0 ? 2113568 : 16416);
  if ( result >= 0 )
  {
    if ( NtQueryInformationFile(*a1, &IoStatusBlock, FileInformation, 8u, FileAttributeTagInformation) < 0
      || (FileInformation[0] & 0x400) == 0
      || (FileInformation[1] & 0x20000000) != 0 )
    {
      return 0;
    }
    else
    {
      NtClose(*a1);
      *a1 = 0LL;
      return -1073741608;
    }
  }
  return result;
}
