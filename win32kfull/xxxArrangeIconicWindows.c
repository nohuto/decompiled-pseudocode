__int64 __fastcall xxxArrangeIconicWindows(__int64 a1)
{
  ShellWindowManagement *v2; // rcx
  struct tagBWL *v3; // rbx
  int v4; // esi
  int v5; // r14d
  _QWORD *v6; // rdi
  __int64 v7; // rax
  int v8; // r12d
  int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 Prop; // rax
  int v14; // edx
  _DWORD *v15; // r11
  int v16; // r13d
  int v17; // edi
  int v18; // esi
  int v19; // ebp
  __int64 v20; // r10
  _DWORD *v21; // r11
  int v22; // edx
  int v23; // eax
  _QWORD *v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rbp
  __int64 v27; // rax
  __int64 *v28; // r13
  _QWORD *v29; // r14
  int v30; // r12d
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  bool v34; // cc
  bool v35; // cc
  bool v36; // cc
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // r15
  _QWORD *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  struct tagSMWP *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int64 v55; // [rsp+50h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-9Ch]
  int v57; // [rsp+60h] [rbp-98h]
  BOOL v58; // [rsp+64h] [rbp-94h]
  int v59; // [rsp+68h] [rbp-90h]
  __int64 *v60; // [rsp+70h] [rbp-88h]
  struct tagBWL *v61; // [rsp+78h] [rbp-80h]
  __int128 v62; // [rsp+80h] [rbp-78h] BYREF
  __int64 v63; // [rsp+90h] [rbp-68h]
  __int128 v64; // [rsp+98h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-50h]
  unsigned __int16 v66; // [rsp+100h] [rbp+8h]
  int v67; // [rsp+108h] [rbp+10h]
  int v68; // [rsp+110h] [rbp+18h]
  int v69; // [rsp+118h] [rbp+20h]

  v66 = 0;
  v2 = *(ShellWindowManagement **)(a1 + 112);
  v56 = 0;
  v69 = 0;
  v62 = 0LL;
  v57 = 0;
  v59 = 0;
  v67 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v61 = BuildHwndList(v2, 2, 0LL, 1);
  v3 = v61;
  if ( !v61 )
    return 0LL;
  v58 = IsTrayWindow(*(struct tagWND **)(a1 + 112), 1);
  v4 = *(_DWORD *)(gpsi + 2084LL);
  v5 = *(_DWORD *)(gpsi + 2088LL);
  InternalGetRealClientRect(a1, (__int64)&v62, 1, 0LL, 1);
  v63 = HMValidateHandleNoSecure(ghwndSwitch, 1);
  v60 = (__int64 *)((char *)v61 + 32);
  v6 = (_QWORD *)((char *)v61 + 32);
  v7 = *((_QWORD *)v61 + 4);
  if ( v7 == 1 )
  {
LABEL_116:
    FreeHwndList(v3);
    return 0LL;
  }
  v8 = HIDWORD(v62);
  v9 = DWORD2(v62);
  v10 = v63;
  do
  {
    v11 = HMValidateHandleNoSecure(v7, 1);
    v12 = v11;
    if ( !v11 )
      goto LABEL_10;
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_10;
    if ( v11 == v10 )
      goto LABEL_10;
    Prop = GetProp(v11, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    if ( !Prop )
      goto LABEL_10;
    v14 = *(_DWORD *)(Prop + 48);
    v15 = (_DWORD *)(Prop + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x20) == 0 )
    {
      *(_DWORD *)(Prop + 48) = v14 & 0xFFFFFFDF;
      *(_DWORD *)(Prop + 36) = -1;
      *v15 = -1;
LABEL_10:
      *v6 = 0LL;
      goto LABEL_11;
    }
    ++v66;
    *(_DWORD *)(Prop + 48) = v14 & 0xFFFFFFFE;
    *v15 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
    *(_DWORD *)(Prop + 36) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL);
    ScreenToClient(a1, v15);
    if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) < 2 )
    {
      *(_DWORD *)(v20 + 36) = (v8 + v5 / 2 - *(_DWORD *)(v20 + 36)) % v5 - (v5 / 2 - *(_DWORD *)(v20 + 36));
    }
    else if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 2 || (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 3 )
    {
      *(_DWORD *)(v20 + 36) = *(_DWORD *)(v20 + 36) + v5 / 2 - (*(_DWORD *)(v20 + 36) + v5 / 2) % v5;
    }
    else
    {
      if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 4 )
      {
        if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 5 )
          goto LABEL_22;
        if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 6 )
        {
          if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 7 )
            goto LABEL_11;
