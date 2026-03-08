/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x1C01E1840
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x1C01CD150 (-GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z.c)
 */

__int64 __fastcall NtUserfnGETWINDOWDATA(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        int a6)
{
  __int64 WindowData; // rbx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  char v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  _BYTE *v20; // rdx
  __int64 v21; // rsi

  WindowData = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  if ( a6 == 689 && a4 < 3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v15 = (*(_DWORD *)(v14 + 12) & 0x80) != 0;
    v16 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
    if ( (v16 & 0x10) != 0 )
    {
      return GetWindowData(a1, a4, a3, (*(_DWORD *)(v14 + 12) & 0x80) != 0);
    }
    else
    {
      v17 = PsGetCurrentProcessWin32Process(v16);
      v18 = v17;
      if ( v17 )
        v18 = -(__int64)(*(_QWORD *)v17 != 0LL) & v17;
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v19 == v18 )
      {
        v20 = (_BYTE *)a5;
        if ( a5 >= MmUserProbeAddress )
          v20 = (_BYTE *)MmUserProbeAddress;
        *v20 = 1;
      }
      else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0 )
      {
        WindowData = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, ULONG64))qword_1C0360EC8)(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 12LL) & 0x80u) != 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 1) == 0 || a3 )
            v21 = a3 + 4;
          else
            v21 = 17LL;
          return (((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))qword_1C0360EC8)(a1, a2, v21) << 32) | WindowData;
        }
      }
      else if ( (unsigned __int8)CheckAccess(*((_QWORD *)v12 + 53) + 864LL, v19 + 864) )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        WindowData = GetWindowData(a1, a4, a3, v15);
        KeDetachProcess();
      }
    }
  }
  return WindowData;
}
