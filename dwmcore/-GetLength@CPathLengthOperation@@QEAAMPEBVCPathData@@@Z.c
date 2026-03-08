/*
 * XREFs of ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18001539C (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x180016468 (-SumPointDistances@CPathLengthOperation@@AEBAMI@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x1800164E4 (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18001655C (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x1800166BC (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x180083780 (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800D3E74 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     _hypot_0 @ 0x1801176A4 (_hypot_0.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CPathLengthOperation::GetLength(CPathLengthOperation *this, const struct CPathData *a2)
{
  float v4; // xmm8_4
  __int64 v5; // rbx
  float v6; // xmm10_4
  __int64 v7; // rdi
  float v8; // xmm11_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  __int64 v15; // rcx
  int v16; // r8d
  char v17; // si
  double v18; // xmm0_8
  int v20; // xmm1_4
  _DWORD v21[2]; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v23; // [rsp+58h] [rbp-49h] BYREF
  __int128 v24; // [rsp+60h] [rbp-41h] BYREF
  void *retaddr; // [rsp+100h] [rbp+5Fh]
  unsigned int v26; // [rsp+110h] [rbp+6Fh] BYREF
  int v27; // [rsp+118h] [rbp+77h] BYREF
  int v28; // [rsp+11Ch] [rbp+7Bh]
  int v29; // [rsp+120h] [rbp+7Fh] BYREF
  int v30; // [rsp+124h] [rbp+83h]

  v4 = *((float *)a2 + 13);
  if ( v4 == 0.0 && CPathData::IsSimpleGeometry(a2) )
  {
    v5 = *((_QWORD *)a2 + 2);
    v6 = 0.0;
    v7 = *((_QWORD *)a2 + 3);
    v8 = 0.0;
    v23 = v5;
    v9 = 0.0;
    v10 = 0.0;
    while ( v5 != v7 )
    {
      v11 = 0.0;
      if ( *(_BYTE *)v5 )
      {
        switch ( *(_BYTE *)v5 )
        {
          case 1:
            if ( *(_BYTE *)(v5 + 2) )
              v11 = hypot_0((float)(v6 - v9), (float)(v8 - v10));
            break;
          case 2:
            v18 = hypot_0((float)(v9 - *(float *)(v5 + 8)), (float)(v10 - *(float *)(v5 + 12)));
            v9 = *(float *)(v5 + 8);
            v10 = *(float *)(v5 + 12);
            v11 = v18;
            break;
          case 5:
            v12 = *(_DWORD *)(v5 + 16);
            v27 = *(_DWORD *)(v5 + 24);
            v28 = *(_DWORD *)(v5 + 28);
            v30 = *(_DWORD *)(v5 + 20);
            v13 = *(_DWORD *)(v5 + 12);
            v29 = v12;
            v14 = *(_DWORD *)(v5 + 8);
            v21[1] = v13;
            v21[0] = v14;
            *(float *)v22 = v9;
            *(float *)&v22[1] = v10;
            CBezierFlattener<float,CMilPoint2F>::SetPoints(
              (_DWORD)this,
              (unsigned int)v22,
              (unsigned int)v21,
              (unsigned int)&v29,
              (__int64)&v27);
            if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v15, &v24) >= 0 )
            {
              *((float *)this + 23) = v9;
              *((float *)this + 24) = v10;
              while ( 1 )
              {
                v17 = CBezierFlattener<float,CMilPoint2F>::Flatten(
                        (_DWORD)this,
                        (int)this + 100,
                        v16,
                        0,
                        15,
                        (__int64)&v26,
                        1);
                v11 = v11 + CPathLengthOperation::SumPointDistances(this, v26);
                if ( !v17 )
                  break;
                v20 = *((_DWORD *)this + 54);
                *((_DWORD *)this + 23) = *((_DWORD *)this + 53);
                *((_DWORD *)this + 24) = v20;
              }
            }
            v9 = *(float *)(v5 + 24);
            v10 = *(float *)(v5 + 28);
            break;
          default:
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
        }
      }
      else
      {
        v6 = *(float *)(v5 + 8);
        v8 = *(float *)(v5 + 12);
        v9 = v6;
        v10 = v8;
      }
      *(float *)(v5 + 4) = v11;
      v4 = v4 + v11;
      Path::SegmentCollection::const_iterator::operator++(&v23);
      v5 = v23;
    }
    *((float *)a2 + 13) = v4;
  }
  return v4;
}
