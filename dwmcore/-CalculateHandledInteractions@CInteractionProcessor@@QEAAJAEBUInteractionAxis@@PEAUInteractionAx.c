__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int128 *a2,
        _BYTE *a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  int v11; // r12d
  char v12; // r13
  int v13; // eax
  struct _D3DMATRIX *v14; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  int v16; // r8d
  int v17; // ecx
  __int128 v18; // xmm1
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  unsigned __int8 v26; // al
  unsigned __int8 v27; // r15
  unsigned __int8 v28; // si
  unsigned __int8 v29; // r14
  int v30; // edi
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // ecx
  __int64 v34; // rcx
  _DWORD *v35; // rax
  __int128 v36; // xmm0
  _DWORD v38[4]; // [rsp+C0h] [rbp-80h] BYREF
  struct _D3DMATRIX v39; // [rsp+D0h] [rbp-70h] BYREF
  int v40; // [rsp+110h] [rbp-30h] BYREF
  int v41; // [rsp+114h] [rbp-2Ch] BYREF
  int v42; // [rsp+118h] [rbp-28h] BYREF
  int v43; // [rsp+11Ch] [rbp-24h] BYREF
  int v44; // [rsp+120h] [rbp-20h] BYREF
  int v45; // [rsp+124h] [rbp-1Ch] BYREF
  int v46; // [rsp+128h] [rbp-18h] BYREF
  int v47; // [rsp+12Ch] [rbp-14h] BYREF
  int v48; // [rsp+130h] [rbp-10h] BYREF
  int v49; // [rsp+134h] [rbp-Ch] BYREF
  int v50; // [rsp+138h] [rbp-8h] BYREF
  int v51; // [rsp+13Ch] [rbp-4h] BYREF
  int v52; // [rsp+140h] [rbp+0h] BYREF
  int v53; // [rsp+144h] [rbp+4h] BYREF
  int v54; // [rsp+148h] [rbp+8h] BYREF
  int v55; // [rsp+14Ch] [rbp+Ch] BYREF
  struct InteractionAxisGroup *v56; // [rsp+150h] [rbp+10h] BYREF
  CInteractionProcessor *v57; // [rsp+158h] [rbp+18h] BYREF
  __int64 v58; // [rsp+160h] [rbp+20h]
  _OWORD *v59; // [rsp+168h] [rbp+28h]
  struct _D3DMATRIX v60; // [rsp+170h] [rbp+30h] BYREF
  __int128 v61; // [rsp+1B0h] [rbp+70h] BYREF
  __int128 v62; // [rsp+1C0h] [rbp+80h] BYREF
  __int128 v63; // [rsp+1D0h] [rbp+90h]
  __int128 v64; // [rsp+1E0h] [rbp+A0h]
  __int128 v65; // [rsp+1F0h] [rbp+B0h]

  v11 = 0;
  v58 = a7;
  v12 = 0;
  v59 = a8;
  v13 = *((_DWORD *)this + 196);
  v56 = a4;
  v38[0] = v13;
  v61 = 0uLL;
  v39 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v60);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v14, &v60);
  v17 = *((_DWORD *)this + 197);
  v62 = *(_OWORD *)&D3DMatrix->_11;
  v63 = *(_OWORD *)&D3DMatrix->_21;
  v64 = *(_OWORD *)&D3DMatrix->_31;
  v18 = *(_OWORD *)&D3DMatrix->_41;
  v60 = (struct _D3DMATRIX)zmmword_180374E50;
  v65 = v18;
  v19 = v17 - 2;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          v24 = *((_DWORD *)this + 160) == -805306369;
          if ( *((_DWORD *)this + 160) == -805306369 )
            LOWORD(v61) = 257;
          v25 = v16;
          v39._44 = 1.0;
          LOBYTE(v25) = !v24;
          v39._33 = 1.0;
          LODWORD(v39._43) &= v16;
          LODWORD(v39._42) &= v16;
          LODWORD(v39._41) &= v16;
          LODWORD(v39._34) &= v16;
          LODWORD(v39._32) &= v16;
          LODWORD(v39._31) &= v16;
          LODWORD(v39._24) &= v16;
          LODWORD(v39._23) &= v16;
          LODWORD(v39._21) &= v16;
          LODWORD(v39._14) &= v16;
          LODWORD(v39._13) &= v16;
          LODWORD(v39._12) &= v16;
          DWORD2(v65) &= v16;
          DWORD1(v65) &= v16;
          LODWORD(v65) = v16 & v65;
          HIDWORD(v64) &= v16;
          DWORD1(v64) &= v16;
          LODWORD(v64) = v16 & v64;
          HIDWORD(v63) &= v16;
          DWORD2(v63) &= v16;
          LODWORD(v63) = v16 & v63;
          HIDWORD(v62) &= v16;
          DWORD2(v62) &= v16;
          DWORD1(v62) &= v16;
          v38[0] = v25 + 2;
          v39._22 = 1.0;
          v39._11 = 1.0;
          HIDWORD(v65) = 1065353216;
          DWORD2(v64) = 1065353216;
          DWORD1(v63) = 1065353216;
          LODWORD(v62) = 1065353216;
          goto LABEL_17;
        }
        if ( v22 != 1 )
          goto LABEL_17;
        v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 480,
                a2,
                a3,
                a6,
                v38,
                &v61,
                &v39,
                (__int64)&v62,
                (__int64)&v60);
      }
      else
      {
        if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
        {
          v12 = 1;
          *(_QWORD *)&v39._42 = 0LL;
          v39._41 = 0.0;
          *(_QWORD *)&v39._31 = 0LL;
          *(_OWORD *)&v39._21 = 0x3F80000000000000uLL;
          *(_QWORD *)((char *)&v65 + 4) = 0LL;
          LODWORD(v65) = 0;
          *(_QWORD *)&v64 = 0LL;
          v63 = 0x3F80000000000000uLL;
          v38[0] = 2;
          LOWORD(v61) = 257;
          v39._44 = 1.0;
          *(_QWORD *)&v39._33 = 1065353216LL;
          *(_OWORD *)&v39._11 = 0x3F800000uLL;
          HIDWORD(v65) = 1065353216;
          *((_QWORD *)&v64 + 1) = 1065353216LL;
          v62 = 0x3F800000uLL;
          goto LABEL_16;
        }
        v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 320,
                a2,
                a3,
                a6,
                v38,
                &v61,
                &v39,
                (__int64)&v62,
                (__int64)&v60);
      }
    }
    else
    {
      v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              (__int64)this,
              (_BYTE *)this + 160,
              a2,
              a3,
              a6,
              v38,
              &v61,
              &v39,
              (__int64)&v62,
              (__int64)&v60);
    }
  }
  else
  {
    v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            a2,
            a3,
            a6,
            v38,
            &v61,
            &v39,
            (__int64)&v62,
            (__int64)&v60);
  }
  v11 = v23;
