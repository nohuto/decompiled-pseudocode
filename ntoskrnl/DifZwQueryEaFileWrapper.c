/*
 * XREFs of DifZwQueryEaFileWrapper @ 0x1405F1CF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryEaFile @ 0x140414CD0 (ZwQueryEaFile.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwQueryEaFileWrapper(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v22; // rdi
  _QWORD *v23; // rbx
  _QWORD v24[10]; // [rsp+58h] [rbp-41h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+37h]

  memset(v24, 0, sizeof(v24));
  APIThunkContextById = DifGetAPIThunkContextById(592);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v18 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v18 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v24[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v18 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v14, v13, v16, v17);
      goto LABEL_9;
    }
  }
  v24[0] = 0LL;
LABEL_10:
  LOBYTE(v24[5]) = ReturnSingleEntry;
  v24[4] = EaList;
  LODWORD(v24[3]) = EaListLength;
  v24[2] = EaIndex;
  LOBYTE(v24[1]) = RestartScan;
  v24[8] = FileHandle;
  v24[7] = IoStatusBlock;
  v24[6] = Buffer;
  HIDWORD(v24[5]) = Length;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v24);
  }
LABEL_17:
  result = ZwQueryEaFile(
             FileHandle,
             IoStatusBlock,
             Buffer,
             Length,
             ReturnSingleEntry,
             EaList,
             EaListLength,
             EaIndex,
             RestartScan);
  LODWORD(v24[9]) = result;
  if ( APIThunkContextById )
  {
    v22 = (_QWORD **)(APIThunkContextById + 6);
    v23 = *v22;
    if ( *v22 != v22 )
    {
      do
      {
        if ( v23 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v23 - 1))(v24);
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v22 );
      return v24[9];
    }
  }
  return result;
}
