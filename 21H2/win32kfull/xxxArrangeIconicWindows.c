/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C014E0E4
 * Callers:
 *     NtUserArrangeIconicWindows @ 0x1C014E030 (NtUserArrangeIconicWindows.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C0048E6C (InternalBeginDeferWindowPos.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     _ScreenToClient @ 0x1C009CB08 (_ScreenToClient.c)
 *     InternalGetRealClientRect @ 0x1C00B0758 (InternalGetRealClientRect.c)
 */

__int64 __fastcall xxxArrangeIconicWindows(__int64 a1)
{
  ShellWindowManagement *v2; // rcx
  struct tagBWL *v3; // rbx
  int v4; // r15d
  int v5; // r12d
  _QWORD *v6; // rdi
  __int64 v7; // rax
  int v8; // r14d
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 Prop; // rax
  int v14; // edx
  _DWORD *v15; // r11
  __int64 v16; // r10
  _DWORD *v17; // r11
  signed int v18; // ecx
  int v19; // esi
  int v20; // r14d
  int v21; // edx
  int v22; // eax
  _QWORD *v23; // r12
  int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r13
  _QWORD *v28; // r15
  __int64 v29; // rbx
  int v30; // edi
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  bool v33; // cc
  bool v34; // cc
  bool v35; // cc
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  bool v40; // zf
  __int64 v41; // rax
  __int64 *v42; // r15
  _QWORD *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  struct tagSMWP *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rsi
  __int64 v51; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int64 v56; // [rsp+50h] [rbp-49h]
  int v57; // [rsp+58h] [rbp-41h]
  int v58; // [rsp+5Ch] [rbp-3Dh]
  int v59; // [rsp+60h] [rbp-39h]
  int v60; // [rsp+64h] [rbp-35h]
  BOOL v61; // [rsp+68h] [rbp-31h]
  int v62; // [rsp+6Ch] [rbp-2Dh]
  _QWORD *v63; // [rsp+70h] [rbp-29h]
  __int128 v64; // [rsp+78h] [rbp-21h] BYREF
  struct tagBWL *v65; // [rsp+88h] [rbp-11h]
  __int128 v66; // [rsp+90h] [rbp-9h] BYREF
  __int64 v67; // [rsp+A0h] [rbp+7h]
  unsigned __int16 v68; // [rsp+100h] [rbp+67h]
  __int64 v69; // [rsp+108h] [rbp+6Fh]
  int v70; // [rsp+108h] [rbp+6Fh]
  int v71; // [rsp+110h] [rbp+77h]
  int v72; // [rsp+118h] [rbp+7Fh]

  v68 = 0;
  v2 = *(ShellWindowManagement **)(a1 + 112);
  v58 = 0;
  v59 = 0;
  v72 = 0;
  v64 = 0LL;
  v60 = 0;
  v62 = 0;
  v57 = 0;
  v71 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v65 = BuildHwndList(v2, (const struct tagWND *)2, 0LL, 1);
  v3 = v65;
  if ( !v65 )
    return 0LL;
  v61 = IsTrayWindow(*(_QWORD *)(a1 + 112), 1);
  v4 = *(_DWORD *)(gpsi + 2084LL);
  v5 = *(_DWORD *)(gpsi + 2088LL);
  InternalGetRealClientRect(a1, (__int64)&v64, 1LL, 0LL, 1);
  v69 = HMValidateHandleNoSecure(WPP_MAIN_CB.AlignmentRequirement, 1);
  v63 = (_QWORD *)((char *)v3 + 32);
  v6 = (_QWORD *)((char *)v3 + 32);
  v7 = *((_QWORD *)v3 + 4);
  if ( v7 == 1 )
    goto LABEL_10;
  v8 = HIDWORD(v64);
  v9 = DWORD2(v64);
  do
  {
    v10 = HMValidateHandleNoSecure(v7, 1);
    v11 = v10;
    if ( !v10 )
      goto LABEL_6;
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_6;
    if ( v10 == v69 )
      goto LABEL_6;
    Prop = GetProp(v10, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
    if ( !Prop )
      goto LABEL_6;
    v14 = *(_DWORD *)(Prop + 48);
    v15 = (_DWORD *)(Prop + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x20) == 0 )
    {
      *(_DWORD *)(Prop + 48) = v14 & 0xFFFFFFDF;
      *(_DWORD *)(Prop + 36) = -1;
      *v15 = -1;
LABEL_6:
      *v6 = 0LL;
      goto LABEL_7;
    }
    ++v68;
    *(_DWORD *)(Prop + 48) = v14 & 0xFFFFFFFE;
    *v15 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL);
    *(_DWORD *)(Prop + 36) = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL);
    ScreenToClient(a1, v15);
    v18 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) >= 0 )
    {
      if ( v18 <= 1 )
      {
        *(_DWORD *)(v16 + 36) = (v8 + v5 / 2 - *(_DWORD *)(v16 + 36)) % v5 - (v5 / 2 - *(_DWORD *)(v16 + 36));
      }
      else if ( v18 <= 3 )
      {
        *(_DWORD *)(v16 + 36) = *(_DWORD *)(v16 + 36) + v5 / 2 - (*(_DWORD *)(v16 + 36) + v5 / 2) % v5;
      }
      else
      {
        switch ( v18 )
        {
          case 4:
            goto LABEL_25;
          case 5:
            goto LABEL_23;
          case 6:
LABEL_25:
            *v17 = *v17 + v4 / 2 - (*v17 + v4 / 2) % v4;
            break;
          case 7:
LABEL_23:
            *v17 = (v9 + v4 / 2 - *v17) % v4 - (v4 / 2 - *v17);
            break;
        }
      }
    }
