/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C00EF6D0
 * Callers:
 *     <none>
 * Callees:
 *     DwmSyncGetCompositionAttribute @ 0x1C0013CA0 (DwmSyncGetCompositionAttribute.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00170C8 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00B4624 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EF314 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C01F6E7C (-GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, ULONG64 a2, __int64 a3)
{
  __int64 v3; // rsi
  NTSTATUS WindowMinimizeAnimation; // r14d
  __int64 v5; // rbx
  ULONG v6; // r8d
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r13d
  void *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const struct tagWND *v17; // r12
  LONG v18; // r13d
  _QWORD *v19; // rsi
  int v20; // edi
  int v21; // r12d
  __int64 Prop; // r11
  int v23; // eax
  _QWORD *v24; // r15
  bool v25; // zf
  _QWORD *v26; // rax
  int v27; // r10d
  int v28; // eax
  unsigned int v29; // edi
  struct tagTHREADINFO *v30; // rax
  int v31; // eax
  unsigned int v32; // edi
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // sf
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  int v42; // r13d
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int32 v46; // edi
  struct tagTHREADINFO *v47; // rax
  int v48; // eax
  unsigned int v49; // edi
  int v50; // edi
  BOOL v51; // eax
  int v52; // edx
  bool v53; // al
  ULONG v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  bool v57; // cf
  __int64 v58; // r8
  __int64 v59; // r9
  struct tagRECT *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  const struct tagWND *v63; // r8
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 CurrentProcessWow64Process; // rax
  ULONG v76; // r8d
  LONG *v77; // rdi
  struct tagRECT Src; // [rsp+30h] [rbp-348h] BYREF
  __int64 v80; // [rsp+40h] [rbp-338h]
  __int64 v81; // [rsp+60h] [rbp-318h]
  void *v82[2]; // [rsp+68h] [rbp-310h]
  SIZE_T v83; // [rsp+78h] [rbp-300h]
  void *v84; // [rsp+80h] [rbp-2F8h]
  size_t Size; // [rsp+88h] [rbp-2F0h]
  __int64 v86[3]; // [rsp+98h] [rbp-2E0h] BYREF
  volatile void *Address[2]; // [rsp+B0h] [rbp-2C8h]
  SIZE_T Length; // [rsp+C0h] [rbp-2B8h]
  __int128 v89; // [rsp+E0h] [rbp-298h]
  __int128 v90; // [rsp+F0h] [rbp-288h]
  __m256i v91[2]; // [rsp+100h] [rbp-278h] BYREF
  __m256i v92; // [rsp+140h] [rbp-238h] BYREF
  __m256i v93; // [rsp+160h] [rbp-218h]
  _WORD v94[32]; // [rsp+180h] [rbp-1F8h] BYREF
  _WORD v95[32]; // [rsp+1C0h] [rbp-1B8h] BYREF
  _WORD v96[32]; // [rsp+200h] [rbp-178h] BYREF
  _WORD v97[32]; // [rsp+240h] [rbp-138h] BYREF
  _DWORD v98[16]; // [rsp+280h] [rbp-F8h] BYREF
  _DWORD v99[16]; // [rsp+2C0h] [rbp-B8h] BYREF
  _BYTE v100[56]; // [rsp+300h] [rbp-78h] BYREF
  LONG v101; // [rsp+338h] [rbp-40h]

  v3 = a1;
  v86[0] = a1;
  WindowMinimizeAnimation = -1073741811;
  *(_OWORD *)v82 = 0LL;
  v83 = 0LL;
  v5 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v80 = 0LL;
  if ( a2 + 24 < a2 || a2 + 24 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v82 = *(_OWORD *)Address;
  v83 = Length;
  if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress, a2, a3) )
    v6 = 1;
  else
    v6 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v6);
  v10 = (int)v82[0];
  if ( (unsigned int)(LODWORD(v82[0]) - 1) <= 0x1F )
  {
    v8 = 0x1C0000000uLL;
    Size = qword_1C03173C8[2 * SLODWORD(Address[0])];
    v3 = a1;
    if ( (unsigned int)Length < Size )
      WindowMinimizeAnimation = -1073741789;
    else
      WindowMinimizeAnimation = 0;
  }
  if ( WindowMinimizeAnimation < 0 )
    goto LABEL_100;
  v11 = 0LL;
  v84 = 0LL;
  EnterSharedCrit(v8, v7, v9);
  v12 = ValidateHwnd(v3);
  v17 = (const struct tagWND *)v12;
  v81 = v12;
  if ( !v12 )
    goto LABEL_99;
  if ( LODWORD(v82[0]) == 18 )
  {
    v18 = 0;
    memset(v91, 0, sizeof(v91));
    v19 = (_QWORD *)v12;
    v20 = 0;
    while ( 1 )
    {
      v21 = 0;
      Prop = 0LL;
      v23 = 0;
      v24 = v19 + 13;
      v14 = v19[13];
      if ( v14 )
      {
        v16 = 0LL;
        v13 = v19[3];
        if ( v13 )
        {
          v15 = *(_QWORD *)(v13 + 8);
          if ( v15 )
            v16 = *(_QWORD *)(v15 + 24);
        }
        v25 = v14 == v16;
        v14 = 1LL;
        if ( v25 )
          v23 = 1;
      }
      if ( v23 )
        goto LABEL_33;
      if ( (*(_BYTE *)(v19[5] + 26LL) & 8) == 0 )
        goto LABEL_35;
      v26 = v19;
      do
      {
        v27 = 0;
        v13 = v26[13];
        if ( v13 )
        {
          v16 = 0LL;
          v14 = v26[3];
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            if ( v15 )
              v16 = *(_QWORD *)(v15 + 24);
          }
          if ( v13 == v16 )
            v27 = 1;
        }
        if ( v27 )
          break;
        v26 = (_QWORD *)v26[13];
      }
      while ( v13 );
      if ( v26 )
LABEL_33:
        v28 = 1;
      else
LABEL_35:
        v28 = 0;
      if ( v28 )
      {
        v21 = 1;
        Prop = GetProp(v19, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1LL);
      }
      if ( Prop )
      {
        v91[0] = *(__m256i *)Prop;
        v91[1] = *(__m256i *)(Prop + 32);
        v32 = v91[0].m256i_i32[0];
      }
      else
      {
        v29 = v20 & 0xFFFF0000;
        memset((char *)v91[0].m256i_i64 + 4, 0, 28);
        v89 = 0LL;
        v91[1].m256i_i64[0] = 0LL;
        v30 = (struct tagTHREADINFO *)v19[2];
        if ( !v30 )
          v30 = PtiCurrentShared(v14, v13, v15, v16);
        v31 = (*((_QWORD *)v30 + 81) & 0x200000LL) != 0 ? 0x40000 : 0;
        v32 = v31 | v29 & 0xFFF9FFFF;
        v91[1].m256i_i32[2] = g_defaultFrameStyle;
        *(__int64 *)((char *)&v91[1].m256i_i64[1] + 4) = 0LL;
        *(__int64 *)((char *)&v91[1].m256i_i64[2] + 4) = 0LL;
      }
      v20 = v32 & 0x7FFFF;
      v91[0].m256i_i32[0] = v20;
      if ( v21 )
      {
        v14 = 0LL;
        if ( (v20 & 0x400) != 0 || (v20 & 0x2000) != 0 )
          v14 = 1LL;
        v18 = v14 | 2;
        if ( (v20 & 0x800) == 0 )
          v18 = v14;
        if ( v18 )
          break;
      }
      v19 = (_QWORD *)*v24;
      if ( !*v24 )
        goto LABEL_46;
    }
    if ( v19 != (_QWORD *)v81 )
      v18 |= 4u;
