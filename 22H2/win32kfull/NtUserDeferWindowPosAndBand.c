/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C00320C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00322D8 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0032328 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A8E4 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C006F450 (DestroySMWP.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F63B4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10)
{
  __int64 v10; // rdi
  int v14; // r15d
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // r14
  struct tagWND *v19; // rsi
  unsigned int v20; // ebx
  int v21; // ebx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rcx
  struct tagWND *v26; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v27; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+B8h] [rbp+48h] BYREF

  v29 = a4;
  v10 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v14 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v16 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    v25 = 1004LL;
LABEL_26:
    UserSetLastError(v25);
    goto LABEL_17;
  }
  LOBYTE(v15) = 4;
  v17 = HMValidateHandle(a1, v15);
  v18 = v17;
  if ( !v17 )
    goto LABEL_17;
  if ( (*(_DWORD *)(v17 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v17);
    v25 = 1405LL;
    goto LABEL_26;
  }
  if ( (unsigned int)ValidateHWNDND(a2, &v26) && (unsigned int)ValidateHWNDIA(a3, &v27) )
  {
    v19 = v26;
    if ( v26 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 1) != 0
        || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 0x20) != 0 )
      {
        v19 = v26;
      }
      else
      {
        v19 = v26;
        v20 = *(_DWORD *)(*((_QWORD *)v26 + 5) + 288LL);
        if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
          goto LABEL_29;
        if ( (*(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL) & 0xF) != 2
          || (v21 = 1, (*(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL) & 0x20000000) == 0) )
        {
          v21 = 0;
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0 )
        {
          v14 = 0;
        }
        if ( v21 != v14 )
LABEL_29:
          TransformSWPCoords(v19, &v29, &a5, &a6, &a7, v16);
      }
    }
    v22 = (__int64 *)_DeferWindowPosAndBand(v18, v19, v27, (unsigned int)v29, a5, a6, a7, v16, a9, a10 != 0);
    if ( v22 )
      v10 = *v22;
  }
  else if ( a10 )
  {
    DestroySMWP(v18);
  }
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v23);
  return v10;
}