LABEL_7:
    v7 = *++v6;
  }
  while ( *v6 != 1LL );
  if ( !v68 )
  {
    v3 = v65;
LABEL_10:
    FreeHwndList(v3);
    return 0LL;
  }
  if ( v61 )
  {
    v19 = -32000;
    v56 = 0xFFFF8300FFFF8300uLL;
    v20 = -32000;
    goto LABEL_99;
  }
  v21 = *(_DWORD *)(gpsi + 2120LL);
  if ( (v21 & 1) != 0 )
  {
    v58 = v9 - v4;
    v19 = v9 - v4;
    LODWORD(v56) = v9 - v4;
    v72 = -v4;
  }
  else
  {
    v58 = v64 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
    v19 = v58;
    LODWORD(v56) = v58;
    v72 = v4;
  }
  if ( (v21 & 2) != 0 )
  {
    v60 = v5;
    v59 = DWORD1(v64) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
    v20 = v59;
    HIDWORD(v56) = v59;
  }
  else
  {
    v20 = v8 - v5;
    v59 = v20;
    HIDWORD(v56) = v20;
    v60 = -v5;
  }
  if ( (v21 & 4) != 0 )
  {
    v71 = 0;
    v22 = SHIDWORD(v64) / v5;
  }
  else
  {
    v71 = 1;
    v22 = v9 / v4;
  }
  v23 = v63;
  v24 = v22;
  if ( v22 < 1 )
    v24 = 1;
  v25 = *v63;
  v57 = v24;
  v62 = v24;
  if ( *v63 != 1LL )
  {
    while ( 2 )
    {
      if ( !v25 )
        goto LABEL_97;
      v26 = HMValidateHandleNoSecure(v25, 1);
      v27 = (__int64 *)v26;
      if ( !v26 )
        goto LABEL_97;
      v28 = v63;
      v70 = 0;
      v29 = *(_QWORD *)(GetProp(v26, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u) + 32);
      *(_QWORD *)&v64 = v29;
      if ( v63 >= v23 )
        goto LABEL_95;
      v30 = DWORD1(v64);
LABEL_46:
      if ( !*v28 )
        goto LABEL_88;
      v31 = HMValidateHandleNoSecure(*v28, 1);
      if ( !v31 )
        goto LABEL_88;
      v32 = *(_QWORD *)(GetProp(v31, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u) + 32);
      if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 0 )
      {
        v33 = SHIDWORD(v32) < v30;
        if ( HIDWORD(v32) == v30 )
        {
          if ( (int)v32 > (int)v29 )
            goto LABEL_90;
          v33 = SHIDWORD(v32) < v30;
        }
        goto LABEL_85;
      }
      if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 1 )
      {
        if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 2 )
        {
          v37 = HIDWORD(v32);
          v34 = SHIDWORD(v32) <= v30;
          if ( HIDWORD(v32) != v30 )
            goto LABEL_69;
          if ( (int)v32 > (int)v29 )
            goto LABEL_70;
        }
        else
        {
          if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 3 )
          {
            if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 4 )
            {
              v34 = (int)v32 <= (int)v29;
              if ( (_DWORD)v32 != (_DWORD)v29 )
                goto LABEL_69;
              if ( SHIDWORD(v32) >= v30 )
                goto LABEL_67;
              goto LABEL_70;
            }
            if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 5 )
            {
              if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 6 )
              {
                if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 7 )
                {
                  v33 = (int)v32 < (int)v29;
                  if ( (_DWORD)v32 == (_DWORD)v29 )
                  {
                    if ( SHIDWORD(v32) > v30 )
                      goto LABEL_90;
                    v33 = (int)v32 < (int)v29;
                  }
LABEL_85:
                  if ( v33 )
                    goto LABEL_90;
                }
LABEL_86:
                v36 = v70;
