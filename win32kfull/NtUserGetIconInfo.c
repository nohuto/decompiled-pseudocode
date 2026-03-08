/*
 * XREFs of NtUserGetIconInfo @ 0x1C0060FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C003AAB8 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C003AB4C (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0060888 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0060F98 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserGetIconInfo(
        __int64 a1,
        ULONG64 a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  struct tagCURSOR *v17; // rax
  __int64 v18; // rcx
  struct tagCURSOR *v19; // rdi
  ULONG64 v20; // rcx
  ULONG64 v21; // rdx
  _DWORD *v22; // rdx
  ULONG64 v23; // rdx
  _BYTE *v24; // rdx
  int IconInfo; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int DpiForSystem; // eax
  CCursorSizes *v31; // rcx
  int SizeForDpi; // eax
  struct tagCURSOR *DPICursor; // rax
  struct _UNICODE_STRING *v34; // [rsp+68h] [rbp-60h]
  struct _UNICODE_STRING *v35; // [rsp+70h] [rbp-58h]
  __int128 v36; // [rsp+80h] [rbp-48h] BYREF
  __int128 v37; // [rsp+90h] [rbp-38h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v10) + 8)
    || (v12 = SGDGetUserSessionState(v11), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v15 = 3LL;
  LOBYTE(v16) = 3;
  v17 = (struct tagCURSOR *)HMValidateHandle(a1, v16);
  v19 = v17;
  if ( v17 )
  {
    if ( ShouldVirtualizeIconCursorSize(v17) )
    {
      DpiForSystem = GetDpiForSystem(v20);
      SizeForDpi = CCursorSizes::GetSizeForDpi(v31, DpiForSystem);
      DPICursor = FindDPICursor(v19, SizeForDpi);
      if ( DPICursor )
        v19 = DPICursor;
    }
    if ( a3 )
    {
      v23 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v23 = MmUserProbeAddress;
      LODWORD(v36) = *(_DWORD *)v23;
      *((_QWORD *)&v36 + 1) = *(_QWORD *)(v23 + 8);
      ProbeForWrite(*((volatile void **)&v36 + 1), WORD1(v36), 2u);
      v35 = (struct _UNICODE_STRING *)&v36;
    }
    else
    {
      v35 = 0LL;
    }
    if ( a4 )
    {
      v21 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v21 = MmUserProbeAddress;
      LODWORD(v37) = *(_DWORD *)v21;
      *((_QWORD *)&v37 + 1) = *(_QWORD *)(v21 + 8);
      ProbeForWrite(*((volatile void **)&v37 + 1), WORD1(v37), 2u);
      v34 = (struct _UNICODE_STRING *)&v37;
    }
    else
    {
      v34 = 0LL;
    }
    if ( a5 )
    {
      v20 = MmUserProbeAddress;
      v22 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      *v22 = *v22;
    }
    if ( PsGetCurrentProcessWow64Process(v20) )
      v15 = 0LL;
    if ( (v15 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v24 = (_BYTE *)MmUserProbeAddress;
    *v24 = *v24;
    v24[31] = v24[31];
    IconInfo = (unsigned __int8)_InternalGetIconInfo(v19, (struct _ICONINFO *)a2, v35, v34, a5, a6 != 0);
    if ( a3 )
    {
      v18 = 0LL;
      *(_DWORD *)(&v35->MaximumLength + 1) = 0;
      *a3 = *v35;
    }
    if ( a4 )
    {
      v18 = 0LL;
      *(_DWORD *)(&v34->MaximumLength + 1) = 0;
      *a4 = *v34;
    }
  }
  else
  {
    IconInfo = 0;
  }
  v26 = IconInfo;
  v27 = PsGetCurrentThreadWin32Thread(v18);
  --*(_DWORD *)(v27 + 48);
  UserSessionSwitchLeaveCrit(v28);
  return v26;
}
