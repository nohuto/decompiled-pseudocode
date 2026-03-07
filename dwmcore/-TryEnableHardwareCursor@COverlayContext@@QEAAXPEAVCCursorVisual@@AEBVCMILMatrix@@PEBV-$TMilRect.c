char __fastcall COverlayContext::TryEnableHardwareCursor(
        COverlayContext *this,
        __int64 a2,
        __int128 *a3,
        struct MilRectF *a4)
{
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int128 v10; // xmm0
  struct MilRectF *v11; // r8
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  signed __int32 v16; // r13d
  CMILMatrix *v17; // rbx
  int v18; // eax
  signed __int32 v19; // r15d
  int v20; // r12d
  __m128 v21; // xmm3
  __m128 v22; // xmm1
  signed __int32 v23; // ecx
  __m128 v24; // xmm1
  int v25; // eax
  __m128 v26; // xmm1
  int v27; // ecx
  __m128 v28; // xmm0
  signed __int32 v29; // eax
  int v30; // eax
  int v31; // ebx
  _QWORD *v32; // rax
  struct MilRectF *v34; // [rsp+30h] [rbp-79h] BYREF
  __int128 v35; // [rsp+38h] [rbp-71h] BYREF
  int v36; // [rsp+48h] [rbp-61h]
  _OWORD v37[4]; // [rsp+50h] [rbp-59h] BYREF
  int v38; // [rsp+90h] [rbp-19h]
  __int128 v39; // [rsp+A0h] [rbp-9h] BYREF

  v34 = a4;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this);
    v10 = *a3;
    v11 = 0LL;
    v12 = v9;
    v38 = *((_DWORD *)a3 + 16);
    v13 = a3[1];
    v37[0] = v10;
    v14 = a3[2];
    v37[1] = v13;
    v15 = a3[3];
    v37[2] = v14;
    v37[3] = v15;
    if ( !*((_BYTE *)this + 11025) )
      goto LABEL_6;
    if ( *((_DWORD *)this + 17) && !COverlayContext::OverlaysEnabled(this) )
    {
      v16 = *(_DWORD *)(v12 + 36);
      v17 = (CMILMatrix *)(v12 + 184);
      v18 = *(_DWORD *)(v12 + 40);
      v19 = (int)v11;
      *((_QWORD *)&v35 + 1) = __PAIR64__(v18, v16);
      v20 = (int)v11;
      *(_QWORD *)&v35 = v11;
    }
    else
    {
LABEL_6:
      v17 = (CMILMatrix *)(v12 + 48);
      v35 = *(_OWORD *)(v12 + 20);
      v18 = HIDWORD(v35);
      v16 = DWORD2(v35);
      v20 = DWORD1(v35);
      v19 = v35;
    }
    v36 = v18;
    if ( v34 == v11 )
      goto LABEL_18;
    LOBYTE(v7) = CMILMatrix::Is2DAxisAlignedPreserving(v17);
    if ( (_BYTE)v7 )
    {
      v39 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<1>(v17, v34, (float *)&v39);
      v21 = 0LL;
      v22.m128_f32[0] = (float)(int)*(float *)&v39;
      v23 = _mm_cmplt_ss((__m128)(unsigned int)v39, v22).m128_u32[0] + (int)*(float *)&v39;
      if ( v19 >= v23 )
        v23 = v19;
      LODWORD(v35) = v23;
      v24.m128_f32[0] = (float)(int)*((float *)&v39 + 1);
      v25 = (int)*((float *)&v39 + 2);
      LODWORD(v34) = _mm_cmplt_ss((__m128)DWORD1(v39), v24).m128_u32[0];
      v26.m128_i32[0] = DWORD2(v39);
      v27 = (_DWORD)v34 + (int)*((float *)&v39 + 1);
      v28 = 0LL;
      if ( v20 >= v27 )
        v27 = v20;
      DWORD1(v35) = v27;
      v28.m128_f32[0] = (float)v25;
      v29 = v25 - _mm_cmplt_ss(v28, v26).m128_u32[0];
      v28.m128_i32[0] = HIDWORD(v39);
      if ( v29 >= v16 )
        v29 = v16;
      DWORD2(v35) = v29;
      v21.m128_f32[0] = (float)(int)*((float *)&v39 + 3);
      LODWORD(v34) = _mm_cmplt_ss(v21, v28).m128_u32[0];
      v30 = (int)*((float *)&v39 + 3) - (_DWORD)v34;
      if ( v30 >= v36 )
        v30 = v36;
      HIDWORD(v35) = v30;
      LOBYTE(v7) = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v35);
      if ( !(_BYTE)v7 )
      {
LABEL_18:
        CMILMatrix::Multiply((CMILMatrix *)v37, v17);
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
        v32 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, struct MilRectF **))(*(_QWORD *)v8 + 48LL))(v8, &v34);
        LOBYTE(v7) = CCursorVisual::TryEnableHardwareCursor(a2, *v32, v31, (unsigned int)&v35, (__int64)v37);
        if ( (_BYTE)v7 )
        {
          if ( *((_QWORD *)this + 1379) != a2 )
          {
            *((_BYTE *)this + 11310) = 1;
            LOBYTE(v7) = (unsigned __int8)wil::com_ptr_t<CCursorVisual,wil::err_returncode_policy>::operator=(
                                            (CResource **)this + 1379,
                                            a2);
          }
          *((_BYTE *)this + 11312) = 1;
        }
      }
    }
  }
  if ( !*((_BYTE *)this + 11312) && *((_QWORD *)this + 1379) == a2 )
    *((_BYTE *)this + 11310) = 1;
  return v7;
}
