unsigned __int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, HWND a3, unsigned __int64 a4)
{
  struct _DEVICE_OBJECT *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  _DWORD *v13; // rax
  _WORD *v14; // rcx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // esi
  int v18; // r14d
  _DWORD *v19; // rax
  int v20; // r8d
  int v21; // ecx
  int v22; // r9d
  int v23; // r15d
  int v24; // r10d
  int v25; // edx
  int v26; // esi
  int v27; // r13d
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rcx
  void *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // ebx
  int v35; // esi
  int v36; // r14d
  _DWORD *v37; // rax
  int v38; // edx
  int v39; // r8d
  int v40; // r12d
  int v41; // r9d
  int v42; // eax
  int v43; // r13d
  int v44; // esi
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // rcx
  void *v48; // rax
  HDC DCEx; // rax
  HDC v50; // rbx
  __int16 v51; // r8
  __int64 v52; // rax
  int v53; // ebx
  int v54; // r15d
  _DWORD *v55; // rax
  int v56; // edx
  int v57; // r8d
  int v58; // r12d
  int v59; // r9d
  ULONG v60; // ecx
  int v61; // r13d
  int v62; // r15d
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rcx
  void *v66; // rax
  HDC v67; // rbx
  unsigned __int64 v68; // rbx
  int v69; // eax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v71; // r8d
  int v72; // eax
  int v73; // eax
  int v74; // ebx
  struct _LARGE_UNICODE_STRING *v75; // rax
  _WORD *v76; // rcx
  ULONG v77; // ecx
  ULONG v78; // ebx
  __int64 v79; // rbx
  int v80; // eax
  int v81; // ebx
  int v82; // eax
  unsigned int v83; // ebx
  unsigned __int64 v84; // r8
  __int64 v85; // r9
  int NCHit; // r9d
  __int64 v87; // rdx
  HWND v88; // r8
  unsigned int v89; // edx
  int v90; // r9d
  int ContextHelpId; // eax
  struct tagWND *v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  struct tagWND *v101; // rsi
  unsigned int v102; // edx
  struct tagWND *v103; // rcx
  __int64 ProcessWindowStation; // rax
  struct tagBWL *v105; // rax
  struct tagBWL *v106; // r14
  _QWORD *v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rax
  struct tagWND *v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rcx
  __int128 v115; // kr00_16
  int v116; // r9d
  int v117; // edx
  int v118; // edx
  int v119; // r9d
  __int64 v120; // rax
  unsigned __int64 v121; // rcx
  int v122; // edx
  __int64 DesktopWindow; // rax
  int v124; // edx
  int v125; // r8d
  __int64 v126; // r9
  __int64 v127; // rax
  int v128; // eax
  __int64 v129; // rbx
  struct tagWND *v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r14
  __int64 v135; // rdx
  char v136; // cl
  char v137; // cl
  struct tagWND **v138; // rsi
  int v139; // esi
  __int64 v140; // rbx
  __int64 Icon; // rbx
  HICON v142; // rbx
  __int64 v143; // rbx
  char v144; // bl
  struct tagWND *Host; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  unsigned int v148; // edx
  struct tagWND *v149; // rsi
  __int64 v150; // r14
  __int64 v151; // r13
  int v152; // ebx
  void *const *WindowMessageFilter; // rax
  unsigned __int8 v154; // al
  int v155; // ebx
  unsigned __int64 v156; // r12
  __int64 v157; // rax
  int v158; // ecx
  int v159; // ecx
  struct tagWND *NonChildAncestor; // r12
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // rcx
  __int64 *v165; // r8
  int v166; // r9d
  const struct tagWND *v167; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 TopLevelWindow; // rbx
  __int64 v170; // r8
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  unsigned int v174; // edx
  int v175; // eax
  __int64 v176; // rbx
  __int64 v177; // rdi
  __int64 v178; // rbx
  __int64 v179; // rbx
  __int16 v180; // r13
  unsigned __int64 v181; // r14
  int v182; // esi
  int v183; // ebx
  int v184; // eax
  int v185; // eax
  __int64 ThreadWin32Thread; // rax
  int v187; // eax
  int v188; // eax
  __int64 v189; // rax
  int v190; // eax
  __int64 v191; // rbx
  unsigned int v192; // ebx
  __int64 updated; // rbx
  __int64 v194; // rcx
  unsigned __int16 v195; // dx
  struct tagWND *v196; // rcx
  unsigned int v197; // ebx
  __int64 v198; // rbx
  __int64 SysMenu; // rax
  __int64 v200; // rcx
  __int64 v201; // rcx
  unsigned int v202; // ebx
  unsigned int v203; // ebx
  unsigned int v204; // ebx
  unsigned int v205; // ebx
  __int64 v206; // rax
  __int64 v207; // rcx
  __int64 TitleBarInfo; // rbx
  __int64 UserApiHook; // rbx
  __int64 v210; // rbx
  BOOL v211; // r8d
  int v212; // edx
  unsigned int v213; // ecx
  int v214; // ebx
  BOOL v215; // eax
  bool v216; // zf
  int v217; // eax
  __int64 v218; // rcx
  __int64 v219; // rcx
  ULONG *v220; // rdi
  __int64 v221; // rbx
  _QWORD v222[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v223; // [rsp+60h] [rbp-D8h]
  int v224; // [rsp+68h] [rbp-D0h]
  __int128 v225; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v226; // [rsp+80h] [rbp-B8h]
  __int128 v227; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v228; // [rsp+98h] [rbp-A0h]
  ULONG BytesInMultiByteString[6]; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v230; // [rsp+C0h] [rbp-78h] BYREF
  _OWORD v231[2]; // [rsp+D0h] [rbp-68h] BYREF

  *(_QWORD *)BytesInMultiByteString = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v222);
  v225 = 0LL;
  v226 = 0LL;
  v227 = 0LL;
  v228 = 0LL;
  if ( a1 == (struct tagWND *)-1LL || a2 > 0x400 )
    goto LABEL_215;
  if ( a2 > 0x100 )
  {
    if ( a2 <= 0x205 )
    {
      if ( a2 != 517 )
      {
        switch ( a2 )
        {
          case 0x101u:
          case 0x105u:
            if ( a3 == (HWND)18
              && (v159 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL), (v159 & 0x80u) == 0)
              && (v159 & 0xC) == 8
              || a3 == (HWND)121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x10) != 0 )
            {
              NonChildAncestor = (struct tagWND *)GetNonChildAncestor((__int64)a1);
              *(_QWORD *)&v227 = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = &v227;
              *((_QWORD *)&v227 + 1) = NonChildAncestor;
              if ( NonChildAncestor )
                HMLockObject(NonChildAncestor);
              if ( a3 == (HWND)121 )
                xxxDrawMenuBarUnderlines(a1, 1LL);
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(NonChildAncestor, 0x112u, 0xF100uLL, 0LL, 0, 0, 0LL, 1, 0);
              ThreadUnlock1(v162, v161, v163);
            }
            if ( a3 == (HWND)18 )
            {
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x80u;
              xxxDrawMenuBarUnderlines(a1, 0LL);
            }
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= 0xFFFFFFE3;
            goto LABEL_215;
          case 0x104u:
            v156 = a4 >> 16;
            if ( (v156 & 0x2000) != 0 )
            {
              if ( (v156 & 0x4000) == 0 )
              {
                v157 = *(_QWORD *)(gptiCurrent + 432LL);
                if ( a3 != (HWND)18 || (v158 = *(_DWORD *)(v157 + 396), (v158 & 8) != 0) )
                {
                  *(_DWORD *)(v157 + 396) &= 0xFFFFFFF3;
                }
                else
                {
                  *(_DWORD *)(v157 + 396) = v158 | 8;
                  xxxDrawMenuBarUnderlines(a1, 1LL);
                }
              }
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x10u;
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) && (_DWORD)a3 == 115 )
                xxxCloseApplication(gptiCurrent);
              goto LABEL_215;
            }
            if ( a3 != (HWND)121 )
              goto LABEL_215;
            v147 = *(_QWORD *)(gptiCurrent + 432LL);
            goto LABEL_262;
          case 0x106u:
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= 0xFFFFFFF3;
            if ( a3 == (HWND)13 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
            {
              PostMessage(a1, 274LL, 61728LL, 0LL);
              goto LABEL_215;
            }
            if ( (a4 & 0x20000000) != 0 && a3 )
            {
              if ( a3 == (HWND)9 || a3 == (HWND)27 )
                goto LABEL_215;
              if ( a3 == (HWND)32 )
              {
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                {
                  v164 = *((_QWORD *)a1 + 13);
                  *(_QWORD *)&v225 = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = &v225;
                  *((_QWORD *)&v225 + 1) = v164;
                  HMLockObject(v164);
                  v102 = a2;
                  v103 = (struct tagWND *)*((_QWORD *)a1 + 13);
LABEL_156:
                  xxxSendMessage(v103, v102);
                  goto LABEL_157;
                }
                v165 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
                if ( v165 )
                {
                  v166 = 0;
                  if ( *(_DWORD *)(v165[5] + 236) == 8
                    || *(_DWORD *)(v165[5] + 236) == 9
                    || *(_DWORD *)(v165[5] + 236) == 10
                    || *(_DWORD *)(v165[5] + 236) == 11
                    || *(_DWORD *)(v165[5] + 236) == 13 )
                  {
                    v166 = 1;
                  }
                  if ( v166 )
                  {
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x21u, *v165);
                    goto LABEL_215;
                  }
                }
              }
              if ( a3 != (HWND)32
                || (v167 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL)) == 0LL
                || !(unsigned int)IsCompositionInputWindow(v167) )
              {
                _InterlockedIncrement(&glSendMessage);
                v85 = (unsigned int)a3;
                v174 = 274;
                v84 = 61696LL;
                goto LABEL_361;
              }
              CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL));
              if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                     + 128LL)) )
                CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL));
              if ( CompositionInputWindowUIOwner )
              {
                TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                if ( TopLevelWindow )
                {
                  memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
                  ThreadLockAlways(TopLevelWindow, BytesInMultiByteString);
                  xxxForceForegroundWindowNoRestoreFocus(TopLevelWindow, 0LL, v170);
                  if ( ThreadUnlock1(v172, v171, v173) )
                    PostMessage(TopLevelWindow, 274LL, 61696LL, 32LL);
                }
              }
            }
            else if ( a3 != (HWND)27 )
            {
              xxxMessageBeep(0LL);
            }
            goto LABEL_215;
          case 0x109u:
            if ( a3 != (HWND)0xFFFF )
              PostMessage(a1, 258LL, a3, a4);
            goto LABEL_215;
          case 0x112u:
            xxxSysCommand(a1);
            goto LABEL_215;
          case 0x119u:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              goto LABEL_215;
            v149 = (struct tagWND *)*((_QWORD *)a1 + 13);
            v150 = *(_QWORD *)(*((_QWORD *)v149 + 2) + 424LL);
            v151 = *(_QWORD *)(gptiCurrent + 424LL);
            if ( v150 != v151 )
            {
              v152 = IsMessageAllowedByFilterEx(*(void *const **)(v150 + 840), 0x119u, 0LL, 0LL);
              if ( !v152 && v149 )
              {
                WindowMessageFilter = GetWindowMessageFilter(v149);
                v152 = IsMessageAllowedByFilterEx(WindowMessageFilter, 0x119u, 0LL, 0LL);
              }
              if ( !v152 && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(0x119u) )
              {
                if ( *(_QWORD *)v150 == gpepCSRSS )
                {
                  *(_QWORD *)BytesInMultiByteString = 0x2000LL;
                }
                else
                {
                  BytesInMultiByteString[0] = *(_DWORD *)(v150 + 864);
                  BytesInMultiByteString[1] = *(_DWORD *)(v150 + 868);
                }
                v154 = CheckAccess(v151 + 864, BytesInMultiByteString);
                v155 = v154;
                if ( !v154 )
                {
                  EtwTraceUIPIMsgError(v151, v150, 281LL, a3, a4);
                  UserSetLastError(v155 + 5);
                  if ( !v155 )
                    goto LABEL_215;
                }
              }
            }
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v225);
            v148 = 281;
            goto LABEL_413;
          case 0x11Au:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              goto LABEL_215;
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v225);
            v148 = 282;
            goto LABEL_413;
          case 0x127u:
            v180 = (__int16)a3;
            v181 = (unsigned __int64)a3 >> 16;
            v182 = 0;
            v183 = 0;
            if ( (WORD1(a3) & 0xFFF8) != 0 || (unsigned __int16)a3 > 3u || a4 )
              goto LABEL_215;
            v184 = *gpsi;
            if ( (_WORD)a3 == 3 )
            {
              LOWORD(v181) = 0;
              if ( (v184 & 0x80u) == 0 )
              {
                v185 = *(_DWORD *)(gpsi + 7004LL);
                if ( (v185 & 0x20) == 0 && v185 < 0 )
                {
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u )
                    v187 = *(_DWORD *)(ThreadWin32Thread + 648);
                  else
                    LOBYTE(v187) = 0;
                  if ( (v187 & 2) == 0 )
                  {
                    v180 = ((*gpsi & 0x40) != 0) + 1;
                    LOWORD(v181) = 3;
                  }
                }
              }
            }
            else if ( (v184 & 0x80u) != 0
                   || (v188 = *(_DWORD *)(gpsi + 7004LL), (v188 & 0x20) != 0)
                   || v188 >= 0
                   || ((v189 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()), *(_DWORD *)(v189 + 632) <= 0x400u)
                     ? (v190 = *(_DWORD *)(v189 + 648))
                     : (LOBYTE(v190) = 0),
                       (v190 & 2) != 0) )
            {
              LOWORD(v181) = WORD1(a3) & 0xFFFC;
            }
            if ( !(_WORD)v181 )
              goto LABEL_215;
            if ( (v181 & 1) != 0 )
              v183 = (v180 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
            if ( (v181 & 2) != 0 )
              v183 |= (v180 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
            if ( (v181 & 4) != 0 )
            {
              LOBYTE(v182) = v180 == 1;
              v183 |= v182 ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
            }
            if ( !v183 )
              goto LABEL_215;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
            {
              ThreadLockAlways(*((_QWORD *)a1 + 13), &v225);
              v148 = 295;
              goto LABEL_413;
            }
            v191 = xxxSendMessage(a1, 0x128u);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            result = v191;
            break;
          case 0x128u:
            updated = xxxDWP_UpdateUIState((__int64 *)a1, (unsigned __int64)a3, a4);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            return updated;
          case 0x129u:
            v192 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            return v192 & 4 | ((v192 & 0x40 | ((unsigned __int64)v192 >> 2)) >> 5);
          case 0x132u:
          case 0x136u:
          case 0x138u:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
              goto LABEL_320;
            v177 = 4816LL;
            goto LABEL_321;
          case 0x133u:
          case 0x134u:
            goto LABEL_320;
          case 0x135u:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
            {
              v176 = 4640LL;
              v177 = 4816LL;
            }
            else
            {
LABEL_320:
              v177 = 4736LL;
LABEL_321:
              v176 = 4600LL;
            }
            goto LABEL_322;
          case 0x137u:
            if ( *(_WORD *)(gpsi + 6996LL) < 8u
              || (v175 = *(_DWORD *)(gpsi + 4648LL), v175 != *(_DWORD *)(gpsi + 4568LL))
              || v175 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3);
              GreSetTextColor(a3, *(unsigned int *)(gpsi + 4628LL));
              v178 = *(_QWORD *)(gpsi + 4944LL);
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
              return v178;
            }
            else
            {
              v176 = 4640LL;
              v177 = 4856LL;
LABEL_322:
              GreSetBkColor((HDC)a3);
              GreSetTextColor(a3, *(unsigned int *)(v176 + gpsi));
              v179 = *(_QWORD *)(v177 + gpsi);
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
              return v179;
            }
          default:
            goto LABEL_215;
        }
        return result;
      }
      v194 = *((_QWORD *)a1 + 5);
      v195 = *(_WORD *)(v194 + 108) + WORD1(a4);
      if ( (*(_BYTE *)(v194 + 26) & 0x40) != 0 )
        v85 = ((unsigned __int64)v195 << 16) | (unsigned __int16)(*(_WORD *)(v194 + 112) - a4);
      else
        v85 = (v195 << 16) | (unsigned __int16)(*(_WORD *)(v194 + 104) + a4);
      goto LABEL_359;
    }
    if ( a2 > 0x313 )
    {
      v202 = a2 - 791;
      if ( !v202 )
      {
        v221 = (int)xxxDWPPrint(a1, (HDC)a3, a4);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
        return v221;
      }
      v203 = v202 - 2;
      if ( v203 )
      {
        v204 = v203 - 2;
        if ( v204 )
        {
          v205 = v204 - 36;
          if ( !v205 )
          {
            TitleBarInfo = (int)xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            return TitleBarInfo;
          }
          if ( v205 == 10 )
          {
            if ( a3 )
            {
              v206 = *((_QWORD *)a1 + 13);
              if ( v206 )
              {
                v207 = *(_QWORD *)(v206 + 16);
                if ( v207 )
                {
                  if ( *(struct tagWND **)(v207 + 1440) == a1 )
                    xxxSetFocus(a1, v8, v9);
                }
              }
            }
          }
        }
        else if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
        {
          UserApiHook = (int)xxxLoadUserApiHook();
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
          return UserApiHook;
        }
      }
      else
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v225);
          v148 = 793;
