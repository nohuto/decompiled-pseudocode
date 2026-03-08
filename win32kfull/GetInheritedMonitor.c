/*
 * XREFs of GetInheritedMonitor @ 0x1C00ACC90
 * Callers:
 *     GetNewMonitor @ 0x1C00AB0FC (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B9BC8 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UnionRect @ 0x1C00DD06C (UnionRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00FB120 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C00FB1B0 (IsTitleWindow.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C01BA3F4 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  int v1; // r12d
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // xmm1_8
  __int64 v13; // rcx
  __int64 Prop; // rbx
  unsigned int v15; // r10d
  __int64 v16; // r11
  struct tagWND *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // r14
  __int64 v23; // rdx
  int v24; // r14d
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int16 v29; // r11
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int16 v33; // r11
  int v34; // eax
  _QWORD *v35; // rcx
  int v36; // edx
  __int64 v37; // r9
  int v38; // r14d
  tagObjLock **v39; // rbx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // r9
  int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  _QWORD *v49; // [rsp+28h] [rbp-31h]
  _QWORD *v50; // [rsp+28h] [rbp-31h]
  __int128 v51; // [rsp+30h] [rbp-29h] BYREF
  __int128 v52; // [rsp+40h] [rbp-19h] BYREF
  __int64 v53; // [rsp+50h] [rbp-9h]
  __int64 v54; // [rsp+58h] [rbp-1h]
  char v55; // [rsp+60h] [rbp+7h]
  __int128 v56; // [rsp+68h] [rbp+Fh] BYREF
  char v57; // [rsp+78h] [rbp+1Fh]
  char v58; // [rsp+80h] [rbp+27h]

  v1 = 0;
  v3 = *((_QWORD *)a1 + 13);
  v4 = 0LL;
  if ( !v3 )
    return v4;
  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 || v3 != *(_QWORD *)(v6 + 24) )
  {
    v7 = *(_QWORD *)(v3 + 40);
    goto LABEL_6;
  }
  v10 = (__int128 *)*((_QWORD *)a1 + 18);
  v11 = (unsigned __int16)gatomMonitorInheritance;
  v54 = gDomainDummyLock;
  v55 = 0;
  v56 = 0LL;
  v57 = 0;
  v12 = *((_QWORD *)v10 + 2);
  v52 = *v10;
  v58 = 0;
  v53 = v12;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE(v3) && IS_USERCRIT_OWNED_AT_ALL(v13) )
  {
    v58 = 1;
    if ( v10 == (__int128 *)gObjDummyLock )
      v10 = 0LL;
    *(_QWORD *)&v56 = v10;
    v38 = 0;
    v39 = (tagObjLock **)&v56;
    do
    {
      if ( *v39 )
        tagObjLock::LockExclusive(*v39);
      ++v38;
      ++v39;
    }
    while ( !v38 );
    v57 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v11, 1LL);
  if ( v58 && v57 )
  {
    if ( (_QWORD)v56 )
      tagObjLock::UnLockExclusive((tagObjLock *)v56);
    v57 = 0;
  }
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v4;
    v40 = ValidateHwnd(Prop);
    if ( !v40 )
      return v4;
    v7 = *(_QWORD *)(v40 + 40);
LABEL_6:
    v8 = *(_QWORD *)(v7 + 256);
    return ValidateHmonitorNoRip(v8);
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*(_BYTE *)(v16 + 20) & 0x40) != 0
    || (*((_DWORD *)a1 + 80) & 0x400) != 0 )
  {
    return v4;
  }
  v17 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v17 )
  {
    if ( *(_QWORD *)(*((_QWORD *)v17 + 2) + 424LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
      && (((unsigned __int16)(v15 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v17 + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      return 0LL;
    }
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner(v17, a1) )
        break;
      v17 = (struct tagWND *)*((_QWORD *)v17 + 15);
    }
    while ( v17 );
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
    && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29C )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v52, *(_QWORD *)(*((_QWORD *)a1 + 35) + 8LL));
    if ( *(_QWORD *)v52 )
    {
      v51 = 0LL;
      if ( (v17 || (v17 = *(struct tagWND **)(*(_QWORD *)v52 + 8LL)) != 0LL)
        && !(unsigned int)IntersectRect(&v51, *((_QWORD *)a1 + 5) + 88LL, *((_QWORD *)v17 + 5) + 88LL) )
      {
        v17 = 0LL;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v52);
  }
  if ( v17 )
  {
    v4 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v17 + 5) + 256LL));
    if ( v4 )
      return v4;
  }
  v18 = *((_QWORD *)a1 + 12);
  v19 = *((_QWORD *)a1 + 11);
  while ( 1 )
  {
    while ( !v18 )
    {
      if ( !v19 )
        return v4;
LABEL_22:
      v20 = *((_QWORD *)a1 + 5);
      v52 = 0LL;
      v21 = *(_BYTE *)(v20 + 27) & 8;
      if ( (*(_BYTE *)(v20 + 26) & 8) != 0 && (*(_BYTE *)(v20 + 27) & 0x20) == 0 )
        v1 = 1;
      v22 = *(_QWORD *)(v19 + 40);
      if ( (*(_BYTE *)(v22 + 31) & 0x10) != 0
        && ((*(_BYTE *)(v22 + 16) & 8) != 0 || (*(_BYTE *)(v22 + 30) & 3) != 0)
        && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v22 + 104))
        && ((*(_BYTE *)(v22 + 26) & 8) == 0 || (*(_BYTE *)(v22 + 27) & 0x20) != 0)
        && (*(_QWORD *)(v27 + 432) == *(_QWORD *)(v28 + 432) || *(_QWORD *)(v27 + 424) == *(_QWORD *)(v28 + 424))
        && ((unsigned __int16)((*(_DWORD *)(v26 + 288) >> 8) ^ (*(_DWORD *)(v22 + 288) >> 8)) & v29) == 0 )
      {
        if ( !v21 && !v1 )
          goto LABEL_39;
        v49 = (_QWORD *)(v26 + 88);
        v34 = IsAdjacentRect((const struct tagRECT *)(v26 + 88), (const struct tagRECT *)(v22 + 88));
        v36 = v34;
        v37 = v22 + 88;
        if ( v21 && !v34 )
        {
          if ( !(unsigned int)IntersectRect(&v52, v35, v22 + 88) )
            goto LABEL_24;
          v35 = v49;
          v37 = v47;
          v36 = 0;
        }
        if ( !v1 || v36 )
          goto LABEL_39;
        if ( (unsigned int)UnionRect(&v52, v35, v37) )
        {
          v48 = v52 - *v49;
          if ( (_QWORD)v52 == *v49 )
            v48 = *((_QWORD *)&v52 + 1) - v49[1];
          if ( !v48 )
          {
LABEL_39:
            v8 = *(_QWORD *)(v22 + 256);
            return ValidateHmonitorNoRip(v8);
          }
        }
      }
LABEL_24:
      v19 = *(_QWORD *)(v19 + 88);
      v1 = 0;
    }
    v23 = *((_QWORD *)a1 + 5);
    v52 = 0LL;
    v24 = *(_BYTE *)(v23 + 27) & 8;
    if ( (*(_BYTE *)(v23 + 26) & 8) != 0 && (*(_BYTE *)(v23 + 27) & 0x20) == 0 )
      v1 = 1;
    v25 = *(_QWORD *)(v18 + 40);
    if ( (*(_BYTE *)(v25 + 31) & 0x10) != 0
      && ((*(_BYTE *)(v25 + 16) & 8) != 0 || (*(_BYTE *)(v25 + 30) & 3) != 0)
      && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v25 + 104))
      && ((*(_BYTE *)(v25 + 26) & 8) == 0 || (*(_BYTE *)(v25 + 27) & 0x20) != 0)
      && (*(_QWORD *)(v31 + 432) == *(_QWORD *)(v32 + 432) || *(_QWORD *)(v31 + 424) == *(_QWORD *)(v32 + 424))
      && ((unsigned __int16)((*(_DWORD *)(v30 + 288) >> 8) ^ (*(_DWORD *)(v25 + 288) >> 8)) & v33) == 0 )
    {
      if ( !v24 && !v1 )
        goto LABEL_108;
      v50 = (_QWORD *)(v30 + 88);
      v41 = IsAdjacentRect((const struct tagRECT *)(v30 + 88), (const struct tagRECT *)(v25 + 88));
      v44 = v42;
      v45 = v41;
      if ( !v24 || v41 )
        goto LABEL_90;
      *(_QWORD *)&v51 = v42;
      if ( (unsigned int)IntersectRect(&v52, v43, v42) )
        break;
    }
LABEL_27:
    v18 = *(_QWORD *)(v18 + 96);
    v1 = 0;
    if ( v19 )
      goto LABEL_22;
  }
  v43 = v50;
  v45 = 0;
  v44 = v51;
LABEL_90:
  if ( v1 && !v45 )
  {
    if ( !(unsigned int)UnionRect(&v52, v43, v44) )
      goto LABEL_27;
    v46 = v52 - *v50;
    if ( (_QWORD)v52 == *v50 )
      v46 = *((_QWORD *)&v52 + 1) - v50[1];
    if ( v46 )
      goto LABEL_27;
  }
LABEL_108:
  v8 = *(_QWORD *)(v25 + 256);
  return ValidateHmonitorNoRip(v8);
}
