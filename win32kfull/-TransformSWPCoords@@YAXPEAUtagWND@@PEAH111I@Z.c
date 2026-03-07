void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  __int64 v10; // rcx
  int v11; // r8d
  _DWORD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int16 v16; // di
  unsigned __int16 v17; // si
  INT v18; // r15d
  INT v19; // eax
  INT v20; // r8d
  unsigned __int16 v21; // r8
  unsigned __int16 v22; // r9
  float *v23; // r10
  int *v24; // rbx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  INT v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned __int16 v33; // di
  unsigned __int16 v34; // ax
  INT v35; // ebx
  INT c; // [rsp+20h] [rbp-30h] BYREF
  int v37; // [rsp+24h] [rbp-2Ch]
  int *v38; // [rsp+28h] [rbp-28h]
  INT *v39; // [rsp+30h] [rbp-20h]
  int *v40; // [rsp+38h] [rbp-18h] BYREF
  int v41; // [rsp+40h] [rbp-10h]
  int v42; // [rsp+44h] [rbp-Ch]

  v40 = a3;
  v39 = a2;
  v38 = a5;
  if ( !IsTopLevelWindow((__int64)a1) )
  {
    if ( v11 != 3 )
    {
      v13 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL));
      if ( v13 )
      {
        v14 = *((_QWORD *)a1 + 5);
        v15 = v13 + 40;
        v16 = (*(_DWORD *)(v14 + 288) >> 8) & 0x1FF;
        if ( !v16 )
          v16 = *(_WORD *)(*(_QWORD *)v15 + 60LL);
        v17 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v14) >> 8) & 0x1FF;
        if ( !v17 )
          v17 = *(_WORD *)(*(_QWORD *)v15 + 60LL);
        v18 = v17;
        c = v17;
        if ( (a6 & 2) == 0 )
        {
          v19 = EngMulDiv(*v39, v16, v17);
          v20 = c;
          *v39 = v19;
          *v40 = EngMulDiv(*v40, v16, v20);
          v18 = c;
        }
        if ( (a6 & 1) == 0 )
        {
          if ( IsChildWindowDpiBoundary(a1) )
          {
            *((_DWORD *)a1 + 58) = 0;
            *((_DWORD *)a1 + 59) = 0;
            ScaleDpiValueWithSubpixel(a4, (float *)a1 + 58, v16, v17);
            ScaleDpiValueWithSubpixel(v38, v23, v21, v22);
          }
          else
          {
            v24 = v38;
            *a4 = EngMulDiv(*a4, v16, v18);
            *v24 = EngMulDiv(*v24, v16, v18);
          }
        }
      }
    }
    return;
  }
  if ( !v11 )
  {
    v25 = *a3;
    LODWORD(v40) = *a2;
    v41 = *v12 + (_DWORD)v40;
    v26 = v25 + *a5;
    HIDWORD(v40) = v25;
    v42 = v26;
    TransformRectBetweenCoordinateSpaces(&v40, &v40, a1, 0LL);
    v27 = HIDWORD(v40);
    v28 = v41 - (_DWORD)v40;
    *a2 = (int)v40;
    *a3 = v27;
    *a4 = v28;
    v29 = v42 - v27;
LABEL_25:
    *a5 = v29;
    return;
  }
  if ( (a6 & 2) == 0 )
  {
    c = *a2;
    v37 = *a3;
    TransformPointBetweenCoordinateSpaces(&c, &c, a1, 0LL);
    *a2 = c;
    *a3 = v37;
    return;
  }
  if ( (a6 & 1) == 0 )
  {
    v30 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL));
    if ( v30 )
    {
      v31 = *((_QWORD *)a1 + 5);
      v32 = v30 + 40;
      v33 = (*(_DWORD *)(v31 + 288) >> 8) & 0x1FF;
      if ( !v33 )
        v33 = *(_WORD *)(*(_QWORD *)v32 + 60LL);
      v34 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v31) >> 8) & 0x1FF;
      if ( !v34 )
        v34 = *(_WORD *)(*(_QWORD *)v32 + 60LL);
      v35 = v34;
      *a4 = EngMulDiv(*a4, v33, v34);
      v29 = EngMulDiv(*a5, v33, v35);
      goto LABEL_25;
    }
  }
}
