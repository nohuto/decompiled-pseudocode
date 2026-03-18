/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C0024310
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00244BC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002536C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002583C (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     DestroySMWP @ 0x1C0047920 (DestroySMWP.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F10CC (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
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
  __int64 v12; // rdi
  __int64 v14; // rdx
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rsi
  struct tagWND *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rcx
  _BYTE v26[8]; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v27; // [rsp+58h] [rbp-18h] BYREF
  struct tagWND *v28; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+B8h] [rbp+48h] BYREF

  v29 = a4;
  v12 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v26);
  v15 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    v25 = 1004LL;
LABEL_18:
    UserSetLastError(v25);
    goto LABEL_13;
  }
  LOBYTE(v14) = 4;
  v16 = HMValidateHandle(a1, v14);
  v17 = v16;
  if ( !v16 )
    goto LABEL_13;
  if ( (*(_DWORD *)(v16 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v16);
    v25 = 1405LL;
    goto LABEL_18;
  }
  if ( (unsigned int)ValidateHWNDND(a2, &v27) && (unsigned int)ValidateHWNDIA(a3, &v28) )
  {
    v18 = v27;
    if ( v27 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 1) != 0
        || (v20 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480), (*(_BYTE *)(v20 + 224) & 0x20) != 0) )
      {
        v18 = v27;
      }
      else
      {
        v18 = v27;
        v21 = *(_DWORD *)(*((_QWORD *)v27 + 5) + 288LL);
        if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v20,
                                                                                 v19) >> 8)) & 0x1FF) != 0 )
          TransformSWPCoords(v18, &v29, &a5, &a6, &a7, v15);
      }
    }
    v22 = (__int64 *)_DeferWindowPosAndBand(v17, v18, v28, (unsigned int)v29, a5, a6, a7, v15, a9, a10 != 0);
    if ( v22 )
      v12 = *v22;
  }
  else if ( a10 )
  {
    DestroySMWP(v17);
  }
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
  UserSessionSwitchLeaveCrit(v23);
  return v12;
}