LABEL_413:
          v93 = xxxSendMessage(*((struct tagWND **)a1 + 13), v148);
LABEL_414:
          v210 = v93;
          ThreadUnlock1(v95, v94, v96);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
          return v210;
        }
        if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        {
          v211 = 0;
          v212 = *(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL);
          if ( (v212 & 0x800) != 0 )
            v211 = xxxCallHook(12, (unsigned __int64)a3, a4, 10) != 0;
          if ( !v211 )
          {
            v213 = *(_DWORD *)(gptiCurrent + 1272LL);
            v214 = (v213 >> 11) & 1;
            *(_QWORD *)BytesInMultiByteString = *(_QWORD *)(gptiCurrent + 1288LL);
            v215 = (v213 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1432LL) == a1;
            if ( v215 || (v216 = (unsigned int)CoreWindowProp::IsComponent(a1) == 0, v217 = 0, !v216) )
              v217 = 1;
            if ( v217 )
            {
              v218 = *(_QWORD *)(gptiCurrent + 512LL);
              if ( v218 )
              {
                v219 = *(_QWORD *)(v218 + 32);
                if ( v219 )
                {
                  if ( (*(_DWORD *)(v219 + 1272) & 0x800) != 0 )
                  {
                    v214 = 1;
                    *(_QWORD *)BytesInMultiByteString = *(_QWORD *)(v219 + 1288);
                  }
                }
              }
            }
            v220 = BytesInMultiByteString;
            if ( !v214 )
              v220 = 0LL;
            LOBYTE(v212) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v212 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v211) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v212,
                v211,
                14,
                4,
                2,
                14,
                (__int64)&WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids);
            }
            CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
            _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), 12LL, a4, (struct tagINPUT_MESSAGE_SOURCE *)v220);
          }
        }
      }
    }
    else
    {
      if ( a2 != 787 )
      {
        switch ( a2 )
        {
          case 0x20Au:
          case 0x20Eu:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              goto LABEL_215;
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v225);
            v88 = a3;
            v89 = a2;
LABEL_375:
            v196 = (struct tagWND *)*((_QWORD *)a1 + 13);
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v196, v89, (unsigned __int64)v88, (__int128 *)a4, 0, 0, 0LL, 1, 1);
            goto LABEL_157;
          case 0x20Cu:
LABEL_368:
            if ( WORD1(a3) == 1 || WORD1(a3) == 2 )
            {
              if ( a2 != 524 )
                GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 432LL));
              xxxSendMessage(a1, 0x319u);
            }
            goto LABEL_215;
          case 0x218u:
          case 0x219u:
            goto LABEL_26;
          case 0x22Au:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            return 1162627398LL;
          case 0x22Bu:
            v197 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            return (v197 >> 4) & 1;
          case 0x240u:
            if ( *(_QWORD *)(gptiCurrent + 1112LL) == a4 )
              *(_QWORD *)(gptiCurrent + 1112LL) = 0LL;
            FreeTouchInputInfo(a4, 1LL);
            goto LABEL_215;
          case 0x241u:
          case 0x242u:
          case 0x243u:
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x24Eu:
          case 0x24Fu:
            v198 = xxxDefPointerProc(0x1C0000000uLL, a2, a3, 0LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            return v198;
          default:
            goto LABEL_215;
        }
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) == 0
        && (*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground
         || xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 0)) )
      {
        v230 = 0LL;
        *(_QWORD *)&v231[0] = 0LL;
LABEL_383:
        v83 = 61728;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 )
          v83 = 61488;