LABEL_87:
                if ( v36 )
                {
LABEL_90:
                  if ( v28 >= v23 )
                    goto LABEL_95;
                  do
                  {
                    v38 = _HMObjectFromHandle(*v28);
                    v39 = 0LL;
                    if ( v27 )
                      v39 = *v27;
                    *v28 = v39;
                    v27 = (__int64 *)v38;
                    ++v28;
                  }
                  while ( v28 < v23 );
                  v40 = v38 == 0;
                  v41 = 0LL;
                  if ( !v40 )
LABEL_95:
                    v41 = *v27;
                  *v23 = v41;
LABEL_97:
                  v25 = *++v23;
                  if ( *v23 == 1LL )
                  {
                    v19 = v56;
                    v20 = HIDWORD(v56);
LABEL_99:
                    v24 = v57;
                    goto LABEL_100;
                  }
                  continue;
                }
LABEL_88:
                if ( ++v28 >= v23 )
                  goto LABEL_95;
                goto LABEL_46;
              }
              v34 = (int)v32 <= (int)v29;
              if ( (_DWORD)v32 == (_DWORD)v29 )
              {
                if ( SHIDWORD(v32) > v30 )
                  goto LABEL_70;
LABEL_67:
                v34 = (int)v32 <= (int)v29;
              }
LABEL_69:
              if ( v34 )
                goto LABEL_86;
              goto LABEL_70;
            }
            v35 = (int)v32 < (int)v29;
            if ( (_DWORD)v32 == (_DWORD)v29 )
            {
              if ( SHIDWORD(v32) >= v30 )
              {
                v35 = (int)v32 < (int)v29;
                goto LABEL_80;
              }
LABEL_70:
              v36 = 1;
              v70 = 1;
              goto LABEL_87;
            }
LABEL_80:
            if ( !v35 )
              goto LABEL_86;
            goto LABEL_70;
          }
          v37 = HIDWORD(v32);
          v34 = SHIDWORD(v32) <= v30;
          if ( HIDWORD(v32) != v30 )
            goto LABEL_69;
          if ( (int)v32 < (int)v29 )
            goto LABEL_70;
        }
        v34 = (int)v37 <= v30;
        goto LABEL_69;
      }
      break;
    }
    v35 = SHIDWORD(v32) < v30;
    if ( HIDWORD(v32) == v30 )
    {
      if ( (int)v32 < (int)v29 )
        goto LABEL_70;
      v35 = SHIDWORD(v32) < v30;
    }
    goto LABEL_80;
  }
LABEL_100:
  v42 = v63;
  v43 = v63;
  v44 = *v63;
  if ( *v63 == 1LL )
    goto LABEL_112;
  while ( 2 )
  {
    if ( v44 )
    {
      v45 = HMValidateHandleNoSecure(v44, 1);
      if ( v45 )
      {
        v46 = GetProp(v45, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
        if ( v46 )
        {
          *(_DWORD *)(v46 + 48) |= 0x20u;
          *(_QWORD *)(v46 + 32) = v56;
        }
        if ( !v61 )
        {
          if ( --v24 > 0 )
          {
            if ( v71 )
            {
              v19 += v72;
              LODWORD(v56) = v19;
            }
            else
            {
LABEL_109:
              v20 += v60;
              HIDWORD(v56) = v20;
            }
          }
          else
          {
            v24 = v62;
            if ( v71 )
            {
              v19 = v58;
              LODWORD(v56) = v58;
              goto LABEL_109;
            }
            v19 += v72;
            v20 = v59;
            v56 = __PAIR64__(v59, v19);
          }
        }
      }
    }
    v44 = *++v43;
    if ( *v43 != 1LL )
      continue;
    break;
  }
  v42 = v63;
LABEL_112:
  v47 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v68);
  if ( v47 )
  {
    v48 = *v42;
    if ( *v42 == 1 )
    {
LABEL_118:
      xxxEndDeferWindowPosEx(v47, 1);
    }
    else
    {
      while ( 1 )
      {
        if ( v48 )
        {
          v49 = HMValidateHandleNoSecure(v48, 1);
          v50 = (_QWORD *)v49;
          if ( v49 )
          {
            v51 = GetProp(v49, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v66 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v66;
            *((_QWORD *)&v66 + 1) = v50;
            HMLockObject(v50);
            v47 = (struct tagSMWP *)_DeferWindowPos(
                                      (__int64)v47,
                                      v50,
                                      0LL,
                                      *(_DWORD *)(v51 + 32),
                                      *(_DWORD *)(v51 + 36),
                                      *(_DWORD *)(gpsi + 2124LL),
                                      *(_DWORD *)(gpsi + 2128LL),
                                      276,
                                      0);
            ThreadUnlock1(v54, v53, v55);
            if ( !v47 )
              break;
          }
        }
        v48 = *++v42;
        if ( *v42 == 1 )
          goto LABEL_118;
      }
    }
  }
  FreeHwndList(v65);
  return v68;
}
