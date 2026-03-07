__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, ULONG64 a2)
{
  __int64 v2; // rsi
  NTSTATUS WindowMinimizeAnimation; // r14d
  __int64 v4; // rbx
  ULONG v5; // r8d
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r13d
  void *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  const struct tagWND *v13; // r12
  LONG v14; // r13d
  _QWORD *v15; // rsi
  int v16; // edi
  int v17; // r12d
  __int64 Prop; // r11
  int v19; // eax
  _QWORD **v20; // r15
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  bool v24; // zf
  _QWORD *v25; // rax
  int v26; // r10d
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  int v30; // eax
  unsigned int v31; // edi
  struct tagTHREADINFO *v32; // rax
  int v33; // eax
  unsigned int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r8
  bool v37; // sf
  int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // r13d
  __int64 v44; // r12
  int v45; // edx
  __int64 v46; // rax
  unsigned __int32 v48; // edi
  struct tagTHREADINFO *v49; // rax
  int v50; // eax
  unsigned int v51; // edi
  int v52; // edi
  BOOL v53; // eax
  int v54; // edx
  bool v55; // al
  ULONG v56; // eax
  struct tagRECT *v57; // rax
  __int64 v58; // rcx
  const struct tagWND *v59; // r8
  __int64 CurrentProcessWow64Process; // rax
  ULONG v61; // r8d
  LONG *v62; // rdi
  struct tagRECT Src; // [rsp+30h] [rbp-348h] BYREF
  __int64 v65; // [rsp+40h] [rbp-338h]
  __int64 v66; // [rsp+60h] [rbp-318h]
  void *v67[2]; // [rsp+68h] [rbp-310h]
  SIZE_T v68; // [rsp+78h] [rbp-300h]
  void *v69; // [rsp+80h] [rbp-2F8h]
  size_t Size; // [rsp+88h] [rbp-2F0h]
  __int64 v71[3]; // [rsp+98h] [rbp-2E0h] BYREF
  volatile void *Address[2]; // [rsp+B0h] [rbp-2C8h]
  SIZE_T Length; // [rsp+C0h] [rbp-2B8h]
  __int128 v74; // [rsp+E0h] [rbp-298h]
  __int128 v75; // [rsp+F0h] [rbp-288h]
  __m256i v76[2]; // [rsp+100h] [rbp-278h] BYREF
  __m256i v77; // [rsp+140h] [rbp-238h] BYREF
  __m256i v78; // [rsp+160h] [rbp-218h]
  _WORD v79[32]; // [rsp+180h] [rbp-1F8h] BYREF
  _WORD v80[32]; // [rsp+1C0h] [rbp-1B8h] BYREF
  _WORD v81[32]; // [rsp+200h] [rbp-178h] BYREF
  _WORD v82[32]; // [rsp+240h] [rbp-138h] BYREF
  _DWORD v83[16]; // [rsp+280h] [rbp-F8h] BYREF
  _DWORD v84[16]; // [rsp+2C0h] [rbp-B8h] BYREF
  _BYTE v85[56]; // [rsp+300h] [rbp-78h] BYREF
  LONG v86; // [rsp+338h] [rbp-40h]

  v2 = a1;
  v71[0] = a1;
  WindowMinimizeAnimation = -1073741811;
  *(_OWORD *)v67 = 0LL;
  v68 = 0LL;
  v4 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v65 = 0LL;
  if ( a2 + 24 < a2 || a2 + 24 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v67 = *(_OWORD *)Address;
  v68 = Length;
  if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
    v5 = 1;
  else
    v5 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v5);
  v9 = (int)v67[0];
  if ( (unsigned int)(LODWORD(v67[0]) - 1) <= 0x1F )
  {
    v7 = 0x1C0000000uLL;
    Size = qword_1C03186D8[2 * SLODWORD(Address[0])];
    v2 = a1;
    if ( (unsigned int)Length < Size )
      WindowMinimizeAnimation = -1073741789;
    else
      WindowMinimizeAnimation = 0;
  }
  if ( WindowMinimizeAnimation < 0 )
    goto LABEL_100;
  v10 = 0LL;
  v69 = 0LL;
  EnterSharedCrit(v7, v6, v8);
  v11 = ValidateHwnd(v2);
  v13 = (const struct tagWND *)v11;
  v66 = v11;
  if ( !v11 )
    goto LABEL_99;
  if ( LODWORD(v67[0]) == 18 )
  {
    v14 = 0;
    memset(v76, 0, sizeof(v76));
    v15 = (_QWORD *)v11;
    v16 = 0;
    while ( 1 )
    {
      v17 = 0;
      Prop = 0LL;
      v19 = 0;
      v20 = (_QWORD **)(v15 + 13);
      v12 = v15[13];
      if ( v12 )
      {
        v21 = 0LL;
        v22 = v15[3];
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8);
          if ( v23 )
            v21 = *(_QWORD *)(v23 + 24);
        }
        v24 = v12 == v21;
        v12 = 1LL;
        if ( v24 )
          v19 = 1;
      }
      if ( v19 )
        goto LABEL_33;
      if ( (*(_BYTE *)(v15[5] + 26LL) & 8) == 0 )
        goto LABEL_35;
      v25 = v15;
      do
      {
        v26 = 0;
        v27 = v25[13];
        if ( v27 )
        {
          v28 = 0LL;
          v12 = v25[3];
          if ( v12 )
          {
            v29 = *(_QWORD *)(v12 + 8);
            if ( v29 )
              v28 = *(_QWORD *)(v29 + 24);
          }
          if ( v27 == v28 )
            v26 = 1;
        }
        if ( v26 )
          break;
        v25 = (_QWORD *)v25[13];
      }
      while ( v27 );
      if ( v25 )
LABEL_33:
        v30 = 1;
      else
LABEL_35:
        v30 = 0;
      if ( v30 )
      {
        v17 = 1;
        Prop = GetProp((__int64)v15, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1u);
      }
      if ( Prop )
      {
        v76[0] = *(__m256i *)Prop;
        v76[1] = *(__m256i *)(Prop + 32);
        v34 = v76[0].m256i_i32[0];
      }
      else
      {
        v31 = v16 & 0xFFFF0000;
        memset((char *)v76[0].m256i_i64 + 4, 0, 28);
        v74 = 0LL;
        v76[1].m256i_i64[0] = 0LL;
        v32 = (struct tagTHREADINFO *)v15[2];
        if ( !v32 )
          v32 = PtiCurrentShared();
        v33 = (*((_QWORD *)v32 + 81) & 0x200000LL) != 0 ? 0x40000 : 0;
        v34 = v33 | v31 & 0xFFF9FFFF;
        v76[1].m256i_i32[2] = g_defaultFrameStyle;
        *(__int64 *)((char *)&v76[1].m256i_i64[1] + 4) = 0LL;
        *(__int64 *)((char *)&v76[1].m256i_i64[2] + 4) = 0LL;
      }
      v16 = v34 & 0x7FFFF;
      v76[0].m256i_i32[0] = v16;
      if ( v17 )
      {
        v12 = 0LL;
        if ( (v16 & 0x400) != 0 || (v16 & 0x2000) != 0 )
          v12 = 1LL;
        v14 = v12 | 2;
        if ( (v16 & 0x800) == 0 )
          v14 = v12;
        if ( v14 )
          break;
      }
      v15 = *v20;
      if ( !*v20 )
        goto LABEL_46;
    }
    if ( v15 != (_QWORD *)v66 )
      v14 |= 4u;
