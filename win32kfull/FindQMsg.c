/*
 * XREFs of FindQMsg @ 0x1C0072160
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0071AC0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 * Callees:
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0014140 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C0072510 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 *     FreeDdeXact @ 0x1C01FD370 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        __int64 **a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // rdi
  __int64 *result; // rax
  __int64 **v10; // rsi
  struct tagTHREADINFO *v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // r14
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  _DWORD *v24; // rax
  __int64 *v26; // [rsp+60h] [rbp-48h]

  v6 = *a2;
  result = 0LL;
  v26 = 0LL;
  v10 = a2;
  v11 = a1;
  if ( *a2 )
  {
    while ( 1 )
    {
      v12 = 0LL;
      v13 = v6[2];
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v14 = (unsigned __int16)v13;
      if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
      {
        v15 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v13;
        v17 = (_QWORD *)HMPkheFromPhe(v15);
        LOWORD(v13) = WORD1(v13) & 0x7FFF;
        if ( ((WORD1(v13) & 0x7FFF) == *(_WORD *)(v15 + 26)
           || (_WORD)v13 == 0x7FFF
           || !(_WORD)v13 && PsGetCurrentProcessWow64Process(v16))
          && (*(_BYTE *)(v15 + 25) & 1) == 0
          && *(_BYTE *)(v15 + 24) == 1 )
        {
          v12 = (_QWORD *)*v17;
          if ( *v17 )
            goto LABEL_7;
        }
        v10 = a2;
        v11 = a1;
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit(v11, v10);
        v20 = *((_QWORD *)v11 + 54);
        if ( *(__int64 **)(v20 + 80) == v6 && *(struct tagTHREADINFO **)(v20 + 72) == v11 )
        {
          EtwTraceInputQueueUnLocked();
          LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              (_DWORD)gFullLog,
              4,
              18,
              22,
              (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
              *((_QWORD *)v11 + 54),
              gptiCurrent,
              *(_QWORD *)(*((_QWORD *)v11 + 54) + 72LL));
          }
          *(_QWORD *)(*((_QWORD *)v11 + 54) + 72LL) = 0LL;
        }
        goto LABEL_41;
      }
LABEL_7:
      if ( a6 )
      {
        v21 = a3 ? *a3 : 0LL;
        if ( v21 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(v14) = 11;
          v24 = (_DWORD *)HMValidateHandleNoRip(v6[5], v14);
          if ( v24 && (v24[16] & 0x200) != 0 )
          {
            FreeDdeXact(v24);
            v10 = a2;
            v11 = a1;
LABEL_41:
            DelQEntry((__int64)v10, (__int64)v6, 1);
            v6 = *v10;
            goto LABEL_28;
          }
        }
      }
      if ( a3 && a3 != v12 && (a3 != (_QWORD *)1 || v12) )
      {
        if ( v12 )
        {
          while ( (*(_BYTE *)(v12[5] + 31LL) & 0xC0) == 0x40 )
          {
            v12 = (_QWORD *)v12[13];
            if ( a3 == v12 )
            {
              v18 = 1;
              goto LABEL_14;
            }
            if ( !v12 )
              break;
          }
        }
        v18 = 0;
LABEL_14:
        if ( !v18 )
          goto LABEL_27;
      }
      v19 = *((_DWORD *)v6 + 6);
      if ( v19 + 2147482655 <= 7 )
        v19 &= ~0x80000000;
      if ( !a4 )
      {
        if ( a5 == -1 )
          goto LABEL_19;
LABEL_24:
        if ( v19 <= a5 )
          goto LABEL_19;
        goto LABEL_27;
      }
      if ( a4 <= a5 )
      {
        if ( v19 < a4 )
          goto LABEL_27;
        goto LABEL_24;
      }
      if ( v19 < a5 || v19 > a4 )
      {
LABEL_19:
        if ( !a6 )
          return v6;
        if ( !v26 )
          v26 = v6;
      }
LABEL_27:
      v6 = (__int64 *)*v6;
      v10 = a2;
      v11 = a1;
LABEL_28:
      if ( !v6 )
        return v26;
    }
  }
  return result;
}
