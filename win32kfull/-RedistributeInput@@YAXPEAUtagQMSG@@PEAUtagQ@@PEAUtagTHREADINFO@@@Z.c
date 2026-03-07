void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  __int64 v3; // r11
  struct tagTHREADINFO *v4; // r9
  struct tagQMSG *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  struct tagQMSG *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdx
  struct _DEVICE_OBJECT *v12; // r10
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  _DWORD *v17; // r12
  int v18; // eax
  struct _DEVICE_OBJECT *v19; // r10
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rdx
  struct tagQMSG *v24; // rcx
  int v25; // r9d
  struct tagQMSG *v26; // rcx
  struct tagQMSG *v27; // rdi
  int v28; // r9d
  char v29; // dl
  __int64 v30; // rdx
  int v31; // r9d
  __int64 v32; // rax
  struct tagQ *v33; // rdx
  __int64 v34; // r9
  char v35; // al
  char v36; // dl
  struct tagQMSG *v37; // rdi
  char v38; // dl
  char v39; // r8
  int v41; // edx
  int v42; // r9d
  int v43; // r10d
  struct tagQ *v44; // r9
  char v45; // dl
  char v46; // r8
  char v47; // dl
  char v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v52; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v58; // [rsp+8Ch] [rbp-74h] BYREF
  int v59; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h]
  __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  unsigned int *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  unsigned int *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  unsigned int *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  int *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]

  v3 = 0LL;
  v4 = a3;
  v53 = 0LL;
  v6 = a1;
  v7 = 0LL;
  v8 = gptiCurrent;
  v9 = 0LL;
  v60 = gptiCurrent;
  if ( a1 )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)v6 + 13);
      v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
      v13 = v11;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 1272) & 0x20000000) != 0 && IsHiddenByInputService((__int64)v6) )
        {
          *(_DWORD *)(v30 + 1272) = v31 & 0xDFFFFFFF;
          v13 = *((_QWORD *)v6 + 13);
        }
        v4 = a3;
      }
      if ( (*(_DWORD *)(v8 + 1272) & 0x40000) != 0 )
      {
        v14 = *((_DWORD *)v6 + 6);
        if ( v13 == v8 )
        {
          v15 = v14 - 256;
          if ( (!v15 || (unsigned int)(v15 - 1) < 2) && v4 )
            *((_QWORD *)v6 + 13) = v4;
        }
        else if ( v14 == 513 || v14 == 516 )
        {
          v32 = HMValidateHandleNoSecure(*((_QWORD *)v6 + 2), 1);
          v3 = 0LL;
          v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
          if ( v32 )
          {
            if ( *(_QWORD *)(v32 + 16) == v8 )
              *((_QWORD *)v6 + 13) = v8;
          }
        }
      }
      v16 = *((_QWORD *)v6 + 13);
      if ( v6 == *((struct tagQMSG **)a2 + 11) )
      {
        v33 = *(struct tagQ **)(v16 + 432);
        if ( a2 != v33 && *((_QWORD *)v33 + 9) == v3 )
        {
          v34 = *((_QWORD *)a2 + 9);
          if ( v34 )
          {
            if ( *(struct tagQ **)(v34 + 432) == v33 )
            {
              if ( WPP_GLOBAL_Control == v12
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (v35 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v35 = v3;
              }
              if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v35,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gFullLog,
                  4u,
                  0x12u,
                  0x26u,
                  (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
                v3 = 0LL;
                v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
              }
              *(_QWORD *)(*(_QWORD *)(v16 + 432) + 72LL) = *((_QWORD *)a2 + 9);
              if ( WPP_GLOBAL_Control == v12
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v36 = v3;
              }
              if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v36,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gFullLog,
                  4u,
                  0x12u,
                  0x27u,
                  (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
                v3 = 0LL;
              }
              *((_QWORD *)a2 + 9) = v3;
            }
          }
        }
      }
      v17 = (_DWORD *)((char *)v6 + 96);
      v18 = IsProcessedByInputService(v6);
      v21 = v20;
      v22 = v20;
      if ( *((_DWORD *)v6 + 24) != 4 )
        v21 = v16;
      if ( !v18 )
        v22 = v21;
      if ( v22 )
      {
        if ( !v9 || v7 != v22 )
        {
          v23 = *(_QWORD *)(v22 + 432);
          v9 = *(struct tagQMSG **)(v23 + 32);
          if ( v9 && *((_DWORD *)v6 + 12) - *((_DWORD *)v9 + 12) >= 0 )
          {
            v53 = v23 + 24;
          }
          else
          {
            v9 = (struct tagQMSG *)(v23 + 24);
            v53 = v23 + 24;
          }
        }
        v24 = *(struct tagQMSG **)v9;
        if ( *(_QWORD *)v9 )
        {
          do
          {
            if ( *((_DWORD *)v6 + 12) - *((_DWORD *)v24 + 12) < 0 )
              break;
            v9 = v24;
            v24 = *(struct tagQMSG **)v24;
          }
          while ( v24 );
        }
        *((_DWORD *)v6 + 25) &= 0xFFFE1FFF;
        v25 = *((_DWORD *)v6 + 6);
        if ( ((unsigned int)(v25 - 256) <= 9 || InputTraceLogging::IsMouseInputMessage(v25))
          && (unsigned int)dword_1C035C080 > 4 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
          {
            v59 = v42;
            v55 = (unsigned __int16)v43 >> 15;
            v64 = (unsigned int)(v41 - 8);
            v56 = (unsigned int)(v43 << 17) >> 31;
            v57 = (unsigned int)(v43 << 18) >> 31;
            v61 = *((_QWORD *)v6 + 17);
            v73 = &v55;
            v71 = &v56;
            v69 = &v57;
            v67 = &v58;
            v65 = &v59;
            v63 = &v61;
            v58 = (unsigned int)(v43 << 15) >> 31;
            v74 = 4LL;
            v72 = 4LL;
            v70 = 4LL;
            v68 = 4LL;
            v66 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C035C080, (int)&dword_1C031BC61, 0, 0, v64, &v62);
            LODWORD(v20) = 0;
          }
        }
        v26 = v6;
        v27 = v6;
        v6 = *(struct tagQMSG **)v6;
        *(_QWORD *)v26 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v26 + 1) = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
          *(_QWORD *)(*(_QWORD *)v9 + 8LL) = v27;
        }
        else
        {
          *((_QWORD *)v26 + 1) = *(_QWORD *)(v53 + 8);
          *(_QWORD *)(v53 + 8) = v26;
        }
        *(_QWORD *)v9 = v27;
        v9 = v27;
        v28 = *(_DWORD *)(v53 + 16) + 1;
        *(_DWORD *)(v53 + 16) = v28;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
          || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v29 = v20;
        }
        if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v29,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v28,
            v51,
            (__int64)v52,
            0x29u,
            (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
          LODWORD(v20) = 0;
        }
        if ( *v17 != (_DWORD)v20 && (*(_DWORD *)(*(_QWORD *)(v22 + 448) + 8LL) & 0x2000) == 0 )
          SetWakeBit(v22, 0x2040u);
        if ( v27 != *((struct tagQMSG **)a2 + 11) || (v44 = *(struct tagQ **)(v22 + 432), a2 == v44) )
        {
          v3 = 0LL;
        }
        else
        {
          if ( !*((_QWORD *)v44 + 11) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
              || (v45 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              v45 = 0;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              || (v46 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              v46 = 0;
            }
            if ( v45 || v46 )
              WPP_RECORDER_AND_TRACE_SF_qqq(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v45,
                v46,
                (__int64)gFullLog,
                5u,
                0x12u,
                0x2Au,
                (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
            *(_QWORD *)(*(_QWORD *)(v22 + 432) + 88LL) = *((_QWORD *)a2 + 11);
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
          {
            v3 = 0LL;
            v47 = 0;
          }
          else
          {
            v47 = 1;
            v3 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v48 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v48 = 0;
          }
          if ( v47 || v48 )
          {
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v47,
              v48,
              (__int64)gFullLog,
              5u,
              0x12u,
              0x2Bu,
              (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
            v3 = 0LL;
          }
          *((_QWORD *)a2 + 11) = 0LL;
        }
        if ( !v6 )
          break;
        *((_QWORD *)v6 + 1) = 0LL;
        v7 = v22;
      }
      else
      {
        if ( *(_QWORD *)v6 )
          *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v20;
        v37 = v6;
        v6 = *(struct tagQMSG **)v6;
        if ( v37 == *((struct tagQMSG **)a2 + 11) )
        {
          if ( WPP_GLOBAL_Control == v19
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (v38 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v38 = v20;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v39 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
          {
            v39 = v20;
          }
          if ( v38 || v39 )
          {
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v38,
              v39,
              (__int64)gFullLog,
              5u,
              0x12u,
              0x28u,
              (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
            v20 = 0LL;
          }
          *((_QWORD *)a2 + 11) = v20;
        }
        CleanEventMessage(v37);
        FreeQEntry(v37);
        v3 = 0LL;
        if ( !v6 )
          break;
      }
      v8 = v60;
      v4 = a3;
    }
  }
  v10 = *((_QWORD *)a2 + 6);
  if ( v10 )
  {
    do
    {
      v49 = *(_QWORD *)(v10 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v10 + 104) + 432LL) != a2 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)a2 + 24), (struct tagQMSG *)v10);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v50 + 104) + 432LL) + 24LL), (struct tagQMSG *)v50);
      }
      v10 = v49;
    }
    while ( v49 );
  }
}
