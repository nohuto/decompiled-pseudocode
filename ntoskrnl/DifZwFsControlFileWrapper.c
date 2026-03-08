/*
 * XREFs of DifZwFsControlFileWrapper @ 0x1405EE630
 * Callers:
 *     <none>
 * Callees:
 *     ZwFsControlFile @ 0x140412A30 (ZwFsControlFile.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwFsControlFileWrapper(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[12]; // [rsp+58h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v25, 0, sizeof(v25));
  APIThunkContextById = DifGetAPIThunkContextById(546);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v19 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v19 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v25[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v19 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v15, v14, v17, v18);
      goto LABEL_9;
    }
  }
  v25[0] = 0LL;
LABEL_10:
  v25[6] = IoStatusBlock;
  LODWORD(v25[5]) = FsControlCode;
  v25[4] = InputBuffer;
  LODWORD(v25[3]) = InputBufferLength;
  v25[2] = OutputBuffer;
  LODWORD(v25[1]) = OutputBufferLength;
  v25[10] = FileHandle;
  v25[9] = Event;
  v25[8] = ApcRoutine;
  v25[7] = ApcContext;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v25);
  }
LABEL_17:
  result = ZwFsControlFile(
             FileHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             FsControlCode,
             InputBuffer,
             InputBufferLength,
             OutputBuffer,
             OutputBufferLength);
  LODWORD(v25[11]) = result;
  if ( APIThunkContextById )
  {
    v23 = (_QWORD **)(APIThunkContextById + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v24 - 1))(v25);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return v25[11];
    }
  }
  return result;
}
