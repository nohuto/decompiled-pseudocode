/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C020311C
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 * Callees:
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C009FA68 (AdjustPwndPtiPqForDelegation.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C00EFB10 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z @ 0x1C0220918 (-TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z.c)
 */

void __fastcall DelegateMoveSizeToShell(struct tagWND *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  struct tagWND *v7; // rbx
  __int64 v8; // r15
  bool v9; // zf
  char v10; // dl
  __int64 v11; // rcx
  unsigned __int16 v12; // si
  unsigned __int16 v13; // bx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 *v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+80h] [rbp-80h] BYREF
  int v21; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  struct tagWND *v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v26[30]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v27; // [rsp+120h] [rbp+20h]
  __int128 v28; // [rsp+130h] [rbp+30h]
  __int128 v29; // [rsp+140h] [rbp+40h]
  __int128 v30; // [rsp+150h] [rbp+50h]
  __int128 v31; // [rsp+160h] [rbp+60h]
  __int128 v32; // [rsp+170h] [rbp+70h]
  __int128 v33; // [rsp+180h] [rbp+80h]

  v4 = *((_QWORD *)a1 + 3);
  v5 = *((_QWORD *)a1 + 2);
  v23 = a1;
  v7 = a1;
  v24 = v5;
  v8 = *(_QWORD *)(v4 + 320);
  if ( !a2 || (v9 = a2 == 10, v10 = 1, v9) )
    v10 = 0;
  v11 = *(_QWORD *)(v8 + 16);
  v12 = 0;
  if ( *(_QWORD *)(v5 + 432) != *(_QWORD *)(v11 + 432) )
    *(_DWORD *)(v11 + 488) |= 0x20u;
  if ( v10 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 432) + 396LL) & 0x1800000) != 0 )
    {
      v13 = *(_WORD *)(SGDGetUserSessionState(v11) + 16056);
      v15 = SGDGetUserSessionState(v14);
      if ( CTouchProcessor::ThreadHasPrimaryCaptureExternal(
             *(CTouchProcessor **)(v15 + 3424),
             (struct tagTHREADINFO *const)v5,
             v13) )
      {
        v12 = v13;
      }
    }
    else
    {
      v12 = 1;
    }
    if ( !ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x20000000) )
    {
      v16 = (__int128 *)INPUTDEST_FROM_PWND(v26, v8);
      v27 = *v16;
      v28 = v16[1];
      v29 = v16[2];
      v30 = v16[3];
      v31 = v16[4];
      v32 = v16[5];
      v33 = v16[6];
      ForceCapture(1LL);
    }
    v22 = 0LL;
    SetSystemInputSource(&v22);
    v17 = *(unsigned __int16 *)(v5 + 764) | (*(unsigned __int16 *)(v5 + 768) << 16);
    v21 = 0;
    v25 = *(_QWORD *)(v5 + 432);
    v18 = v17;
    v20 = 0;
    if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                         &v25,
                         (__int64 *)&v23,
                         (struct tagTHREADINFO **)&v24,
                         0x202u,
                         &v22,
                         &v21,
                         &v20) )
    {
      v19 = v18;
      v7 = v23;
      PostInputMessage(
        *(struct tagQ **)(v24 + 432),
        v23,
        0x202u,
        0LL,
        v19,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v22,
        0LL,
        0LL,
        v21,
        v20,
        v24);
    }
    else
    {
      v7 = v23;
    }
  }
  NotifyShell::TrackedWindowMoveSizeIntercept(v7, (struct tagWND *)a2, v12, a4);
}
