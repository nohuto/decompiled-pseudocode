/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x1C01009E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x1C01F61B4 (-GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z.c)
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
  __int64 v10; // rcx
  bool v11; // r15
  __int64 v12; // r13
  _BYTE *v13; // rdx
  __int64 v15; // rdi

  WindowData = 0LL;
  if ( a6 == 689 && a4 < 3 )
  {
    v11 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x80) != 0;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) != 0 )
    {
      return GetWindowData(a1, a4, a3, v11);
    }
    else
    {
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v12 == PsGetCurrentProcessWin32Process(v10) )
      {
        v13 = (_BYTE *)a5;
        if ( a5 >= MmUserProbeAddress )
          v13 = (_BYTE *)MmUserProbeAddress;
        *v13 = 1;
      }
      else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0 )
      {
        WindowData = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, ULONG64))qword_1C033A0D8)(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 12LL) & 0x80u) != 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 1) == 0 || a3 )
            v15 = a3 + 4;
          else
            v15 = 17LL;
          return (((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))qword_1C033A0D8)(a1, a2, v15) << 32) | WindowData;
        }
      }
      else if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v12 + 880) )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        WindowData = GetWindowData(a1, a4, a3, v11);
        KeDetachProcess();
      }
    }
  }
  return WindowData;
}