LABEL_46:
    Src.left = v14;
    v10 = 0LL;
    v9 = (int)v67[0];
    goto LABEL_47;
  }
  if ( LODWORD(v67[0]) != 21 )
  {
    v39 = 0;
    v40 = *(_QWORD *)(v11 + 104);
    v41 = v11 + 24;
    if ( v40 )
    {
      v12 = 0LL;
      if ( *(_QWORD *)v41 )
      {
        v42 = *(_QWORD *)(*(_QWORD *)v41 + 8LL);
        if ( v42 )
          v12 = *(_QWORD *)(v42 + 24);
      }
      if ( v40 == v12 )
        v39 = 1;
    }
    if ( v39 || LODWORD(v67[0]) == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v13) )
    {
      switch ( LODWORD(v67[0]) )
      {
        case 1:
          memset_0(&v77, 0, 0x40uLL);
          v43 = 0;
          v44 = 0LL;
          v45 = 0;
          if ( v40 )
          {
            v12 = 0LL;
            if ( *(_QWORD *)v41 )
            {
              v46 = *(_QWORD *)(*(_QWORD *)v41 + 8LL);
              if ( v46 )
                v12 = *(_QWORD *)(v46 + 24);
            }
            if ( v40 == v12 )
              v45 = 1;
          }
          if ( v45 || (*(_BYTE *)(*(_QWORD *)(v66 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v66) )
          {
            v44 = GetProp(v66, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1u);
            v43 = 1;
          }
          if ( v44 )
          {
            v77 = *(__m256i *)v44;
            v78 = *(__m256i *)(v44 + 32);
            v51 = v77.m256i_i32[0];
          }
          else
          {
            v48 = v77.m256i_i32[0] & 0xFFFF0000;
            v75 = 0LL;
            *(_OWORD *)&v77.m256i_u64[1] = 0LL;
            v78.m256i_i64[0] = 0LL;
            v49 = *(struct tagTHREADINFO **)(v66 + 16);
            if ( !v49 )
              v49 = PtiCurrentShared();
            if ( (*((_QWORD *)v49 + 81) & 0x200000LL) != 0 )
              v50 = 0x40000;
            else
              v50 = 0;
            v51 = v50 | v48 & 0xFFF9FFFF;
            v78.m256i_i32[2] = g_defaultFrameStyle;
            *(__int64 *)((char *)&v78.m256i_i64[1] + 4) = 0LL;
            *(__int64 *)((char *)&v78.m256i_i64[2] + 4) = 0LL;
          }
          v52 = v51 & 0x7FFFF;
          v77.m256i_i32[0] = v52;
          if ( v43 )
          {
            v53 = 0;
            v12 = *(_QWORD *)(v66 + 40);
            v54 = *(_DWORD *)(v12 + 24);
            if ( (v54 & 0x80000) != 0 )
              v53 = (v54 & 0x20000000) == 0;
            if ( !v53 && (v52 & 1) == 0 )
            {
              if ( v77.m256i_i32[1] )
              {
                if ( v77.m256i_i32[1] == 2 )
                  LODWORD(v10) = 1;
              }
              else
              {
                v12 = *(unsigned __int8 *)(v12 + 30);
                v55 = (v12 & 0xC0) != 0xC0;
                LOBYTE(v12) = ~((unsigned __int8)v12 >> 2);
                if ( ((unsigned __int8)v12 & v55 & 1) == 0 )
                  LODWORD(v10) = 1;
              }
            }
          }
          Src.left = (int)v10;
          v10 = 0LL;
          v9 = (int)v67[0];
          break;
        case 0x14:
          memset_0(v79, 0, sizeof(v79));
          if ( (unsigned int)_GetWindowCompositionInfo(v13, (struct WINDOWCOMPOSITIONINFO *)v79)
            && (v79[0] & 0x1000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x17:
          memset_0(v80, 0, sizeof(v80));
          if ( (unsigned int)_GetWindowCompositionInfo(v13, (struct WINDOWCOMPOSITIONINFO *)v80)
            && (v80[0] & 0x2000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x18:
          memset_0(v81, 0, sizeof(v81));
          if ( (unsigned int)_GetWindowCompositionInfo(v13, (struct WINDOWCOMPOSITIONINFO *)v81)
            && (v81[0] & 0x4000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x19:
          memset_0(v82, 0, sizeof(v82));
          if ( (unsigned int)_GetWindowCompositionInfo(v13, (struct WINDOWCOMPOSITIONINFO *)v82)
            && (v82[0] & 0x8000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x1A:
          memset_0(v83, 0, sizeof(v83));
          if ( (unsigned int)_GetWindowCompositionInfo(v13, (struct WINDOWCOMPOSITIONINFO *)v83)
            && (v83[0] & 0x10000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x1B:
          WindowMinimizeAnimation = GetWindowMinimizeAnimation(v13, (enum CORNER_STYLE *)&Src);
          break;
        case 0x1D:
          memset_0(v84, 0, sizeof(v84));
          if ( (unsigned int)_GetWindowCompositionInfo(v13, (struct WINDOWCOMPOSITIONINFO *)v84)
            && (v84[0] & 0x20000) != 0 )
          {
            Src.left = 1;
          }
          break;
        case 0x1E:
          memset_0(v85, 0, 0x40uLL);
          if ( (unsigned int)_GetWindowCompositionInfo(v13, (struct WINDOWCOMPOSITIONINFO *)v85) )
            Src.left = v86;
          break;
        default:
          if ( (unsigned int)(LODWORD(v67[0]) - 31) <= 1 )
          {
            WindowMinimizeAnimation = -1073741811;
            goto LABEL_49;
          }
          if ( !(unsigned int)IsWindowDesktopComposed(v13) )
            WindowMinimizeAnimation = -1073741816;
          break;
      }
      goto LABEL_47;
    }
LABEL_99:
    WindowMinimizeAnimation = -1073741816;
    goto LABEL_49;
  }
  Src.left = (*(_DWORD *)(v11 + 320) >> 11) & 1;
LABEL_47:
  if ( WindowMinimizeAnimation >= 0 )
  {
    v10 = (void *)ReferenceDwmApiPort(v12);
    v69 = v10;
  }
LABEL_49:
  UserSessionSwitchLeaveCrit(v12);
  if ( WindowMinimizeAnimation >= 0 && v9 != 18 && v9 != 1 )
  {
    switch ( v9 )
    {
      case 5:
        WindowMinimizeAnimation = DwmSyncGetCompositionAttribute(v10, a1, 5, &Src);
        v10 = 0LL;
        break;
      case 8:
        EnterSharedCrit(v35, 0x1C0000000uLL, v36);
        v57 = (struct tagRECT *)ValidateHwnd(a1);
        if ( v57 )
        {
          Src = *WindowMargins::GetPhysicalFrameBounds((WindowMargins *)v71, v57, v59);
          WindowMinimizeAnimation = 0;
        }
        else
        {
          WindowMinimizeAnimation = -1073741816;
        }
        UserSessionSwitchLeaveCrit(v58);
        break;
      case 12:
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v35);
        v61 = 4;
        if ( CurrentProcessWow64Process )
          v61 = 1;
        v62 = (LONG *)v67[1];
        ProbeForRead(v67[1], 4uLL, v61);
        Src.left = *v62;
        WindowMinimizeAnimation = DwmSyncGetCompositionAttribute(v10, a1, 12, &Src);
        v10 = 0LL;
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
  DereferenceDwmApiPort(v10);
  if ( WindowMinimizeAnimation < 0 )
  {
LABEL_100:
    v56 = RtlNtStatusToDosError(WindowMinimizeAnimation);
    UserSetLastError(v56);
    v37 = WindowMinimizeAnimation < 0;
    goto LABEL_53;
  }
  memmove(v67[1], &Src, Size);
  v37 = WindowMinimizeAnimation < 0;
LABEL_53:
  LOBYTE(v4) = !v37;
  return v4;
}
