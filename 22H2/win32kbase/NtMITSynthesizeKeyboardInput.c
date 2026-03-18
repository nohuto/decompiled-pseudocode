/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1C0009460
 * Callers:
 *     <none>
 * Callees:
 *     ProcessKeyboardInjectedInput @ 0x1C0002558 (ProcessKeyboardInjectedInput.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     IsKeyStateCached @ 0x1C004EB60 (IsKeyStateCached.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     HMValidateHandle @ 0x1C0052938 (HMValidateHandle.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     IsKeyboardIVEnabled @ 0x1C00A8664 (IsKeyboardIVEnabled.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     VKFromVSC @ 0x1C01EB390 (VKFromVSC.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01F2B50 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01F2DEC (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F38C4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(__int64 a1, struct _UNICODE_STRING *a2, volatile void *a3)
{
  int v5; // r15d
  int v6; // ebx
  unsigned int v7; // edi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  char v12; // al
  struct tagKERNELHANDLETABLEENTRY *v13; // r14
  __int64 v14; // rdx
  const struct _KEYBOARD_INPUT_DATA *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // r9
  char v27; // al
  char v28; // di
  unsigned __int8 MaximumLength; // si
  char v30; // cl
  int v31; // r9d
  __int64 CurrentProcessWow64Process; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  int v38; // r13d
  int v39; // r14d
  int v40; // esi
  int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // r9
  unsigned __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  int Buffer; // [rsp+60h] [rbp-108h] BYREF
  int v50; // [rsp+64h] [rbp-104h]
  int v51; // [rsp+68h] [rbp-100h]
  int v52; // [rsp+78h] [rbp-F0h]
  struct _UNICODE_STRING v53; // [rsp+88h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v54; // [rsp+98h] [rbp-D0h]
  struct _UNICODE_STRING v55; // [rsp+A8h] [rbp-C0h]
  struct _UNICODE_STRING v56; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+D0h] [rbp-98h]
  struct _UNICODE_STRING v58[4]; // [rsp+F0h] [rbp-78h] BYREF

  v5 = a1;
  v6 = 0;
  v7 = 0;
  v52 = 0;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v11 && (*(_DWORD *)(v11 + 12) & 0x8000) != 0 )
    {
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v12 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v12 = 0;
      if ( v12 )
      {
        while ( 1 )
        {
          v13 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v13 + 2) = 0LL;
          if ( !*(_DWORD *)(*(_QWORD *)v13 + 8LL) )
          {
            Buffer = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          }
          HMUnlockObject(*(_QWORD *)v13);
        }
      }
    }
  }
  memset(v58, 0, sizeof(v58));
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v21 = 5LL;
    goto LABEL_28;
  }
  if ( &a2[4] < a2 || (unsigned __int64)&a2[4] > MmUserProbeAddress )
    a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
  v53 = *a2;
  v54 = a2[1];
  v55 = a2[2];
  v56 = a2[3];
  v58[0] = v53;
  v58[1] = v54;
  v58[2] = v55;
  v58[3] = v56;
  if ( (v5 & 3) != 0 )
  {
    Buffer = 0;
    if ( *(_DWORD *)(&v54.MaximumLength + 1) == 2 )
    {
      if ( gpfnIVResolveContainerId )
        gpfnIVResolveContainerId((const struct _GUID *)&v58[1].Buffer, (struct CONTAINER_ID *)&Buffer);
    }
    else
    {
      Buffer = (int)v54.Buffer;
    }
    v15 = (const struct _KEYBOARD_INPUT_DATA *)v58[2].Buffer;
    if ( (unsigned __int8)IsKeyboardIVEnabled() )
    {
      if ( (unsigned __int8)isRootPartition() )
      {
        v22 = SGDGetUserSessionState(v17, v16, v18, v19);
        if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v22 + 12672) + 1296LL)) )
        {
          if ( (_WORD)Buffer || (v27 = 1, HIWORD(Buffer)) )
            v27 = 0;
          if ( !v27
            && (v5 & 2) != 0
            && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
                               (IVRootDeliver::Keyboard::Detail *)&Buffer,
                               v58,
                               v15,
                               v26) )
          {
            goto LABEL_38;
          }
          if ( (v5 & 1) != 0 )
          {
            v28 = *((_BYTE *)&v58[0].MaximumLength + 2);
            if ( (*(_BYTE *)(&v58[0].MaximumLength + 1) & 0x40) != 0 )
            {
              MaximumLength = v58[0].MaximumLength;
            }
            else
            {
              if ( (*(_BYTE *)(&v58[0].MaximumLength + 1) & 2) != 0 )
              {
                v30 = -32;
              }
              else
              {
                v30 = 0;
                if ( (*(_BYTE *)(&v58[0].MaximumLength + 1) & 4) != 0 )
                  v30 = -31;
              }
              v53 = 0LL;
              LOBYTE(v53.Length) = v58[0].MaximumLength & 0x7F;
              *(_QWORD *)&v54.Length = *(_QWORD *)&v58[0].Length;
              v54.Buffer = (PWSTR)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v58[0], 8));
              LOBYTE(v23) = v30;
              MaximumLength = VKFromVSC(&v53, v23, v25);
              v28 = *((_BYTE *)&v58[0].MaximumLength + 2);
            }
            LOBYTE(v24) = MaximumLength;
            if ( (unsigned __int8)IsKeyStateCached(v24) )
            {
              if ( (unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                                   (IVRootDeliver::Keyboard::Detail *)&Buffer,
                                   (const struct CONTAINER_ID *)MaximumLength,
                                   v28 & 1,
                                   v31) )
              {
LABEL_38:
                v7 = 0;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
    goto LABEL_19;
  }
  if ( v5 != 4 )
  {
    if ( v5 != 8 )
      goto LABEL_20;
    LOBYTE(v14) = 19;
    v48 = (_QWORD *)HMValidateHandle(v55.Buffer, v14);
    if ( !v58[2].Buffer || v48 )
    {
      ProcessKeyboardInjectedInput((__int64)v58, v48, (__int64)&v58[3]);
LABEL_19:
      v7 = 1;
      goto LABEL_20;
    }
    v7 = 0;
    v21 = 6LL;
LABEL_28:
    UserSetLastError(v21);
    goto LABEL_20;
  }
  xxxUpdateGlobalsAndSendKeyEvent(
    LOWORD(v53.Buffer),
    v53.Length,
    HIDWORD(v53.Buffer),
    0,
    (__int64)v55.Buffer,
    0LL,
    v54.Length,
    *(_DWORD *)(&v53.MaximumLength + 1) != 0,
    0,
    0LL,
    0LL,
    (__int64)&v58[3]);
  v7 = 1;
  if ( a3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v50 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    Buffer = 0;
    v40 = 0;
    v41 = 0;
    v51 = 0;
    while ( v37 < 256 )
    {
      v42 = SGDGetUserSessionState(v34, v33, v35, v36);
      v50 = v6 & 3;
      v44 = (unsigned __int64)(unsigned __int8)v6 >> 2;
      v57 = v44;
      v45 = (unsigned int)(2 * v50);
      v46 = (unsigned int)(1 << (2 * v50));
      if ( ((unsigned __int8)v46 & *(_BYTE *)(v44 + v42 + 13992)) != 0 )
      {
        LOBYTE(v45) = *((_BYTE *)a3 + v38) | 0x80;
        *((_BYTE *)a3 + v40) = v45;
        v39 = Buffer;
        v41 = v51;
      }
      v47 = SGDGetUserSessionState(v45, v46, v44, v43);
      v33 = (unsigned int)(1 << (2 * v50 + 1));
      v34 = v57;
      if ( ((unsigned __int8)v33 & *(_BYTE *)(v47 + v57 + 13992)) != 0 )
      {
        LOBYTE(v34) = *((_BYTE *)a3 + v39) | 1;
        *((_BYTE *)a3 + v41) = v34;
      }
      v37 = v6 + 1;
      v40 = v37;
      ++v6;
      v50 = v37;
      v38 = v37;
      v39 = v37;
      Buffer = v37;
      v41 = v37;
      v51 = v37;
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit();
  return v7;
}
