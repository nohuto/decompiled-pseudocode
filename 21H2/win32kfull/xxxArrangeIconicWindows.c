/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C015E5A0
 * Callers:
 *     <none>
 * Callees:
 *     _ScreenToClient @ 0x1C0013DCC (_ScreenToClient.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006BA00 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006BA90 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     InternalGetRealClientRect @ 0x1C0111580 (InternalGetRealClientRect.c)
 */

struct tagBWL *__fastcall xxxArrangeIconicWindows(__int64 a1)
{
  struct tagWND *v2; // rcx
  struct tagBWL *result; // rax
  struct tagBWL *v4; // rbx
  int v5; // r15d
  int v6; // r12d
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rax
  int v9; // r14d
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 Prop; // rax
  int v15; // edx
  _DWORD *v16; // r11
  __int64 v17; // r10
  _DWORD *v18; // r11
  signed int v19; // ecx
  int v20; // ecx
  int v21; // r15d
  int v22; // esi
  int v23; // r14d
  int v24; // edx
  int v25; // eax
  unsigned __int64 *v26; // rdi
  unsigned __int64 *v27; // r13
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 *v30; // r15
  int v31; // r12d
  __int64 v32; // rbx
  int v33; // edi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  bool v36; // cc
  bool v37; // cc
  bool v38; // cc
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 *v41; // r12
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 *v47; // r12
  unsigned __int64 *v48; // rbx
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  struct tagSMWP *v53; // rdi
  __int64 v54; // rax
  _QWORD *v55; // r14
  __int64 v56; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // [rsp+50h] [rbp-49h]
  int v61; // [rsp+58h] [rbp-41h]
  int v62; // [rsp+5Ch] [rbp-3Dh]
  int v63; // [rsp+60h] [rbp-39h]
  int v64; // [rsp+64h] [rbp-35h]
  int v65; // [rsp+68h] [rbp-31h]
  unsigned __int64 *v66; // [rsp+70h] [rbp-29h]
  __int64 v67; // [rsp+78h] [rbp-21h]
  unsigned __int64 *v68; // [rsp+78h] [rbp-21h]
  __int128 v69; // [rsp+80h] [rbp-19h] BYREF
  struct tagBWL *v70; // [rsp+90h] [rbp-9h]
  __int128 v71; // [rsp+98h] [rbp-1h] BYREF
  __int64 v72; // [rsp+A8h] [rbp+Fh]
  unsigned __int16 v73; // [rsp+100h] [rbp+67h]
  int v74; // [rsp+108h] [rbp+6Fh]
  int v75; // [rsp+110h] [rbp+77h]
  int v76; // [rsp+118h] [rbp+7Fh]

  v73 = 0;
  v63 = 0;
  v2 = *(struct tagWND **)(a1 + 112);
  v64 = 0;
  v69 = 0LL;
  v75 = 0;
  v76 = 0;
  v65 = 0;
  v74 = 0;
  v71 = 0LL;
  v72 = 0LL;
  result = BuildHwndList(v2, 2, 0LL);
  v70 = result;
  v4 = result;
  if ( !result )
    return result;
  v62 = IsTrayWindow(*(_QWORD **)(a1 + 112));
  v5 = *(_DWORD *)(gpsi + 2084LL);
  v6 = *(_DWORD *)(gpsi + 2088LL);
  InternalGetRealClientRect(a1, (__int64)&v69, 1, 0LL, 1);
  v67 = HMValidateHandleNoSecure(ghwndSwitch, 1);
  v66 = (unsigned __int64 *)((char *)v4 + 32);
  v7 = (_QWORD *)((char *)v4 + 32);
  v8 = *((_QWORD *)v4 + 4);
  if ( v8 == 1 )
  {
LABEL_9:
    v13 = 0;
    goto LABEL_10;
  }
  v9 = HIDWORD(v69);
  v10 = DWORD2(v69);
  do
  {
    v11 = HMValidateHandleNoSecure(v8, 1);
    v12 = v11;
    if ( !v11 )
      goto LABEL_6;
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_6;
    if ( v11 == v67 )
      goto LABEL_6;
    Prop = GetProp(v11, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
    if ( !Prop )
      goto LABEL_6;
    v15 = *(_DWORD *)(Prop + 48);
    v16 = (_DWORD *)(Prop + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x20) == 0 )
    {
      *(_DWORD *)(Prop + 48) = v15 & 0xFFFFFFDF;
      *(_DWORD *)(Prop + 36) = -1;
      *v16 = -1;
LABEL_6:
      *v7 = 0LL;
      goto LABEL_7;
    }
    ++v73;
    *(_DWORD *)(Prop + 48) = v15 & 0xFFFFFFFE;
    *v16 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
    *(_DWORD *)(Prop + 36) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL);
    ScreenToClient(a1, v16);
    v19 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) >= 0 )
    {
      if ( v19 <= 1 )
      {
        *(_DWORD *)(v17 + 36) = (v9 + v6 / 2 - *(_DWORD *)(v17 + 36)) % v6 - (v6 / 2 - *(_DWORD *)(v17 + 36));
      }
      else if ( v19 <= 3 )
      {
        *(_DWORD *)(v17 + 36) = *(_DWORD *)(v17 + 36) + v6 / 2 - (*(_DWORD *)(v17 + 36) + v6 / 2) % v6;
      }
      else
      {
        switch ( v19 )
        {
          case 4:
            goto LABEL_25;
          case 5:
            goto LABEL_24;
          case 6:
LABEL_25:
            *v18 = *v18 + v5 / 2 - (*v18 + v5 / 2) % v5;
            break;
          case 7:
LABEL_24:
            *v18 = (v10 + v5 / 2 - *v18) % v5 - (v5 / 2 - *v18);
            break;
        }
      }
    }
