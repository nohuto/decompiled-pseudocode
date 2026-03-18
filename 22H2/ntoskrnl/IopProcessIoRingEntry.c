/*
 * XREFs of IopProcessIoRingEntry @ 0x14094A028
 * Callers:
 *     NtSubmitIoRing @ 0x140559A70 (NtSubmitIoRing.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1405593FC (IopCompleteIoRingEntry.c)
 *     IopIoRingSetupCompletionWait @ 0x140559718 (IopIoRingSetupCompletionWait.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14055995C (IopIoRingWaitForCompletionEvent.c)
 *     IopIoRingDispatchCancel @ 0x14094932C (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x1409493EC (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchRead @ 0x1409494CC (IopIoRingDispatchRead.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140949640 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140949A60 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingDispatchWrite @ 0x140949D14 (IopIoRingDispatchWrite.c)
 */

__int64 __fastcall IopProcessIoRingEntry(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rcx
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  char v9; // [rsp+50h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v9 = 0;
    IopIoRingSetupCompletionWait((__int64)a1, 0, 0xFFFFFFFF, 0, &v9);
    if ( v9 )
    {
      IopIoRingWaitForCompletionEvent((__int64)a1, 0, 0, 0LL);
      *a3 = 1;
    }
  }
  ++a1[14];
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFE) != 0 && (unsigned int)(*(_DWORD *)a2 - 2) > 1 )
  {
    LODWORD(v8) = -1069154303;
LABEL_22:
    v6 = (__int64)a1;
    goto LABEL_23;
  }
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      LODWORD(v8) = 0;
      goto LABEL_22;
    case 1:
      return IopIoRingDispatchRead(a1, a2, (__int64)a3);
    case 2:
      return IopIoRingDispatchRegisterFiles((__int64)a1, a2);
    case 3:
      return IopIoRingDispatchRegisterBuffers((__int64)a1, a2);
    case 4:
      return IopIoRingDispatchCancel((__int64)a1, a2);
    case 5:
      return IopIoRingDispatchWrite((__int64)a1, a2, (__int64)a3);
  }
  v6 = (__int64)a1;
  if ( *(_DWORD *)a2 == 6 )
    return IopIoRingDispatchFlush(a1, a2);
  LODWORD(v8) = -1073741822;
LABEL_23:
  DWORD1(v8) = 0;
  *((_QWORD *)&v8 + 1) = 0LL;
  return IopCompleteIoRingEntry(v6, *(_QWORD *)(a2 + 8), &v8, 0);
}
