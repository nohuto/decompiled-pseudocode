/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x140413BD0 (ZwCreateSymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PspSiloInitializeSystemRootSymlink(struct _LIST_ENTRY *a1)
{
  const UNICODE_STRING *ServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  USHORT v4; // si
  wchar_t *Pool2; // rax
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
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, pusResult, 1884517200LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v4;
      DestinationString.Buffer = Pool2;
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
