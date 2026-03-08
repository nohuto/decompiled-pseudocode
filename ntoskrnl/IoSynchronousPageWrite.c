/*
 * XREFs of IoSynchronousPageWrite @ 0x1402F0170
 * Callers:
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoSynchronousPageWriteEx(FileObject, MemoryDescriptorList, StartingOffset, Event, 0, 0LL, IoStatusBlock);
}