LABEL_22:
          *v21 = (v9 + v4 / 2 - *v21) % v4 - (v4 / 2 - *v21);
          goto LABEL_11;
        }
      }
      *v21 = *v21 + v4 / 2 - (*v21 + v4 / 2) % v4;
    }
LABEL_11:
    v7 = *++v6;
  }
  while ( *v6 != 1LL );
  v16 = 0;
  if ( !v66 )
  {
    v3 = v61;
    goto LABEL_116;
  }
  if ( !v58 )
  {
    v22 = *(_DWORD *)(gpsi + 2120LL);
    if ( (v22 & 1) != 0 )
    {
      v16 = v9 - v4;
      v69 = -v4;
    }
    else
    {
      v16 = v62 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
      v69 = v4;
    }
    LODWORD(v55) = v16;
    v17 = v16;
    v68 = v16;
    if ( (v22 & 2) != 0 )
    {
      v57 = v5;
      v56 = DWORD1(v62) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
      v19 = v56;
      HIDWORD(v55) = v56;
    }
    else
    {
      v56 = v8 - v5;
      v19 = v8 - v5;
      HIDWORD(v55) = v8 - v5;
      v57 = -v5;
    }
    if ( (v22 & 4) != 0 )
    {
      v67 = 0;
      v23 = v8 / v5;
    }
    else
    {
      v67 = 1;
      v23 = v9 / v4;
    }
    v24 = (_QWORD *)((char *)v61 + 32);
    v18 = v23;
    if ( v23 < 1 )
      v18 = 1;
    v25 = *v60;
    v59 = v18;
    if ( *v60 == 1 )
      goto LABEL_92;
    v26 = (_QWORD *)((char *)v61 + 32);
    while ( 1 )
    {
      if ( !v25 )
        goto LABEL_90;
      v27 = HMValidateHandleNoSecure(v25, 1);
      v28 = (__int64 *)v27;
      if ( !v27 )
        goto LABEL_90;
      v29 = v26;
      v30 = 0;
      v31 = *(_QWORD *)(GetProp(v27, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u) + 32);
      if ( v26 >= v24 )
        goto LABEL_88;
      do
      {
        if ( !*v29 )
          goto LABEL_82;
        v32 = HMValidateHandleNoSecure(*v29, 1);
        if ( !v32 )
          goto LABEL_82;
        v33 = *(_QWORD *)(GetProp(v32, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u) + 32);
        switch ( *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7 )
        {
          case 0u:
            v34 = SHIDWORD(v33) < SHIDWORD(v31);
            if ( HIDWORD(v33) == HIDWORD(v31) )
            {
              if ( (int)v33 > (int)v31 )
                goto LABEL_83;
              v34 = SHIDWORD(v33) < SHIDWORD(v31);
            }
LABEL_80:
            if ( v34 )
              goto LABEL_83;
            goto LABEL_81;
          case 1u:
            v36 = SHIDWORD(v33) < SHIDWORD(v31);
            if ( HIDWORD(v33) == HIDWORD(v31) )
            {
              if ( (int)v33 < (int)v31 )
                goto LABEL_65;
              v36 = SHIDWORD(v33) < SHIDWORD(v31);
            }
            break;
          case 2u:
            v37 = HIDWORD(v33);
            v35 = SHIDWORD(v33) <= SHIDWORD(v31);
            if ( HIDWORD(v33) != HIDWORD(v31) )
              goto LABEL_64;
            if ( (int)v33 > (int)v31 )
              goto LABEL_65;
            goto LABEL_71;
          case 3u:
            v37 = HIDWORD(v33);
            v35 = SHIDWORD(v33) <= SHIDWORD(v31);
            if ( HIDWORD(v33) != HIDWORD(v31) )
              goto LABEL_64;
            if ( (int)v33 < (int)v31 )
              goto LABEL_65;
LABEL_71:
            v35 = (int)v37 <= SHIDWORD(v31);
            goto LABEL_64;
          case 4u:
            v35 = (int)v33 <= (int)v31;
            if ( (_DWORD)v33 == (_DWORD)v31 )
            {
              if ( SHIDWORD(v33) >= SHIDWORD(v31) )
                goto LABEL_63;
              goto LABEL_65;
            }
            goto LABEL_64;
          case 5u:
            v36 = (int)v33 < (int)v31;
            if ( (_DWORD)v33 == (_DWORD)v31 )
            {
              if ( SHIDWORD(v33) < SHIDWORD(v31) )
                goto LABEL_65;
              v36 = (int)v33 < (int)v31;
            }
            break;
          case 6u:
            v35 = (int)v33 <= (int)v31;
            if ( (_DWORD)v33 == (_DWORD)v31 )
            {
              if ( SHIDWORD(v33) <= SHIDWORD(v31) )
              {
LABEL_63:
                v35 = (int)v33 <= (int)v31;
                goto LABEL_64;
              }
LABEL_65:
              v30 = 1;
              goto LABEL_81;
            }
LABEL_64:
            if ( v35 )
              goto LABEL_81;
            goto LABEL_65;
          case 7u:
            v34 = (int)v33 < (int)v31;
            if ( (_DWORD)v33 == (_DWORD)v31 )
            {
              if ( SHIDWORD(v33) > SHIDWORD(v31) )
                goto LABEL_83;
              v34 = (int)v33 < (int)v31;
            }
            goto LABEL_80;
          default:
            goto LABEL_81;
        }
        if ( v36 )
          goto LABEL_65;
LABEL_81:
        if ( v30 )
          break;
LABEL_82:
        ++v29;
      }
      while ( v29 < v24 );
LABEL_83:
      v26 = (_QWORD *)((char *)v61 + 32);
      if ( v29 >= v24 )
        goto LABEL_88;
      do
      {
        v38 = _HMObjectFromHandle(*v29);
        v39 = 0LL;
        if ( v28 )
          v39 = *v28;
        *v29 = v39;
        v28 = (__int64 *)v38;
        ++v29;
      }
      while ( v29 < v24 );
      v40 = 0LL;
      if ( v38 )
LABEL_88:
        v40 = *v28;
      *v24 = v40;
LABEL_90:
      v25 = *++v24;
      if ( *v24 == 1LL )
      {
        v19 = HIDWORD(v55);
        v16 = v68;
        v17 = v55;
        goto LABEL_92;
      }
    }
  }
  v17 = -32000;
  v18 = 0;
  v55 = 0xFFFF8300FFFF8300uLL;
  v19 = -32000;
