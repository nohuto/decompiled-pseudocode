/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01D4190
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00163E4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0018758 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C015644C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C01FC324 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // ebx
  _DWORD *v11; // rdx
  ULONG64 v12; // rcx
  struct tagWINDOWSTATION *v13; // rsi
  ULONG64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  __int64 v19; // r15
  unsigned int v20; // ecx
  __int64 v21; // r10
  int v23; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = CurrentProcessWin32Process;
  v10 = 0;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  EnterSharedCrit(v7, v6, v8);
  v13 = CheckClipboardAccess();
  if ( v13 )
  {
    v16 = PsGetCurrentProcessWin32Process(v12);
    if ( v16 )
      v16 &= -(__int64)(*(_QWORD *)v16 != 0LL);
    v14 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v16 + 888), (__int64)v13);
    v11 = (_DWORD *)MmUserProbeAddress;
    v12 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    *a3 = v14;
    if ( a2 >= (unsigned int)v14 )
    {
      v17 = 0;
      v18 = 0;
      v23 = 0;
      while ( v17 < *((_DWORD *)v13 + 34) && v18 < a2 )
      {
        v19 = 32LL * v17;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(*((_QWORD *)v13 + 16) + v19 + 20),
                             *(_QWORD *)(v9 + 888))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(*((_QWORD *)v13 + 16) + 32LL * v17)) )
        {
          v14 = a1 + 4LL * v18;
          v11 = (_DWORD *)v14;
          if ( v14 >= MmUserProbeAddress )
            v11 = (_DWORD *)MmUserProbeAddress;
          *v11 = *v11;
          v12 = *(unsigned int *)(v19 + *((_QWORD *)v13 + 16));
          *(_DWORD *)v14 = v12;
          v18 = ++v23;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, v9, v20, *(_QWORD *)(v21 + v19 + 20));
        }
        ++v17;
      }
      v10 = 1;
    }
    else
    {
      UserSetLastError(122);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v14, v15);
  return v10;
}
