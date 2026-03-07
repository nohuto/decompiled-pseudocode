__int64 __fastcall EditionGetUserObjectInformationEntryPoint(
        HANDLE Handle,
        int a2,
        volatile void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  SIZE_T v5; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  ULONG v14; // r8d
  _DWORD *v15; // rdx
  unsigned int UserObjectInformation; // edi
  PVOID v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22[7]; // [rsp+58h] [rbp-50h] BYREF

  v5 = a4;
  LODWORD(v22[0]) = 0;
  EnterCrit(0LL, 0LL);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v9) + 8)
    || (v11 = SGDGetUserSessionState(v10), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 8))) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v12);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v14 = 4;
  if ( a2 != 1 )
    v14 = 2;
  ProbeForWrite(a3, v5, v14);
  if ( a5 )
  {
    v15 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v22);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v22[0];
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8);
  }
  v17 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  v18 = PsGetCurrentThreadWin32Thread(v17);
  --*(_DWORD *)(v18 + 48);
  UserSessionSwitchLeaveCrit(v19);
  return UserObjectInformation;
}
