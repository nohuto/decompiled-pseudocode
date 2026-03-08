/*
 * XREFs of ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C02507C8
 * Callers:
 *     TouchTargetingRankForRect @ 0x1C0251150 (TouchTargetingRankForRect.c)
 * Callees:
 *     TouchTargetingIntersectSegment @ 0x1C0250F30 (TouchTargetingIntersectSegment.c)
 *     TouchTargetingRank @ 0x1C02510D8 (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C0251998 (TouchTargetingSnapToSegment.c)
 */

void __fastcall _TTUpdateRankWithSegment(
        int a1,
        int a2,
        int a3,
        int a4,
        bool a5,
        struct tagPOINT *a6,
        unsigned __int16 *a7,
        struct tagRECT *a8,
        struct tagRECT *a9,
        const struct tagTOUCHTARGETINGCONTACT *a10)
{
  struct tagPOINT v11; // rbx
  int v12; // esi
  char v13; // r10
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // r9d
  unsigned __int64 v20; // rax
  int v21; // edx
  int v22; // edx
  unsigned __int64 v23; // rcx
  int v24; // edx
  int v25; // r8d
  int v26; // edx
  int v27; // edx
  int v28; // r8d
  int v29; // r8d
  int v30; // eax
  int v31; // eax
  int v32; // r11d
  LONG top; // eax
  int v34; // eax
  unsigned __int16 v35; // r14
  int v36; // eax
  unsigned __int16 v37; // ax
  unsigned __int64 v38; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-28h] BYREF
  int v40; // [rsp+40h] [rbp-20h]
  int v41; // [rsp+44h] [rbp-1Ch]
  __int128 v42; // [rsp+50h] [rbp-10h] BYREF
  const struct tagTOUCHTARGETINGCONTACT *v43; // [rsp+D8h] [rbp+78h]
  const struct tagTOUCHTARGETINGCONTACT *v44; // [rsp+D8h] [rbp+78h]

  v11 = 0LL;
  v39 = 0LL;
  v12 = a1;
  v38 = 0LL;
  if ( a1 <= a3 )
    v12 = a3;
  *(_QWORD *)&v42 = 0LL;
  v13 = 1;
  if ( v12 < *(_DWORD *)a10 )
    goto LABEL_13;
  v14 = a1;
  if ( a1 >= a3 )
    v14 = a3;
  if ( v14 >= *((_DWORD *)a10 + 2) )
    goto LABEL_13;
  v15 = a2;
  if ( a2 <= a4 )
    v15 = a4;
  if ( v15 < *((_DWORD *)a10 + 1) )
    goto LABEL_13;
  v16 = a2;
  if ( a2 >= a4 )
    v16 = a4;
  if ( v16 >= *((_DWORD *)a10 + 3) )
LABEL_13:
    v13 = 0;
  v40 = a1;
  v41 = a2;
  if ( v13 )
  {
    if ( (unsigned int)TouchTargetingIntersectSegment(v40, a3, (_DWORD)a10, (unsigned int)&v39, (__int64)&v38) )
    {
      v17 = v39;
      v18 = v38;
      if ( (_DWORD)v39 == (_DWORD)v38 )
      {
        v19 = *((_DWORD *)a10 + 1);
        v20 = HIDWORD(v38);
        LODWORD(v38) = v39;
        v21 = HIDWORD(v39);
        if ( SHIDWORD(v39) >= (int)v20 )
          v21 = v20;
        if ( v21 <= v19 )
        {
          HIDWORD(v39) = v19;
        }
        else
        {
          v22 = v20;
          if ( SHIDWORD(v39) < (int)v20 )
            v22 = HIDWORD(v39);
          HIDWORD(v39) = v22;
        }
        v23 = HIDWORD(v17);
        v24 = v23;
        if ( (int)v23 <= (int)v20 )
          v24 = v20;
        if ( v24 >= *((_DWORD *)a10 + 3) - 1 )
        {
          HIDWORD(v38) = *((_DWORD *)a10 + 3) - 1;
        }
        else
        {
          if ( (int)v23 > (int)v20 )
            LODWORD(v20) = v23;
          HIDWORD(v38) = v20;
        }
      }
      else
      {
        v25 = *(_DWORD *)a10;
        HIDWORD(v38) = HIDWORD(v39);
        v26 = v38;
        if ( (int)v39 < (int)v38 )
          v26 = v39;
        if ( v26 <= v25 )
        {
          LODWORD(v39) = v25;
        }
        else
        {
          v27 = v38;
          if ( (int)v39 < (int)v38 )
            v27 = v39;
          LODWORD(v39) = v27;
        }
        v28 = v38;
        if ( (int)v17 > (int)v38 )
          v28 = v17;
        if ( v28 >= *((_DWORD *)a10 + 2) - 1 )
        {
          LODWORD(v38) = *((_DWORD *)a10 + 2) - 1;
        }
        else
        {
          if ( (int)v17 > (int)v38 )
            v18 = v17;
          LODWORD(v38) = v18;
        }
      }
      TouchTargetingSnapToSegment(v39, v38, *((_QWORD *)a10 + 4), &v42);
      v11 = (struct tagPOINT)v42;
    }
    goto LABEL_78;
  }
  if ( !a5 )
  {
LABEL_78:
    v35 = *a7;
    if ( *a7 == 4094 || v11 != *a6 )
    {
      v36 = (a8->left + a8->right) / 2;
      v42 = (__int128)*a8;
      LODWORD(v44) = v36;
      HIDWORD(v44) = (a8->top + a8->bottom) / 2;
      v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TouchTargetingRank)(
              *((_QWORD *)a10 + 4),
              v11,
              &v42,
              v44);
      if ( v35 == 4094 || v37 < v35 )
      {
        *a6 = v11;
        *a7 = v37;
      }
    }
    return;
  }
  if ( a1 == a3 && (a1 == a8->left || a1 == a8->right - 1) )
  {
    v29 = *((_DWORD *)a10 + 9);
    v30 = a2;
    if ( a2 <= a4 )
      v30 = a4;
    if ( v29 > v30 )
      goto LABEL_57;
    v31 = a2;
    if ( a2 >= a4 )
      v31 = a4;
    if ( v29 < v31 )
    {
LABEL_57:
      if ( a8->right - a8->left <= 1 )
        return;
      v32 = *((_DWORD *)a10 + 8);
      if ( a1 == a9->left )
      {
        if ( v32 >= a1 )
          return;
        LODWORD(v43) = a9->left;
      }
      else
      {
        if ( v32 <= a1 )
          return;
        LODWORD(v43) = a9->right - 1;
      }
      if ( a2 >= a4 )
        a2 = a4;
      if ( v29 >= a2 )
        top = a9->bottom - 1;
      else
        top = a9->top;
      HIDWORD(v43) = top;
    }
    else
    {
      LODWORD(v43) = a1;
      HIDWORD(v43) = *((_DWORD *)a10 + 9);
    }
    goto LABEL_77;
  }
  if ( a2 == a4 && (a2 == a8->top || a2 == a8->bottom - 1) )
  {
    v34 = *((_DWORD *)a10 + 8);
    if ( v34 <= v12 )
    {
      if ( a1 >= a3 )
        a1 = a3;
      if ( v34 >= a1 )
      {
        LODWORD(v43) = *((_DWORD *)a10 + 8);
        HIDWORD(v43) = a2;
LABEL_77:
        v11 = (struct tagPOINT)v43;
        goto LABEL_78;
      }
    }
  }
}
