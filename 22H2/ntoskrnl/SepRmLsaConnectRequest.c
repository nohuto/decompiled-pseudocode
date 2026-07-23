/*
 * XREFs of SepRmLsaConnectRequest @ 0x1407AD7F0
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD670 (SepRmCommandServerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwAcceptConnectPort @ 0x1403F9A60 (ZwAcceptConnectPort.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenProcess @ 0x1403F9EE0 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x1403FA360 (ZwCreateSection.c)
 *     ZwCompleteConnectPort @ 0x1403FADE0 (ZwCompleteConnectPort.c)
 *     ZwConnectPort @ 0x1403FAE20 (ZwConnectPort.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x1407ADA98 (SepRmVerifyLsaProtectionLevel.c)
 *     SepRmCleanupRmLsaState @ 0x14091C0D4 (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(PPORT_MESSAGE ConnectionRequest)
{
  struct _DMA_ADAPTER *v2; // r14
  NTSTATUS v3; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rbx
  char *v5; // rdi
  bool IsHostSilo; // r15
  __int64 v7; // rdx
  NTSTATUS Section; // esi
  struct _LIST_ENTRY *v9; // rbx
  void *v10; // rcx
  unsigned int v12; // ebx
  ULONG MaxMessageLength[2]; // [rsp+48h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-81h] BYREF
  PVOID PortHandle; // [rsp+58h] [rbp-79h] BYREF
  _PORT_VIEW v16; // [rsp+60h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  _REMOTE_PORT_VIEW ClientView; // [rsp+A0h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-19h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+E8h] [rbp+17h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  MaxMessageLength[0] = 0;
  *(_QWORD *)&SecurityQos.Length = 0LL;
  *(_DWORD *)&SecurityQos.ContextTrackingMode = 0;
  memset(&v16, 0, sizeof(v16));
  v2 = 0LL;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  memset(&ClientView, 0, sizeof(ClientView));
  DestinationString = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, &ConnectionRequest->ClientId) >= 0 )
  {
    PortHandle = 0LL;
    v3 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &PortHandle, 0LL);
    v2 = (struct _DMA_ADAPTER *)PortHandle;
    if ( v3 >= 0 )
    {
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PortHandle);
      v5 = (char *)PsGetServerSiloGlobals((__int64)ProcessServerSilo) + 784;
      if ( !*(_QWORD *)v5 )
      {
        *(_QWORD *)v5 = ProcessHandle;
        SepRmVerifyLsaProtectionLevel(v5);
        ClientView.Length = 24;
        IsHostSilo = PsIsHostSilo((__int64)ProcessServerSilo);
        if ( IsHostSilo )
        {
          v7 = -8LL;
        }
        else
        {
          ObfReferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
          v7 = (__int64)ProcessServerSilo;
        }
        Section = ZwAcceptConnectPort((PHANDLE)v5 + 3, (PVOID)v7, ConnectionRequest, 1u, 0LL, &ClientView);
        if ( Section < 0 )
        {
          if ( !IsHostSilo )
            ObfDereferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        }
        else
        {
          Section = ZwCompleteConnectPort(*((HANDLE *)v5 + 3));
          if ( Section >= 0 )
          {
            SecurityQos.ImpersonationLevel = SecurityImpersonation;
            *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
            *((_DWORD *)v5 + 12) = 4096;
            *((_DWORD *)v5 + 13) = 0;
            Section = ZwCreateSection((PHANDLE)v5 + 5, 0xF001Fu, 0LL, (PLARGE_INTEGER)v5 + 6, 4u, 0x8000000u, 0LL);
            if ( Section >= 0 )
            {
              v16.Length = 48;
              v16.SectionHandle = (HANDLE)*((_QWORD *)v5 + 5);
              v16.SectionOffset = 0;
              v16.ViewSize = *((unsigned int *)v5 + 12);
              *(_OWORD *)&v16.ViewBase = 0LL;
              v9 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort(
                          (PHANDLE)v5 + 1,
                          &DestinationString,
                          &SecurityQos,
                          &v16,
                          0LL,
                          MaxMessageLength,
                          0LL,
                          0LL);
              PsDetachSiloFromCurrentThread(v9);
              if ( Section >= 0 )
              {
                if ( MaxMessageLength[0] == 512 )
                {
                  *((_QWORD *)v5 + 8) = v16.ViewBase;
                  *((_DWORD *)v5 + 18) = LODWORD(v16.ViewRemoteBase) - LODWORD(v16.ViewBase);
                  *((_QWORD *)v5 + 7) = v16.ViewRemoteBase;
LABEL_12:
                  v10 = (void *)*((_QWORD *)v5 + 5);
                  if ( v10 )
                  {
                    ZwClose(v10);
                    *((_QWORD *)v5 + 5) = 0LL;
                  }
                  if ( v2 )
                    HalPutDmaAdapter(v2);
                  return (unsigned int)Section;
                }
                Section = -1073741823;
              }
            }
          }
        }
        SepRmCleanupRmLsaState(v5);
        goto LABEL_12;
      }
    }
    ZwClose(ProcessHandle);
  }
  PortHandle = 0LL;
  v12 = ZwAcceptConnectPort(&PortHandle, 0LL, ConnectionRequest, 0, 0LL, 0LL);
  if ( v2 )
    HalPutDmaAdapter(v2);
  return v12;
}
