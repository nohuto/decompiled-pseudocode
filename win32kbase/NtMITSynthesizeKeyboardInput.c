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
  void *v25; // r9
  char v26; // al
  char v27; // di
  unsigned __int8 MaximumLength; // si
  char v29; // cl
  int v30; // r9d
  __int64 CurrentProcessWow64Process; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  int v37; // r13d
  int v38; // r14d
  int v39; // esi
  int v40; // r15d
  __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  int Buffer; // [rsp+60h] [rbp-108h] BYREF
  int v49; // [rsp+64h] [rbp-104h]
  int v50; // [rsp+68h] [rbp-100h]
  int v51; // [rsp+78h] [rbp-F0h]
  struct _UNICODE_STRING v52; // [rsp+88h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v53; // [rsp+98h] [rbp-D0h]
  struct _UNICODE_STRING v54; // [rsp+A8h] [rbp-C0h]
  struct _UNICODE_STRING v55; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v56; // [rsp+D0h] [rbp-98h]
  struct _UNICODE_STRING v57[4]; // [rsp+F0h] [rbp-78h] BYREF

  v5 = a1;
  v6 = 0;
  v7 = 0;
  v51 = 0;
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
  memset(v57, 0, sizeof(v57));
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v21 = 5LL;
    goto LABEL_28;
  }
  if ( &a2[4] < a2 || (unsigned __int64)&a2[4] > MmUserProbeAddress )
    a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
  v52 = *a2;
  v53 = a2[1];
  v54 = a2[2];
  v55 = a2[3];
  v57[0] = v52;
  v57[1] = v53;
  v57[2] = v54;
  v57[3] = v55;
  if ( (v5 & 3) != 0 )
  {
    Buffer = 0;
    if ( *(_DWORD *)(&v53.MaximumLength + 1) == 2 )
    {
      if ( gpfnIVResolveContainerId )
        gpfnIVResolveContainerId((const struct _GUID *)&v57[1].Buffer, (struct CONTAINER_ID *)&Buffer);
    }
    else
    {
      Buffer = (int)v53.Buffer;
    }
    v15 = (const struct _KEYBOARD_INPUT_DATA *)v57[2].Buffer;
    if ( (unsigned __int8)IsKeyboardIVEnabled() )
    {
      if ( (unsigned __int8)isRootPartition() )
      {
        v22 = SGDGetUserSessionState(v17, v16, v18, v19);
        if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v22 + 12672) + 1360LL)) )
        {
          if ( (_WORD)Buffer || (v26 = 1, HIWORD(Buffer)) )
            v26 = 0;
          if ( !v26
            && (v5 & 2) != 0
            && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
                               (IVRootDeliver::Keyboard::Detail *)&Buffer,
                               v57,
                               v15,
                               v25) )
          {
            goto LABEL_38;
          }
          if ( (v5 & 1) != 0 )
          {
            v27 = *((_BYTE *)&v57[0].MaximumLength + 2);
            if ( (*(_BYTE *)(&v57[0].MaximumLength + 1) & 0x40) != 0 )
            {
              MaximumLength = v57[0].MaximumLength;
            }
            else
            {
              if ( (*(_BYTE *)(&v57[0].MaximumLength + 1) & 2) != 0 )
              {
                v29 = -32;
              }
              else
              {
                v29 = 0;
                if ( (*(_BYTE *)(&v57[0].MaximumLength + 1) & 4) != 0 )
                  v29 = -31;
              }
              v52 = 0LL;
              LOBYTE(v52.Length) = v57[0].MaximumLength & 0x7F;
              *(_QWORD *)&v53.Length = *(_QWORD *)&v57[0].Length;
              v53.Buffer = (PWSTR)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v57[0], 8));
              LOBYTE(v23) = v29;
              MaximumLength = VKFromVSC(&v52, v23);
              v27 = *((_BYTE *)&v57[0].MaximumLength + 2);
            }
            LOBYTE(v24) = MaximumLength;
            if ( (unsigned __int8)IsKeyStateCached(v24) )
            {
              if ( (unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                                   (IVRootDeliver::Keyboard::Detail *)&Buffer,
                                   (const struct CONTAINER_ID *)MaximumLength,
                                   v27 & 1,
                                   v30) )
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
    v47 = HMValidateHandle(v54.Buffer, v14);
    if ( !v57[2].Buffer || v47 )
    {
      ProcessKeyboardInjectedInput(v57, v47, &v57[3]);
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
    LOWORD(v52.Buffer),
    v52.Length,
    HIDWORD(v52.Buffer),
    0,
    (__int64)v54.Buffer,
    0LL,
    v53.Length,
    *(_DWORD *)(&v52.MaximumLength + 1) != 0,
    0,
    0LL,
    0LL,
    (__int64)&v57[3]);
  v7 = 1;
  if ( a3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v49 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    Buffer = 0;
    v39 = 0;
    v40 = 0;
    v50 = 0;
    while ( v36 < 256 )
    {
      v41 = SGDGetUserSessionState(v33, v32, v34, v35);
      v49 = v6 & 3;
      v43 = (unsigned __int64)(unsigned __int8)v6 >> 2;
      v56 = v43;
      v44 = (unsigned int)(2 * v49);
      v45 = (unsigned int)(1 << (2 * v49));
      if ( ((unsigned __int8)v45 & *(_BYTE *)(v43 + v41 + 13992)) != 0 )
      {
        LOBYTE(v44) = *((_BYTE *)a3 + v37) | 0x80;
        *((_BYTE *)a3 + v39) = v44;
        v38 = Buffer;
        v40 = v50;
      }
      v46 = SGDGetUserSessionState(v44, v45, v43, v42);
      v32 = (unsigned int)(1 << (2 * v49 + 1));
      v33 = v56;
      if ( ((unsigned __int8)v32 & *(_BYTE *)(v46 + v56 + 13992)) != 0 )
      {
        LOBYTE(v33) = *((_BYTE *)a3 + v38) | 1;
        *((_BYTE *)a3 + v40) = v33;
      }
      v36 = v6 + 1;
      v39 = v36;
      ++v6;
      v49 = v36;
      v37 = v36;
      v38 = v36;
      Buffer = v36;
      v40 = v36;
      v50 = v36;
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit();
  return v7;
}
