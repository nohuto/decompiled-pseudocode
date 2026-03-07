void __fastcall xxxPointerInsideNCTargeting(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  unsigned int v6; // r12d
  _DWORD *v7; // rax
  LONG v10; // edx
  LONG v11; // r15d
  LONG v12; // r14d
  LONG v13; // ecx
  __int64 v14; // rax
  int v15; // edi
  int v16; // eax
  int v17; // r11d
  int v18; // r10d
  LONG v19; // edi
  int v20; // r12d
  LONG *v21; // rcx
  int v22; // ecx
  LONG *v23; // rcx
  int v24; // eax
  struct tagRECT v25; // xmm6
  int v26; // ecx
  LONG *v27; // rcx
  struct tagRECT *v28; // rdi
  int v29; // ecx
  struct tagPOINT *v30; // r8
  int v31; // ebx
  int v32; // eax
  unsigned __int16 v33[2]; // [rsp+48h] [rbp-81h] BYREF
  int v34; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct tagPOINT v35; // [rsp+50h] [rbp-79h] BYREF
  struct tagRECT v36; // [rsp+58h] [rbp-71h] BYREF
  LONG v37; // [rsp+68h] [rbp-61h]
  int v38; // [rsp+6Ch] [rbp-5Dh]
  struct tagRECT *v39; // [rsp+70h] [rbp-59h]
  struct tagRECT v40; // [rsp+78h] [rbp-51h] BYREF
  LONG v41; // [rsp+88h] [rbp-41h]
  LONG v42; // [rsp+8Ch] [rbp-3Dh]
  struct tagRECT v43; // [rsp+98h] [rbp-31h] BYREF
  struct tagRECT v44; // [rsp+A8h] [rbp-21h] BYREF

  v35 = 0LL;
  v39 = a4;
  v33[0] = 4095;
  v6 = 120;
  v7 = (_DWORD *)*((_QWORD *)a1 + 5);
  v44 = 0LL;
  v10 = v7[25];
  v11 = v7[26];
  v12 = v7[28];
  v42 = v7[22];
  v40.left = v42;
  v13 = v7[29];
  LODWORD(v7) = v7[24];
  v41 = v13;
  v40.top = v13;
  v43.top = v13;
  v34 = (int)v7;
  v43.right = (int)v7;
  v40.right = v11;
  v37 = v10;
  v40.bottom = v10;
  v43.left = v12;
  v43.bottom = v10;
  if ( (_WORD)a5 == 3 && HIWORD(a5) >= 0x78u )
    v6 = HIWORD(a5);
  v14 = *((_QWORD *)a3 + 5);
  v15 = *(_DWORD *)(v14 + 188);
  TTHmToPixels(v6, *(_DWORD *)(v14 + 184));
  v16 = TTHmToPixels(v6, v15);
  if ( v18 <= v16 )
    v17 = v15;
  v19 = v41;
  v38 = TTHmToPixels(v6, v17);
  v36.right = v34;
  v36.bottom = v37;
  v20 = (v6 << 16) + 3;
  v36.left = v12;
  v36.top = v41;
  _TTCheckNCTarget(&v36, a1, a3, v39, v33, &v35, &v44, v20);
  v36.left = v42;
  v36.bottom = v37;
  v36.top = v19;
  v36.right = v11;
  _TTCheckNCTarget(&v36, a1, a3, v39, v33, &v35, &v44, v20);
  v21 = (LONG *)*((_QWORD *)a1 + 5);
  v36.left = v21[28];
  v36.top = v21[23];
  v36.right = v21[24];
  v36.bottom = v21[29] - 1;
  if ( (unsigned int)_TTCheckNCTarget(&v36, a1, a3, v39, v33, &v35, &v44, v20) )
  {
    v22 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
    if ( v22 + v38 >= v19 )
    {
      v44.right = v34;
      v44.bottom = v37;
      v44.left = v12;
      v44.top = v19;
      v35.y = v19 - v22 + 1;
    }
  }
  v23 = (LONG *)*((_QWORD *)a1 + 5);
  v36.left = v23[22];
  v36.top = v23[23];
  v36.right = v23[26];
  v36.bottom = v23[29] - 1;
  v24 = _TTCheckNCTarget(&v36, a1, a3, v39, v33, &v35, &v44, v20);
  v25 = v40;
  if ( v24 )
  {
    v26 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
    if ( v26 + v38 >= v19 )
    {
      v44 = v40;
      v35.y = v40.top - v26 + 1;
    }
  }
  v27 = (LONG *)*((_QWORD *)a1 + 5);
  v28 = v39;
  v40.left = v27[26] + 1;
  v40.top = v27[29];
  v40.right = v27[28] - 1;
  v40.bottom = v27[25];
  if ( (unsigned int)_TTCheckNCTarget(&v40, a1, a3, v39, v33, &v35, &v44, v20) )
  {
    v29 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 32LL);
    if ( v29 + v38 < v12 )
    {
      if ( v29 - v38 <= v11 )
      {
        v44 = v25;
        v35.x = v11 - v29 - 1;
      }
    }
    else
    {
      v44 = v43;
      v35.x = v12 - v29 + 1;
    }
  }
  if ( v33[0] < 0xFFDu )
  {
    v30 = (struct tagPOINT *)*((_QWORD *)a3 + 5);
    v34 = 0;
    xxxSendNCHitTest(a1, a2, v30[4], &v35, &v34, a3);
    v31 = v34;
    if ( (unsigned int)v34 <= 0x11 )
    {
      v32 = 232656;
      if ( _bittest(&v32, v34) )
      {
        v43 = *v28;
        _TTUpdateBestTarget(a3, a1, v33[0], &v35, &v44, 0, &v43, v20);
        *((_DWORD *)a3 + 8) = v31;
      }
    }
  }
}