LABEL_46:
    Src.left = v18;
    v11 = 0LL;
    v10 = (int)v82[0];
    goto LABEL_47;
  }
  if ( LODWORD(v82[0]) != 21 )
  {
    v13 = 0LL;
    v39 = *(_QWORD *)(v12 + 104);
    v40 = v12 + 24;
    if ( v39 )
    {
      v14 = 0LL;
      if ( *(_QWORD *)v40 )
      {
        v41 = *(_QWORD *)(*(_QWORD *)v40 + 8LL);
        if ( v41 )
          v14 = *(_QWORD *)(v41 + 24);
      }
      if ( v39 == v14 )
        v13 = 1LL;
    }
    if ( (_DWORD)v13 || LODWORD(v82[0]) == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow((__int64)v17) )
    {
      switch ( LODWORD(v82[0]) )
      {
        case 1:
          memset_0(&v92, 0, 0x40uLL);
          v42 = 0;
          v43 = 0LL;
          v13 = 0LL;
          if ( v39 )
          {
            v14 = 0LL;
            if ( *(_QWORD *)v40 )
            {
              v44 = *(_QWORD *)(*(_QWORD *)v40 + 8LL);
              if ( v44 )
                v14 = *(_QWORD *)(v44 + 24);
            }
            if ( v39 == v14 )
              v13 = 1LL;
          }
          if ( (_DWORD)v13 || (*(_BYTE *)(*(_QWORD *)(v81 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v81) )
          {
            v43 = GetProp(v81, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1LL);
            v42 = 1;
          }
          if ( v43 )
          {
            v92 = *(__m256i *)v43;
            v93 = *(__m256i *)(v43 + 32);
            v49 = v92.m256i_i32[0];
          }
          else
          {
            v46 = v92.m256i_i32[0] & 0xFFFF0000;
            v90 = 0LL;
            *(_OWORD *)&v92.m256i_u64[1] = 0LL;
            v93.m256i_i64[0] = 0LL;
            v47 = *(struct tagTHREADINFO **)(v81 + 16);
            if ( !v47 )
              v47 = PtiCurrentShared(v14, v13, v15, v16);
            if ( (*((_QWORD *)v47 + 81) & 0x200000LL) != 0 )
              v48 = 0x40000;
            else
              v48 = 0;
            v49 = v48 | v46 & 0xFFF9FFFF;
            v93.m256i_i32[2] = g_defaultFrameStyle;
            *(__int64 *)((char *)&v93.m256i_i64[1] + 4) = 0LL;
            *(__int64 *)((char *)&v93.m256i_i64[2] + 4) = 0LL;
          }
          v50 = v49 & 0x7FFFF;
          v92.m256i_i32[0] = v50;
          if ( v42 )
          {
            v51 = 0;
            v14 = *(_QWORD *)(v81 + 40);
            v52 = *(_DWORD *)(v14 + 24);
            if ( (v52 & 0x80000) != 0 )
            {
              v57 = (v52 & 0x20000000) != 0;
              v13 = 1LL;
              v51 = !v57;
            }
            else
            {
              v13 = 1LL;
            }
            if ( !v51 && (v50 & 1) == 0 )
            {
              if ( v92.m256i_i32[1] )
              {
                if ( v92.m256i_i32[1] == 2 )
                  LODWORD(v11) = 1;
              }
              else
              {
                v14 = *(unsigned __int8 *)(v14 + 30);
                v53 = (v14 & 0xC0) != 0xC0;
                LOBYTE(v14) = ~((unsigned __int8)v14 >> 2);
                if ( ((unsigned __int8)v14 & v53 & 1) == 0 )
                  LODWORD(v11) = 1;
              }
            }
          }
          Src.left = (int)v11;
          v11 = 0LL;
          v10 = (int)v82[0];
          break;
        case 0x14:
          memset_0(v94, 0, sizeof(v94));
          if ( (unsigned int)_GetWindowCompositionInfo(v17, (struct WINDOWCOMPOSITIONINFO *)v94, v58, v59)
            && (v94[0] & 0x1000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x17:
          memset_0(v95, 0, sizeof(v95));
          if ( (unsigned int)_GetWindowCompositionInfo(v17, (struct WINDOWCOMPOSITIONINFO *)v95, v55, v56)
            && (v95[0] & 0x2000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x18:
          memset_0(v96, 0, sizeof(v96));
          if ( (unsigned int)_GetWindowCompositionInfo(v17, (struct WINDOWCOMPOSITIONINFO *)v96, v65, v66)
            && (v96[0] & 0x4000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x19:
          memset_0(v97, 0, sizeof(v97));
          if ( (unsigned int)_GetWindowCompositionInfo(v17, (struct WINDOWCOMPOSITIONINFO *)v97, v67, v68)
            && (v97[0] & 0x8000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x1A:
          memset_0(v98, 0, sizeof(v98));
          if ( (unsigned int)_GetWindowCompositionInfo(v17, (struct WINDOWCOMPOSITIONINFO *)v98, v69, v70)
            && (v98[0] & 0x10000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x1B:
          WindowMinimizeAnimation = GetWindowMinimizeAnimation(v17, (enum CORNER_STYLE *)&Src);
          break;
        case 0x1D:
          memset_0(v99, 0, sizeof(v99));
          if ( (unsigned int)_GetWindowCompositionInfo(v17, (struct WINDOWCOMPOSITIONINFO *)v99, v71, v72)
            && (v99[0] & 0x20000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x1E:
          memset_0(v100, 0, 0x40uLL);
          if ( (unsigned int)_GetWindowCompositionInfo(v17, (struct WINDOWCOMPOSITIONINFO *)v100, v73, v74) )
            Src.left = v101;
          break;
        default:
          if ( (unsigned int)(LODWORD(v82[0]) - 31) <= 1 )
          {
            WindowMinimizeAnimation = -1073741811;
            goto LABEL_49;
          }
          if ( !(unsigned int)IsWindowDesktopComposed(v17) )
            WindowMinimizeAnimation = -1073741816;
          break;
      }
      goto LABEL_47;
    }
LABEL_99:
    WindowMinimizeAnimation = -1073741816;
    goto LABEL_49;
  }
  Src.left = (*(_DWORD *)(v12 + 320) >> 11) & 1;
LABEL_47:
  if ( WindowMinimizeAnimation >= 0 )
  {
    v11 = (void *)ReferenceDwmApiPort(v14);
    v84 = v11;
  }
LABEL_49:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  if ( WindowMinimizeAnimation >= 0 && v10 != 18 && v10 != 1 )
  {
    v33 = 0x1C0000000uLL;
    switch ( v10 )
    {
      case 5:
        WindowMinimizeAnimation = DwmSyncGetCompositionAttribute(v11, a1, 5, &Src);
        v11 = 0LL;
        break;
      case 8:
        EnterSharedCrit(v34, 0x1C0000000uLL, v35);
        v60 = (struct tagRECT *)ValidateHwnd(a1);
        if ( v60 )
        {
          Src = *WindowMargins::GetPhysicalFrameBounds((WindowMargins *)v86, v60, v63);
          WindowMinimizeAnimation = 0;
        }
        else
        {
          WindowMinimizeAnimation = -1073741816;
        }
        UserSessionSwitchLeaveCrit(v62, v61, v63, v64);
        break;
      case 12:
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v34, 0x1C0000000uLL, v35);
        v76 = 4;
        if ( CurrentProcessWow64Process )
          v76 = 1;
        v77 = (LONG *)v82[1];
        ProbeForRead(v82[1], 4uLL, v76);
        Src.left = *v77;
        WindowMinimizeAnimation = DwmSyncGetCompositionAttribute(v11, a1, 12, &Src);
        v11 = 0LL;
        break;
      case 20:
      case 21:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 29:
      case 30:
        break;
      default:
        WindowMinimizeAnimation = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v11, v33, v35, v36);
  if ( WindowMinimizeAnimation < 0 )
  {
LABEL_100:
    v54 = RtlNtStatusToDosError(WindowMinimizeAnimation);
    UserSetLastError(v54);
    v37 = WindowMinimizeAnimation < 0;
    goto LABEL_53;
  }
  memmove(v82[1], &Src, Size);
  v37 = WindowMinimizeAnimation < 0;
LABEL_53:
  LOBYTE(v5) = !v37;
  return v5;
}
