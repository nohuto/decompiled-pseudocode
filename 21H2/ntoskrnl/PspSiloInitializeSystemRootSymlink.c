/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x1409AC86C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     RtlUShortAdd @ 0x1402DE190 (RtlUShortAdd.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PspSiloInitializeSystemRootSymlink(struct _LIST_ENTRY *a1)
{
  const UNICODE_STRING *ServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  USHORT v4; // si
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  struct _LIST_ENTRY *v7; // rbx
  int SymbolicLinkObject; // esi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int64 *v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+4Ch] [rbp-14h]
  __int128 v16; // [rsp+50h] [rbp-10h]
  USHORT pusResult; // [rsp+98h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  pusResult = 0;
  v11 = 0;
  v15 = 0;
  Handle = 0LL;
  ServerSiloGlobals = (const UNICODE_STRING *)PsGetServerSiloGlobals((__int64)a1);
  result = RtlUShortAdd(0x14u, ServerSiloGlobals[79].Length, &pusResult);
  if ( result >= 0 )
  {
    v4 = pusResult;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pusResult, 0x70537350u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v4;
      DestinationString.Buffer = PoolWithTag;
      RtlCopyUnicodeString(&DestinationString, &PspSystemRootTargetPrefix);
      RtlAppendUnicodeStringToString(&DestinationString, ServerSiloGlobals + 79);
      v10 = 48;
      v13 = &PspSystemRootSymlinkName;
      v12 = 0LL;
      v16 = 0LL;
      v14 = 528;
      v7 = PsAttachSiloToCurrentThread(a1);
      SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
      PsDetachSiloFromCurrentThread(v7);
      if ( SymbolicLinkObject >= 0 )
        ZwClose(Handle);
      ExFreePoolWithTag(v6, 0x70537350u);
      return SymbolicLinkObject;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
