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
  __int64 v12; // rdx
  _BOOL8 v13; // r14
  __int64 v14; // rax
  __int64 v16; // rax
  struct tagWND *v17; // rsi
  PETHREAD **v18; // r8
  __int64 v19; // r8
  int v20; // r14d
  int v21; // edx
  int v22; // r14d
  BOOL v23; // r12d
  unsigned int v24; // r15d
  __int128 *v25; // r9
  __int64 v26; // rdx
  void *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __m128i v32; // xmm0
  PETHREAD *v33; // rcx
  PETHREAD *v34; // rcx
  bool v35; // zf
  int v36; // [rsp+50h] [rbp-B0h]
  PETHREAD **v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-A0h]
  _BOOL8 v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+70h] [rbp-90h]
  HANDLE InputBuffer; // [rsp+78h] [rbp-88h] BYREF
  void *Handle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int128 *v49; // [rsp+B8h] [rbp-48h]
  struct tagBWL *v50; // [rsp+C0h] [rbp-40h]
  __int128 v51; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __m128i v53; // [rsp+E0h] [rbp-20h] BYREF
  int v54; // [rsp+F0h] [rbp-10h]

  v52 = 0LL;
  v7 = 0LL;
  v49 = (__int128 *)a4;
  v38 = a3;
  v8 = a4;
  v51 = 0LL;
  v10 = 1;
  v36 = 1;
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
    UserSetLastError(87);
  if ( !a1 )
    return 0LL;
  if ( !a6 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794) )
    a6 = 1;
  v50 = BuildHwndList(a1[14], 2, 0LL, 1);
  if ( !v50 )
    return 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
    && a1[3] == (ShellWindowManagement *)grpdeskRitInput
    && ((*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0
     || CanForceForeground(*(const struct tagPROCESSINFO **)(gptiCurrent + 424LL))) )
  {
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  v39 = 0LL;
  v13 = 0LL;
  if ( a2 == 537 )
  {
    if ( v38 == 32772 || (v39 = 0LL, v38 == 0x8000) )
    {
      v35 = *(_DWORD *)(v8 + 4) == 2;
      v13 = 0LL;
      v39 = 0LL;
      if ( v35 )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x40000000) == 0 )
        {
          v32 = *(__m128i *)v8;
          v54 = *(_DWORD *)(v8 + 16);
          v53 = v32;
          v39 = 0LL;
          v35 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
          v53.m128i_i32[3] = _mm_srli_si128(v32, 8).m128i_i32[1] | 0x40000000;
          if ( v35 )
          {
            v37 = 0LL;
            GetProcessLuid(0LL, &v37);
            v39 = 0LL;
            if ( (_DWORD)v37 == luidSystem[0] )
            {
              v13 = HIDWORD(v37) == luidSystem[1];
              v39 = v13;
            }
          }
          goto LABEL_17;
        }
        return 0LL;
      }
    }
  }
LABEL_17:
  Handle = (char *)v50 + 32;
  v14 = *((_QWORD *)v50 + 4);
  if ( v14 == 1 )
    goto LABEL_18;
  while ( 1 )
  {
    LOBYTE(v12) = 1;
    v40 = 0;
    v16 = HMValidateHandleNoSecure(v14, v12);
    v17 = (struct tagWND *)v16;
    if ( !v16 )
      goto LABEL_46;
    v12 = *((unsigned int *)a5 + 1);
    v18 = (PETHREAD **)(v16 + 16);
    v37 = (PETHREAD **)(v16 + 16);
    if ( (v12 & 2) != 0 )
    {
      if ( (*v18)[54] == *(PETHREAD *)(v48 + 432) )
        goto LABEL_46;
    }
    else
    {
      v37 = (PETHREAD **)(v16 + 16);
    }
    if ( (v12 & 0x400) != 0 )
    {
      v34 = *v18;
      v43 = 0LL;
      if ( (int)GetProcessLuid(*v34, &v43) < 0 || *((_QWORD *)a5 + 4) != v43 )
        goto LABEL_46;
      v18 = v37;
    }
    if ( v13 )
    {
      v33 = *v18;
      v45 = 0LL;
      if ( (int)GetProcessLuid(*v33, &v45) < 0 )
        goto LABEL_46;
      if ( __PAIR64__(luidSystem[1], luidSystem[0]) != v45 )
        v40 = 1;
    }
    v19 = *((_QWORD *)v17 + 5);
    if ( (*(_WORD *)(v19 + 42) & 0x2FFF) != 0x29C )
    {
      v12 = **(unsigned __int16 **)(*((_QWORD *)v17 + 17) + 8LL);
      if ( *(_WORD *)(gpsi + 908LL) != (_WORD)v12
        && gaOleMainThreadWndClass != (_WORD)v12
        && (!v47 || (*(_BYTE *)(v19 + 21) & 2) == 0) )
      {
        break;
      }
    }
LABEL_46:
    Handle = (char *)Handle + 8;
    v14 = *(_QWORD *)Handle;
    if ( *(_QWORD *)Handle == 1LL )
      goto LABEL_18;
    v13 = v39;
  }
  *(_QWORD *)&v51 = *(_QWORD *)(v48 + 416);
  *(_QWORD *)(v48 + 416) = &v51;
  *((_QWORD *)&v51 + 1) = v17;
  HMLockObject(v17);
  v20 = *((_DWORD *)a5 + 1);
  if ( (v20 & 0x10) != 0 )
  {
    PostTransformableMessageIL(v17, a2, a6);
LABEL_49:
    ThreadUnlock1(v30, v29, v31);
    goto LABEL_46;
  }
  if ( (v20 & 0x100) != 0 )
  {
    xxxSendNotifyMessage(v17, a2, v38, v8, a6);
    goto LABEL_49;
  }
  if ( (v20 & 0x20000000) != 0 )
  {
    QueueNotifyTransformableMessage(v17, a2, v38, v8, a6, 1);
    goto LABEL_49;
  }
  v46 = 0LL;
  v21 = v20 & 8;
  InputBuffer = 0LL;
  v22 = v20 & 0x20;
  v44 = v21;
  v23 = a2 == 536 && v38 == 4;
  if ( v21 )
    v24 = v23 ? 2000 : 5000;
  else
    v24 = 0;
  if ( v23 )
  {
    InputBuffer = PsGetThreadProcessId(**v37);
    ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
    v21 = v44;
  }
  v25 = (__int128 *)&v53;
  if ( !v40 )
    v25 = v49;
  if ( xxxSendTransformableMessageTimeout(
         v17,
         a2,
         v38,
         v25,
         (v21 != 0 ? 2 : 0) | (*((_DWORD *)a5 + 1) >> 3) & 8u,
         v24,
         (unsigned __int64 *)&v46,
         a6,
         1) )
  {
    if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
    {
      v10 = 0;
      if ( a2 == 17 )
        v35 = v46 == 0;
      else
        v35 = v46 == 1112363332;
      LOBYTE(v10) = !v35;
      v36 = v10;
    }
    else
    {
      v10 = v36;
    }
  }
  else
  {
    v10 = v22;
    v36 = v22;
  }
  if ( v23 )
  {
    InputBuffer = 0LL;
    InputBuffer = PsGetThreadProcessId(**v37);
    ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
  }
  if ( v10 )
  {
    ThreadUnlock1(v27, v26, v28);
    v8 = (__int64)v49;
    goto LABEL_46;
  }
  v35 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
  *((_QWORD *)a5 + 3) = *(_QWORD *)v17;
  if ( !v35 )
  {
    v27 = (void *)*((_QWORD *)v17 + 3);
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
