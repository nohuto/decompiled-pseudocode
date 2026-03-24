/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C003ED58
 * Callers:
 *     xxxSendMessageBSM @ 0x1C003EBE0 (xxxSendMessageBSM.c)
 * Callees:
 *     CanForceForeground @ 0x1C003C530 (CanForceForeground.c)
 *     _PostTransformableMessageIL @ 0x1C003F750 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F59B8 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  __int64 v7; // r15
  unsigned int v9; // esi
  int v10; // eax
  int v11; // r13d
  __int64 v12; // rdx
  _BOOL8 v13; // r12
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  unsigned int v19; // ecx
  int v20; // r13d
  BOOL v21; // r15d
  int v22; // esi
  __m128i *v23; // r9
  bool v24; // cf
  int v25; // ecx
  void *v26; // rcx
  _QWORD *v27; // rcx
  __m128i v28; // xmm0
  PETHREAD *v29; // rcx
  _QWORD *v30; // rcx
  bool v31; // zf
  void *v32; // rax
  int v33; // [rsp+50h] [rbp-99h]
  __int64 v34; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-89h]
  int v36; // [rsp+68h] [rbp-81h]
  int v37; // [rsp+6Ch] [rbp-7Dh]
  HANDLE InputBuffer; // [rsp+70h] [rbp-79h] BYREF
  void *Handle; // [rsp+78h] [rbp-71h] BYREF
  __int64 v40; // [rsp+80h] [rbp-69h] BYREF
  unsigned __int64 LowLimit; // [rsp+88h] [rbp-61h] BYREF
  int v42[2]; // [rsp+90h] [rbp-59h]
  __int64 v43; // [rsp+98h] [rbp-51h]
  __int64 v44; // [rsp+A0h] [rbp-49h]
  _QWORD *v45; // [rsp+A8h] [rbp-41h]
  __int64 v46; // [rsp+B0h] [rbp-39h]
  __int128 v47; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-21h]
  __m128i v49; // [rsp+D0h] [rbp-19h] BYREF
  int v50; // [rsp+E0h] [rbp-9h]

  v37 = 0;
  v48 = 0LL;
  v7 = a4;
  *(_QWORD *)v42 = a4;
  v35 = a3;
  v47 = 0LL;
  v9 = 1;
  v33 = 1;
  v44 = gptiCurrent;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v10 = 1;
    v43 = 1LL;
  }
  else
  {
    v10 = 0;
    v43 = 0LL;
  }
  v50 = 0;
  v49 = 0LL;
  if ( v10 )
    UserSetLastError(87LL);
  if ( a1 )
  {
    v11 = a6;
    if ( !a6 && (a2 == 21 || a2 == 26 || a2 == 29 || a2 == 295 || a2 == 794) )
    {
      v11 = 1;
      a6 = 1;
    }
    v46 = BuildHwndList(a1[14]);
    if ( v46 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && a1[3] == (struct tagWND *)grpdeskRitInput
        && ((*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0 || CanForceForeground(*(_QWORD *)(gptiCurrent + 424LL))) )
      {
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      }
      v13 = 0LL;
      if ( a2 != 537 || v35 != 0x8000 && v35 != 32772 || (v13 = 0LL, *(_DWORD *)(v7 + 4) != 2) )
      {
LABEL_17:
        v45 = (_QWORD *)(v46 + 32);
        v14 = *(_QWORD *)(v46 + 32);
        if ( v14 == 1 )
        {
LABEL_18:
          FreeHwndList(v46);
          return v9;
        }
        while ( 1 )
        {
          v36 = 0;
          LOBYTE(v12) = 1;
          v16 = HMValidateHandleNoSecure(v14, v12);
          v17 = v16;
          if ( !v16 )
            goto LABEL_46;
          v12 = *((unsigned int *)a5 + 1);
          if ( (v12 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v16 + 16) + 432LL) == *(_QWORD *)(v44 + 432) )
            goto LABEL_46;
          if ( (v12 & 0x400) != 0 )
          {
            v30 = *(_QWORD **)(v16 + 16);
            v34 = 0LL;
            if ( (int)GetProcessLuid(*v30, &v34) < 0 || *((_QWORD *)a5 + 4) != v34 )
              goto LABEL_46;
          }
          if ( v13 )
          {
            v27 = *(_QWORD **)(v17 + 16);
            v40 = 0LL;
            if ( (int)GetProcessLuid(*v27, &v40) < 0 )
              goto LABEL_46;
            if ( __PAIR64__(luidSystem[1], luidSystem[0]) != v40 )
              v36 = 1;
          }
          v18 = *(_QWORD *)(v17 + 40);
          if ( (*(_WORD *)(v18 + 42) & 0x2FFF) != 0x29C )
          {
            v12 = **(unsigned __int16 **)(*(_QWORD *)(v17 + 136) + 8LL);
            if ( *(_WORD *)(gpsi + 908LL) != (_WORD)v12
              && gaOleMainThreadWndClass != (_WORD)v12
              && (!v43 || (*(_BYTE *)(v18 + 21) & 2) == 0) )
            {
              *(_QWORD *)&v47 = *(_QWORD *)(v44 + 416);
              *(_QWORD *)(v44 + 416) = &v47;
              *((_QWORD *)&v47 + 1) = v17;
              HMLockObject(v17);
              v19 = *((_DWORD *)a5 + 1);
              if ( (v19 & 0x10) != 0 )
              {
                PostTransformableMessageIL((struct tagWND *)v17, a2, v35, v7, v11);
              }
              else if ( (v19 & 0x100) != 0 )
              {
                xxxSendNotifyMessage(v17, a2, v35, v7, v11);
              }
              else if ( (v19 & 0x20000000) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v17, a2, v35, v7, v11, 1);
              }
              else
              {
                LowLimit = 0LL;
                InputBuffer = 0LL;
                v20 = v19 & 8;
                LODWORD(Handle) = v19 & 0x20;
                v21 = a2 == 536 && v35 == 4;
                if ( (v19 & 8) != 0 )
                  v22 = v21 ? 2000 : 5000;
                else
                  v22 = 0;
                if ( v21 )
                {
                  InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v17 + 16));
                  ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                  v19 = *((_DWORD *)a5 + 1);
                }
                v23 = &v49;
                v24 = v20 != 0;
                v11 = a6;
                v25 = (v19 >> 3) & 8;
                if ( !v36 )
                  LODWORD(v23) = v42[0];
                if ( xxxSendTransformableMessageTimeout(
                       v17,
                       a2,
                       v35,
                       (int)v23,
                       v25 | (v24 ? 2 : 0),
                       v22,
                       (unsigned __int64)&LowLimit,
                       a6,
                       1) )
                {
                  if ( (*((_DWORD *)a5 + 1) & 1) == 0 )
                  {
                    v9 = v33;
                    goto LABEL_41;
                  }
                  v9 = 0;
                  if ( a2 == 17 )
                    v31 = LowLimit == 0;
                  else
                    v31 = LowLimit == 1112363332;
                  LOBYTE(v9) = !v31;
                }
                else
                {
                  v9 = (unsigned int)Handle;
                }
                v33 = v9;
LABEL_41:
                if ( v21 )
                {
                  v29 = *(PETHREAD **)(v17 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v29);
                  ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                }
                if ( !v9 )
                {
                  v31 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                  *((_QWORD *)a5 + 3) = *(_QWORD *)v17;
                  if ( !v31 )
                  {
                    v26 = *(void **)(v17 + 24);
                    v32 = 0LL;
                    Handle = 0LL;
                    if ( v26 )
                    {
                      ObOpenObjectByPointer(v26, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                      v32 = Handle;
                    }
                    *((_QWORD *)a5 + 2) = v32;
                  }
                  v37 = 1;
                }
                v7 = *(_QWORD *)v42;
              }
              ThreadUnlock1(v26);
              if ( v37 )
                goto LABEL_18;
            }
          }
LABEL_46:
          v14 = *++v45;
          if ( *v45 == 1LL )
            goto LABEL_18;
        }
      }
      if ( (*(_DWORD *)(v7 + 12) & 0x40000000) == 0 )
      {
        v28 = *(__m128i *)v7;
        v50 = *(_DWORD *)(v7 + 16);
        v49 = v28;
        v31 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v49.m128i_i32[3] = _mm_srli_si128(v28, 8).m128i_i32[1] | 0x40000000;
        if ( v31 )
        {
          v34 = 0LL;
          GetProcessLuid(0LL, &v34);
          v13 = v34 == __PAIR64__(luidSystem[1], luidSystem[0]);
        }
        goto LABEL_17;
      }
    }
  }
  return 0LL;
}
