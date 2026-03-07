void __fastcall CWindowNode::NotifyDirtySurface(CWindowNode *this, FastRegion::Internal::CRgnData **a2, char a3)
{
  float v5; // xmm9_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  int v9; // edx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  int v12; // r9d
  unsigned int v13; // r10d
  int v14; // ecx
  int v15; // eax
  FastRegion::Internal::CRgnData *v16; // rcx
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  __int64 v21; // rdx
  int v22; // r9d
  FastRegion::Internal::CRgnData *v23; // rcx
  __int64 v24; // rdx
  int v25; // [rsp+30h] [rbp-61h]
  _BYTE v26[8]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-41h]
  int *v28; // [rsp+58h] [rbp-39h]
  FastRegion::Internal::CRgnData *v29; // [rsp+60h] [rbp-31h]
  int v30; // [rsp+68h] [rbp-29h]
  __int128 v31; // [rsp+78h] [rbp-19h] BYREF
  float v32; // [rsp+88h] [rbp-9h] BYREF
  float v33; // [rsp+8Ch] [rbp-5h]
  float v34; // [rsp+90h] [rbp-1h]
  float v35; // [rsp+94h] [rbp+3h]

  if ( *((_BYTE *)this + 890) )
  {
    *((_BYTE *)this + 891) = 0;
  }
  else if ( (!*((_BYTE *)this + 889) || !a3) && (*((_BYTE *)this + 96) & 4) == 0 )
  {
    v5 = (float)*((int *)this + 182);
    v6 = (float)*((int *)this + 183);
    v7 = (float)*((int *)this + 184);
    v8 = (float)*((int *)this + 185);
    FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v26);
    while ( (unsigned __int64)v28 < v27 )
    {
      v31 = 0LL;
      v9 = *v28;
      DWORD1(v31) = *v28;
      v10 = v28[2];
      v11 = 2 * v30;
      v12 = *((_DWORD *)v29 + v11);
      LODWORD(v31) = v12;
      v13 = *((_DWORD *)v29 + v11 + 1);
      *((_QWORD *)&v31 + 1) = __PAIR64__(v10, v13);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0xnn_EventWriteTransfer(
          v11,
          v9,
          *((_QWORD *)this + 88),
          v12,
          (__int64)&v31,
          v25,
          (__int64)this + 760);
        v10 = HIDWORD(v31);
        v13 = DWORD2(v31);
        v9 = DWORD1(v31);
        v12 = v31;
      }
      v14 = *((_DWORD *)this + 183);
      v15 = *((_DWORD *)this + 182);
      DWORD1(v31) = v14 + v9;
      LODWORD(v31) = v15 + v12;
      DWORD2(v31) = v15 + v13;
      HIDWORD(v31) = v14 + v10;
      v33 = (float)(v14 + v9);
      v32 = (float)(v15 + v12);
      v35 = (float)(int)(v14 + v10);
      v34 = (float)(int)(v15 + v13);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v32, 0.5, 0.5);
      v17 = v32;
      if ( v5 > v32 )
      {
        v17 = v5;
        v32 = v5;
      }
      v18 = v33;
      if ( v6 > v33 )
      {
        v33 = v6;
        v18 = v6;
      }
      v19 = v34;
      if ( v34 > v7 )
      {
        v34 = v7;
        v19 = v7;
      }
      v20 = v35;
      if ( v35 > v8 )
      {
        v35 = v8;
        v20 = v8;
      }
      if ( v19 <= v17 || v20 <= v18 )
      {
        v35 = 0.0;
        v34 = 0.0;
        v33 = 0.0;
        v32 = 0.0;
      }
      else
      {
        CVisual::AddAdditionalDirtyRect(this);
      }
      FastRegion::Internal::CRgnData::StepIterator(v16, (struct FastRegion::CRegion::Iterator *)v26);
    }
    goto LABEL_21;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v26);
    while ( (unsigned __int64)v28 < v27 )
    {
      v31 = 0LL;
      DWORD1(v31) = *v28;
      v23 = v29;
      HIDWORD(v31) = v28[2];
      v24 = 2 * v30;
      LODWORD(v31) = *((_DWORD *)v29 + v24);
      DWORD2(v31) = *((_DWORD *)v29 + v24 + 1);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xnn_EventWriteTransfer(
          (_DWORD)v29,
          v24,
          *((_QWORD *)this + 88),
          v22,
          (__int64)&v31,
          v25,
          (__int64)this + 760);
      FastRegion::Internal::CRgnData::StepIterator(v23, (struct FastRegion::CRegion::Iterator *)v26);
    }
  }
LABEL_21:
  if ( !CWindowNode::ProcessReadyGdiSpriteBitmaps(this) )
  {
    if ( *((_BYTE *)this + 890) )
    {
      v21 = 8LL;
      goto LABEL_29;
    }
    if ( *((_BYTE *)this + 889) && a3 )
    {
      *((_BYTE *)this + 888) = 0;
      v21 = 5LL;
LABEL_29:
      CVisual::PropagateFlags(this, v21);
    }
  }
}
