/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x14036D3B0
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x14079A910 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14079AA30 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D500 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D5A0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildAsynchronousFsdRequest(
                 MajorFunction,
                 DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 IoStatusBlock,
                 retaddr);
}
