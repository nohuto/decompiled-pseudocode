/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C0029610
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0028CFC (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0028D5C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0028DAC (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     DestroySMWP @ 0x1C00A1B10 (DestroySMWP.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CC70C (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        struct tagWND *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // rbx
  int v13; // r14d
  AtomicExecutionCheck *v15; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v17; // rdx
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagWND *v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rcx
  struct tagWND *v33; // [rsp+50h] [rbp-10h] BYREF
  struct tagWND *v34; // [rsp+58h] [rbp-8h] BYREF
  int v35; // [rsp+A8h] [rbp+48h] BYREF

  v35 = a4;
  v12 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v13 = a4;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::EnforceConsistency(v15);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v18 = a8;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( (v18 & 0xFFFC9800) != 0 )
  {
    v32 = 1004LL;
LABEL_13:
    UserSetLastError(v32);
    goto LABEL_10;
  }
  LOBYTE(v17) = 4;
  v19 = HMValidateHandle(a1, v17);
  v20 = v19;
  if ( !v19 )
    goto LABEL_10;
  if ( (*(_DWORD *)(v19 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v19);
    v32 = 1405LL;
    goto LABEL_13;
  }
  LOBYTE(v21) = ValidateHWNDND(a2, &v33);
  if ( v21 && (unsigned int)ValidateHWNDIA(a3, &v34) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v22);
    v24 = v33;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v33, CurrentThreadDpiAwarenessContext) )
    {
      TransformSWPCoords(v24, &v35, &a5, &a6, &a7, v18);
      v13 = v35;
    }
    v25 = (__int64 *)_DeferWindowPosAndBand(v20, (__int64)v24, v34, v13, a5, a6, a7, v18, a9, a10 != 0);
    if ( v25 )
      v12 = *v25;
  }
  else if ( a10 )
  {
    DestroySMWP(v20);
  }
LABEL_10:
  v26 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v26 + 48);
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  return v12;
}
