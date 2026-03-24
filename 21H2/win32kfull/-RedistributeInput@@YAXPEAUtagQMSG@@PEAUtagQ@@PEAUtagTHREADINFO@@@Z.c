/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012504
 * Callers:
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00057B8 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C000779C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     IsProcessedByInputService @ 0x1C00128BC (IsProcessedByInputService.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F354 (WPP_RECORDER_SF_qq.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0058670 (WPP_RECORDER_SF_qiqdd.c)
 *     FreeQEntry @ 0x1C0065D58 (FreeQEntry.c)
 *     IsHiddenByInputService @ 0x1C0066924 (IsHiddenByInputService.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C006A30C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C202C (WPP_RECORDER_SF_qqq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D880 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v3; // r10
  struct tagTHREADINFO *v4; // r9
  struct tagQMSG *v6; // rbx
  struct tagTHREADINFO *v7; // r12
  struct tagQMSG *v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  _UNKNOWN **v12; // r11
  __int64 v13; // r8
  struct tagTHREADINFO *v14; // rdx
  struct tagTHREADINFO *v15; // rsi
  int v16; // eax
  int v17; // edx
  void *v18; // r11
  __int64 v19; // r9
  struct tagTHREADINFO *v20; // rcx
  struct tagTHREADINFO *v21; // r14
  __int64 v22; // rdx
  struct tagQMSG *v23; // rcx
  unsigned int v24; // edx
  int v25; // r8d
  struct tagQMSG *v26; // rcx
  struct tagQMSG *v27; // rsi
  int v28; // eax
  struct tagQMSG *v29; // rdx
  unsigned int v30; // eax
  struct tagQMSG *v31; // rax
  struct tagQMSG *v32; // rcx
  struct tagQMSG *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v48; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  unsigned int *v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  unsigned int *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  unsigned int *v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  unsigned int *v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  unsigned int *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]

  v3 = 0LL;
  v4 = a3;
  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = gptiCurrent;
  v10 = 0LL;
  v50 = gptiCurrent;
  if ( a1 )
  {
    v12 = &WPP_RECORDER_INITIALIZED;
    do
    {
      v13 = *((_QWORD *)v6 + 13);
      v14 = (struct tagTHREADINFO *)v13;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 1232) & 0x20000000) != 0 && (unsigned int)IsHiddenByInputService(v6) )
        {
          *(_DWORD *)(v13 + 1232) = v39 & 0xDFFFFFFF;
          v14 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 13);
        }
        v4 = a3;
      }
      v15 = v14;
      if ( (*(_DWORD *)(v9 + 1232) & 0x40000) != 0 )
      {
        v30 = *((_DWORD *)v6 + 6);
        if ( v14 == (struct tagTHREADINFO *)v9 )
        {
          if ( v30 >= 0x100 && v30 <= 0x102 && v4 )
          {
            *((_QWORD *)v6 + 13) = v4;
            v15 = v4;
          }
        }
        else
        {
          if ( v30 == 513 || v30 == 516 )
          {
            LOBYTE(v14) = 1;
            v40 = HMValidateHandleNoSecure(*((_QWORD *)v6 + 2), v14);
            v3 = 0LL;
            v12 = &WPP_RECORDER_INITIALIZED;
            if ( v40 )
            {
              if ( *(_QWORD *)(v40 + 16) == v9 )
                *((_QWORD *)v6 + 13) = v9;
            }
          }
          v15 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 13);
        }
      }
      if ( v6 == *((struct tagQMSG **)a2 + 10) )
      {
        v34 = *((_QWORD *)v15 + 54);
        if ( a2 != (struct tagQ *)v34 && *(struct tagTHREADINFO **)(v34 + 64) == v3 )
        {
          v35 = *((_QWORD *)a2 + 8);
          if ( v35 )
          {
            if ( *(_QWORD *)(v35 + 432) == v34 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v12 )
              {
                LOBYTE(v14) = 4;
                WPP_RECORDER_SF_qqq(
                  v35,
                  (_DWORD)v14,
                  18,
                  33,
                  (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                  v34,
                  v9,
                  *((_QWORD *)a2 + 8));
                v34 = *((_QWORD *)v15 + 54);
                v12 = &WPP_RECORDER_INITIALIZED;
                v35 = *((_QWORD *)a2 + 8);
                v3 = 0LL;
              }
              *(_QWORD *)(v34 + 64) = v35;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v12 )
              {
                LOBYTE(v14) = 4;
                WPP_RECORDER_SF_qqq(
                  v35,
                  (_DWORD)v14,
                  18,
                  34,
                  (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                  (char)a2,
                  v9,
                  *((_QWORD *)a2 + 8));
                v3 = 0LL;
              }
              *((_QWORD *)a2 + 8) = v3;
            }
          }
        }
      }
      v16 = IsProcessedByInputService(v6, v14, v13, v4);
      v19 = 4LL;
      v20 = v3;
      v21 = v3;
      if ( *((_DWORD *)v6 + 24) != 4 )
        v20 = v15;
      if ( !v16 )
        v21 = v20;
      if ( v21 )
      {
        if ( !v8 || v7 != v21 )
        {
          v22 = *((_QWORD *)v21 + 54);
          v8 = *(struct tagQMSG **)(v22 + 32);
          if ( v8 && *((_DWORD *)v6 + 12) - *((_DWORD *)v8 + 12) >= 0 )
          {
            v10 = v22 + 24;
          }
          else
          {
            v8 = (struct tagQMSG *)(v22 + 24);
            v10 = v22 + 24;
          }
        }
        v23 = *(struct tagQMSG **)v8;
        if ( *(_QWORD *)v8 )
        {
          do
          {
            if ( *((_DWORD *)v6 + 12) - *((_DWORD *)v23 + 12) < 0 )
              break;
            v8 = v23;
            v23 = *(struct tagQMSG **)v23;
          }
          while ( v23 );
        }
        *((_DWORD *)v6 + 25) &= 0xFFF0FFFF;
        v24 = *((_DWORD *)v6 + 6);
        v25 = *((_DWORD *)v6 + 25);
        if ( (v24 - 256 <= 9 || InputTraceLogging::IsMouseInputMessage(v24))
          && dword_1C0330B20 > (unsigned int)v19
          && (qword_1C0330B30 & 0x10) != 0
          && (qword_1C0330B38 & 0x10) == qword_1C0330B38 )
        {
          v48 = v24;
          v44 = (unsigned int)(v25 << 13) >> 31;
          v45 = (unsigned int)(v25 << 14) >> 31;
          v46 = (unsigned int)(v25 << 15) >> 31;
          v49 = *((_QWORD *)v6 + 17);
          v62 = &v44;
          v60 = &v45;
          v58 = &v46;
          v56 = &v47;
          v54 = &v48;
          v52 = &v49;
          v47 = (unsigned int)(v25 << 12) >> 31;
          v63 = v19;
          v61 = v19;
          v59 = v19;
          v57 = v19;
          v55 = v19;
          v53 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0330B20, (int)&dword_1C02F18D3, 0, 0, 8u, &v51);
          v3 = 0LL;
        }
        v26 = v6;
        v27 = v6;
        v6 = *(struct tagQMSG **)v6;
        *(_QWORD *)v26 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v26 + 1) = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
          *(_QWORD *)(*(_QWORD *)v8 + 8LL) = v27;
        }
        else
        {
          *((_QWORD *)v26 + 1) = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v26;
        }
        *(_QWORD *)v8 = v27;
        v8 = v27;
        v28 = *(_DWORD *)(v10 + 16) + 1;
        *(_DWORD *)(v10 + 16) = v28;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_qiqdd(
            (_DWORD)v26,
            v24,
            v25,
            36,
            (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
            (char)v27,
            *((_QWORD *)v27 + 17),
            v10,
            *(_DWORD *)(v10 + 20),
            v28);
          v3 = 0LL;
        }
        if ( *((_DWORD *)v27 + 24) != (_DWORD)v3 && (*(_WORD *)(*((_QWORD *)v21 + 56) + 6LL) & 0x2000) == 0 )
        {
          SetWakeBit(v21, 8256LL);
          v3 = 0LL;
        }
        v29 = (struct tagQMSG *)*((_QWORD *)a2 + 10);
        if ( v27 == v29 )
        {
          v36 = *((_QWORD *)v21 + 54);
          if ( a2 != (struct tagQ *)v36 )
          {
            if ( *(struct tagTHREADINFO **)(v36 + 80) == v3 )
            {
              v37 = *((_QWORD *)v21 + 54);
              v38 = *((_QWORD *)a2 + 10);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v3 )
              {
                LOBYTE(v29) = 5;
                WPP_RECORDER_SF_qqq(
                  v36,
                  (_DWORD)v29,
                  18,
                  37,
                  (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                  *((_QWORD *)a2 + 10),
                  v36,
                  (char)v3);
                v37 = *((_QWORD *)v21 + 54);
                v3 = 0LL;
                v38 = *((_QWORD *)a2 + 10);
              }
              *(_QWORD *)(v37 + 80) = v38;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v3 )
            {
              LOBYTE(v29) = 5;
              WPP_RECORDER_SF_qq(
                v36,
                (_DWORD)v29,
                18,
                38,
                (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                (char)a2,
                *((_QWORD *)a2 + 10));
              v3 = 0LL;
            }
            *((_QWORD *)a2 + 10) = v3;
          }
        }
        if ( !v6 )
          break;
        *((_QWORD *)v6 + 1) = v3;
        v7 = v21;
      }
      else
      {
        v31 = *(struct tagQMSG **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v31 + 1) = v3;
          v31 = *(struct tagQMSG **)v6;
        }
        v32 = (struct tagQMSG *)*((_QWORD *)a2 + 10);
        v33 = v6;
        v6 = v31;
        if ( v33 == v32 )
        {
          if ( WPP_RECORDER_INITIALIZED != v18 && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v3 )
          {
            LOBYTE(v17) = 5;
            WPP_RECORDER_SF_qq(
              (_DWORD)v32,
              v17,
              18,
              35,
              (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
              (char)a2,
              (char)v32);
            v3 = 0LL;
          }
          *((_QWORD *)a2 + 10) = v3;
        }
        CleanEventMessage(v33);
        FreeQEntry(v33);
        v3 = 0LL;
      }
      v9 = v50;
      v12 = &WPP_RECORDER_INITIALIZED;
      v4 = a3;
    }
    while ( v6 );
  }
  v11 = *((_QWORD *)a2 + 6);
  if ( v11 )
  {
    do
    {
      v41 = *(_QWORD *)(v11 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v11 + 104) + 432LL) != a2 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)a2 + 24), (struct tagQMSG *)v11);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v42 + 104) + 432LL) + 24LL), (struct tagQMSG *)v42);
      }
      v11 = v41;
    }
    while ( v41 );
  }
}
