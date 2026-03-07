__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        unsigned __int8 a4,
        bool *a5)
{
  __int64 *v8; // rsi
  __int64 v9; // rsi
  struct CSuperWetInkManager::SuperWetStroke *v10; // rax
  struct CSuperWetInkManager::SuperWetStroke *v11; // rdi
  _QWORD *v12; // rbp
  CVisual *v13; // rax
  __int64 **TreeData; // rax
  __m128 v15; // xmm3
  unsigned __int32 v16; // xmm0_4
  unsigned __int32 v17; // xmm1_4
  _BYTE v19[16]; // [rsp+20h] [rbp-58h] BYREF

  *a5 = 0;
  if ( a2 == *((struct CSuperWetSource **)this + 1) )
  {
    v8 = (__int64 *)*((_QWORD *)a3 + 6);
    if ( v8 )
    {
      v9 = *v8;
      if ( v9 )
      {
        v10 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
        v11 = v10;
        v12 = (_QWORD *)((char *)v10 + 8);
        if ( !*((_QWORD *)v10 + 1) )
          wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::operator=((__int64 *)v10 + 1, v9);
        if ( *v12 == v9 )
        {
          if ( TryFillRenderState(a3, a4, 0, (__int64)v11 + 16) )
          {
            v13 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24);
            TreeData = CVisual::FindTreeData(v13, *((const struct CVisualTree **)a3 + 1007));
            if ( TreeData )
            {
              v15 = (__m128)_mm_loadu_si128((const __m128i *)CTreeData::GetSuperWetInkClip(TreeData, v19));
              v16 = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
              v17 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
            }
            else
            {
              v16 = _mm_shuffle_ps(
                      (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
                      (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
                      85).m128_u32[0];
              v15 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              v17 = _mm_shuffle_ps(
                      (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
                      (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
                      170).m128_u32[0];
            }
            *((_DWORD *)v11 + 18) = v15.m128_i32[0];
            *((_DWORD *)v11 + 19) = v16;
            *((_DWORD *)v11 + 20) = v17;
            *((_DWORD *)v11 + 21) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
            if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v11, a5) < 0 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
                McTemplateU0q_EventWriteTransfer(
                  (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
                  (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
                  18LL);
              CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
              *a5 = 0;
            }
          }
          else
          {
            CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
          }
        }
      }
    }
  }
  return 0LL;
}
