void __fastcall xxxDrawDragRectEx(struct MOVESIZEDATA *a1, struct tagRECT *a2, int a3, struct tagRECT *a4)
{
  __int64 v8; // rcx
  signed int v9; // r12d
  unsigned int v10; // r13d
  char v11; // r11
  __int64 v12; // rcx
  struct tagRECT *v13; // rbx
  BOOL v14; // edi
  char v15; // dl
  char v16; // r8
  const char *v17; // r9
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct tagRECT v21; // xmm0
  __int64 *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbx
  struct tagRECT *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 v29; // r10
  __int64 v30; // r10
  LONG left; // edi
  LONG right; // r13d
  __int64 v33; // rax
  char *Spb; // rax
  __int64 RectRgnIndirect; // rax
  HRGN v36; // r12
  __int64 v37; // r8
  int v38; // r8d
  __int64 v39; // r10
  LONG v40; // edi
  LONG bottom; // ebx
  _DWORD *v42; // rdx
  struct tagWND *v43; // r10
  unsigned int v44; // eax
  __int64 *v45; // r10
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _DWORD *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int128 v55; // xmm0
  struct tagTHREADINFO *v56; // r15
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r8
  struct tagWND *v60; // rbx
  struct tagWND *v61; // rdx
  struct tagTHREADINFO *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct tagRECT v66; // xmm0
  _QWORD **v67; // rbx
  struct tagRECT *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  struct tagTHREADINFO *v72; // rax
  __int64 v73; // r9
  __int64 v74; // rax
  int v75; // r8d
  int v76; // r9d
  char v77; // dl
  int *v78; // [rsp+20h] [rbp-E0h]
  int v79; // [rsp+28h] [rbp-D8h]
  int v80; // [rsp+38h] [rbp-C8h]
  __int64 v81; // [rsp+40h] [rbp-C0h]
  __int64 v82; // [rsp+48h] [rbp-B8h]
  __int64 v83; // [rsp+50h] [rbp-B0h]
  __int64 v84; // [rsp+58h] [rbp-A8h]
  __int64 v85; // [rsp+60h] [rbp-A0h]
  __int64 v86; // [rsp+68h] [rbp-98h]
  __int64 v87; // [rsp+70h] [rbp-90h]
  unsigned int v88; // [rsp+80h] [rbp-80h] BYREF
  BOOL v89; // [rsp+84h] [rbp-7Ch]
  int v90; // [rsp+88h] [rbp-78h] BYREF
  int v91; // [rsp+8Ch] [rbp-74h]
  struct tagRECT *v92; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v93; // [rsp+98h] [rbp-68h]
  __int64 v94; // [rsp+A0h] [rbp-60h] BYREF
  struct tagTHREADINFO *v95[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v96; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v97; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-28h]
  __int128 v99; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v100; // [rsp+F0h] [rbp-10h]
  struct tagRECT v101; // [rsp+F8h] [rbp-8h] BYREF
  struct tagRECT v102; // [rsp+108h] [rbp+8h] BYREF

  v92 = a4;
  if ( !*((_QWORD *)PtiCurrentShared((__int64)a1) + 57)
    || (v88 = 5, (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v8) + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    v88 = 4;
  }
  v9 = a3 & 0xF0000000;
  v10 = a3 & 0xFFFFFFF;
  if ( (*((_DWORD *)a1 + 50) & 0x10) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 27LL) & 8) == 0 )
  {
    if ( a2 )
      *a4 = *a2;
    return;
  }
  v11 = 0;
  if ( !a2 )
    goto LABEL_12;
  v12 = *((_QWORD *)a1 + 3) - *(_QWORD *)&a2->left;
  if ( !v12 )
    v12 = *((_QWORD *)a1 + 4) - *(_QWORD *)&a2->right;
  if ( v12 )
  {
LABEL_12:
    v89 = 0;
    v13 = a2;
    if ( !a2 )
      v13 = a4;
    v14 = 0;
    *(_QWORD *)&v96.left = v13;
    v102 = *v13;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v15 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v16 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      v95[0] = (struct tagTHREADINFO *)"Drag";
      v91 = 11;
      v17 = "Preview";
      LODWORD(v87) = v102.bottom - v102.top;
      if ( v9 >= 0 )
        v17 = (const char *)v95[0];
      WPP_RECORDER_AND_TRACE_SF_sdddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (__int64)gFullLog,
        5u,
        1u,
        v91,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        v17);
      v13 = *(struct tagRECT **)&v96.left;
      v11 = 0;
      v14 = v89;
    }
    if ( v9 >= 0 && v10 == 3 )
    {
      v18 = DetectNewMonitor((struct tagWND **)a1, &v102);
      v11 = 0;
      if ( v18 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
        v14 = v19 != 2;
        v89 = v14;
        if ( a2 )
        {
          if ( v19 != 2 || (v20 = *((_DWORD *)a1 + 50), v89 = v14, (v20 & 0x20) == 0) )
          {
            v21 = v102;
            v89 = v14;
            *v92 = v102;
            *a2 = v21;
          }
        }
        if ( v14 )
        {
          xxxMS_FlushWigglies();
          GenerateMouseMove(0LL);
          v11 = 0;
        }
      }
    }
    if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 && v10 >= 2 )
    {
      v90 = 0;
      v22 = (__int64 *)((char *)a1 + 16);
      v91 = 0;
      v23 = *((_QWORD *)a1 + 2);
      v88 = 0;
      v24 = *(_QWORD *)(v23 + 16);
      v94 = v24;
      v97 = 0LL;
      v98 = 0LL;
      v95[0] = (struct tagTHREADINFO *)gptiCurrent;
      v100 = 0LL;
      v99 = 0LL;
      if ( v24 != gptiCurrent )
      {
        LockW32Thread(v24, &v99);
        v11 = 0;
      }
      *(_DWORD *)(v24 + 488) |= 0x8000u;
      v25 = v92;
      if ( a2 )
        *v92 = *a2;
      v26 = *v22;
      v27 = *(_QWORD *)(*v22 + 104);
      v101 = *v25;
      if ( v27
        && !IsTopLevelWindow(v26)
        && (ScreenToClient(v28, &v101),
            ScreenToClient(v29, &v101.right),
            (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 26LL) & 0x40) != 0) )
      {
        left = v101.left;
        right = v101.right;
      }
      else
      {
        left = v101.right;
        right = v101.left;
      }
      v33 = *(_QWORD *)(v26 + 40);
      v93 = right;
      if ( *(char *)(v33 + 16) < v11 )
      {
        v96 = *(struct tagRECT *)(v33 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v96, &v96.left, &a2->left) )
          {
            Spb = (char *)FindSpb(v26);
            FreeSpb(Spb);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(*v22 + 40) + 88LL);
      v36 = (HRGN)RectRgnIndirect;
      v37 = *(_QWORD *)(*(_QWORD *)(*v22 + 40) + 168LL);
      if ( v37 )
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v37, 1LL);
      ThreadLock(*v22, &v97);
      v39 = *v22;
      v40 = left - right;
      bottom = v101.bottom;
      v96.left = v40;
      v42 = *(_DWORD **)(v39 + 40);
      if ( (v42[24] - v42[22] != v40 || v42[25] - v42[23] != v101.bottom - v101.top)
        && (unsigned int)DoesQualifyForResizeOptimization(a1) )
      {
        v90 = 0;
        v44 = DoesRequireResizeLayoutSynchronization(v43);
        v46 = *v45;
        v78 = &v90;
        v91 = v44;
        if ( (unsigned int)GreWindowResizeStarted(&v90, v46, v44, &v88) && v88 )
          SetSystemTimer(*v22, 65522, v90, (int)ResizeTimerFunc, 1);
        v90 = 1;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v42) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v38) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v38) = 0;
      }
      if ( (_BYTE)v42 || (_BYTE)v38 )
      {
        v47 = *(_DWORD **)(*v22 + 40);
        WPP_RECORDER_AND_TRACE_SF_ddddddD(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v42,
          v38,
          (_DWORD)gFullLog,
          (_DWORD)v78,
          v79,
          12,
          v80,
          v47[22],
          v47[23],
          v47[24],
          v47[25],
          v47[24] - v47[22],
          *((_BYTE *)v47 + 100) - v47[23],
          20);
        v40 = v96.left;
        bottom = v101.bottom;
      }
      xxxSetWindowPos((struct tagWND *)*v22, 0LL, v93, (unsigned int)v101.top, v40, bottom - v101.top, 532);
      LOBYTE(v48) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v50) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v50) = 0;
      }
      if ( (_BYTE)v48 || (_BYTE)v50 )
      {
        v52 = *(_DWORD **)(*v22 + 40);
        LODWORD(v86) = v52[25] - v52[23];
        LODWORD(v85) = v52[24] - v52[22];
        LODWORD(v84) = v52[25];
        LODWORD(v83) = v52[24];
        LODWORD(v82) = v52[23];
        LODWORD(v81) = v52[22];
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v48,
          v50,
          (__int64)gFullLog,
          5u,
          1u,
          0xDu,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
      }
      if ( (*((_DWORD *)a1 + 50) & 0x8000000) != 0 )
      {
        v53 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*v22 + 40) + 256LL), v48, v50, v51);
        v54 = *v22;
        *((_QWORD *)a1 + 26) = v53;
        if ( IsTopLevelWindow(v54) )
        {
          v48 = *(_QWORD *)(v50 + 40);
          if ( (*(_DWORD *)(v48 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v50 + 16) + 648LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *a2 = *(struct tagRECT *)(v48 + 88);
              v50 = *v22;
            }
            *v92 = *(struct tagRECT *)(*(_QWORD *)(v50 + 40) + 88LL);
            v49 = *(_QWORD *)(*v22 + 40);
            v55 = *(_OWORD *)(v49 + 88);
            *(_QWORD *)((char *)a1 + 252) = *(_QWORD *)((char *)a1 + 260);
            *(_OWORD *)((char *)a1 + 120) = v55;
            *((_DWORD *)a1 + 63) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 64) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 50) &= ~0x8000000u;
      }
      ThreadUnlock1(v49, v48, v50);
      v56 = (struct tagTHREADINFO *)v94;
      if ( *(struct MOVESIZEDATA **)(v94 + 672) == a1 )
      {
        v57 = GreCreateRectRgnIndirect(*(_QWORD *)(*v22 + 40) + 88LL);
        v58 = v57;
        v59 = *(_QWORD *)(*(_QWORD *)(*v22 + 40) + 168LL);
        if ( v59 )
          GreCombineRgn(v57, v57, v59, 1LL);
        if ( v36 )
        {
          if ( v58 )
          {
            GreCombineRgn(v36, v36, v58, 4LL);
          }
          else
          {
            GreDeleteObject(v36);
            v36 = 0LL;
          }
        }
        v60 = *(struct tagWND **)(GetDesktopWindow(*v22) + 112);
        ThreadLock(v60, &v97);
        v61 = v60;
        v62 = v95[0];
        xxxUpdateThreadsWindows(v95[0], v61, v36);
        ThreadUnlock1(v64, v63, v65);
        if ( v90 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), *(_QWORD *)*v22);
          if ( v88 )
          {
            if ( !v91 )
              FindTimer((void *)*v22, (void *)0xFFF2, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v58);
      }
      else
      {
        v62 = v95[0];
      }
      GreDeleteObject(v36);
      *((_DWORD *)v56 + 122) &= ~0x8000u;
      if ( v56 != v62 )
        PopAndFreeW32ThreadLock((__int64)&v99);
    }
    else
    {
      v66 = *v13;
      v67 = (_QWORD **)((char *)a1 + 16);
      v68 = (struct tagRECT *)*((_QWORD *)a1 + 2);
      v101 = v66;
      *(_OWORD *)v95 = *(_OWORD *)(*gpDispInfo + 24LL);
      v101 = *WindowMargins::ReduceRect(&v96, v68, (const struct tagWND *)&v101, 0LL);
      if ( v9 >= 0 )
        v69 = *((_QWORD *)a1 + 26);
      else
        v69 = *((_QWORD *)a1 + 29);
      v94 = v69;
      LogicalToPhysicalDPIRect(&v101, &v101, *(unsigned int *)((*v67)[5] + 288LL), &v94);
      if ( v14 )
        bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), (__int64)&v101, (__int64)v95, v88);
      if ( a2 )
      {
        if ( v9 < 0 && (*((_BYTE *)a1 + 200) & 0x20) != 0 )
        {
          bMoveDevPreviewRect(*(_QWORD *)(gpDispInfo + 40LL), &v101, v88, **v67, *(_QWORD *)(gpsi + 4960LL));
        }
        else
        {
          LOBYTE(v70) = v9 < 0;
          if ( !*((_QWORD *)PtiCurrentShared(v70) + 57)
            || (v72 = PtiCurrentShared(v71),
                v73 = 1LL,
                (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)v72 + 57) + 8LL) + 64LL) & 1) == 0) )
          {
            v73 = 0LL;
          }
          bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 40LL), &v101, v95, v73);
        }
        *v92 = *a2;
      }
      else
      {
        if ( v10 )
        {
          v22 = (__int64 *)((char *)a1 + 16);
          if ( v10 == 1 && v9 < 0 )
            bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)(gpsi + 4960LL));
          goto LABEL_124;
        }
        if ( v9 >= 0 )
          bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), (__int64)&v101, (__int64)v95, v88);
        else
          bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)(gpsi + 4960LL));
      }
      v22 = (__int64 *)((char *)a1 + 16);
    }
LABEL_124:
    if ( v89 && *((_DWORD *)a1 + 44) == 9 )
    {
      v94 = *((_QWORD *)a1 + 26);
      v74 = *v22;
      v92 = 0LL;
      PhysicalToLogicalDPIPoint(&v92, (char *)a1 + 268, *(unsigned int *)(*(_QWORD *)(v74 + 40) + 288LL), &v94);
      v75 = v102.left - (_DWORD)v92;
      v76 = v102.top - HIDWORD(v92);
      *((_DWORD *)a1 + 43) = v102.top - HIDWORD(v92);
      *((_DWORD *)a1 + 42) = v75;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v77 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v77 = 0;
      }
      if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v82) = v76;
        LODWORD(v81) = v75;
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v77,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          1u,
          0xEu,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          v81,
          v82);
      }
    }
  }
}
