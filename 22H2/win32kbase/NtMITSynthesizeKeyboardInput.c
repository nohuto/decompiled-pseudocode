/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1C012BDD0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0043604 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     HMValidateHandle @ 0x1C0043940 (HMValidateHandle.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004D1F0 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ProcessKeyboardInjectedInput @ 0x1C01B05E4 (ProcessKeyboardInjectedInput.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BCFD4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(unsigned int a1, __int128 *a2, volatile void *a3)
{
  int v6; // ebx
  unsigned int v7; // edi
  CInputThread *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v13; // r8d
  int i; // r10d
  char v15; // si
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // r11
  __int64 v18; // rax
  _DWORD v20[10]; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v21; // [rsp+88h] [rbp-D0h]
  __int128 v22; // [rsp+98h] [rbp-C0h]
  __int128 v23; // [rsp+A8h] [rbp-B0h]
  __int128 v24; // [rsp+B8h] [rbp-A0h]
  _OWORD v25[4]; // [rsp+E0h] [rbp-78h] BYREF

  v6 = 0;
  v7 = 0;
  v20[4] = 0;
  EnterCrit(0, 1);
  memset(v25, 0, sizeof(v25));
  if ( !CInputThread::IsInputThread(v8) )
  {
    v10 = 5LL;
LABEL_3:
    UserSetLastError(v10, v9);
    goto LABEL_28;
  }
  if ( a2 + 4 < a2 || (unsigned __int64)(a2 + 4) > MmUserProbeAddress )
    a2 = (__int128 *)MmUserProbeAddress;
  v21 = *a2;
  v22 = a2[1];
  v23 = a2[2];
  v24 = a2[3];
  v25[0] = v21;
  v25[1] = v22;
  v25[2] = v23;
  v25[3] = v24;
  if ( (a1 & 3) != 0 )
  {
    v20[0] = 0;
    if ( DWORD1(v22) == 2 )
    {
      if ( gpfnIVResolveContainerId )
        gpfnIVResolveContainerId((const struct _GUID *)((char *)&v25[1] + 8), (struct CONTAINER_ID *)v20);
    }
    else
    {
      v20[0] = DWORD2(v22);
    }
    v7 = IVRootDeliver::Keyboard::VirtualizeKeyboardInput(a1, v20, v25, *((_QWORD *)&v25[2] + 1));
  }
  else
  {
    if ( a1 != 4 )
    {
      if ( a1 != 8 )
        goto LABEL_28;
      v18 = HMValidateHandle(*((__int64 *)&v23 + 1), 0x13u);
      if ( !*((_QWORD *)&v25[2] + 1) || v18 )
      {
        ProcessKeyboardInjectedInput(v25, v18, &v25[3]);
        v7 = 1;
        goto LABEL_28;
      }
      v7 = 0;
      v10 = 6LL;
      goto LABEL_3;
    }
    xxxUpdateGlobalsAndSendKeyEvent(
      SWORD4(v21),
      v21,
      SHIDWORD(v21),
      0LL,
      *((__int64 *)&v23 + 1),
      0LL,
      v22,
      DWORD1(v21),
      0,
      0LL,
      0LL,
      (__int64)&v25[3]);
    v7 = 1;
    if ( a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
      ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      v13 = 0;
      for ( i = 0; ; i = v13 )
      {
        v20[0] = v6;
        if ( v13 >= 256 )
          break;
        v15 = v6 & 3;
        v16 = (unsigned __int64)(unsigned __int8)v6 >> 2;
        v17 = *((_BYTE *)&gafAsyncKeyState + v16);
        if ( ((unsigned __int8)(1 << (2 * v15)) & v17) != 0 )
        {
          *((_BYTE *)a3 + i) = *((_BYTE *)a3 + v13) | 0x80;
          v17 = *((_BYTE *)&gafAsyncKeyState + v16);
        }
        if ( ((unsigned __int8)(1 << (2 * v15 + 1)) & v17) != 0 )
          *((_BYTE *)a3 + i) = *((_BYTE *)a3 + v13) | 1;
        v6 = ++v13;
      }
    }
  }
LABEL_28:
  UserSessionSwitchLeaveCrit();
  return v7;
}
