/*
 * XREFs of GetInheritedMonitor @ 0x1C006F4F4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01DE8CC (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C007D1E4 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C007D318 (IsTitleWindow.c)
 *     UnionRect @ 0x1C00C1640 (UnionRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C0145818 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  int *v1; // r12
  unsigned int v2; // r14d
  __int64 v3; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 Prop; // rax
  unsigned int v10; // r10d
  __int64 v11; // r11
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r10d
  __int64 v29; // rbx
  __int64 v30; // rbx
  int v31; // eax
  int v32; // r15d
  __int64 v33; // rcx
  int *v34; // r15
  __int64 v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // [rsp+20h] [rbp-30h]
  int v39; // [rsp+20h] [rbp-30h]
  __int128 v40; // [rsp+28h] [rbp-28h] BYREF
  __int128 v41; // [rsp+38h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( !*((_QWORD *)a1 + 13) )
    return v3;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v6 != DesktopWindow )
  {
    v7 = *(_QWORD *)(v6 + 40);
    return ValidateHmonitorNoRip(*(_QWORD *)(v7 + 256));
  }
  Prop = GetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, 1u);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 != Prop )
    {
      v24 = ValidateHwnd(Prop);
      if ( v24 )
      {
LABEL_46:
        v7 = *(_QWORD *)(v24 + 40);
        return ValidateHmonitorNoRip(*(_QWORD *)(v7 + 256));
      }
    }
    return v3;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*(_BYTE *)(v11 + 20) & 0x40) != 0
    || (*((_DWORD *)a1 + 80) & 0x400) != 0 )
  {
    return v3;
  }
  v12 = *((_QWORD *)a1 + 15);
  if ( !v12 )
    goto LABEL_12;
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
    || (((unsigned __int16)(v10 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v12, a1) )
        break;
      v12 = *(_QWORD *)(v12 + 120);
    }
    while ( v12 );
LABEL_12:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v41);
      if ( *(_QWORD *)v41 )
      {
        v40 = 0LL;
        if ( v12 || (v12 = *(_QWORD *)(*(_QWORD *)v41 + 8LL)) != 0 )
          v12 &= -(__int64)((unsigned int)IntersectRect(
                                            &v40,
                                            (int *)(*((_QWORD *)a1 + 5) + 88LL),
                                            (int *)(*(_QWORD *)(v12 + 40) + 88LL)) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v41);
    }
    if ( !v12 || (v3 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL))) == 0 )
    {
      v13 = *((_QWORD *)a1 + 12);
      v14 = *((_QWORD *)a1 + 11);
      *(_QWORD *)&v40 = v13;
      while ( v13 )
      {
        v15 = *((_QWORD *)a1 + 5);
        v16 = *(_QWORD *)(v13 + 40);
        LOBYTE(v1) = ~*(_BYTE *)(v15 + 27);
        v38 = *(_BYTE *)(v15 + 27) & 8;
        LODWORD(v1) = (*(_BYTE *)(v15 + 26) >> 3) & (unsigned __int8)((unsigned int)v1 >> 5) & 1;
        v17 = (*(_BYTE *)(v16 + 31) & 0x10) == 0;
        v41 = 0LL;
        if ( !v17
          && ((*(_BYTE *)(v16 + 16) & 8) != 0 || (*(_BYTE *)(v16 + 30) & 3) != 0)
          && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v16 + 104))
          && ((*(_BYTE *)(v20 + 26) & 8) == 0 || (*(_BYTE *)(v20 + 27) & 0x20) != 0)
          && (*(_QWORD *)(v21 + 432) == *(_QWORD *)(v22 + 432) || *(_QWORD *)(v21 + 424) == *(_QWORD *)(v22 + 424))
          && (((unsigned __int16)(*(_DWORD *)(v20 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v15 + 288) >> 8)) & 0x1FF) == 0 )
        {
          if ( !v23 && !(_DWORD)v1 )
            goto LABEL_32;
          v34 = (int *)(v20 + 88);
          v35 = v15 + 88;
          v36 = IsAdjacentRect((const struct tagRECT *)v35, (const struct tagRECT *)(v20 + 88));
          v2 = v36;
          if ( !v38 || v36 || (unsigned int)IntersectRect(&v41, (int *)v35, v34) )
          {
            if ( !(_DWORD)v1 || v2 )
              goto LABEL_32;
            if ( (unsigned int)UnionRect(&v41, v35, v34) )
            {
              v37 = v41 - *(_QWORD *)v35;
              if ( (_QWORD)v41 == *(_QWORD *)v35 )
                v37 = *((_QWORD *)&v41 + 1) - *(_QWORD *)(v35 + 8);
              if ( !v37 )
              {
LABEL_32:
                v24 = v40;
                goto LABEL_46;
              }
            }
          }
        }
        v13 = *(_QWORD *)(v40 + 96);
        *(_QWORD *)&v40 = v13;
        if ( v14 )
        {
LABEL_18:
          v18 = *((_QWORD *)a1 + 5);
          v19 = *(_QWORD *)(v14 + 40);
          LOBYTE(v2) = ~*(_BYTE *)(v18 + 27);
          v39 = *(_BYTE *)(v18 + 27) & 8;
          v2 = (*(_BYTE *)(v18 + 26) >> 3) & (unsigned __int8)(v2 >> 5) & 1;
          v17 = (*(_BYTE *)(v19 + 31) & 0x10) == 0;
          v41 = 0LL;
          if ( !v17
            && ((*(_BYTE *)(v19 + 16) & 8) != 0 || (*(_BYTE *)(v19 + 30) & 3) != 0)
            && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v19 + 104))
            && ((*(_BYTE *)(v25 + 26) & 8) == 0 || (*(_BYTE *)(v25 + 27) & 0x20) != 0)
            && (*(_QWORD *)(v26 + 432) == *(_QWORD *)(v27 + 432) || *(_QWORD *)(v26 + 424) == *(_QWORD *)(v27 + 424)) )
          {
            v29 = *((_QWORD *)a1 + 5);
            if ( (((unsigned __int16)(*(_DWORD *)(v25 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v29 + 288) >> 8)) & 0x1FF) == 0 )
            {
              if ( !v28 && !v2 )
                goto LABEL_43;
              v1 = (int *)(v25 + 88);
              v30 = v29 + 88;
              v31 = IsAdjacentRect((const struct tagRECT *)v30, (const struct tagRECT *)(v25 + 88));
              v32 = v31;
              if ( !v39 || v31 || (unsigned int)IntersectRect(&v41, (int *)v30, v1) )
              {
                if ( !v2 || v32 )
                  goto LABEL_43;
                if ( (unsigned int)UnionRect(&v41, v30, v1) )
                {
                  v33 = v41 - *(_QWORD *)v30;
                  if ( (_QWORD)v41 == *(_QWORD *)v30 )
                    v33 = *((_QWORD *)&v41 + 1) - *(_QWORD *)(v30 + 8);
                  if ( !v33 )
                  {
LABEL_43:
                    v7 = *(_QWORD *)(v14 + 40);
                    return ValidateHmonitorNoRip(*(_QWORD *)(v7 + 256));
                  }
                }
              }
            }
          }
          v14 = *(_QWORD *)(v14 + 88);
          v13 = v40;
        }
      }
      if ( !v14 )
        return v3;
      goto LABEL_18;
    }
    return v3;
  }
  return 0LL;
}
