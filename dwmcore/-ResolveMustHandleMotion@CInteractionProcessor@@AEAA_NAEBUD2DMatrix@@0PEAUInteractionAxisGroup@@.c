unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  unsigned __int8 v9; // bl
  int RailsEnabled; // r13d
  unsigned __int8 v11; // al
  int v12; // r12d
  int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // xmm0_8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+D8h] [rbp-80h] BYREF
  int v22; // [rsp+DCh] [rbp-7Ch] BYREF
  int v23; // [rsp+E0h] [rbp-78h] BYREF
  int v24; // [rsp+E4h] [rbp-74h] BYREF
  int v25; // [rsp+E8h] [rbp-70h] BYREF
  int v26; // [rsp+ECh] [rbp-6Ch] BYREF
  int v27; // [rsp+F0h] [rbp-68h] BYREF
  int v28; // [rsp+F4h] [rbp-64h] BYREF
  int v29; // [rsp+F8h] [rbp-60h] BYREF
  int v30; // [rsp+FCh] [rbp-5Ch] BYREF
  int v31; // [rsp+100h] [rbp-58h] BYREF
  int v32; // [rsp+104h] [rbp-54h] BYREF
  int v33; // [rsp+108h] [rbp-50h] BYREF
  int v34; // [rsp+10Ch] [rbp-4Ch] BYREF
  enum InteractionState *v35; // [rsp+110h] [rbp-48h] BYREF
  struct D2DMatrix *v36; // [rsp+118h] [rbp-40h] BYREF
  __int64 v37; // [rsp+120h] [rbp-38h] BYREF
  __int64 v38; // [rsp+128h] [rbp-30h] BYREF
  __int64 v39; // [rsp+130h] [rbp-28h] BYREF
  CInteractionProcessor *v40; // [rsp+138h] [rbp-20h] BYREF
  int v41; // [rsp+140h] [rbp-18h]
  __int64 v42; // [rsp+148h] [rbp-10h] BYREF
  int v43; // [rsp+150h] [rbp-8h]

  v36 = a2;
  v35 = a6;
  v9 = 1;
  if ( *((_BYTE *)a4 + 1) )
    v9 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
    v9 &= -(*(_BYTE *)a5 != 0);
  if ( *((_BYTE *)a4 + 2) && *((float *)a5 + 3) == 0.0 )
    v9 &= -((*((_BYTE *)this + 808) & 4) != 0);
  RailsEnabled = (unsigned __int8)CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v11 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  v12 = v11;
  if ( !(_BYTE)RailsEnabled && !v11 )
  {
LABEL_13:
    if ( v9 )
      goto LABEL_15;
LABEL_14:
    *(_DWORD *)v35 = *((_DWORD *)this + 196);
    *(_WORD *)a5 = 0;
    v43 = 0;
    *(_QWORD *)((char *)a5 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)a5 + 3) = 0;
    goto LABEL_15;
  }
  v13 = *((_DWORD *)a5 + 3);
  v40 = *(CInteractionProcessor **)((char *)a5 + 4);
  v41 = v13;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v40, (const struct D2DVector3 *)&v40, a3);
  v14 = 0;
  if ( !v9 )
    goto LABEL_14;
  while ( v14 < *((_DWORD *)a4 + 8) )
  {
    v15 = *((_QWORD *)a4 + 1);
    v16 = *(_QWORD *)(v15 + 16LL * v14);
    LODWORD(v15) = *(_DWORD *)(v15 + 16LL * v14 + 8);
    v42 = v16;
    v43 = v15;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v42, (const struct D2DVector3 *)&v42, v36);
    ++v14;
    v9 = anonymous_namespace_::VectorInsideAngleThreshold(&v40, &v42);
    if ( !v9 )
      goto LABEL_13;
  }
LABEL_15:
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v21 = v41;
    v22 = HIDWORD(v40);
    v23 = (int)v40;
    v24 = *((_DWORD *)a5 + 3);
    v25 = *((_DWORD *)a5 + 2);
    v26 = *((_DWORD *)a5 + 1);
    v27 = *((unsigned __int8 *)a5 + 1);
    v28 = *(unsigned __int8 *)a5;
    v29 = *((_DWORD *)a4 + 8);
    v30 = *((unsigned __int8 *)a4 + 2);
    v31 = *((unsigned __int8 *)a4 + 1);
    v32 = *(unsigned __int8 *)a4;
    LODWORD(v35) = v9;
    LODWORD(v36) = *((_DWORD *)this + 197);
    v37 = *((_QWORD *)this + 60);
    v38 = *((_QWORD *)this + 40);
    v39 = *((_QWORD *)this + 20);
    v42 = *(_QWORD *)this;
    v33 = v12;
    v34 = RailsEnabled;
    v40 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      byte_18037B65B,
      v18,
      v19,
      (__int64)&v40,
      (__int64)&v42,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  return v9;
}
