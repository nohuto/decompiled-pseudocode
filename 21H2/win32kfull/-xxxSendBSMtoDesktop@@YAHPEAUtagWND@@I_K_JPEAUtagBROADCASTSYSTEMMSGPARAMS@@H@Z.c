/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A6928
 * Callers:
 *     xxxSendMessageBSM @ 0x1C00A67B0 (xxxSendMessageBSM.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     CanForceForeground @ 0x1C007B000 (CanForceForeground.c)
 *     _PostTransformableMessageIL @ 0x1C00A735C (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C9AD0 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        ShellWindowManagement **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  void *v7; // rbx
  __int64 v8; // r12
  unsigned int v10; // r15d
  int v11; // eax
  _BOOL8 v12; // r13
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // edx
  __int64 v18; // r8
  __int16 v19; // dx
  unsigned int v20; // ecx
  int v21; // edx
  BOOL v22; // r12d
  unsigned int v23; // r15d
  __m128i *v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // rdx
  void *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __m128i v32; // xmm0
  _QWORD *v33; // rcx
  PETHREAD *v34; // rcx
  _QWORD *v35; // rcx
  bool v36; // zf
  int v37; // [rsp+50h] [rbp-99h]
  __int64 v38; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-89h]
  int v40; // [rsp+68h] [rbp-81h]
  HANDLE InputBuffer; // [rsp+70h] [rbp-79h] BYREF
  void *Handle; // [rsp+78h] [rbp-71h] BYREF
  int v43; // [rsp+80h] [rbp-69h]
  int v44; // [rsp+84h] [rbp-65h]
  __int64 v45; // [rsp+88h] [rbp-61h] BYREF
  __int64 v46; // [rsp+90h] [rbp-59h] BYREF
  __int64 v47; // [rsp+98h] [rbp-51h]
  __int64 v48; // [rsp+A0h] [rbp-49h]
  __m128i *v49; // [rsp+A8h] [rbp-41h]
  struct tagBWL *v50; // [rsp+B0h] [rbp-39h]
  __int128 v51; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-21h]
  __m128i v53; // [rsp+D0h] [rbp-19h] BYREF
  int v54; // [rsp+E0h] [rbp-9h]

  v52 = 0LL;
  v7 = 0LL;
  v49 = (__m128i *)a4;
  v39 = a3;
  v8 = a4;
  v51 = 0LL;
  v10 = 1;
  v37 = 1;
  v48 = gptiCurrent;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v11 = 1;
    v47 = 1LL;
  }
  else
  {
    v11 = 0;
    v47 = 0LL;
  }
  v54 = 0;
  v53 = 0LL;
  if ( v11 )
    UserSetLastError(87LL, 1LL);
  if ( !a1 )
    return 0LL;
  if ( !a6 && (a2 == 21 || a2 == 26 || a2 == 29 || a2 == 295 || a2 == 794) )
    a6 = 1;
  v50 = BuildHwndList(a1[14], (const struct tagWND *)2, 0LL, 1);
  if ( !v50 )
    return 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
    && a1[3] == (ShellWindowManagement *)grpdeskRitInput
    && ((*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0 || CanForceForeground(*(_QWORD *)(gptiCurrent + 424LL))) )
  {
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  v12 = 0LL;
  if ( a2 == 537 && (v39 == 0x8000 || v39 == 32772) )
  {
    v12 = 0LL;
    if ( *(_DWORD *)(v8 + 4) == 2 )
    {
      if ( (*(_DWORD *)(v8 + 12) & 0x40000000) == 0 )
      {
        v32 = *(__m128i *)v8;
        v54 = *(_DWORD *)(v8 + 16);
        v53 = v32;
        v36 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v53.m128i_i32[3] = _mm_srli_si128(v32, 8).m128i_i32[1] | 0x40000000;
        if ( v36 )
        {
          v38 = 0LL;
          GetProcessLuid(0LL, &v38);
          v12 = v38 == __PAIR64__(luidSystem[1], luidSystem[0]);
        }
        goto LABEL_17;
      }
      return 0LL;
    }
  }
LABEL_17:
  Handle = (char *)v50 + 32;
  v13 = *((_QWORD *)v50 + 4);
  if ( v13 == 1 )
    goto LABEL_18;
  while ( 1 )
  {
    v40 = 0;
    v15 = HMValidateHandleNoSecure(v13, 1);
    v16 = v15;
    if ( !v15 )
      goto LABEL_45;
    v17 = *((_DWORD *)a5 + 1);
    if ( (v17 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) == *(_QWORD *)(v48 + 432) )
      goto LABEL_45;
    if ( (v17 & 0x400) != 0 )
    {
      v35 = *(_QWORD **)(v15 + 16);
      v38 = 0LL;
      if ( (int)GetProcessLuid(*v35, &v38) < 0 || *((_QWORD *)a5 + 4) != v38 )
        goto LABEL_45;
    }
    if ( v12 )
    {
      v33 = *(_QWORD **)(v16 + 16);
      v45 = 0LL;
      if ( (int)GetProcessLuid(*v33, &v45) < 0 )
        goto LABEL_45;
      if ( __PAIR64__(luidSystem[1], luidSystem[0]) != v45 )
        v40 = 1;
    }
    v18 = *(_QWORD *)(v16 + 40);
    if ( (*(_WORD *)(v18 + 42) & 0x2FFF) == 0x29C )
      goto LABEL_45;
    v19 = **(_WORD **)(*(_QWORD *)(v16 + 136) + 8LL);
    if ( *(_WORD *)(gpsi + 908LL) == v19 || gaOleMainThreadWndClass == v19 || v47 && (*(_BYTE *)(v18 + 21) & 2) != 0 )
      goto LABEL_45;
    *(_QWORD *)&v51 = *(_QWORD *)(v48 + 416);
    *(_QWORD *)(v48 + 416) = &v51;
    *((_QWORD *)&v51 + 1) = v16;
    HMLockObject(v16);
    v20 = *((_DWORD *)a5 + 1);
    if ( (v20 & 0x10) != 0 )
    {
      PostTransformableMessageIL((struct tagWND *)v16, a2, v39, v8, a6);
LABEL_48:
      ThreadUnlock1(v30, v29, v31);
      goto LABEL_45;
    }
    if ( (v20 & 0x100) != 0 )
    {
      xxxSendNotifyMessage(v16, a2, v39, v8, a6);
      goto LABEL_48;
    }
    if ( (v20 & 0x20000000) != 0 )
    {
      QueueNotifyTransformableMessage((struct tagWND *)v16, a2, v39, v8, a6, 1);
      goto LABEL_48;
    }
    v46 = 0LL;
    v21 = v20 & 8;
    InputBuffer = 0LL;
    v43 = v21;
    v44 = v20 & 0x20;
    v22 = a2 == 536 && v39 == 4;
    if ( (v20 & 8) != 0 )
      v23 = v22 ? 2000 : 5000;
    else
      v23 = 0;
    if ( v22 )
    {
      InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v16 + 16));
      ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
      v20 = *((_DWORD *)a5 + 1);
      v21 = v43;
    }
    v24 = &v53;
    v25 = (v21 != 0 ? 2 : 0) | (v20 >> 3) & 8;
    if ( !v40 )
      v24 = v49;
    if ( xxxSendTransformableMessageTimeout(
           (unsigned __int64 *)v16,
           a2,
           v39,
           (__int64)v24,
           v25,
           v23,
           (unsigned __int64 *)&v46,
           a6,
           1) )
    {
      if ( (*((_DWORD *)a5 + 1) & 1) == 0 )
      {
        v10 = v37;
        goto LABEL_41;
      }
      v10 = 0;
      v36 = a2 == 17 ? v46 == 0 : v46 == 1112363332;
      LOBYTE(v10) = !v36;
    }
    else
    {
      v10 = v44;
    }
    v37 = v10;
LABEL_41:
    if ( v22 )
    {
      v34 = *(PETHREAD **)(v16 + 16);
      InputBuffer = 0LL;
      InputBuffer = PsGetThreadProcessId(*v34);
      ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
    }
    if ( !v10 )
      break;
    ThreadUnlock1(v27, v26, v28);
    v8 = (__int64)v49;
LABEL_45:
    Handle = (char *)Handle + 8;
    v13 = *(_QWORD *)Handle;
    if ( *(_QWORD *)Handle == 1LL )
      goto LABEL_18;
  }
  v36 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
  *((_QWORD *)a5 + 3) = *(_QWORD *)v16;
  if ( !v36 )
  {
    v27 = *(void **)(v16 + 24);
    Handle = 0LL;
    if ( v27 )
    {
      ObOpenObjectByPointer(v27, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
      v7 = Handle;
    }
    *((_QWORD *)a5 + 2) = v7;
  }
  ThreadUnlock1(v27, v26, v28);
LABEL_18:
  FreeHwndList(v50);
  return v10;
}