LABEL_385:
        SysMenu = xxxGetSysMenu(a1, 1LL);
        v223 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v222, SysMenu);
        if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v222) )
        {
          if ( gihmodUserApiHook >= 0 )
            MNClearCachedPopupSizes();
          v200 = v223;
          if ( !v223 )
            v200 = *(_QWORD *)v222[0];
          SetMenuDefaultItem(v200, v83, 0LL);
          PostShellHookMessagesEx(9uLL, *(_QWORD *)a1, 0LL);
          v201 = v223;
          if ( !v223 )
            v201 = *(_QWORD *)v222[0];
          ThreadLockAlways(v201, &v230);
          if ( a4 == 0xFFFFFFFF )
          {
            v99 = gpsi;
            if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              *(_OWORD *)&BytesInMultiByteString[1] = 0LL;
              BytesInMultiByteString[0] = 20;
              if ( (unsigned int)xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&BytesInMultiByteString[1]) )
                xxxTrackPopupMenuEx(
                  v222,
                  576LL,
                  BytesInMultiByteString[1],
                  BytesInMultiByteString[2],
                  a1,
                  BytesInMultiByteString);
            }
          }
          else
          {
            xxxTrackPopupMenuEx(v222, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
          }
LABEL_157:
          ThreadUnlock1(v99, v98, v100);
        }
      }
    }
