/*
 * XREFs of CcCopyWriteWontFlush @ 0x14022B870
 * Callers:
 *     FsRtlCopyWrite @ 0x14088A8E0 (FsRtlCopyWrite.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14022BA70 (PsGetBaseIoPriorityThread.c)
 *     CcCanIWriteStreamEx @ 0x140293B50 (CcCanIWriteStreamEx.c)
 *     CcIsFileObjectDirectMapped @ 0x14031AB74 (CcIsFileObjectDirectMapped.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  int BaseIoPriorityThread; // eax
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r9
  BOOLEAN result; // al

  if ( Length < 0x1000000 && (FileObject->Flags & 0x10) == 0 )
  {
    if ( (BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread()), BaseIoPriorityThread < 2)
      && (struct _KTHREAD *)v7 == KeGetCurrentThread()
      && *(_DWORD *)(v7 + 1360)
      || BaseIoPriorityThread > 0 )
    {
      if ( (v5 & 0x1000000) == 0
        || (unsigned __int8)CcCanIWriteStreamEx(*((_QWORD *)PspSystemPartition + 1), (_DWORD)FileObject, v6, 0, 0, 0LL) )
      {
        return 1;
      }
    }
  }
  result = CcIsFileObjectDirectMapped(FileObject, 0LL);
  if ( result )
    return 1;
  return result;
}