LABEL_92:
  v41 = (__int64 *)((char *)v61 + 32);
  v42 = (_QWORD *)((char *)v61 + 32);
  v43 = *v60;
  if ( *v60 == 1 )
    goto LABEL_104;
  while ( 2 )
  {
    if ( v43 )
    {
      v44 = HMValidateHandleNoSecure(v43, 1);
      if ( v44 )
      {
        v45 = GetProp(v44, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
        if ( v45 )
        {
          *(_DWORD *)(v45 + 48) |= 0x20u;
          *(_QWORD *)(v45 + 32) = v55;
        }
        if ( !v58 )
        {
          if ( --v18 > 0 )
          {
            if ( v67 )
            {
              v17 += v69;
              LODWORD(v55) = v17;
            }
            else
            {
LABEL_101:
              v19 += v57;
              HIDWORD(v55) = v19;
            }
          }
          else
          {
            v18 = v59;
            if ( v67 )
            {
              v17 = v16;
              LODWORD(v55) = v16;
              goto LABEL_101;
            }
            v17 += v69;
            v19 = v56;
            v55 = __PAIR64__(v56, v17);
          }
        }
      }
    }
    v43 = *++v42;
    if ( *v42 != 1LL )
      continue;
    break;
  }
  v41 = (__int64 *)((char *)v61 + 32);
LABEL_104:
  v46 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v66);
  if ( v46 )
  {
    v47 = *v41;
    if ( *v41 == 1 )
    {
LABEL_110:
      xxxEndDeferWindowPosEx(v46, 1);
    }
    else
    {
      while ( 1 )
      {
        if ( v47 )
        {
          v48 = HMValidateHandleNoSecure(v47, 1);
          v49 = v48;
          if ( v48 )
          {
            v50 = GetProp(v48, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
            ThreadLockAlways(v49, &v64);
            v46 = (struct tagSMWP *)_DeferWindowPos(
                                      (__int64)v46,
                                      v49,
                                      0LL,
                                      *(_DWORD *)(v50 + 32),
                                      *(_DWORD *)(v50 + 36),
                                      *(_DWORD *)(gpsi + 2124LL),
                                      *(_DWORD *)(gpsi + 2128LL),
                                      276,
                                      0);
            ThreadUnlock1(v52, v51, v53);
            if ( !v46 )
              break;
          }
        }
        v47 = *++v41;
        if ( *v41 == 1 )
          goto LABEL_110;
      }
    }
  }
  FreeHwndList(v61);
  return v66;
}