LABEL_7:
    v8 = *++v7;
  }
  while ( *v7 != 1LL );
  if ( !v73 )
    goto LABEL_9;
  v20 = v62;
  if ( v62 )
  {
    v21 = 0;
    v22 = -32000;
    v60 = 0xFFFF8300FFFF8300uLL;
    v23 = -32000;
    goto LABEL_103;
  }
  v24 = *(_DWORD *)(gpsi + 2120LL);
  if ( (v24 & 1) != 0 )
  {
    v63 = v10 - v5;
    v22 = v10 - v5;
    LODWORD(v60) = v10 - v5;
    v75 = -v5;
  }
  else
  {
    v63 = v69 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
    v22 = v63;
    LODWORD(v60) = v63;
    v75 = v5;
  }
  if ( (v24 & 2) != 0 )
  {
    v76 = v6;
    v64 = DWORD1(v69) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
    v23 = v64;
    HIDWORD(v60) = v64;
  }
  else
  {
    v23 = v9 - v6;
    v64 = v23;
    HIDWORD(v60) = v23;
    v76 = -v6;
  }
  if ( (v24 & 4) != 0 )
  {
    v74 = 0;
    v25 = SHIDWORD(v69) / v6;
  }
  else
  {
    v74 = 1;
    v25 = v10 / v5;
  }
  v26 = v66;
  v21 = v25;
  v27 = v66;
  if ( v25 < 1 )
    v21 = 1;
  v61 = v21;
  v28 = *v66;
  v65 = v21;
  if ( *v66 != 1 )
  {
    while ( 2 )
    {
      if ( v28 )
      {
        v29 = HMValidateHandleNoSecure(v28, 1);
        v68 = (unsigned __int64 *)v29;
        if ( v29 )
        {
          v30 = v26;
          v31 = 0;
          v32 = *(_QWORD *)(GetProp(v29, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL) + 32);
          *(_QWORD *)&v69 = v32;
          if ( v26 < v27 )
          {
            v33 = DWORD1(v69);
            while ( 1 )
            {
              if ( *v30 )
              {
                v34 = HMValidateHandleNoSecure(*v30, 1);
                if ( v34 )
                  break;
              }
LABEL_90:
              if ( ++v30 >= v27 )
                goto LABEL_91;
            }
            v35 = *(_QWORD *)(GetProp(v34, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL) + 32);
            if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 0 )
            {
              if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 1 )
              {
                if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 2 )
                {
                  v39 = HIDWORD(v35);
                  v37 = SHIDWORD(v35) <= v33;
                  if ( HIDWORD(v35) != v33 )
                    goto LABEL_67;
                  if ( (int)v35 > (int)v32 )
                    goto LABEL_88;
                }
                else
                {
                  if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 3 )
                  {
                    if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 4 )
                    {
                      v37 = (int)v35 <= (int)v32;
                      if ( (_DWORD)v35 == (_DWORD)v32 )
                      {
                        if ( SHIDWORD(v35) < v33 )
                          goto LABEL_88;
LABEL_65:
                        v37 = (int)v35 <= (int)v32;
                      }
                      goto LABEL_67;
                    }
                    if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 5 )
                    {
                      if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 6 )
                      {
                        if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 7 )
                        {
                          v36 = (int)v35 < (int)v32;
                          if ( (_DWORD)v35 == (_DWORD)v32 )
                          {
                            if ( SHIDWORD(v35) > v33 )
                              goto LABEL_91;
                            v36 = (int)v35 < (int)v32;
                          }
                          if ( v36 )
                            goto LABEL_91;
                        }
                        goto LABEL_89;
                      }
                      v37 = (int)v35 <= (int)v32;
                      if ( (_DWORD)v35 == (_DWORD)v32 )
                      {
                        if ( SHIDWORD(v35) <= v33 )
                          goto LABEL_65;
LABEL_88:
                        v31 = 1;
LABEL_89:
                        if ( v31 )
                          goto LABEL_91;
                        goto LABEL_90;
                      }
LABEL_67:
                      if ( !v37 )
                        goto LABEL_88;
                      goto LABEL_89;
                    }
                    v38 = (int)v35 < (int)v32;
                    if ( (_DWORD)v35 == (_DWORD)v32 )
                    {
                      if ( SHIDWORD(v35) < v33 )
                        goto LABEL_88;
                      v38 = (int)v35 < (int)v32;
                    }
LABEL_87:
                    if ( v38 )
                      goto LABEL_88;
                    goto LABEL_89;
                  }
                  v39 = HIDWORD(v35);
                  v37 = SHIDWORD(v35) <= v33;
                  if ( HIDWORD(v35) != v33 )
                    goto LABEL_67;
                  if ( (int)v35 < (int)v32 )
                    goto LABEL_88;
                }
                v37 = (int)v39 <= v33;
                goto LABEL_67;
              }
              v40 = HIDWORD(v35);
              v38 = SHIDWORD(v35) < v33;
              if ( HIDWORD(v35) != v33 )
                goto LABEL_87;
              if ( (int)v35 < (int)v32 )
                goto LABEL_88;
            }
            else
            {
              v40 = HIDWORD(v35);
              v38 = SHIDWORD(v35) < v33;
              if ( HIDWORD(v35) != v33 )
                goto LABEL_87;
              if ( (int)v35 > (int)v32 )
                goto LABEL_88;
            }
            v38 = (int)v40 < v33;
            goto LABEL_87;
          }
