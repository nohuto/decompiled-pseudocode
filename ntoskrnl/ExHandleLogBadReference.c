/*
 * XREFs of ExHandleLogBadReference @ 0x140604648
 * Callers:
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     ExMapHandleToPointerEx @ 0x140776CE8 (ExMapHandleToPointerEx.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandle @ 0x1407DF424 (ObpReferenceObjectByHandle.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x14056E8C0 (KeRaiseUserException.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     ExpUpdateDebugInfo @ 0x1409F6478 (ExpUpdateDebugInfo.c)
 */

struct _KTHREAD *__fastcall ExHandleLogBadReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  struct _KTHREAD *BugCheckParameter4; // rsi
  struct _KTHREAD *result; // rax
  struct _KTHREAD *CurrentThread; // rdx

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    BugCheckParameter4 = KeGetCurrentThread();
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)ExpUpdateDebugInfo(BugCheckParameter2, BugCheckParameter4, BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( result->ApcStateIndex != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == result->ApcState.Process[1].Affinity.StaticBitmap[28] )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              KeGetCurrentThread()->ApcState.Process);
          if ( (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) & 0x1000) != 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x200000000000LL) != 0 )
              KeBugCheckEx(
                0x1EDu,
                BugCheckParameter1,
                BugCheckParameter2,
                (ULONG_PTR)CurrentThread->ApcState.Process,
                (ULONG_PTR)BugCheckParameter4);
            DbgkWerCaptureLiveKernelDump(
              (unsigned int)L"BadHandleKmChk",
              492,
              -1073741816,
              (_DWORD)BugCheckParameter4,
              (__int64)CurrentThread->ApcState.Process,
              BugCheckParameter1,
              0LL,
              0LL,
              0);
          }
          return (struct _KTHREAD *)KeRaiseUserException(0xC0000008);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
