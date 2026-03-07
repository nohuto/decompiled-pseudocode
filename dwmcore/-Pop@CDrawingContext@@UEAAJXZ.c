__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  char *v4; // r14
  char *v5; // r15
  int v6; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // r9
  signed __int64 v27; // r8
  unsigned __int64 v28; // rcx
  signed __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rsi
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  __int64 *v35; // r12
  unsigned __int64 v36; // r9
  signed __int64 v37; // r8
  unsigned __int64 v38; // rcx
  signed __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 *v41; // r12
  __int64 v42; // rcx
  bool v43; // dl
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  float v49; // xmm3_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm4_4
  int v53; // eax
  int v54; // eax
  float v55; // xmm6_4
  float v56; // xmm7_4
  float v57; // xmm0_4
  int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rbx
  int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // [rsp+20h] [rbp-59h]
  void *v64; // [rsp+28h] [rbp-51h]
  unsigned int v65; // [rsp+30h] [rbp-49h]
  __int128 v66; // [rsp+38h] [rbp-41h] BYREF
  __int64 v67; // [rsp+48h] [rbp-31h]
  int v68; // [rsp+50h] [rbp-29h]
  __m128 v69; // [rsp+60h] [rbp-19h] BYREF
  signed __int64 v70; // [rsp+70h] [rbp-9h]
  char *v71; // [rsp+B0h] [rbp+37h]

  v6 = *((_DWORD *)this + 88);
  if ( v6 )
  {
    v8 = 0;
    v69 = *(__m128 *)(*((_QWORD *)this + 46) + 16LL * (unsigned int)(v6 - 1));
  }
  else
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0x1290u, 0LL);
  }
  v71 = v5;
  switch ( v69.m128_i32[0] )
  {
    case 9:
      v11 = *((_DWORD *)this + 88);
      if ( v11 )
        *((_DWORD *)this + 88) = v11 - 1;
      v12 = *((_DWORD *)this + 212);
      if ( v12 )
      {
        v13 = (unsigned int)(v12 - 1);
        v14 = 28 * v13;
        *((_DWORD *)this + 212) = v13;
        v15 = *((_QWORD *)this + 108);
        v16 = *(_OWORD *)(v14 + v15);
        v17 = *(_QWORD *)(v14 + v15 + 16);
        LODWORD(v15) = *(_DWORD *)(v14 + v15 + 24);
        v66 = v16;
        v68 = v15;
        v67 = v17;
      }
      *((_BYTE *)this + 336) = v68;
      *(_QWORD *)((char *)this + 316) = v66;
      *((_DWORD *)this + 86) = DWORD2(v66);
      *((_DWORD *)this + 81) = HIDWORD(v66);
      *((_QWORD *)this + 41) = v67;
      break;
    case 0xB:
      v19 = *((_DWORD *)this + 88);
      if ( v19 )
        *((_DWORD *)this + 88) = v19 - 1;
      --*((_DWORD *)this + 202);
      break;
    case 5:
      v20 = *((_DWORD *)this + 88);
      if ( v20 )
      {
        v21 = (unsigned int)(v20 - 1);
        *((_DWORD *)this + 88) = v21;
        v69 = *(__m128 *)(*((_QWORD *)this + 46) + 16 * v21);
      }
      if ( v69.m128_u64[1] )
      {
        v22 = *((_DWORD *)this + 112);
        if ( v22 )
          *((_DWORD *)this + 112) = v22 - 1;
      }
      v23 = *((_DWORD *)this + 96);
      if ( v23 )
        *((_DWORD *)this + 96) = v23 - 1;
      v24 = *((_DWORD *)this + 104);
      if ( v24 )
        *((_DWORD *)this + 104) = v24 - 1;
      break;
    default:
      switch ( v69.m128_i32[0] )
      {
        case 1:
          v9 = *((_DWORD *)this + 88);
          if ( v9 )
            *((_DWORD *)this + 88) = v9 - 1;
          v10 = *((_DWORD *)this + 792);
          if ( v10 )
            *((_DWORD *)this + 792) = v10 - 1;
          --*(_QWORD *)(*((_QWORD *)this + 111) - 184LL);
          *((_BYTE *)this + 8153) = 1;
          return v8;
        case 2:
          v5 = (char *)this - 16;
          v33 = *((_DWORD *)this + 88);
          if ( v33 )
            *((_DWORD *)v5 + 92) = v33 - 1;
          v34 = *((_QWORD *)v5 + 346);
          v4 = v5 + 896;
          v35 = (__int64 *)(v5 + 904);
          v65 = *(_DWORD *)(v34 - 24);
          if ( *(_BYTE *)(v34 - 4) )
          {
            v60 = *v35;
            v3 = 0x84BDA12F684BDA13uLL;
            CCpuClipAntialiasSinkContext::FlushDrawList(
              *(CCpuClipAntialiasSinkContext **)(*v35 - 16),
              (struct CDrawingContext *)v5,
              1749801491
            * ((__int64)(*(_QWORD *)(*(_QWORD *)(*v35 - 16) + 24LL) - *(_QWORD *)(*(_QWORD *)(*v35 - 16) + 16LL)) >> 4)
            - 1);
            detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
              *(_QWORD *)(v60 - 16) + 16LL,
              0x84BDA12F684BDA13uLL
            * ((*(_QWORD *)(*(_QWORD *)(v60 - 16) + 24LL) - *(_QWORD *)(*(_QWORD *)(v60 - 16) + 16LL) - 432LL) >> 4),
              1LL);
          }
          v36 = *((_QWORD *)v5 + 345);
          v37 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v5 + 346) - v36 - 40) >> 3);
          v38 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v5 + 346) - v36) >> 3);
          v39 = v37 + 1;
          if ( v37 + 1 > v38 )
            goto LABEL_103;
          v3 = v36 + 8 * ((__int64)(*((_QWORD *)v5 + 346) - v36) >> 3);
          if ( v37 + 1 == v38 )
            goto LABEL_45;
          goto LABEL_104;
        case 3:
          CDrawingContext::PopClipBounds((CDrawingContext *)((char *)this - 16), (__int64)_ImageBase, a3);
          return v8;
        case 4:
          v25 = *((_DWORD *)this + 88);
          if ( v25 )
            *((_DWORD *)this + 88) = v25 - 1;
          v26 = *((_QWORD *)this + 110);
          v27 = 0xD37A6F4DE9BD37A7uLL * ((*((_QWORD *)this + 111) - v26 - 184) >> 3);
          v28 = 0xD37A6F4DE9BD37A7uLL * ((*((_QWORD *)this + 111) - v26) >> 3);
          v29 = v27 + 1;
          if ( v27 + 1 <= v28 )
          {
            v30 = v26 + 8 * ((*((_QWORD *)this + 111) - v26) >> 3);
            if ( v29 == v28 )
              goto LABEL_34;
            if ( !v27 || v26 && v27 >= 0 && v28 >= v27 )
            {
              v69.m128_u64[0] = *((_QWORD *)this + 110);
              v69.m128_u64[1] = v28;
              v70 = v27;
              std::move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
                &v66,
                v26 + 184 * v29,
                v30,
                &v69,
                v63,
                v64);
LABEL_34:
              v31 = v30 - 184;
              do
              {
                v32 = *(_QWORD *)(v31 + 168);
                if ( v32 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
                v31 += 184LL;
              }
              while ( v31 != v30 );
              *((_QWORD *)this + 111) -= 184LL;
              return v8;
            }
LABEL_110:
            _invalid_parameter_noinfo_noreturn();
          }
