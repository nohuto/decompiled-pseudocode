/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C021CF44
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C010DB58 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z @ 0x1C0236DB8 (-TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z.c)
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
  int v13; // ecx
  __int16 v14; // bx
  __int128 *v15; // rax
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  struct tagWND *v21; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v24[30]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v25; // [rsp+110h] [rbp+10h]
  __int128 v26; // [rsp+120h] [rbp+20h]
  __int128 v27; // [rsp+130h] [rbp+30h]
  __int128 v28; // [rsp+140h] [rbp+40h]
  __int128 v29; // [rsp+150h] [rbp+50h]
  __int128 v30; // [rsp+160h] [rbp+60h]
  __int128 v31; // [rsp+170h] [rbp+70h]

  v4 = *((_QWORD *)a1 + 3);
  v5 = *((_QWORD *)a1 + 2);
  v21 = a1;
  v7 = a1;
  v22 = v5;
  v8 = *(_QWORD *)(v4 + 320);
  if ( !a2 || (v9 = a2 == 10, v10 = 1, v9) )
    v10 = 0;
  v11 = *(_QWORD *)(v8 + 16);
  v12 = 0;
  if ( *(_QWORD *)(v5 + 432) != *(_QWORD *)(v11 + 432) )
    *(_DWORD *)(v11 + 488) |= 0x20u;
  if ( v10 )
  {
    v13 = *(_DWORD *)(*(_QWORD *)(v5 + 432) + 388LL);
    if ( (v13 & 0x800000) != 0 || (v13 & 0x1000000) != 0 )
    {
      v14 = word_1C0335C90[0];
      if ( CTouchProcessor::ThreadHasPrimaryCaptureExternal(
             gpTouchProcessor,
             (struct tagTHREADINFO *const)v5,
             word_1C0335C90[0]) )
      {
        v12 = v14;
      }
    }
    else
    {
      v12 = 1;
    }
    if ( !ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x20000000) )
    {
      v15 = (__int128 *)INPUTDEST_FROM_PWND(v24, v8);
      v25 = *v15;
      v26 = v15[1];
      v27 = v15[2];
      v28 = v15[3];
      v29 = v15[4];
      v30 = v15[5];
      v31 = v15[6];
      ForceCapture(1LL);
    }
    v20 = 0LL;
    SetSystemInputSource(&v20);
    v16 = *(unsigned __int16 *)(v5 + 764) | (*(unsigned __int16 *)(v5 + 768) << 16);
    v19 = 0;
    v23 = *(_QWORD *)(v5 + 432);
    v17 = v16;
    if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                         &v23,
                         (__int64 *)&v21,
                         (struct tagTHREADINFO **)&v22,
                         0x202u,
                         &v20,
                         &v19) )
    {
      v18 = v17;
      v7 = v21;
      PostInputMessage(
        *(struct tagQ **)(v22 + 432),
        v21,
        0x202u,
        0LL,
        v18,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v20,
        0LL,
        0LL,
        v19,
        v22);
    }
    else
    {
      v7 = v21;
    }
  }
  NotifyShell::TrackedWindowMoveSizeIntercept(v7, (struct tagWND *)a2, v12, a4);
}
