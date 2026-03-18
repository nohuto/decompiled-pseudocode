/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0009660
 * Callers:
 *     EngGradientFill @ 0x1C00093E0 (EngGradientFill.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C0009AA8 (-MDiv64@@YA_J_J00@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C0009B4C (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C0009BFC (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

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
  unsigned int v11; // r15d
  __int64 i; // rbx
  ULONG UpperLeft; // edx
  ULONG LowerRight; // ecx
  struct _TRIVERTEX *v15; // r8
  struct _TRIVERTEX *v16; // r9
  LONG x; // ecx
  LONG v18; // eax
  LONG v19; // r10d
  int v20; // r10d
  int v21; // r11d
  void (*v22)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r14
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  LONG y; // eax
  LONG v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  void (*v32)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+28h] [rbp-190h] BYREF
  __int64 v33; // [rsp+38h] [rbp-180h] BYREF
  __int64 v34; // [rsp+40h] [rbp-178h]
  __int64 v35; // [rsp+48h] [rbp-170h]
  __int64 v36; // [rsp+50h] [rbp-168h]
  __int64 v37; // [rsp+58h] [rbp-160h]
  struct _TRIVERTEX *v38; // [rsp+60h] [rbp-158h]
  struct SURFACE *v39; // [rsp+68h] [rbp-150h]
  struct _TRIVERTEX *v40; // [rsp+70h] [rbp-148h]
  struct _GRADIENT_RECT *v41; // [rsp+78h] [rbp-140h]
  void (*v42)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+80h] [rbp-138h] BYREF
  _OWORD v43[12]; // [rsp+90h] [rbp-128h] BYREF
  struct _TRIVERTEX v44; // [rsp+150h] [rbp-68h] BYREF
  struct _TRIVERTEX v45; // [rsp+160h] [rbp-58h] BYREF

  v38 = a3;
  v39 = a1;
  v40 = a3;
  v41 = a5;
  v32 = 0LL;
  v11 = 1;
  memset(v43, 0, 0xB8uLL);
  v33 = *((_QWORD *)a1 + 16);
  if ( v33 || (v33 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1776LL)) != 0 )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v33, &v42, &v32);
    *(_QWORD *)&v43[10] = a2;
    *((_QWORD *)&v43[10] + 1) = &v33;
    *(struct _POINTL *)&v43[9] = *a9;
    v43[0] = *a8;
    for ( i = 0LL; (unsigned int)i < a6; i = (unsigned int)(i + 1) )
    {
      UpperLeft = a5[i].UpperLeft;
      LowerRight = a5[i].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v44 = v38[UpperLeft];
      v45 = v38[LowerRight];
      v15 = &v44;
      v16 = &v45;
      if ( a7 )
      {
        v16 = &v45;
        if ( v44.y > v45.y )
          v16 = &v44;
        v15 = &v44;
        if ( v44.y > v45.y )
          v15 = &v45;
        x = v15->x;
        v18 = v15->x;
        v19 = v16->x;
        if ( v15->x > v16->x )
        {
          v16->x = x;
          v15->x = v19;
          x = v19;
          v19 = v18;
        }
      }
      else
      {
        if ( v44.x > v45.x )
        {
          v15 = &v45;
          v16 = &v44;
        }
        y = v15->y;
        v28 = v16->y;
        if ( y > v28 )
        {
          v16->y = y;
          v15->y = v28;
        }
        x = v15->x;
        v19 = v16->x;
      }
      LODWORD(v43[1]) = x;
      DWORD1(v43[1]) = v15->y;
      DWORD2(v43[1]) = v19;
      HIDWORD(v43[1]) = v16->y;
      DWORD2(v43[9]) = a7;
      v20 = v19 - x;
      v21 = HIDWORD(v43[1]) - DWORD1(v43[1]);
      if ( v20 > 0 && v21 > 0 )
      {
        *(_QWORD *)&v43[3] = (unsigned __int64)v15->Red << 40;
        *((_QWORD *)&v43[3] + 1) = (unsigned __int64)v15->Green << 40;
        *(_QWORD *)&v43[4] = (unsigned __int64)v15->Blue << 40;
        *((_QWORD *)&v43[4] + 1) = (unsigned __int64)v15->Alpha << 40;
        v34 = ((unsigned __int64)v16->Red << 40) - *(_QWORD *)&v43[3];
        v35 = ((unsigned __int64)v16->Green << 40) - *((_QWORD *)&v43[3] + 1);
        v36 = ((unsigned __int64)v16->Blue << 40) - *(_QWORD *)&v43[4];
        v37 = ((unsigned __int64)v16->Alpha << 40) - *((_QWORD *)&v43[4] + 1);
        v22 = v32;
        if ( a7 )
        {
          memset(&v43[7], 0, 32);
          *(_QWORD *)&v43[5] = MDiv64(v34, 1LL, v21);
          *((_QWORD *)&v43[5] + 1) = MDiv64(v35, 1LL, v23);
          *(_QWORD *)&v43[6] = MDiv64(v36, 1LL, v24);
          *((_QWORD *)&v43[6] + 1) = MDiv64(v37, 1LL, v25);
        }
        else
        {
          memset(&v43[5], 0, 32);
          *(_QWORD *)&v43[7] = MDiv64(v34, 1LL, v20);
          *((_QWORD *)&v43[7] + 1) = MDiv64(v35, 1LL, v29);
          *(_QWORD *)&v43[8] = MDiv64(v36, 1LL, v30);
          *((_QWORD *)&v43[8] + 1) = MDiv64(v37, 1LL, v31);
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)v43) )
        {
          if ( (unsigned int)bUMPDSecurityGateEx()
            && !*(_QWORD *)&v43[10]
            && ((char *)v22 == (char *)vFillGRectDIB4 || (char *)v22 == (char *)vFillGRectDIB8) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
                1957);
            return 1LL;
          }
          ((void (__fastcall *)(struct SURFACE *, _OWORD *))v22)(a1, v43);
        }
      }
    }
  }
  return v11;
}