LABEL_215:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
    return 0LL;
  }
  if ( a2 == 256 )
  {
    if ( a3 == (HWND)27 )
    {
      if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      {
        Host = CoreWindowProp::GetHost(a1);
        if ( Host )
        {
          v146 = GetTopLevelWindow((__int64)Host);
          if ( v146 )
            PostMessage(v146, 256LL, 27LL, a4);
        }
      }
      goto LABEL_215;
    }
    if ( a3 != (HWND)121 )
      goto LABEL_215;
    v147 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_262:
    *(_DWORD *)(v147 + 396) |= 0x10u;
    if ( (_GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
      goto LABEL_215;
    v85 = -1LL;
LABEL_359:
    v84 = *(_QWORD *)a1;
    _InterlockedIncrement(&glSendMessage);
LABEL_360:
    v174 = 123;
LABEL_361:
    xxxSendTransformableMessageTimeout(a1, v174, v84, (__int128 *)v85, 0, 0, 0LL, 1, 0);
    goto LABEL_215;
  }
  switch ( a2 )
  {
    case 6u:
      if ( a3 )
        xxxSetFocus(a1, v8, v9);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) >= 0 )
        goto LABEL_215;
      v97 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1440LL);
      if ( !v97 )
        goto LABEL_215;
      memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
      ThreadLock(v97, BytesInMultiByteString);
      xxxSendNotifyMessage(v97, 841LL, a3, 0LL, 0);
      goto LABEL_157;
    case 0xBu:
      xxxDWP_SetRedraw(a1, a3 != 0LL);
      goto LABEL_215;
    case 0xCu:
      v69 = DefSetText((unsigned __int64)a1, (unsigned int *)a4);
      v10 = v69;
      if ( v69 )
      {
        xxxRedrawTitle(a1, 8LL);
        xxxWindowEvent(0x800Cu, a1, 0, 0, 0);
      }
      goto LABEL_7;
    case 0xDu:
      if ( !a3 )
        goto LABEL_215;
      if ( *((_QWORD *)a1 + 23) )
      {
        *(_OWORD *)BytesInMultiByteString = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)BytesInMultiByteString);
        DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), StrName);
      }
      v71 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
      v72 = *(_DWORD *)(a4 + 4);
      if ( !v71 )
      {
        v76 = *(_WORD **)(a4 + 8);
        if ( v72 >= 0 )
          *v76 = 0;
        else
          *(_BYTE *)v76 = 0;
        goto LABEL_215;
      }
      if ( v72 >= 0 )
      {
        *(_OWORD *)BytesInMultiByteString = 0LL;
        v75 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (struct tagWND *)((char *)a1 + 184),
                (struct _LARGE_UNICODE_STRING *)BytesInMultiByteString);
        v74 = TextCopy(v75, *(_QWORD *)(a4 + 8), (unsigned int)a3);
        v73 = 2 * v74;
      }
      else
      {
        v73 = WCSToMBEx(0LL, *((_QWORD *)a1 + 23), v71 >> 1, a4 + 8, (v72 & 0x7FFFFFFFu) - 1);
        v74 = v73;
        *(_BYTE *)(v73 + *(_QWORD *)(a4 + 8)) = 0;
      }
      *(_DWORD *)a4 = v73;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v74;
    case 0xEu:
      v77 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
      if ( !v77 )
        goto LABEL_215;
      BytesInMultiByteString[0] = 0;
      if ( a4 )
      {
        RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 23), v77);
        v78 = BytesInMultiByteString[0];
      }
      else
      {
        BytesInMultiByteString[0] = v77 >> 1;
        v78 = v77 >> 1;
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v78;
    case 0xFu:
    case 0x26u:
      xxxDWP_Paint(a1);
      goto LABEL_215;
    case 0x10u:
      xxxDestroyWindow((__int64 *)a1);
      goto LABEL_215;
    case 0x11u:
    case 0x13u:
      goto LABEL_26;
    case 0x14u:
    case 0x27u:
      v79 = (int)xxxDWP_EraseBkgnd((__int64)a1, a2, (__int64)a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v79;
    case 0x18u:
      if ( !(_WORD)a4 )
        goto LABEL_215;
      v135 = *((_QWORD *)a1 + 5);
      v136 = *(_BYTE *)(v135 + 31);
      if ( (((v136 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
        goto LABEL_215;
      v137 = v136 & 0x10;
      if ( a3 )
      {
        if ( v137 || (*(_BYTE *)(v135 + 17) & 0x40) == 0 )
          goto LABEL_215;
      }
      else if ( !v137 )
      {
        goto LABEL_215;
      }
      SetOrClrWF(0, (__int64 *)a1, 0x140u, 1);
      if ( !a3 )
        SetOrClrWF(1, (__int64 *)a1, 0x140u, 1);
      xxxShowWindowEx((__int64)a1, a3 != 0LL ? 4 : 0, gdwPUDFlags & 0x10000);
      goto LABEL_215;
    case 0x19u:
      goto LABEL_320;
    case 0x1Fu:
      xxxDWP_DoCancelMode(a1);
      goto LABEL_215;
    case 0x20u:
      v129 = (int)xxxDWP_SetCursor(a1, a3, (__int16)a4, WORD1(a4));
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v129;
    case 0x21u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      {
        v130 = (struct tagWND *)*((_QWORD *)a1 + 13);
        if ( v130 )
        {
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v227);
          v10 = xxxSendMessage(v130, 0x21u);
          ThreadUnlock1(v132, v131, v133);
          if ( v10 )
            goto LABEL_7;
        }
      }
      if ( (_WORD)a4 != 2 || (v134 = 3LL, WORD1(a4) != 513) )
        v134 = 1LL;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v134;
    case 0x2Bu:
      DWP_DrawItem((struct tagDRAWITEMSTRUCT *)a4);
      goto LABEL_215;
    case 0x2Eu:
    case 0x2Fu:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return -1LL;
    case 0x32u:
      v140 = (int)DWP_SetHotKey(a1, (unsigned int)a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v140;
    case 0x33u:
      v138 = *HotKeyHelper(a1);
      if ( !v138 )
        goto LABEL_215;
      v139 = *((_DWORD *)v138 + 2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v139;
    case 0x35u:
      v68 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return (unsigned int)v68;
    case 0x3Bu:
      v10 = (int)xxxClientShutdown(a1, a3);
LABEL_7:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v10;
    case 0x46u:
      if ( (*(_DWORD *)(a4 + 32) & 1) == 0 )
      {
        v230 = 0LL;
        memset(v231, 0, 24);
        v114 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v114 + 31) & 0xC0) == 0 || (*(_BYTE *)(v114 + 30) & 4) != 0 )
        {
          xxxInitSendValidateMinMaxInfoEx(a1, (__int64)&v230, 0LL);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
            v115 = v230;
          else
            v115 = *(_OWORD *)((char *)v231 + 8);
          v116 = *(_DWORD *)(a4 + 24);
          v117 = v116;
          if ( v116 >= SDWORD2(v115) )
            v117 = DWORD2(v115);
          if ( (int)v115 <= v117 )
          {
            v118 = DWORD2(v115);
            if ( v116 < SDWORD2(v115) )
              v118 = *(_DWORD *)(a4 + 24);
          }
          else
          {
            v118 = v115;
          }
          *(_DWORD *)(a4 + 24) = v118;
          v119 = *(_DWORD *)(a4 + 28);
          v120 = HIDWORD(*((_QWORD *)&v115 + 1));
          v121 = DWORD1(v115);
          v122 = v119;
          if ( v119 >= SHIDWORD(v115) )
            v122 = HIDWORD(v115);
          if ( SDWORD1(v115) <= v122 )
          {
            if ( v119 < SHIDWORD(v115) )
              LODWORD(v120) = *(_DWORD *)(a4 + 28);
            LODWORD(v121) = v120;
          }
          *(_DWORD *)(a4 + 28) = v121;
          ConstrainWindowSize(a4 + 24, a4 + 28, HIDWORD(*((_QWORD *)&v115 + 1)));
        }
      }
      goto LABEL_215;
    case 0x47u:
      if ( (*(_DWORD *)(a4 + 32) & 0x1000) == 0 )
      {
        DesktopWindow = GetDesktopWindow((__int64)a1);
        if ( v126 != DesktopWindow )
        {
          v127 = *(_QWORD *)(v126 + 40);
          v124 -= *(_DWORD *)(v127 + 108);
          v125 -= *(_DWORD *)(v127 + 104);
        }
        xxxSendTransformableMessage((_DWORD)a1, 3, 0, (v124 << 16) ^ (unsigned __int16)v125, 0);
      }
      v128 = *(_DWORD *)(a4 + 32);
      if ( (v128 & 0x8000) != 0 || (v128 & 0x800) == 0 )
        xxxSendSizeMessage(a1);
      goto LABEL_215;
    case 0x49u:
      v143 = SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v143;
    case 0x4Du:
      ContextHelpId = GetContextHelpId(a1);
      xxxSendHelpMessage(a1, ContextHelpId);
      goto LABEL_215;
    case 0x4Fu:
      if ( !ValidateHwnd(a3) )
        goto LABEL_215;
      goto LABEL_26;
    case 0x50u:
      v101 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      if ( v101 && v101 != a1 && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 904LL) )
      {
        ThreadLockAlways(v101, &v227);
        v102 = a2;
        v103 = v101;
        goto LABEL_156;
      }
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457);
      goto LABEL_215;
    case 0x51u:
      memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
      v105 = BuildHwndList(*((ShellWindowManagement **)a1 + 14), 2, 0LL, 1);
      v106 = v105;
      if ( v105 )
      {
        v107 = (_QWORD *)((char *)v105 + 32);
        v108 = *((_QWORD *)v105 + 4);
        if ( v108 != 1 )
        {
          do
          {
            v109 = HMValidateHandleNoSecure(v108, 1);
            v110 = (struct tagWND *)v109;
            if ( v109 )
            {
              ThreadLockAlways(v109, BytesInMultiByteString);
              xxxSendMessage(v110, a2);
              ThreadUnlock1(v112, v111, v113);
            }
            v108 = *++v107;
          }
          while ( *v107 != 1LL );
        }
        FreeHwndList(v106);
      }
      goto LABEL_215;
    case 0x53u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        v92 = (struct tagWND *)*((_QWORD *)a1 + 13);
      else
        v92 = (struct tagWND *)*((_QWORD *)a1 + 15);
      if ( !v92 || v92 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
        goto LABEL_215;
      ThreadLockAlways(v92, &v227);
      _InterlockedIncrement(&glSendMessage);
      v93 = xxxSendTransformableMessageTimeout(v92, 0x53u, (unsigned __int64)a3, (__int128 *)a4, 0, 0, 0LL, 1, 1);
      goto LABEL_414;
    case 0x55u:
      if ( a4 != 3 )
        goto LABEL_215;
      v144 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return 2LL - ((v144 & 0x20) != 0);
    case 0x7Bu:
      NCHit = FindNCHit(a1, (unsigned int)a4);
      if ( (unsigned int)(NCHit - 6) <= 1 )
      {
        if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), (__int64)a1) )
          xxxDoScrollMenu(a1, 0LL, v90 - 6);
      }
      else
      {
        v87 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v87 + 31) & 0xC0) == 0x40 )
        {
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v225);
          v88 = *(HWND *)a1;
          v89 = 123;
          goto LABEL_375;
        }
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) )
        {
          if ( NCHit == 2 )
            goto LABEL_383;
          if ( NCHit == 3 )
          {
            v83 = 61536;
            goto LABEL_385;
          }
          if ( a4 == -1LL && (*(_BYTE *)(v87 + 21) & 2) == 0 )
            xxxSimulateShiftF10();
        }
      }
      goto LABEL_215;
    case 0x7Fu:
      Icon = DWP_GetIcon(a1, (unsigned int)a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return Icon;
    case 0x80u:
      v142 = xxxDWP_SetIcon(a1, (unsigned __int64)a3, (HICON)a4);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return (unsigned __int64)v142;
    case 0x81u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 && !InitPwSB(a1) )
        goto LABEL_215;
      if ( !a4 )
        goto LABEL_29;
      v13 = (_DWORD *)(a4 + 80);
      if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v14 = *(_WORD **)(a4 + 88)) == 0LL )
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
        return 1LL;
      }
      if ( *(int *)(a4 + 84) >= 0 )
      {
        if ( *v13 < 2u || *v14 != 0xFFFF )
        {
LABEL_29:
          v15 = *((_QWORD *)a1 + 5);
          v16 = *(_DWORD *)(v15 + 28);
          v17 = *(_DWORD *)(v15 + 24);
          v18 = *(_DWORD *)(v15 + 232);
          *(_BYTE *)(v15 + 18) |= 2u;
          if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            goto LABEL_45;
          v19 = (_DWORD *)*((_QWORD *)a1 + 5);
          v20 = v19[7];
          v21 = v16 ^ v20;
          BytesInMultiByteString[0] = v16 ^ v20;
          v22 = v19[6];
          v23 = v17 ^ v22;
          v24 = v19[58];
          v25 = v18 ^ v24;
          if ( v16 == v20 && !v23 && !v25 )
          {
LABEL_45:
            v32 = (int)DefSetText((unsigned __int64)a1, (unsigned int *)(a4 + 80));
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
            return v32;
          }
          v26 = 0;
          v27 = 0;
          v28 = 0;
          if ( (v21 & 0xB1CF0000) != 0 )
          {
            v26 = -16;
            v27 = v20;
          }
          else if ( (v23 & 0x4E27A9) != 0 )
          {
            v26 = -20;
            v27 = v22;
          }
          else
          {
            if ( (v25 & 0x12C0) == 0 )
            {
LABEL_40:
              if ( v28 )
              {
                DirtyVisRgnTrackers(a1);
                v29 = *(_QWORD *)a1;
                v31 = (void *)ReferenceDwmApiPort(v30);
                DwmAsyncChildStyleChange(v31, v29, v26, v27);
                v21 = BytesInMultiByteString[0];
              }
              if ( (v21 & 0xC40000) != 0 || (v23 & 0x200A0381) != 0 )
                WindowMargins::CheckForChanges(a1, 1LL);
              goto LABEL_45;
            }
            v26 = -268435456;
            v27 = v24;
          }
          v28 = 1;
          goto LABEL_40;
        }
      }
      else if ( !*v13 || *(_BYTE *)v14 != 0xFF )
      {
        goto LABEL_29;
      }
