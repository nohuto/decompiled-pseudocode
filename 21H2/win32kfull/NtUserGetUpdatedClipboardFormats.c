/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01F6C70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00CA3D4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C0140C58 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C0219760 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG64 v10; // rcx
  struct tagWINDOWSTATION *v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // edi
  unsigned int v15; // r15d
  __int64 v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // r10
  _DWORD *v19; // r8
  _DWORD *v20; // rdx
  int v22; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = 0;
  EnterSharedCrit(v8, v7, v9);
  v11 = CheckClipboardAccess();
  if ( v11 )
  {
    v12 = PsGetCurrentProcessWin32Process(v10);
    v13 = CountNumClipFormatForIL(*(_QWORD *)(v12 + 880), (__int64)v11);
    v10 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    *a3 = v13;
    if ( a2 >= v13 )
    {
      v14 = 0;
      v15 = 0;
      v22 = 0;
      while ( v14 < *((_DWORD *)v11 + 34) && v15 < a2 )
      {
        v16 = 32LL * v14;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v16 + *((_QWORD *)v11 + 16) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 880))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(v16 + *((_QWORD *)v11 + 16))) )
        {
          v19 = (_DWORD *)(a1 + 4LL * v15);
          v20 = v19;
          if ( (unsigned __int64)v19 >= MmUserProbeAddress )
            v20 = (_DWORD *)MmUserProbeAddress;
          *v20 = *v20;
          v10 = *(unsigned int *)(v16 + *((_QWORD *)v11 + 16));
          *v19 = v10;
          v15 = ++v22;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v17, *(_QWORD *)(v16 + v18 + 20));
        }
        ++v14;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