LABEL_16:
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_17:
  v26 = CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v61, v38);
  v27 = v26;
  if ( v12 )
  {
    if ( v26 )
      goto LABEL_33;
  }
  else
  {
    if ( v26
      && CInteractionProcessor::ResolveMustHandleMotion(
           this,
           (const struct D2DMatrix *)&v62,
           (const struct D2DMatrix *)&v60,
           v56,
           (struct InteractionAxis *)&v61,
           (enum InteractionState *)v38) )
    {
      v27 = 1;
LABEL_33:
      v28 = v61;
      v29 = BYTE1(v61);
      if ( *((_BYTE *)this + 1248) )
        v28 = 1;
      if ( *((_BYTE *)this + 1249) )
        v29 = 1;
      LOBYTE(v61) = v28;
      BYTE1(v61) = v29;
      if ( *((float *)&v61 + 1) != 0.0 )
        *((_BYTE *)this + 808) |= 1u;
      if ( *((float *)&v61 + 2) != 0.0 )
        *((_BYTE *)this + 808) |= 2u;
      if ( *((float *)&v61 + 3) != 0.0 )
        *((_BYTE *)this + 808) |= 4u;
      if ( v28 || v29 )
        *((_BYTE *)this + 808) |= 8u;
      goto LABEL_23;
    }
    v27 = 0;
  }
  v29 = BYTE1(v61);
  v28 = v61;
LABEL_23:
  v30 = v38[0];
  if ( v38[0] == 3
    && (*((_BYTE *)this + 1264) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 0) )
  {
    v30 = 4;
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v33 = *((unsigned __int8 *)this + 808);
    v38[0] = *((_DWORD *)this + 315);
    v40 = *((_DWORD *)this + 314);
    v41 = *((_DWORD *)this + 313);
    v42 = *((unsigned __int8 *)this + 1249);
    v43 = *((unsigned __int8 *)this + 1248);
    v44 = HIDWORD(v61);
    v45 = DWORD2(v61);
    v46 = DWORD1(v61);
    v47 = v29;
    v48 = v28;
    v49 = v27;
    v54 = v30;
    v50 = (v33 >> 3) & 1;
    v57 = this;
    v51 = (v33 >> 2) & 1;
    v52 = (v33 >> 1) & 1;
    v34 = v33 & 1;
    v55 = *((_DWORD *)this + 196);
    LODWORD(v56) = *((_DWORD *)this + 197);
    v53 = v34;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v34,
      byte_18037B3F0,
      v31,
      v32,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)v38);
  }
  v35 = (_DWORD *)v58;
  v36 = v61;
  *((_DWORD *)this + 196) = v30;
  *v35 = v30;
  *v59 = v36;
  return (unsigned int)v11;
}
