/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01D51C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C0015634 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C014972C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C01FEEA4 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  ULONG64 v12; // rcx
  struct tagWINDOWSTATION *v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  __int64 v18; // r15
  unsigned int v19; // ecx
  __int64 v20; // r10
  _DWORD *v21; // r8
  _DWORD *v22; // rdx
  int v24; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = CurrentProcessWin32Process;
  v10 = 0;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  EnterSharedCrit(v7, v6, v8);
  v13 = CheckClipboardAccess(v11);
  if ( v13 )
  {
    v14 = PsGetCurrentProcessWin32Process(v12);
    if ( v14 )
      v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
    v15 = CountNumClipFormatForIL(*(_QWORD *)(v14 + 864), (__int64)v13);
    v12 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    *a3 = v15;
    if ( a2 >= v15 )
    {
      v16 = 0;
      v17 = 0;
      v24 = 0;
      while ( v16 < *((_DWORD *)v13 + 34) && v17 < a2 )
      {
        v18 = 32LL * v16;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(*((_QWORD *)v13 + 16) + v18 + 20),
                             *(_QWORD *)(v9 + 864))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(*((_QWORD *)v13 + 16) + 32LL * v16)) )
        {
          v21 = (_DWORD *)(a1 + 4LL * v17);
          v22 = v21;
          if ( (unsigned __int64)v21 >= MmUserProbeAddress )
            v22 = (_DWORD *)MmUserProbeAddress;
          *v22 = *v22;
          v12 = *(unsigned int *)(v18 + *((_QWORD *)v13 + 16));
          *v21 = v12;
          v17 = ++v24;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, v9, v19, *(_QWORD *)(v20 + v18 + 20));
        }
        ++v16;
      }
      v10 = 1;
    }
    else
    {
      UserSetLastError(122);
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
