/*
 * XREFs of NtSetShellCursorState @ 0x1C016D020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     IsShellProcess @ 0x1C00BD53C (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C020B0A4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     CheckCapability @ 0x1C0217620 (CheckCapability.c)
 *     SetContentOrientation @ 0x1C0218748 (SetContentOrientation.c)
 */

__int64 __fastcall NtSetShellCursorState(__int64 a1, _DWORD *Src, unsigned int a3)
{
  __int64 v3; // r12
  _DWORD *v4; // rsi
  unsigned int v5; // r13d
  struct tagRECT *QuotaZInit; // r14
  int v7; // eax
  __int64 v8; // rcx
  NTSTATUS v9; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edi
  ULONG v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagTHREADINFO *v20; // rax
  CCursorClip *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // r8
  __int64 v30; // r9

  v3 = a3;
  v4 = Src;
  v5 = a1;
  QuotaZInit = 0LL;
  if ( !gbOSTestSigningEnabled )
  {
    v7 = CheckCapability(L"shellExperienceComposer");
    if ( v7 < 0 )
    {
      v9 = v7;
LABEL_43:
      v13 = 0;
      v14 = RtlNtStatusToDosError(v9);
      goto LABEL_44;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    Src = (_DWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      a1 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      Src = (_DWORD *)(a1 & CurrentProcessWin32Process);
    }
    if ( (Src[203] & 0x30) == 0 )
    {
      v11 = PsGetCurrentProcessWin32Process(a1);
      v12 = v11;
      if ( v11 )
        v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
      if ( !(unsigned int)IsShellProcess(v12) )
      {
        v13 = 0;
        v14 = 5;
LABEL_44:
        UserSetLastError(v14);
        goto LABEL_45;
      }
    }
  }
  if ( v5 - 1 > 3 )
  {
LABEL_12:
    v13 = 0;
    v14 = 87;
    goto LABEL_44;
  }
  if ( (_DWORD)v3 )
  {
    v15 = 16 * v3;
    if ( (unsigned __int64)(16 * v3) > 0xFFFFFFFF )
      goto LABEL_12;
    if ( (unsigned int)v15 >= 0x2710000
      || (QuotaZInit = (struct tagRECT *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                           (NSInstrumentation::CLeakTrackingAllocator *)a1,
                                           (unsigned __int64)Src,
                                           (unsigned int)v15,
                                           0x63736355u)) == 0LL )
    {
      v13 = 0;
      v14 = 8;
      goto LABEL_44;
    }
    if ( v15 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v17, v16, v18, v19) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v4[(unsigned __int64)v15 / 4] > MmUserProbeAddress || &v4[(unsigned __int64)v15 / 4] < v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(QuotaZInit, v4, (unsigned int)v15);
  }
  else if ( v4 )
  {
    goto LABEL_12;
  }
  v20 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
  gptiCurrent = v20;
  v13 = 1;
  if ( v20 )
  {
    *((_DWORD *)v20 + 387) = 1;
    v22 = PsGetCurrentProcessWin32Process(v21);
    if ( v22 )
    {
      v21 = (CCursorClip *)-*(_QWORD *)v22;
      v23 = -(__int64)(*(_QWORD *)v22 != 0LL) & v22;
      if ( v23 )
      {
        if ( (*(_DWORD *)(v23 + 12) & 0x8000) != 0 )
        {
          v21 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v24 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v24 = 0;
          }
          if ( v24 )
          {
            while ( 1 )
            {
              v25 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v25[2] = 0LL;
              if ( !*(_DWORD *)(*v25 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v25);
            }
          }
        }
      }
    }
  }
  v28 = CCursorClip::SetShellClip(v21, QuotaZInit, v3);
  if ( v28 >= 0 )
    SetContentOrientation(v5);
  UserSessionSwitchLeaveCrit(v27, v26, v29, v30);
  if ( v28 < 0 )
  {
    v9 = v28;
    goto LABEL_43;
  }
LABEL_45:
  if ( !v13 && QuotaZInit )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
  return v13;
}