LABEL_26:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      result = 1LL;
      break;
    case 0x83u:
      xxxCalcClientRect(a1, a4, 0LL);
      goto LABEL_215;
    case 0x84u:
      v12 = (int)FindNCHit(a1, (unsigned int)a4);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v222);
      return v12;
    case 0x85u:
      v33 = *((_QWORD *)a1 + 5);
      v34 = *(_DWORD *)(v33 + 28);
      v35 = *(_DWORD *)(v33 + 24);
      v36 = *(_DWORD *)(v33 + 232);
      *(_BYTE *)(v33 + 17) |= 0x80u;
      if ( !(unsigned int)IsWindowDesktopComposed(a1)
        || (v37 = (_DWORD *)*((_QWORD *)a1 + 5),
            v38 = v37[7],
            v39 = v37[6],
            v40 = v35 ^ v39,
            v41 = v37[58],
            v42 = v36 ^ v41,
            (v43 = v34 ^ v38) == 0)
        && !v40
        && !v42 )
      {
        v44 = 0;
        goto LABEL_63;
      }
      v44 = 0;
      BytesInMultiByteString[0] = 0;
      v224 = 0;
      v45 = 0;
      if ( (v43 & 0xB1CF0000) != 0 )
      {
        BytesInMultiByteString[0] = -16;
        v224 = v38;
      }
      else if ( (v40 & 0x4E27A9) != 0 )
      {
        BytesInMultiByteString[0] = -20;
        v224 = v39;
      }
      else
      {
        if ( (v42 & 0x12C0) == 0 )
          goto LABEL_57;
        BytesInMultiByteString[0] = -268435456;
        v224 = v41;
      }
      v45 = 1;
