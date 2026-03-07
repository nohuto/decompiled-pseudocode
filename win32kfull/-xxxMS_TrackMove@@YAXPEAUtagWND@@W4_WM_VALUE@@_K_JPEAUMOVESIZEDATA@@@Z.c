void __fastcall xxxMS_TrackMove(__int64 a1, int a2, __int64 a3, __int64 a4, MOVESIZEDATA *a5)
{
  unsigned int v5; // r14d
  int v6; // r13d
  unsigned __int64 v8; // r12
  int v10; // esi
  char v11; // dl
  char v12; // r8
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  PDEVICE_OBJECT *v16; // rdx
  char v17; // dl
  int *v18; // r14
  __int128 v19; // xmm1
  char v20; // dl
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // edx
  _BOOL8 v24; // rcx
  bool v25; // zf
  int v26; // eax
  int DpiForSystem; // eax
  int *v28; // r14
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ebx
  int v33; // r9d
  unsigned __int64 v34; // rbx
  unsigned int MessagePos; // eax
  __int64 v36; // r8
  int v37; // r14d
  __int64 v38; // rdx
  PDEVICE_OBJECT v39; // rcx
  char v40; // dl
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v42; // ecx
  LONG y; // edx
  int v44; // r8d
  int v45; // eax
  __int64 DesktopWindow; // rax
  __int64 v47; // rdx
  int v48; // r14d
  int v49; // r13d
  __int64 v50; // rax
  __m128i *v51; // rbx
  __int64 v52; // rcx
  char v53; // cl
  __int64 v54; // rcx
  int v55; // eax
  int v56; // ecx
  _DWORD *v57; // rax
  __m128i v58; // xmm0
  const struct tagWND *v59; // rdx
  int v60; // r13d
  bool IsSupported; // al
  __int64 v62; // rcx
  int v63; // r14d
  int v64; // eax
  int DpiDependentMetric; // r12d
  int v66; // eax
  __int64 v67; // r14
  __m128i v68; // xmm0
  float *v69; // r11
  int v70; // ecx
  int *v71; // r9
  float *v72; // r11
  int *v73; // r9
  float *v74; // r11
  __int64 v75; // rax
  __int64 v76; // r13
  unsigned __int64 v77; // r14
  __int32 v78; // eax
  const struct tagWND *v79; // rdx
  _UNKNOWN **v80; // r8
  __int64 v81; // rcx
  int v82; // eax
  __m128i *MonitorWorkRect; // rax
  int v84; // ecx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int128 *v87; // rsi
  int v88; // ecx
  int v89; // eax
  __m128i *MonitorRect; // rax
  int v91; // ecx
  unsigned __int64 v92; // rax
  int v93; // eax
  __int64 v94; // [rsp+40h] [rbp-61h]
  __int64 v95; // [rsp+48h] [rbp-59h]
  __int64 v96; // [rsp+50h] [rbp-51h]
  __int64 v97; // [rsp+58h] [rbp-49h]
  __int64 v98; // [rsp+60h] [rbp-41h]
  __int64 v99; // [rsp+68h] [rbp-39h]
  __int64 v100; // [rsp+70h] [rbp-31h] BYREF
  __m128i v101; // [rsp+78h] [rbp-29h] BYREF
  struct tagPOINT v102; // [rsp+88h] [rbp-19h] BYREF
  __int64 v103; // [rsp+90h] [rbp-11h]
  __m128i v104; // [rsp+98h] [rbp-9h] BYREF
  __int128 v105; // [rsp+A8h] [rbp+7h] BYREF

  v5 = a4;
  v6 = 0;
  v101.m128i_i64[0] = a4;
  v8 = a3;
  v102.y = SWORD1(a4);
  v104.m128i_i64[0] = a3;
  v103 = gptiCurrent;
  v105 = 0LL;
  v102.x = (__int16)a4;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v11 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v12 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
    WPP_RECORDER_AND_TRACE_SF_Ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      5u,
      1u,
      0x3Du,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      a2,
      (__int16)a4,
      SWORD1(a4));
  v13 = a2 - 256;
  if ( v13 )
  {
    v14 = v13 - 4;
    if ( v14 )
    {
      v15 = v14 - 252;
      if ( v15 )
      {
        if ( v15 != 2 )
          return;
        v16 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v16) = 0;
        }
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v16,
            a3,
            (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
            4,
            1,
            62,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
        }
        xxxTM_MoveDragRect(a5, v5);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v17 = 0;
        }
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v96) = *((_DWORD *)a5 + 8);
          LODWORD(v95) = *((_DWORD *)a5 + 7);
          LODWORD(v94) = *((_DWORD *)a5 + 6);
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v17,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            1u,
            0x3Fu,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
            v94,
            v95,
            v96,
            *((_DWORD *)a5 + 9),
            v96 - v94,
            *((_DWORD *)a5 + 9) - v95);
        }
        v18 = (int *)((char *)a5 + 200);
        if ( (*((_DWORD *)a5 + 50) & 0x1000000) != 0 )
        {
          v19 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v19;
          v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v99) = *((_DWORD *)a5 + 9) - *((_DWORD *)a5 + 7);
            LODWORD(v98) = *((_DWORD *)a5 + 8) - *((_DWORD *)a5 + 6);
            LODWORD(v97) = *((_DWORD *)a5 + 9);
            LODWORD(v96) = *((_DWORD *)a5 + 8);
            LODWORD(v95) = *((_DWORD *)a5 + 7);
            LODWORD(v94) = *((_DWORD *)a5 + 6);
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v20,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              1u,
              0x40u,
              (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
              v94,
              v95,
              v96,
              v97,
              v98,
              v99);
          }
        }
        else if ( *((_DWORD *)a5 + 74) == 2 )
        {
          UpdateMoveSizeDataForCancelation(a5);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v21) = 0;
          }
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
              4,
              1,
              65,
              (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
          }
        }
        *v18 &= ~2u;
        goto LABEL_110;
      }
      v23 = v5;
