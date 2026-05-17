/*
 * XREFs of LdrpLoadShimEngine @ 0x18006C8F4
 * Callers:
 *     LdrpInitShimEngine @ 0x18006C74C (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0440 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpPinModule @ 0x18000F948 (LdrpPinModule.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x18006CB04 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006CB94 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeNode @ 0x18006D124 (LdrpInitializeNode.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800D09C8 (LdrpInitializationFailure.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rbx
  int Dll; // ecx
  __int64 v10; // rcx
  int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  char v15; // al
  char v16; // al
  __int64 i; // rax
  __int64 v18; // [rsp+30h] [rbp-89h]
  __int64 v19; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  __int64 v21[15]; // [rsp+60h] [rbp-59h] BYREF
  char v22; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, v21);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll((__int64)&DestinationString, (int)v21, 1, (__int64)&v19);
    if ( Dll < 0 )
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v18) = Dll;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2302,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          (__int64)"Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v18);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(v19 + 104) |= 0x100u;
      LdrpPinModule(v19);
      v10 = v19;
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 152) + 56LL) == 7 )
      {
        v11 = LdrpInitializeNode(*(_QWORD *)(v19 + 152));
        if ( v11 < 0 )
        {
          v16 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LODWORD(v18) = v11;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2328,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              (__int64)"Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v18);
            v16 = LdrpDebugFlags;
          }
          if ( (v16 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v11);
          ZwTerminateProcess(-1LL, (unsigned int)v11);
          break;
        }
        v10 = v19;
      }
      v3(*(_QWORD *)(v10 + 48));
      LdrpDereferenceModule(v19, v12, v13, v14);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v22 )
    RtlReleasePath(v21[0]);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_18016C4D0; (__int64 *)i != &qword_18016C4D0; i = *(_QWORD *)i )
    {
      v19 = i;
      *(_BYTE *)(i + 105) &= ~8u;
    }
  }
  v7 = (__int64 *)qword_18016C4D0;
  if ( LdrInitState >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v7 = (__int64 *)*v7;
LABEL_10:
    if ( v7 == &qword_18016C4D0 )
      break;
    v19 = (__int64)v7;
    LdrpSendShimEngineInitialNotifications(v7[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock, v5, v6);
  LdrpInitializeShimDllDependencies();
  return v2;
}
