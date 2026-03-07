__int64 __fastcall bRectangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        int a4,
        struct _GRADIENT_RECT *a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  unsigned int v11; // ebx
  __int64 v12; // rdi
  void (*v13)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r12
  unsigned int UpperLeft; // edx
  unsigned int LowerRight; // ecx
  struct _TRIVERTEX *v16; // r8
  struct _TRIVERTEX *v17; // r9
  LONG y; // eax
  LONG v19; // ecx
  LONG x; // ecx
  LONG v21; // r10d
  int v22; // r10d
  int v23; // esi
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // r11
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r11
  LONG v37; // eax
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r11
  __int64 v41; // r8
  __int64 v42; // [rsp+28h] [rbp-170h] BYREF
  void (*v43)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+30h] [rbp-168h] BYREF
  struct _TRIVERTEX *v44; // [rsp+38h] [rbp-160h]
  struct _GRADIENT_RECT *v45; // [rsp+40h] [rbp-158h]
  __int64 v46; // [rsp+48h] [rbp-150h]
  struct SURFACE *v47; // [rsp+50h] [rbp-148h]
  struct _TRIVERTEX *v48; // [rsp+58h] [rbp-140h]
  void (*v49)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+60h] [rbp-138h] BYREF
  __int128 v50; // [rsp+70h] [rbp-128h] BYREF
  LONG v51; // [rsp+80h] [rbp-118h]
  LONG v52; // [rsp+84h] [rbp-114h]
  LONG v53; // [rsp+88h] [rbp-110h]
  LONG v54; // [rsp+8Ch] [rbp-10Ch]
  unsigned __int64 v55; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-F0h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-E8h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-E0h]
  __int128 v59; // [rsp+C0h] [rbp-D8h]
  __int128 v60; // [rsp+D0h] [rbp-C8h]
  __int128 v61; // [rsp+E0h] [rbp-B8h]
  __int128 v62; // [rsp+F0h] [rbp-A8h]
  __int64 v63; // [rsp+100h] [rbp-98h]
  unsigned int v64; // [rsp+108h] [rbp-90h]
  struct _XLATEOBJ *v65; // [rsp+110h] [rbp-88h]
  __int64 *v66; // [rsp+118h] [rbp-80h]
  struct _TRIVERTEX v67; // [rsp+130h] [rbp-68h] BYREF
  struct _TRIVERTEX v68; // [rsp+140h] [rbp-58h] BYREF

  v44 = a3;
  v47 = a1;
  v48 = a3;
  v45 = a5;
  v43 = 0LL;
  v11 = 1;
  memset_0(&v50, 0, 0xB8uLL);
  v42 = *((_QWORD *)a1 + 16);
  if ( v42 || (v42 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1776LL)) != 0 )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v42, &v49, &v43);
    v65 = a2;
    v66 = &v42;
    v63 = (__int64)*a9;
    v50 = (__int128)*a8;
    v12 = 0LL;
    v13 = v43;
    while ( (unsigned int)v12 < a6 )
    {
      UpperLeft = v45[v12].UpperLeft;
      LowerRight = v45[v12].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v67 = v44[UpperLeft];
      v68 = v44[LowerRight];
      v16 = &v67;
      v17 = &v68;
      if ( a7 )
      {
        v17 = &v68;
        if ( v67.y > v68.y )
          v17 = &v67;
        v16 = &v67;
        if ( v67.y > v68.y )
          v16 = &v68;
        x = v16->x;
        v37 = v16->x;
        v21 = v17->x;
        if ( v16->x > v17->x )
        {
          v17->x = x;
          v16->x = v21;
          x = v21;
          v21 = v37;
        }
      }
      else
      {
        if ( v67.x > v68.x )
        {
          v16 = &v68;
          v17 = &v67;
        }
        y = v16->y;
        v19 = v17->y;
        if ( y > v19 )
        {
          v17->y = y;
          v16->y = v19;
        }
        x = v16->x;
        v21 = v17->x;
      }
      v51 = x;
      v52 = v16->y;
      v53 = v21;
      v54 = v17->y;
      v64 = a7;
      v22 = v21 - x;
      v23 = v54 - v52;
      if ( v22 > 0 && v23 > 0 )
      {
        v55 = (unsigned __int64)v16->Red << 40;
        v56 = (unsigned __int64)v16->Green << 40;
        v57 = (unsigned __int64)v16->Blue << 40;
        v58 = (unsigned __int64)v16->Alpha << 40;
        v24 = ((unsigned __int64)v17->Red << 40) - v55;
        v25 = ((unsigned __int64)v17->Green << 40) - v56;
        v26 = ((unsigned __int64)v17->Blue << 40) - v57;
        v27 = ((unsigned __int64)v17->Alpha << 40) - v58;
        v46 = v27;
        if ( a7 )
        {
          v61 = 0LL;
          v62 = 0LL;
          *(_QWORD *)&v59 = MDiv64(v24, 1LL, v23);
          *((_QWORD *)&v59 + 1) = MDiv64(v25, 1LL, v38);
          *(_QWORD *)&v60 = MDiv64(v40, 1LL, v39);
          *((_QWORD *)&v60 + 1) = MDiv64(v46, 1LL, v41);
        }
        else
        {
          v59 = 0LL;
          v60 = 0LL;
          v28 = 0LL;
          if ( v24 )
          {
            v29 = -v24;
            if ( v24 >= 0 )
              v29 = v24;
            v28 = (__int64)(v29 - ((unsigned __int64)v24 >> 63)) / v22;
            if ( v24 < 0 )
              v28 = ~v28;
          }
          *(_QWORD *)&v61 = v28;
          v30 = v25;
          v31 = 0LL;
          if ( v25 )
          {
            if ( v25 < 0 )
              v30 = -v25;
            v32 = (unsigned __int64)v25 >> 63;
            v31 = (v30 - (unsigned int)v32) / v22;
            if ( (_DWORD)v32 )
              v31 = ~v31;
          }
          *((_QWORD *)&v61 + 1) = v31;
          v33 = v26;
          v34 = 0LL;
          if ( v26 )
          {
            if ( v26 < 0 )
              v33 = -v26;
            v35 = (unsigned __int64)v26 >> 63;
            v34 = (v33 - (unsigned int)v35) / v22;
            if ( (_DWORD)v35 )
              v34 = ~v34;
          }
          *(_QWORD *)&v62 = v34;
          *((_QWORD *)&v62 + 1) = MDiv64(v27, 1LL, v22);
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)&v50) )
        {
          if ( (unsigned int)bUMPDSecurityGateEx()
            && !v65
            && ((char *)v13 == (char *)vFillGRectDIB4 || (char *)v13 == (char *)vFillGRectDIB8) )
          {
            return 1LL;
          }
          ((void (__fastcall *)(struct SURFACE *, __int128 *))v13)(a1, &v50);
          v11 = 1;
        }
        else
        {
          v11 = 1;
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
  }
  return v11;
}
