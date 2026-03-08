/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801D6E78
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x1801D6854 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800D8E14 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x1801D6D18 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x1801D6D9C (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(
        ClipPlaneIterator *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3,
        const enum D2D1_POLYGON_EDGE_FLAG *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  const struct D2D_POINT_2F *v6; // rdi
  ClipPlaneIterator *v7; // rbx
  __int64 v8; // rax
  FLOAT x; // xmm2_4
  FLOAT y; // xmm3_4
  int v11; // eax
  char *v12; // r14
  const enum D2D1_POLYGON_EDGE_FLAG *v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  FLOAT v16; // xmm0_4
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  ClipPlaneIterator **v20; // rcx
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v23; // edi
  float *v24; // rax
  __int64 v25; // rdx
  float *v26; // rcx
  float v27; // xmm2_4
  float v28; // xmm3_4
  unsigned int v29; // ecx
  float v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // edi
  _BYTE *v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rdi
  unsigned int v38; // esi
  _QWORD *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // xmm1_4
  __int64 v43; // rdx
  int v44; // xmm1_4
  unsigned int v45; // edx
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned int v49; // r8d
  int v50; // eax
  __int64 v51; // rcx
  int v52; // r9d
  struct MilPoint2F *v53; // r8
  const struct MilPoint2F *v54; // rdx
  FLOAT dy; // xmm1_4
  int v57; // [rsp+30h] [rbp-40h] BYREF
  __int64 v58; // [rsp+38h] [rbp-38h]
  __int64 v59; // [rsp+40h] [rbp-30h]
  __int128 v60; // [rsp+48h] [rbp-28h] BYREF
  FLOAT dx; // [rsp+58h] [rbp-18h]
  FLOAT v62; // [rsp+5Ch] [rbp-14h]

  v6 = a2;
  v7 = this;
  if ( a3 >= 3 )
  {
    v8 = a3 - 1;
    x = a2[v8].x;
    y = a2[v8].y;
    if ( a4 )
      v11 = *((_DWORD *)a4 + v8);
    else
      v11 = 0;
    v57 = v11;
    v12 = (char *)this + 24;
    v13 = a4;
    v14 = a3;
    while ( 1 )
    {
      v15 = *((unsigned int *)v12 + 6);
      v16 = v6->y;
      *(FLOAT *)&v58 = v6->x;
      v17 = v15 + 1;
      *((FLOAT *)&v58 + 1) = v16;
      *(_QWORD *)&v60 = __PAIR64__(LODWORD(y), LODWORD(x));
      *((_QWORD *)&v60 + 1) = __PAIR64__(LODWORD(v16), v58);
      if ( (int)v15 + 1 >= (unsigned int)v15 )
      {
        if ( v17 > *((_DWORD *)v12 + 5) )
        {
          v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 16, 1, &v60);
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v18, 0xC0u, 0LL);
        }
        else
        {
          this = (ClipPlaneIterator *)(2 * v15);
          *(_OWORD *)(*(_QWORD *)v12 + 16 * v15) = v60;
          *((_DWORD *)v12 + 6) = v17;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( a4 )
      {
        v19 = *((_DWORD *)v7 + 20);
        v20 = (ClipPlaneIterator **)((char *)v7 + 56);
        v21 = v19 + 1;
        if ( v19 + 1 >= v19 )
        {
          if ( v21 > *((_DWORD *)v7 + 19) )
          {
            v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v20, 4, 1, &v57);
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v22, 0xC0u, 0LL);
          }
          else
          {
            this = *v20;
            *((_DWORD *)this + *((unsigned int *)v7 + 20)) = v57;
            *((_DWORD *)v7 + 20) = v21;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        v57 = *(_DWORD *)v13;
      }
      ++v6;
      v13 = (const enum D2D1_POLYGON_EDGE_FLAG *)((char *)v13 + 4);
      v59 = v58;
      if ( !--v14 )
        break;
      y = *((FLOAT *)&v59 + 1);
      LODWORD(x) = v59;
    }
    v23 = 0;
    if ( !*((_DWORD *)v7 + 12) )
      goto LABEL_72;
    do
    {
      v24 = (float *)(*(_QWORD *)v12 + 16LL * v23);
      if ( (float)((float)((float)(v24[3] - v24[1]) * (float)(v24[3] - v24[1]))
                 + (float)((float)(v24[2] - *v24) * (float)(v24[2] - *v24))) <= 1.0e-12 )
      {
        DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)v12, v23);
        if ( a4 )
          DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)v7 + 56, v23);
        --v23;
      }
      v25 = *((unsigned int *)v7 + 12);
      ++v23;
    }
    while ( v23 < (unsigned int)v25 );
    if ( (unsigned int)v25 >= 3 )
    {
      v26 = (float *)(*(_QWORD *)v12 + 16LL * (unsigned int)(v25 - 1));
      v27 = v26[2] - *v26;
      v28 = v26[3] - v26[1];
      v29 = 0;
      do
      {
        v30 = (float)((float)(*(float *)(*(_QWORD *)v12 + 16LL * v29 + 12) - *(float *)(*(_QWORD *)v12 + 16LL * v29 + 4))
                    * v27)
            - (float)((float)(*(float *)(*(_QWORD *)v12 + 16LL * v29 + 8) - *(float *)(*(_QWORD *)v12 + 16LL * v29))
                    * v28);
        if ( COERCE_FLOAT(LODWORD(v30) & _xmm) > 0.000001 )
          break;
        ++v29;
      }
      while ( v29 < (unsigned int)v25 );
      if ( v30 <= 0.0 )
        v31 = *(float *)&FLOAT_1_0;
      else
        v31 = FLOAT_N1_0;
      v32 = 0;
      *((float *)v7 + 4) = v31;
      if ( a4 )
      {
        v33 = (_BYTE *)*((_QWORD *)v7 + 7);
        v34 = v25;
        do
        {
          v35 = v32++;
          if ( (*v33 & 1) == 0 )
            v32 = v35;
          v33 += 4;
          --v34;
        }
        while ( v34 );
      }
      v36 = v25 - v32;
      if ( v32 )
      {
        if ( v36 )
        {
          if ( v36 > 4 )
          {
            if ( v32 >= 2 )
            {
              v38 = 1;
              v39 = (_QWORD *)((char *)v7 + 56);
              do
              {
                if ( (*(_BYTE *)(*v39 + 4LL * v38) & 1) != 0 && (*(_BYTE *)(*v39 + 4LL * (v38 - 1)) & 1) != 0 )
                {
                  v40 = *(_QWORD *)v12;
                  v41 = 2LL * (v38 - 1);
                  v42 = *(_DWORD *)(*(_QWORD *)v12 + 16LL * v38 + 12);
                  *(_DWORD *)(v40 + 8 * v41 + 8) = *(_DWORD *)(*(_QWORD *)v12 + 16LL * v38 + 8);
                  *(_DWORD *)(v40 + 8 * v41 + 12) = v42;
                  DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)v12, v38);
                  DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)v7 + 56, v38--);
                  --v32;
                }
                ++v38;
              }
              while ( v38 < *((_DWORD *)v7 + 12) );
              if ( v32 >= 2
                && (*(_BYTE *)*v39 & 1) != 0
                && (*(_BYTE *)(*v39 + 4LL * (unsigned int)(*((_DWORD *)v7 + 20) - 1)) & 1) != 0 )
              {
                v43 = *(_QWORD *)v12;
                v44 = *(_DWORD *)(*(_QWORD *)v12 + 16LL * (unsigned int)(*((_DWORD *)v12 + 6) - 1) + 4);
                *(_DWORD *)(v43 + 8) = *(_DWORD *)(*(_QWORD *)v12 + 16LL * (unsigned int)(*((_DWORD *)v12 + 6) - 1));
                *(_DWORD *)(v43 + 12) = v44;
                --*((_DWORD *)v7 + 12);
                --*((_DWORD *)v7 + 20);
              }
            }
            v45 = 0;
            v57 = 0;
            if ( *((_DWORD *)v7 + 12) )
            {
              v46 = 0;
              do
              {
                v47 = v46;
                if ( (*(_BYTE *)(*((_QWORD *)v7 + 7) + 4LL * v46) & 1) != 0 )
                {
                  v48 = *((_DWORD *)v7 + 28);
                  v49 = v48 + 1;
                  if ( v48 + 1 >= v48 )
                  {
                    if ( v49 > *((_DWORD *)v7 + 27) )
                    {
                      v50 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7 + 88, 4, 1, &v57);
                      if ( v50 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xC0u, 0LL);
                    }
                    else
                    {
                      *(_DWORD *)(*((_QWORD *)v7 + 11) + 4LL * *((unsigned int *)v7 + 28)) = v45;
                      *((_DWORD *)v7 + 28) = v49;
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024362, 0xB5u, 0LL);
                  }
                  v45 = v57;
                }
                v46 = ++v45;
                v57 = v45;
              }
              while ( v45 < *((_DWORD *)v7 + 12) );
            }
          }
          else
          {
            v37 = 0LL;
            do
            {
              if ( (*(_BYTE *)(*((_QWORD *)v7 + 7) + 4 * v37) & 1) != 0 )
              {
                DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64)v12, v37);
                DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64)v7 + 56, v37);
                LODWORD(v37) = v37 - 1;
              }
              v37 = (unsigned int)(v37 + 1);
            }
            while ( (unsigned int)v37 < *((_DWORD *)v7 + 12) );
          }
        }
        else
        {
          *(_BYTE *)v7 = 1;
          *((_DWORD *)v7 + 12) = 0;
          *((_DWORD *)v7 + 20) = 0;
        }
      }
      v52 = *((_DWORD *)v7 + 12);
      if ( v52 )
      {
        v53 = *(struct MilPoint2F **)v12;
        v54 = *(const struct MilPoint2F **)v12;
        dy = a5->dy;
        v60 = *(_OWORD *)&a5->m11;
        dx = a5->dx;
        v62 = dy;
        MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v60, v54, v53, 2 * v52);
      }
    }
    else
    {
LABEL_72:
      *((_DWORD *)v7 + 12) = 0;
    }
  }
  return 0LL;
}