LABEL_48:
      xxxTM_MoveDragRect(a5, v23);
      return;
    }
  }
  LODWORD(v100) = 0;
  v24 = (_GetKeyState(17LL) & 0x8000u) != 0LL;
  if ( v8 > 0x28 )
    return;
  if ( (_DWORD)v8 == 13 )
  {
    GetMessagePos(v24);
    v18 = (int *)((char *)a5 + 200);
LABEL_110:
    bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    if ( (*(_DWORD *)(v103 + 488) & 0x10) != 0 )
    {
      v44 = *v18;
      if ( (*v18 & 0x800) == 0 || (((v44 & 0x20) != 0) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL)) == 0 )
        xxxDrawDragRect(a5, 0LL, ((v44 & 0xFF000000) << 7) | 1);
      *(_DWORD *)(v103 + 488) &= ~0x10u;
    }
    goto LABEL_115;
  }
  if ( (_DWORD)v8 != 27 )
  {
    if ( (_DWORD)v8 != 37 )
    {
      if ( (_DWORD)v8 == 38 )
      {
LABEL_56:
        if ( *((_DWORD *)a5 + 46) )
        {
          if ( v24 || (v26 = GetDpiForSystem(v24), (int)GetDpiDependentMetric(13, v26) / 2 <= 1) )
          {
            v6 = 1;
          }
          else
          {
            DpiForSystem = GetDpiForSystem(v24);
            v6 = (int)GetDpiDependentMetric(13, DpiForSystem) / 2;
          }
          if ( v8 == 38 )
            v6 = -v6;
          goto LABEL_69;
        }
        v25 = *((_DWORD *)a5 + 45) == 0;
        *((_DWORD *)a5 + 46) = *(_DWORD *)&aEnabled_0[4 * v8 + 4];
LABEL_66:
        if ( !v25 )
        {
          v29 = *((_DWORD *)a5 + 50) & 0xFFFFFBFF;
          *((_DWORD *)a5 + 60) = 4;
          *((_DWORD *)a5 + 50) = v29 & 0xFFFFFCFF;
          MOVESIZEDATA::SHData_ResetRuntimeState(a5);
          MakeArrangedStateObservable(a5);
        }
        *((_QWORD *)a5 + 21) = 0LL;
LABEL_69:
        v28 = (int *)((char *)a5 + 180);
LABEL_76:
        if ( *((_DWORD *)a5 + 44) == 9 )
        {
          v33 = 9;
          v34 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
        }
        else
        {
          MessagePos = GetMessagePos(v24);
          v33 = *((_DWORD *)a5 + 44);
          v34 = MessagePos;
        }
        v36 = *v28;
        v37 = v100;
        v101.m128i_i64[0] = v34;
        if ( (_DWORD)v36 )
        {
          v101.m128i_i16[0] = *((_WORD *)a5 + 2 * dword_1C03226F8[v36] + 20) + v100;
          LODWORD(v34) = v101.m128i_i32[0];
        }
        LOWORD(v103) = v101.m128i_i16[0];
        v38 = *((int *)a5 + 46);
        if ( (_DWORD)v38 )
        {
          v101.m128i_i16[1] = *((_WORD *)a5 + 2 * dword_1C0322688[v38] + 20) + v6;
          LODWORD(v34) = v101.m128i_i32[0];
        }
        if ( v33 != 9 )
        {
          *((_DWORD *)a5 + 44) = v36 + v38;
          xxxSendMessage((struct tagWND *)a1, 0x20u);
        }
        v102.x = (__int16)v103 - *((_DWORD *)a5 + 42);
        v102.y = SWORD1(v34) - *((_DWORD *)a5 + 43);
        if ( MOVESIZEDATA::PtInClipRegion(a5, &v102) )
        {
          v39 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v40 = 0;
          }
          if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v95) = v102.y;
            LODWORD(v94) = v102.x;
            WPP_RECORDER_AND_TRACE_SF_dd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v40,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              1u,
              0x43u,
              (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
              v94,
              v95);
          }
          v100 = *((_QWORD *)a5 + 26);
          *(struct tagPOINT *)v101.m128i_i8 = v102;
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v39);
          LogicalToPhysicalDPIPoint(&v101, &v102, CurrentThreadDpiAwarenessContext, &v100);
          if ( ((v104.m128i_i64[0] - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
          {
            v42 = v101.m128i_i32[0];
            if ( ((v104.m128i_i64[0] - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              y = v101.m128i_i32[1];
            }
            else
            {
              y = gptCursorAsync->y;
              v101.m128i_i32[1] = y;
              if ( v101.m128i_i32[0] == (_DWORD)gptCursorAsync )
              {
                if ( v37 <= 0 )
                  v10 = -1;
                v42 = v10 + v101.m128i_i32[0];
                v101.m128i_i32[0] += v10;
              }
            }
          }
          else
          {
            y = v101.m128i_i32[1];
            v42 = (unsigned int)gptCursorAsync;
            v101.m128i_i32[0] = (int)gptCursorAsync;
            if ( v101.m128i_i32[1] == gptCursorAsync->y )
            {
              if ( v6 <= 0 )
                v10 = -1;
              y = v10 + v101.m128i_i32[1];
              v101.m128i_i32[1] += v10;
            }
          }
          zzzInternalSetCursorPos(v42, y, 2, 0);
        }
        v23 = v34;
        goto LABEL_48;
      }
      if ( (_DWORD)v8 != 39 )
      {
        if ( (_DWORD)v8 != 40 )
          return;
        goto LABEL_56;
      }
    }
    v28 = (int *)((char *)a5 + 180);
    if ( *((_DWORD *)a5 + 45) )
    {
      if ( v24 || (v30 = GetDpiForSystem(v24), (int)GetDpiDependentMetric(12, v30) / 2 <= 1) )
      {
        v32 = 1;
        LODWORD(v100) = 1;
      }
      else
      {
        v31 = GetDpiForSystem(v24);
        v32 = (int)GetDpiDependentMetric(12, v31) / 2;
        LODWORD(v100) = v32;
      }
      if ( v8 == 37 )
        LODWORD(v100) = -v32;
      goto LABEL_76;
    }
    v25 = *((_DWORD *)a5 + 46) == 0;
    *v28 = *(_DWORD *)&aEnabled_0[4 * v8 + 4];
    goto LABEL_66;
  }
  bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(v103 + 488) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    *(_DWORD *)(v103 + 488) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation(a5);
  v18 = (int *)((char *)a5 + 200);
LABEL_115:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v45 = *v18 | 8;
  *v18 = v45;
  if ( (v45 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v47 == DesktopWindow )
  {
    v48 = 0;
    v49 = 0;
  }
  else
  {
    v50 = *(_QWORD *)(v47 + 40);
    v49 = *(_DWORD *)(v50 + 104);
    v48 = *(_DWORD *)(v50 + 108);
  }
  v51 = (__m128i *)((char *)a5 + 24);
  v52 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v52 )
    v52 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v52 )
  {
    if ( (unsigned int)xxxCallHook(0LL, *(_QWORD *)a1, (__int64)a5 + 24, 5) )
    {
      v58 = *(__m128i *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v51 = v58;
    }
    else
    {
      v53 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( (v53 & 0x20) != 0 )
        {
          v104.m128i_i32[0] = *((_DWORD *)a5 + 34) - v49;
          v104.m128i_i32[2] = *((_DWORD *)a5 + 36) - v49;
          v104.m128i_i32[1] = *((_DWORD *)a5 + 35) - v48;
          v104.m128i_i32[3] = *((_DWORD *)a5 + 37) - v48;
          v57 = CkptRestore((struct tagWND *)a1, &v104);
          if ( v57 )
            v57[12] |= 1u;
        }
      }
      else if ( (v53 & 0x20) != 0 )
      {
        v104.m128i_i32[0] = *((_DWORD *)a5 + 34) - v49;
        v104.m128i_i32[2] = *((_DWORD *)a5 + 36) - v49;
        v104.m128i_i32[1] = *((_DWORD *)a5 + 35) - v48;
        v104.m128i_i32[3] = *((_DWORD *)a5 + 37) - v48;
        CkptRestore((struct tagWND *)a1, &v104);
        SetMinimize((struct tagWND *)a1, 0);
      }
      else if ( (v53 & 1) != 0 )
      {
        SetOrClrWF(0, (__int64 *)a1, 0xF01u, 1);
      }
    }
  }
  v54 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  if ( (*(_BYTE *)(v54 + 26) & 0x40) != 0 )
  {
    v55 = *(_DWORD *)(v54 + 112);
    v51->m128i_i32[0] -= v55;
    *((_DWORD *)a5 + 8) -= v55;
    *((_DWORD *)a5 + 9) -= v48;
    *((_DWORD *)a5 + 7) -= v48;
    v56 = -v51->m128i_i32[0];
    v51->m128i_i32[0] = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v56;
  }
  else
  {
    v51->m128i_i32[0] -= v49;
    *((_DWORD *)a5 + 8) -= v49;
    *((_DWORD *)a5 + 9) -= v48;
    *((_DWORD *)a5 + 7) -= v48;
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
  {
    v60 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 24LL) & 0x88;
    LODWORD(v103) = v60;
    IsSupported = WindowArrangement::IsSupported((WindowArrangement *)a1, v59);
    v62 = *(_QWORD *)(a1 + 40);
    v63 = *(char *)(v62 + 24);
    if ( IsSupported )
    {
      if ( (v63 & 0x80u) == 0 )
      {
        DpiDependentMetric = 0;
      }
      else
      {
        v66 = GetDpiForSystem(v62);
        DpiDependentMetric = GetDpiDependentMetric(22, v66);
      }
    }
    else
    {
      v64 = GetDpiForSystem(v62);
      DpiDependentMetric = GetDpiDependentMetric(((v63 >> 7) & 0x14u) + 2, v64) - 1;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v68 = *v51;
      v69 = *(float **)(a1 + 216);
      v70 = DpiDependentMetric + *((_DWORD *)a5 + 7);
      LODWORD(v100) = v70;
      v104 = v68;
      if ( v69 )
      {
        v101.m128i_i32[0] = 0;
        TransformVector(v69, v101.m128i_i32, (int *)&v100, 0LL, 0);
        TransformVector(v72, v104.m128i_i32, &v104.m128i_i32[1], v71, 0);
        TransformVector(v74, &v104.m128i_i32[2], &v104.m128i_i32[3], v73, 0);
        v70 = v100;
      }
      v75 = *(_QWORD *)(gpDispInfo + 104LL);
      v101.m128i_i64[0] = v75;
      if ( v75 )
      {
        while ( 1 )
        {
          v76 = *(_QWORD *)(v75 + 40);
          if ( (*(_DWORD *)(v76 + 24) & 1) != 0 )
          {
            v77 = -(__int64)((_DWORD)v103 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v70 >= *(_DWORD *)(v77 + v76 + 48) && v70 < *(_DWORD *)(v77 + v76 + 56) )
            {
              if ( !WindowArrangement::IsSupported((WindowArrangement *)a1, 0LL) )
                goto LABEL_183;
              v78 = *(_DWORD *)(v77 + v76 + 44);
              if ( v104.m128i_i32[2] >= v78 && v104.m128i_i32[2] < *(_DWORD *)(v77 + v76 + 52) )
                goto LABEL_183;
              if ( v104.m128i_i32[0] >= v78 && v104.m128i_i32[0] < *(_DWORD *)(v77 + v76 + 52) )
                goto LABEL_183;
            }
          }
          v70 = v100;
          v75 = *(_QWORD *)(v101.m128i_i64[0] + 56);
          v101.m128i_i64[0] = v75;
          if ( !v75 )
          {
            v60 = v103;
            break;
          }
        }
      }
      v67 = MonitorFromRect((__int64)a5 + 24, 2u, 0);
    }
    else
    {
      v67 = *(_QWORD *)(GetDispInfo(v62) + 96);
    }
    v79 = (const struct tagWND *)&WPP_GLOBAL_Control;
    LOBYTE(v79) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v80 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v79 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v80) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v79,
        (_DWORD)v80,
        (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        4,
        1,
        66,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    if ( WindowArrangement::IsSupported((WindowArrangement *)a1, v79) )
    {
      v85 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL);
      if ( v85 && (unsigned int)GreGetRgnBox(v85, &v105) )
      {
        v86 = *(_QWORD *)(a1 + 40);
        v87 = &v105;
        v88 = *((_DWORD *)a5 + 7);
        LODWORD(v105) = v51->m128i_i32[0];
        v89 = *((_DWORD *)a5 + 8);
        DWORD1(v105) += v88 - *(_DWORD *)(v86 + 92);
        DWORD2(v105) = v89;
        HIDWORD(v105) = *((_DWORD *)a5 + 9) + *(_DWORD *)(v86 + 100) - HIDWORD(v105);
      }
      else
      {
        v87 = (__int128 *)((char *)a5 + 24);
      }
      if ( v60 )
        MonitorRect = (__m128i *)GetMonitorRect(v104.m128i_i64, v67);
      else
        MonitorRect = GetMonitorWorkRect(&v104, v67);
      v91 = *((_DWORD *)v87 + 1);
      v92 = HIDWORD(MonitorRect->m128i_i64[0]);
      if ( v91 < (int)v92 )
      {
        v93 = v92 - v91;
        *((_DWORD *)a5 + 7) += v93;
        *((_DWORD *)a5 + 9) += v93;
      }
    }
    else if ( v60 )
    {
      v81 = *GetMonitorRect(v104.m128i_i64, v67);
      v82 = *((_DWORD *)a5 + 7);
      if ( v82 <= HIDWORD(v81) - DpiDependentMetric )
        v82 = HIDWORD(v81) - DpiDependentMetric;
      *((_DWORD *)a5 + 7) = v82;
    }
    else
    {
      MonitorWorkRect = GetMonitorWorkRect(&v104, v67);
      v84 = *((_DWORD *)a5 + 7);
      if ( v84 <= (int)(HIDWORD(MonitorWorkRect->m128i_i64[0]) - DpiDependentMetric) )
        v84 = HIDWORD(GetMonitorWorkRect(&v101, v67)->m128i_i64[0]) - DpiDependentMetric;
      *((_DWORD *)a5 + 7) = v84;
    }
  }
LABEL_183:
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(a1 + 320) &= ~0x20000u;
    RecreateRedirectionBitmap((void **)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
