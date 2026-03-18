/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C0098E30
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  PERESOURCE *v11; // rax
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    v11 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v6, v5, v7, v8);
    if ( !ExIsResourceAcquiredSharedLite(*v11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v12 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    *(_QWORD *)&v18 = *(_QWORD *)(v12 + 416);
    *(_QWORD *)(v12 + 416) = &v18;
    *((_QWORD *)&v18 + 1) = v10;
    HMLockObject(v10);
    if ( (*(_DWORD *)(v10 + 320) & 0x80000) != 0 && (unsigned int)IsTopLevelWindow(v10) )
      v9 = 1LL;
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
