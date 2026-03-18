/*
 * XREFs of NtUserSetTimer @ 0x1C0074F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *Data; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rdi
  unsigned int v19; // edi
  unsigned int v20; // esi
  __int64 v21; // rdx
  _DWORD *v22; // rax

  EnterCrit(0LL, 0LL);
  v9 = 0;
  v10 = gpresUser;
  if ( !gpresUser || !ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  Data = (_DWORD *)GetData(v10, v11, v12);
  if ( Data )
  {
    ++*Data;
    v9 = 1;
  }
  if ( a1 )
  {
    v16 = ValidateHwnd(a1);
    if ( !v16 )
    {
LABEL_10:
      v18 = 0LL;
      goto LABEL_26;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v19 = 10;
  if ( a3 >= 0xA )
    v19 = a3;
  v20 = a5;
  if ( v19 > 0x7FFFFFFF )
    v19 = 0x7FFFFFFF;
  if ( a5 == 2147483637 )
  {
    v20 = 0x7FFFFFFF - v19;
  }
  else if ( a5 != -1 && (v19 + a5 < v19 || v19 + a5 > 0x7FFFFFFF) )
  {
    v18 = 0LL;
    UserSetLastError(87LL, v14);
    goto LABEL_26;
  }
  if ( v16 && PsGetCurrentProcessWin32Process(0x7FFFFFFFLL) != *(_QWORD *)(*(_QWORD *)(v16 + 16) + 424LL) )
  {
    UserSetLastError(5LL, v21);
    goto LABEL_10;
  }
  v18 = InternalSetTimer(v16, a2, v19, a4, v20, 0);
LABEL_26:
  if ( v9 )
  {
    v22 = (_DWORD *)GetData(v15, v14, v17);
    --*v22;
  }
  UserSessionSwitchLeaveCrit(v15);
  return v18;
}
