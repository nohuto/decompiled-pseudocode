/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01FBD90
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00300BC (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C003013C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0030448 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021E7E8 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  ULONG64 v7; // rcx
  struct tagWINDOWSTATION *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // edi
  unsigned int v12; // r15d
  __int64 v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // r10
  _DWORD *v16; // r8
  _DWORD *v17; // rdx
  int v19; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  v8 = CheckClipboardAccess();
  if ( v8 )
  {
    v9 = PsGetCurrentProcessWin32Process(v7);
    v10 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v9 + 880), (__int64)v8);
    v7 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    *a3 = v10;
    if ( a2 >= (unsigned int)v10 )
    {
      v11 = 0;
      v12 = 0;
      v19 = 0;
      while ( v11 < *((_DWORD *)v8 + 34) && v12 < a2 )
      {
        v13 = 32LL * v11;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v13 + *((_QWORD *)v8 + 16) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 880))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(v13 + *((_QWORD *)v8 + 16))) )
        {
          v16 = (_DWORD *)(a1 + 4LL * v12);
          v17 = v16;
          if ( (unsigned __int64)v16 >= MmUserProbeAddress )
            v17 = (_DWORD *)MmUserProbeAddress;
          *v17 = *v17;
          v7 = *(unsigned int *)(v13 + *((_QWORD *)v8 + 16));
          *v16 = v7;
          v12 = ++v19;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v14, *(_QWORD *)(v13 + v15 + 20));
        }
        ++v11;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