LABEL_57:
      if ( v45 )
      {
        DirtyVisRgnTrackers(a1);
        v46 = *(_QWORD *)a1;
        v48 = (void *)ReferenceDwmApiPort(v47);
        DwmAsyncChildStyleChange(v48, v46, BytesInMultiByteString[0], v224);
      }
      if ( (v43 & 0xC40000) != 0 || (v40 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges(a1, 1LL);
LABEL_63:
      DCEx = (HDC)_GetDCEx(a1, a3, 328833LL);
      v50 = DCEx;
      if ( DCEx )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
          || (v51 = 1, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
        {
          v51 = 0;
        }
        xxxDrawWindowFrame(a1, DCEx, v51);
        _ReleaseDC(v50);
      }
      v52 = *((_QWORD *)a1 + 5);
      v53 = *(_DWORD *)(v52 + 28);
      v54 = *(_DWORD *)(v52 + 24);
      BytesInMultiByteString[0] = *(_DWORD *)(v52 + 232);
      *(_BYTE *)(v52 + 17) &= ~0x80u;
      if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        goto LABEL_215;
      v55 = (_DWORD *)*((_QWORD *)a1 + 5);
      v56 = v55[7];
      v57 = v55[6];
      v58 = v54 ^ v57;
      v59 = v55[58];
      v60 = BytesInMultiByteString[0] ^ v59;
      v61 = v53 ^ v56;
      if ( v53 == v56 && !v58 && !v60 )
        goto LABEL_215;
      v62 = 0;
      v63 = 0;
      if ( (v61 & 0xB1CF0000) != 0 )
      {
        v44 = -16;
        v62 = v56;
      }
      else if ( (v58 & 0x4E27A9) != 0 )
      {
        v44 = -20;
        v62 = v57;
      }
      else
      {
        if ( (v60 & 0x12C0) == 0 )
          goto LABEL_79;
        v44 = -268435456;
        v62 = v59;
      }
      v63 = 1;
LABEL_79:
      if ( v63 )
      {
        DirtyVisRgnTrackers(a1);
        v64 = *(_QWORD *)a1;
        v66 = (void *)ReferenceDwmApiPort(v65);
        DwmAsyncChildStyleChange(v66, v64, v44, v62);
      }
      if ( (v61 & 0xC40000) != 0 || (v58 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges(a1, 1LL);
      goto LABEL_215;
    case 0x86u:
      xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
      goto LABEL_26;
    case 0x88u:
      SetOrClrWF(0, (__int64 *)a1, 0x280u, 1);
      xxxInternalDoSyncPaint(a1, (unsigned int)a3);
      goto LABEL_215;
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
      xxxDWP_NCMouse(a1, a2, (unsigned int)a3, a4);
      goto LABEL_215;
    case 0xA4u:
      v230 = 0LL;
      memset(v231, 0, sizeof(v231));
      v80 = FindNCHit(a1, (unsigned int)a4);
      if ( (unsigned int)(v80 - 6) <= 1 )
      {
        if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), (__int64)a1) )
          goto LABEL_215;
      }
      else if ( (unsigned int)(v80 - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) )
      {
        goto LABEL_215;
      }
      xxxSetCapture((__int64)a1);
      while ( !(unsigned int)xxxInternalGetMessage(&v230, 0LL, 0x200u, 0x20Eu, 1, 0) || DWORD2(v230) != 517 )
      {
        if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL)
          || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
        {
          goto LABEL_215;
        }
      }
      xxxReleaseCapture();
      v81 = WORD2(v231[1]) | (WORD4(v231[1]) << 16);
      v82 = FindNCHit(a1, (unsigned int)v81);
      if ( ((v82 - 2) & 0xFFFFFFFA) != 0 )
        goto LABEL_215;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x40) != 0 )
      {
        if ( v82 == 2 )
          goto LABEL_383;
        if ( v82 == 3 )
        {
          v83 = 61536;
          goto LABEL_385;
        }
      }
      v84 = *(_QWORD *)a1;
      _InterlockedIncrement(&glSendMessage);
      v85 = v81;
      goto LABEL_360;
    case 0xACu:
      goto LABEL_368;
    case 0xAEu:
      v67 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      xxxDrawCaptionBar(a1, v67, (int)a3);
      _ReleaseDC(v67);
      goto LABEL_215;
    case 0xAFu:
      xxxDrawWindowFrame(a1, (HDC)a3, a4);
      goto LABEL_215;
    default:
      goto LABEL_215;
  }
  return result;
}
