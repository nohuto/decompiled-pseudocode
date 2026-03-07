_OWORD *__fastcall EditionNonDwmTouchHitTest(_OWORD *a1, __int64 a2, struct tagTOUCHTARGETINGCONTACT *a3, _DWORD *a4)
{
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  struct tagWND *v15; // rax
  struct tagWND *v16; // rax
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  struct tagPOINT *v24; // r8
  _QWORD *v25; // rax
  struct tagWND *v26; // rbp
  struct tagWND *v27; // rax
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v36; // [rsp+20h] [rbp-98h]
  _DWORD v37[28]; // [rsp+30h] [rbp-88h] BYREF
  struct tagPOINT v38; // [rsp+C0h] [rbp+8h] BYREF

  if ( a4 )
    *a4 = 0;
  v8 = INPUTDEST_FROM_PWND(v37, *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
  v9 = v8[1];
  *a1 = *v8;
  v10 = v8[2];
  a1[1] = v9;
  v11 = v8[3];
  a1[2] = v10;
  v12 = v8[4];
  a1[3] = v11;
  v13 = v8[5];
  a1[4] = v12;
  v14 = v8[6];
  a1[5] = v13;
  a1[6] = v14;
  if ( a3 )
  {
    v38 = 0LL;
    v24 = (struct tagPOINT *)(a2 + 20);
    v25 = *(_QWORD **)(grpdeskRitInput + 8LL);
    v26 = (struct tagWND *)v25[3];
    v27 = TopLevelTouchTarget(v26, a3, v24, &v38, *(_DWORD *)(*v25 + 64LL) & 1);
    if ( v27 )
    {
      if ( a4 )
        *a4 = 1;
      v26 = (struct tagWND *)TouchTargetChildTree(v27, a3, v36);
    }
    v28 = INPUTDEST_FROM_PWND(v37, (__int64)v26);
    v29 = v28[1];
    *a1 = *v28;
    v30 = v28[2];
    a1[1] = v29;
    v31 = v28[3];
    a1[2] = v30;
    v32 = v28[4];
    a1[3] = v31;
    v33 = v28[5];
    a1[4] = v32;
    v34 = v28[6];
    a1[5] = v33;
    a1[6] = v34;
  }
  else if ( !*(_DWORD *)(a2 + 60) )
  {
    v15 = TopLevelSpeedHitTest(grpdeskRitInput, (struct tagPOINT *)(a2 + 20), 0LL);
    if ( v15 )
    {
      v16 = ClassicChildTreeSpeedHitTest(v15, *(struct tagPOINT *)(a2 + 20));
      if ( v16 )
      {
        v17 = INPUTDEST_FROM_PWND(v37, (__int64)v16);
        v18 = v17[1];
        *a1 = *v17;
        v19 = v17[2];
        a1[1] = v18;
        v20 = v17[3];
        a1[2] = v19;
        v21 = v17[4];
        a1[3] = v20;
        v22 = v17[5];
        a1[4] = v21;
        v23 = v17[6];
        a1[5] = v22;
        a1[6] = v23;
        if ( a4 )
          *a4 = 1;
      }
    }
  }
  return a1;
}