LABEL_91:
          v41 = v68;
          v42 = 0LL;
          v43 = (unsigned __int64)((char *)v27 - (char *)v30 + 7) >> 3;
          if ( v30 > v27 )
            v43 = 0LL;
          if ( v43 )
          {
            do
            {
              v44 = _HMObjectFromHandle(*v30);
              v45 = 0LL;
              if ( v41 )
                v45 = *v41;
              *v30 = v45;
              ++v42;
              ++v30;
              v41 = (unsigned __int64 *)v44;
            }
            while ( v42 < v43 );
          }
          v46 = 0LL;
          if ( v41 )
            v46 = *v41;
          v26 = v66;
          *v27 = v46;
        }
      }
      v28 = *++v27;
      if ( *v27 == 1 )
      {
        v22 = v60;
        v21 = v61;
        break;
      }
      continue;
    }
  }
  v20 = 0;
LABEL_103:
  v47 = v66;
  v48 = v66;
  v49 = *v66;
  if ( *v66 != 1 )
  {
    v50 = v20;
    while ( 1 )
    {
      if ( !v49 )
        goto LABEL_114;
      v51 = HMValidateHandleNoSecure(v49, 1);
      if ( !v51 )
        goto LABEL_114;
      v52 = GetProp(v51, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
      if ( v52 )
      {
        *(_DWORD *)(v52 + 48) |= 0x20u;
        *(_QWORD *)(v52 + 32) = v60;
      }
      if ( v50 )
        goto LABEL_114;
      if ( --v21 > 0 )
      {
        if ( v74 )
        {
          v22 += v75;
          LODWORD(v60) = v22;
          goto LABEL_114;
        }
      }
      else
      {
        v21 = v65;
        if ( !v74 )
        {
          v22 += v75;
          v23 = v64;
          v60 = __PAIR64__(v64, v22);
          goto LABEL_114;
        }
        v22 = v63;
        LODWORD(v60) = v63;
      }
      v23 += v76;
      HIDWORD(v60) = v23;
LABEL_114:
      v49 = *++v48;
      if ( *v48 == 1 )
      {
        v47 = v66;
        break;
      }
    }
  }
  v13 = v73;
  v53 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v73);
  if ( v53 )
  {
    while ( 1 )
    {
      v59 = *v47;
      if ( *v47 == 1 )
        break;
      if ( v59 )
      {
        v54 = HMValidateHandleNoSecure(v59, 1);
        v55 = (_QWORD *)v54;
        if ( v54 )
        {
          v56 = GetProp(v54, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v71 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v71;
          *((_QWORD *)&v71 + 1) = v55;
          HMLockObject(v55);
          v53 = (struct tagSMWP *)_DeferWindowPos(
                                    (__int64)v53,
                                    v55,
                                    0LL,
                                    *(_DWORD *)(v56 + 32),
                                    *(_DWORD *)(v56 + 36),
                                    *(_DWORD *)(gpsi + 2124LL),
                                    *(_DWORD *)(gpsi + 2128LL),
                                    276,
                                    0);
          ThreadUnlock1(v58);
          if ( !v53 )
            goto LABEL_10;
        }
      }
      ++v47;
    }
    xxxEndDeferWindowPosEx(v53, 1);
  }
LABEL_10:
  FreeHwndList(v70);
  return (struct tagBWL *)v13;
}
