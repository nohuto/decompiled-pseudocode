/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1407DAE44 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x1407DBBB8 (SepDeReferenceLogonSession.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D5DD0 (wcscmp.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140412E10 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x1404145F0 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1404149D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x140414C90 (ZwQueryDirectoryObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  _KPROCESS *Process; // rdi
  char v6; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v8; // r13
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  HANDLE *Pool2; // rsi
  __int64 v12; // rdi
  int DirectoryObject; // r14d
  int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // r15d
  HANDLE *v17; // r14
  HANDLE *v19; // r14
  unsigned int v20; // [rsp+48h] [rbp-B8h]
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  v20 = 100;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v23 = 0;
  v4 = 0LL;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !a1 )
    return 3221225485LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = ObReferenceObjectSafeWithTag((__int64)Process);
  if ( v6 )
    ObfDereferenceObjectWithTag(Process, 0x4D526553u);
  else
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v8 = PsAttachSiloToCurrentThread(a2);
  v9 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v9 < 0 )
  {
    PsDetachSiloFromCurrentThread(v8);
    if ( !v6 )
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    return (unsigned int)v9;
  }
  else
  {
    v10 = 800LL;
LABEL_6:
    Pool2 = (HANDLE *)ExAllocatePool2(256LL, v10, 1632134483LL);
    if ( Pool2 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v4);
        if ( DirectoryObject != -1073741789 )
          goto LABEL_9;
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        v4 = (UNICODE_STRING *)ExAllocatePool2(256LL, 0LL, 1648649555LL);
        if ( v4 )
        {
LABEL_9:
          v14 = DirectoryObject;
          if ( DirectoryObject != -1073741789 )
            goto LABEL_10;
        }
        else
        {
          v14 = -1073741670;
          DirectoryObject = -1073741670;
LABEL_10:
          if ( DirectoryObject < 0 )
          {
            v16 = 0;
            if ( DirectoryObject != -2147483622 )
              v16 = v14;
            if ( (_DWORD)v12 )
            {
              v17 = Pool2;
              do
              {
                ZwClose(*v17++);
                --v12;
              }
              while ( v12 );
            }
            ExFreePoolWithTag(Pool2, 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            if ( DirectoryHandle )
              ZwClose(DirectoryHandle);
            PsDetachSiloFromCurrentThread(v8);
            if ( !v6 )
              KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
            return v16;
          }
          if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
          {
            v15 = v20;
            if ( (unsigned int)v12 >= v20 )
            {
              if ( (_DWORD)v12 )
              {
                v19 = Pool2;
                do
                {
                  ZwClose(*v19++);
                  --v12;
                }
                while ( v12 );
              }
              v20 += 20;
              ExFreePoolWithTag(Pool2, 0);
              v10 = 8LL * (v15 + 20);
              goto LABEL_6;
            }
            ObjectAttributes.RootDirectory = DirectoryHandle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.ObjectName = v4;
            if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
            {
              if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
              {
                ZwClose(LinkHandle);
              }
              else
              {
                Pool2[v12] = LinkHandle;
                v12 = (unsigned int)(v12 + 1);
              }
            }
          }
        }
      }
    }
    ZwClose(DirectoryHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    PsDetachSiloFromCurrentThread(v8);
    if ( !v6 )
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    return 3221225495LL;
  }
}
