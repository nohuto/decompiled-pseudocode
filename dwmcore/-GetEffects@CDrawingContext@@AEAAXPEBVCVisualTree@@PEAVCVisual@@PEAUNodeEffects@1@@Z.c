void __fastcall CDrawingContext::GetEffects(
        CDrawingContext *this,
        struct CVisual **a2,
        struct CVisual *a3,
        struct CDrawingContext::NodeEffects *a4)
{
  __int64 v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm7_4
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm1_4
  _DWORD *v14; // r8
  float v15; // xmm1_4
  float v16; // edx
  float *v17; // rcx
  struct CEffect *EffectInternal; // r14
  struct CEffect *v19; // rax
  __int64 v20; // rcx
  _BYTE *v21; // rdx
  _QWORD *v22; // r9
  unsigned int i; // eax
  void (__fastcall ***v24)(_QWORD, _BYTE *); // rcx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  int v26; // r10d
  _BYTE v28[16]; // [rsp+28h] [rbp-60h] BYREF

  *(_QWORD *)a4 = a3;
  if ( a3 == a2[8] )
  {
    v9 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v7 = *((_QWORD *)a3 + 28);
    if ( (*(_DWORD *)(v7 + 4) & 0x8000000) != 0 )
    {
      v16 = *(float *)(v7 + 12);
      v17 = (float *)(v7 + 12);
      if ( (LODWORD(v16) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v17 = (float *)((char *)v17 + (LODWORD(v16) & 0xFFFFFF) + 4);
          v16 = *v17;
        }
        while ( (*(_DWORD *)v17 & 0x7F000000) != 0x5000000 );
      }
      v8 = v17[1];
    }
    else
    {
      v8 = *(float *)&FLOAT_1_0;
    }
    v9 = fminf(1.0, fmaxf(v8, 0.0));
  }
  *((float *)a4 + 11) = v9;
  v10 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)a3 + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(a3);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           58LL) )
    {
      v10 = *((float *)EffectInternal + 20);
    }
  }
  v11 = *((_DWORD *)this + 812);
  v12 = fminf(1.0, fmaxf(v10, 0.0));
  if ( v11 )
    v13 = *(float *)(*((_QWORD *)this + 408) + 4LL * (unsigned int)(v11 - 1));
  else
    v13 = *(float *)&FLOAT_1_0;
  *((float *)a4 + 8) = v12 * v13;
  v14 = (_DWORD *)*((_QWORD *)a3 + 29);
  if ( (*v14 & 0x2000000) != 0 )
  {
    v20 = (unsigned int)v14[1];
    v21 = v14 + 2;
    v22 = 0LL;
    for ( i = 0; i < (unsigned int)v20; ++v21 )
    {
      if ( *v21 == 7 )
        break;
      ++i;
    }
    if ( i < (unsigned int)v20 )
      v22 = (_QWORD *)((char *)v14 + v20 + 8LL * i - (((_BYTE)v20 + 15) & 7) + 15);
    if ( *v22 )
      *((_BYTE *)a4 + 193) = 1;
  }
  if ( (**((_DWORD **)a3 + 29) & 0x400000) != 0 )
  {
    v19 = CVisual::GetEffectInternal(a3);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v19 + 56LL))(v19, 61LL) )
      *((_BYTE *)a4 + 194) = 1;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a3 + 28) + 4LL) & 0x4000000) != 0 )
  {
    v24 = (void (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 4)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
    (**v24)(v24, v28);
    ColorSpace = CVisual::GetColorSpace(a3);
    if ( ColorSpace != v26 )
      *((_BYTE *)a4 + 196) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 93LL) )
    *((_BYTE *)a4 + 195) = CDrawingContext::LayerVisualHasTreeEffect(this, a3);
  v15 = *((float *)a4 + 8);
  if ( v15 < 1.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( (*((_DWORD *)a3 + 24) & 0x20000) == 0 && *((_DWORD *)this + 85) != 4
      || *((_DWORD *)this + 86) == 1
      || *((_DWORD *)a3 + 27) == 1 )
    {
      *((_DWORD *)a4 + 9) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 9) = 2;
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
      {
        if ( (unsigned int)CPtrArrayBase::GetCount((struct CVisual *)((char *)a3 + 80)) )
          *((_DWORD *)a4 + 47) |= 0x20u;
        if ( (*((_DWORD *)a3 + 24) & 0x20000) != 0 )
          *((_DWORD *)a4 + 47) |= 0x40u;
      }
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)a3 + 28) + 4LL) & 0x2000000) != 0 )
    *((_DWORD *)a4 + 10) = CVisual::GetResampleMode(a3);
  if ( *((_BYTE *)a4 + 194) || *((_BYTE *)a4 + 195) || *((_BYTE *)a4 + 196) || *((_DWORD *)a4 + 10) )
    *((_DWORD *)a4 + 46) = 3;
  if ( *((_BYTE *)a4 + 195) )
    *((_DWORD *)a4 + 46) = 4;
}
