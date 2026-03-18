/*
 * XREFs of SepRmLsaConnectRequest @ 0x14083B480
 * Callers:
 *     SepRmCommandServerThread @ 0x14083B300 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAcceptConnectPort @ 0x14041B7A0 (ZwAcceptConnectPort.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenProcess @ 0x14041BC20 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     ZwCompleteConnectPort @ 0x14041CB60 (ZwCompleteConnectPort.c)
 *     ZwConnectPort @ 0x14041CBA0 (ZwConnectPort.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x14083B728 (SepRmVerifyLsaProtectionLevel.c)
 *     SepRmCleanupRmLsaState @ 0x1409C5A40 (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(__int64 a1)
{
  PVOID v1; // r14
  NTSTATUS v2; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rbx
  char *v4; // rdi
  bool IsHostSilo; // r15
  __int64 v6; // rdx
  int Section; // esi
  struct _LIST_ENTRY *v8; // rbx
  void *v9; // rcx
  unsigned int v11; // ebx
  HANDLE ProcessHandle; // [rsp+50h] [rbp-81h] BYREF
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  __int128 v14; // [rsp+60h] [rbp-71h]
  __int128 v15; // [rsp+70h] [rbp-61h]
  __int128 v16; // [rsp+80h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-31h] BYREF
  int v19; // [rsp+D0h] [rbp-1h]
  __int128 v20; // [rsp+D4h] [rbp+3h]
  __int64 v21; // [rsp+E8h] [rbp+17h]
  int v22; // [rsp+F0h] [rbp+1Fh]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&v16 = 0LL;
  DWORD2(v16) = 0;
  v21 = 0LL;
  v22 = 0;
  ProcessHandle = 0LL;
  v14 = 0LL;
  v1 = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  v15 = 0LL;
  v20 = 0LL;
  DestinationString = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, (PCLIENT_ID)(a1 + 8)) >= 0 )
  {
    Object = 0LL;
    v2 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
    v1 = Object;
    if ( v2 >= 0 )
    {
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)Object);
      v4 = (char *)PsGetServerSiloGlobals((__int64)ProcessServerSilo) + 784;
      if ( !*(_QWORD *)v4 )
      {
        *(_QWORD *)v4 = ProcessHandle;
        SepRmVerifyLsaProtectionLevel(v4);
        v19 = 24;
        IsHostSilo = PsIsHostSilo((__int64)ProcessServerSilo);
        if ( !IsHostSilo )
          ObfReferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        Section = ZwAcceptConnectPort();
        if ( Section < 0 )
        {
          if ( !IsHostSilo )
            ObfDereferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        }
        else
        {
          Section = ZwCompleteConnectPort(*((_QWORD *)v4 + 3), v6);
          if ( Section >= 0 )
          {
            HIDWORD(v21) = 2;
            LOWORD(v22) = 257;
            *((_DWORD *)v4 + 12) = 4096;
            *((_DWORD *)v4 + 13) = 0;
            Section = ZwCreateSection((PHANDLE)v4 + 5, 0xF001Fu, 0LL, (PLARGE_INTEGER)v4 + 6, 4u, 0x8000000u, 0LL);
            if ( Section >= 0 )
            {
              LODWORD(v14) = 48;
              *((_QWORD *)&v14 + 1) = *((_QWORD *)v4 + 5);
              LODWORD(v15) = 0;
              *((_QWORD *)&v15 + 1) = *((unsigned int *)v4 + 12);
              v16 = 0LL;
              v8 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort((__int64)(v4 + 8), (__int64)&DestinationString);
              PsDetachSiloFromCurrentThread(v8);
              if ( Section >= 0 )
                Section = -1073741823;
            }
          }
        }
        SepRmCleanupRmLsaState(v4);
        v9 = (void *)*((_QWORD *)v4 + 5);
        if ( v9 )
        {
          ZwClose(v9);
          *((_QWORD *)v4 + 5) = 0LL;
        }
        if ( v1 )
          ObfDereferenceObject(v1);
        return (unsigned int)Section;
      }
    }
    ZwClose(ProcessHandle);
  }
  Object = 0LL;
  v11 = ZwAcceptConnectPort();
  if ( v1 )
    ObfDereferenceObject(v1);
  return v11;
}
