_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 *a1, __int64 *a2, char a3)
{
  __int64 v3; // rax
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // r15d
  int v12; // r12d
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // r8d
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  int v30; // r8d
  _QWORD v31[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-49h]
  __int128 v33; // [rsp+58h] [rbp-41h] BYREF
  __int64 v34; // [rsp+68h] [rbp-31h]
  __int128 v35; // [rsp+70h] [rbp-29h] BYREF
  __int64 v36; // [rsp+80h] [rbp-19h]
  __int64 v37[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v38; // [rsp+A0h] [rbp+7h] BYREF

  v3 = *a1;
  *(_OWORD *)v37 = 0LL;
  v6 = *(struct tagWND **)(*(_QWORD *)v3 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v31, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
  v32 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  ThreadLock(v6, &v33);
  v7 = v32;
  if ( !v32 )
    v7 = *(_QWORD *)v31[0];
  ThreadLock(v7, &v35);
  GetClientRect((__int64)v6, (__int64)v37);
  v10 = *(_QWORD *)v31[0];
  if ( *(_DWORD *)(*(_QWORD *)v31[0] + 64LL) )
    goto LABEL_30;
  v38 = *(struct tagRECT *)v37;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v37, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v37, 8));
  v13 = *(_DWORD *)(*(_QWORD *)v31[0] + 124LL);
  xxxSendMessage(v6, 0x1E2u);
  v14 = v32;
  if ( !v32 )
    v14 = *(_QWORD *)v31[0];
  if ( (unsigned int)MNGetpItemIndex(v14, (__int64)a2) == -1 )
    goto LABEL_25;
  a3 &= ~4u;
  v10 = *(_QWORD *)v31[0];
  if ( ((*(_BYTE *)(*(_QWORD *)v31[0] + 124LL) ^ (unsigned __int8)v13) & 3) != 0 )
    goto LABEL_25;
  LODWORD(v37[1]) = v15;
  if ( !a2 )
    goto LABEL_30;
  if ( v15 != v12 )
  {
LABEL_25:
    v24 = 0LL;
LABEL_26:
    xxxInvalidateRect(v6, (int *)v24, 1);
    goto LABEL_27;
  }
  HIDWORD(v37[1]) = *(_DWORD *)(*(_QWORD *)v31[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v31[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v37[1]) <= v11 )
    {
      v16 = v32;
      if ( !v32 )
        v16 = *(_QWORD *)v31[0];
      v17 = MNGetpItemFromIndex(v16, *(_DWORD *)(v16 + 116));
      v10 = *(_QWORD *)v17;
      v9 = (unsigned int)(v18 - *(_DWORD *)(*(_QWORD *)v17 + 68LL));
      HIDWORD(v37[0]) = v9;
      goto LABEL_36;
    }
    GetClientRect((__int64)v6, (__int64)&v38);
  }
  if ( v32 )
    v19 = v32;
  else
    v19 = *(_QWORD *)v31[0];
  v20 = MNGetpItemFromIndex(v19, *(_DWORD *)(v19 + 116));
  v10 = *(_QWORD *)v20;
  v9 = (unsigned int)(v22 - *(_DWORD *)(*(_QWORD *)v20 + 68LL));
  v38.top = v9;
  HIDWORD(v37[0]) = v9;
  if ( (int)v9 >= 0 )
  {
    v10 = *(_QWORD *)v31[0];
    if ( v38.top < *(_DWORD *)(*(_QWORD *)v31[0] + 68LL) )
    {
      xxxScrollWindowEx(v6, 0, HIDWORD(v37[1]) - v11, &v38, (struct tagRECT *)v37, 0LL, 0LL, 6);
      if ( v32 )
        v23 = v32;
      else
        v23 = *(_QWORD *)v31[0];
      if ( (unsigned int)MNGetpItemIndex(v23, (__int64)a2) == -1 )
        goto LABEL_25;
      goto LABEL_31;
    }
LABEL_30:
    v21 = v32;
  }
LABEL_31:
  if ( (a3 & 2) != 0 )
    goto LABEL_29;
  if ( !a2 )
    goto LABEL_25;
  if ( !v21 )
    v21 = *(_QWORD *)v31[0];
  v10 = *(_QWORD *)MNGetpItemFromIndex(v21, *(_DWORD *)(v21 + 116));
  v29 = *a2;
  v9 = (unsigned int)(v30 - *(_DWORD *)(v10 + 68));
  HIDWORD(v37[0]) = v9;
  HIDWORD(v37[1]) = v9 + *(_DWORD *)(v29 + 76);
LABEL_36:
  if ( (int)v9 >= 0 )
  {
    v10 = *(_QWORD *)v31[0];
    if ( SHIDWORD(v37[0]) < *(_DWORD *)(*(_QWORD *)v31[0] + 68LL) )
    {
      v24 = v37;
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_29:
  ThreadUnlock1(v10, v8, v9);
  ThreadUnlock1(v26, v25, v27);
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v31);
}