LABEL_103:
          std::_Xoverflow_error("overflow");
          __debugbreak();
LABEL_104:
          if ( v37 && (!v36 || v37 < 0 || v38 < v37) )
            goto LABEL_110;
          v69.m128_u64[0] = v36;
          v69.m128_u64[1] = v38;
          v70 = v37;
          std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
            &v66,
            v36 + 40 * v39,
            v3,
            &v69,
            v63,
            v64,
            v65);
LABEL_45:
          v40 = v3 - 40;
          do
          {
            if ( *(_BYTE *)(v40 + 8) && *(_QWORD *)v40 )
              (***(void (__fastcall ****)(_QWORD, __int64))v40)(*(_QWORD *)v40, 1LL);
            *(_QWORD *)v40 = 0LL;
            *(_BYTE *)(v40 + 8) = 0;
            v40 += 40LL;
          }
          while ( v40 != v3 );
          v41 = (__int64 *)(v4 + 8);
          *((_QWORD *)v4 + 234) -= 40LL;
          --*(_QWORD *)(*((_QWORD *)v4 + 1) - 176LL);
          v42 = *((_QWORD *)v4 + 1);
          if ( v42 != *(_QWORD *)v4 && *(_QWORD *)(v42 - 176) )
            v43 = (unsigned __int64)v65 > *(_QWORD *)(*((_QWORD *)v4 + 234) - 24LL);
          else
            v43 = v65 != 0;
          v44 = *((_DWORD *)v4 + 580);
          if ( v44 )
            *((_DWORD *)v4 + 580) = v44 - 1;
          --*(_QWORD *)(v42 - 168);
          if ( !v43 )
            return v8;
          if ( v5[8170]
            && (!CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)v4)
             || !*(_QWORD *)(*((_QWORD *)v4 + 234) - 24LL)) )
          {
            v5[8170] = 0;
          }
          v45 = *v41;
          v46 = *v41;
          v69 = 0LL;
          v47 = v46 - *(_QWORD *)v4;
          if ( v47 && *(_QWORD *)(v45 - 184) )
          {
            v48 = *((_DWORD *)v4 + 572);
            if ( v48 )
            {
              v69 = *(__m128 *)(*((_QWORD *)v4 + 288) + 16LL * (unsigned int)(v48 - 1));
              v49 = v69.m128_f32[2];
              v50 = v69.m128_f32[1];
              v51 = v69.m128_f32[0];
              LODWORD(v52) = _mm_shuffle_ps(v69, v69, 255).m128_u32[0];
            }
            else
            {
              v51 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              v50 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
              v49 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
              v52 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            }
          }
          else
          {
            v51 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v50 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v49 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v52 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            if ( !v47 )
            {
LABEL_62:
              if ( v49 > v51
                && v52 > v50
                && (v51 < *((float *)v5 + 57)
                 || v50 < *((float *)v5 + 58)
                 || *((float *)v5 + 59) < v49
                 || *((float *)v5 + 60) < v52) )
              {
                v5[8169] = 1;
              }
              return v8;
            }
          }
          if ( *(_QWORD *)(v45 - 168) )
          {
            v69 = 0LL;
            CBaseClipStack::Top(v4 + 2320, &v69);
            if ( v69.m128_f32[0] > v51 )
              v51 = v69.m128_f32[0];
            v55 = v50;
            if ( v69.m128_f32[1] > v50 )
            {
              v50 = v69.m128_f32[1];
              v55 = v69.m128_f32[1];
            }
            v56 = v49;
            if ( v49 > v69.m128_f32[2] )
            {
              v49 = v69.m128_f32[2];
              v56 = v69.m128_f32[2];
            }
            v57 = v52;
            if ( v52 > v69.m128_f32[3] )
            {
              v52 = v69.m128_f32[3];
              v57 = v69.m128_f32[3];
            }
            if ( v56 <= v51 || v57 <= v55 )
            {
              v51 = 0.0;
              v52 = 0.0;
              v49 = 0.0;
              v50 = 0.0;
            }
          }
          goto LABEL_62;
        case 6:
        case 7:
          v58 = CDrawingContext::PopLayer((CDrawingContext *)((char *)this - 16));
          v8 = v58;
          if ( v58 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x12A4u, 0LL);
          return v8;
        case 8:
          v53 = *((_DWORD *)this + 88);
          if ( v53 )
            *((_DWORD *)this + 88) = v53 - 1;
          v54 = *((_DWORD *)this + 808);
          if ( v54 )
            *((_DWORD *)this + 808) = v54 - 1;
          return v8;
        case 0xA:
          v61 = CDrawingContext::PopLight((CDrawingContext *)((char *)this - 16));
          v8 = v61;
          if ( v61 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x12B8u, 0LL);
          return v8;
        default:
          return v8;
      }
  }
  return v8;
}
