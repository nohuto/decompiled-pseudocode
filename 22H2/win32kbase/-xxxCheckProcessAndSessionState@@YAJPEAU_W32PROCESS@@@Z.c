/*
 * XREFs of ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C003772C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 * Callees:
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C003800C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 __fastcall xxxCheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // ebx
  int v3; // edi
  void *ProcessInheritedFromUniqueProcessId; // rax
  int v6; // eax
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  struct tagKERNELHANDLETABLEENTRY *v11; // rdi
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+70h] [rbp+7h] BYREF
  void *ProcessHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && qword_1C0294E60 && (unsigned int)qword_1C0294E60() )
    return 0LL;
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( !qword_1C0294E78 || (int)qword_1C0294E78() < 0 || (gdwHydraHint & 0x10000000) != 0 )
      return 0LL;
    v3 = 1;
  }
  if ( (unsigned int)PsGetCurrentProcessSessionId() )
  {
    ProcessHandle = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_24;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && qword_1C02957F0
        && (int)qword_1C02957F0() >= 0
        && (!qword_1C02957F8 || !(unsigned int)qword_1C02957F8(ProcessInformation[8])) )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_24:
        if ( InformationProcess == -1073741558 || InformationProcess == -1073741813 )
        {
          return 0;
        }
        else if ( v3 )
        {
          UserSessionSwitchLeaveCrit();
          if ( qword_1C0294E80 )
          {
            v6 = qword_1C0294E80();
            InformationProcess = v6;
            if ( v6 == 259 )
            {
              InformationProcess = 0;
            }
            else if ( v6 >= 0 )
            {
              gdwHydraHint |= 0x10000000u;
            }
          }
          else
          {
            InformationProcess = -1073741637;
          }
          v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v7;
          if ( v7 )
          {
            *((_DWORD *)v7 + 387) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
            if ( CurrentProcessWin32Process
              && *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v11 = gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v10 = *(_QWORD *)v11;
                *((_QWORD *)v11 + 2) = 0LL;
                if ( !*(_DWORD *)(v10 + 8) )
                {
                  LODWORD(ProcessHandle) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                }
                HMUnlockObject(*(_QWORD *)v11);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
