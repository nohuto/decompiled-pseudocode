/*
 * XREFs of ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802398F8
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023AC9C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800E197C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333@Z @ 0x180238344 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U_ea_180238344.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x180238750 (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 *     ??4?$ComPtr@VCVector3Force@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVector3Force@@@Z @ 0x1802388FC (--4-$ComPtr@VCVector3Force@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVector3Force@@@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1802391F0 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18027B7C0 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::InitializeForces(CNaturalAnimation *this)
{
  int v1; // eax
  const struct D2DVector3 *v3; // r15
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  float v7; // eax
  float v8; // eax
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  float v12; // eax
  float v13; // eax
  _OWORD *v14; // r12
  float v15; // xmm1_4
  float v16; // xmm0_4
  const struct D2DMatrix *v17; // r8
  struct IAccelerator *v18; // rsi
  struct IAccelerator *v19; // rax
  struct IAccelerator *v20; // r14
  CVector3Force *v21; // rax
  __int64 v22; // rax
  int v23; // r9d
  float v24; // r10d
  __int64 v25; // rcx
  int v26; // r9d
  int v27; // r10d
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // [rsp+128h] [rbp-80h] BYREF
  int v32; // [rsp+12Ch] [rbp-7Ch] BYREF
  int v33; // [rsp+130h] [rbp-78h] BYREF
  int v34; // [rsp+134h] [rbp-74h] BYREF
  int v35; // [rsp+138h] [rbp-70h] BYREF
  int v36; // [rsp+13Ch] [rbp-6Ch] BYREF
  int v37; // [rsp+140h] [rbp-68h] BYREF
  int v38; // [rsp+144h] [rbp-64h] BYREF
  int v39; // [rsp+148h] [rbp-60h] BYREF
  int v40; // [rsp+14Ch] [rbp-5Ch] BYREF
  int v41; // [rsp+150h] [rbp-58h] BYREF
  int v42; // [rsp+154h] [rbp-54h] BYREF
  int v43; // [rsp+158h] [rbp-50h] BYREF
  int v44; // [rsp+15Ch] [rbp-4Ch] BYREF
  int v45; // [rsp+160h] [rbp-48h] BYREF
  int v46; // [rsp+164h] [rbp-44h] BYREF
  int v47; // [rsp+168h] [rbp-40h] BYREF
  int v48; // [rsp+16Ch] [rbp-3Ch] BYREF
  int v49; // [rsp+170h] [rbp-38h] BYREF
  int v50; // [rsp+174h] [rbp-34h] BYREF
  int v51; // [rsp+178h] [rbp-30h] BYREF
  int v52; // [rsp+17Ch] [rbp-2Ch] BYREF
  int v53; // [rsp+180h] [rbp-28h] BYREF
  int v54; // [rsp+184h] [rbp-24h] BYREF
  int v55; // [rsp+188h] [rbp-20h] BYREF
  int v56; // [rsp+18Ch] [rbp-1Ch] BYREF
  int v57; // [rsp+190h] [rbp-18h] BYREF
  int v58; // [rsp+194h] [rbp-14h] BYREF
  int v59; // [rsp+198h] [rbp-10h] BYREF
  int v60; // [rsp+19Ch] [rbp-Ch] BYREF
  int v61; // [rsp+1A0h] [rbp-8h] BYREF
  int TracingCookie; // [rsp+1A4h] [rbp-4h] BYREF
  __int64 v63; // [rsp+1A8h] [rbp+0h] BYREF
  float v64; // [rsp+1B0h] [rbp+8h]
  __int64 v65; // [rsp+1B8h] [rbp+10h] BYREF
  int v66; // [rsp+1C0h] [rbp+18h]
  void *retaddr; // [rsp+210h] [rbp+68h]

  v1 = *((_DWORD *)this + 38);
  if ( v1 == 18 )
  {
    v4 = (__m128)*((unsigned int *)this + 90);
    v5 = (__m128)*((unsigned int *)this + 85);
    v64 = *((float *)this + 86);
    v6 = (__m128)*((unsigned int *)this + 93);
    v7 = v64;
    v64 = 0.0;
    *((_QWORD *)this + 45) = _mm_unpacklo_ps(v4, v5).m128_u64[0];
    *((float *)this + 92) = v7;
    v8 = v64;
    *(_QWORD *)((char *)this + 372) = _mm_unpacklo_ps(v6, (__m128)0LL).m128_u64[0];
    *((float *)this + 95) = v8;
    goto LABEL_7;
  }
  if ( v1 == 35 )
  {
LABEL_7:
    v9 = (__m128)*((unsigned int *)this + 91);
    v3 = (CNaturalAnimation *)((char *)this + 372);
    v10 = (__m128)*((unsigned int *)this + 90);
    v64 = *((float *)this + 86);
    v11 = (__m128)*((unsigned int *)this + 93);
    v12 = v64;
    v64 = 0.0;
    *((_QWORD *)this + 45) = _mm_unpacklo_ps(v10, v9).m128_u64[0];
    v11.m128_u64[0] = _mm_unpacklo_ps(v11, (__m128)*((unsigned int *)this + 94)).m128_u64[0];
    *((float *)this + 92) = v12;
    v13 = v64;
    *(_QWORD *)((char *)this + 372) = v11.m128_u64[0];
    *((float *)this + 95) = v13;
    goto LABEL_8;
  }
  if ( v1 != 52 )
    ModuleFailFastForHRESULT(2147500037LL, retaddr);
  v3 = (CNaturalAnimation *)((char *)this + 372);
LABEL_8:
  CNaturalAnimation::GenerateVector3Basis(this);
  v14 = (_OWORD *)((char *)this + 460);
  v15 = *((float *)this + 85) - *((float *)this + 91);
  *(float *)&v63 = *((float *)this + 84) - *((float *)this + 90);
  v16 = *((float *)this + 86) - *((float *)this + 92);
  *((float *)&v63 + 1) = v15;
  v64 = v16;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v65,
    (const struct D2DVector3 *)&v63,
    (CNaturalAnimation *)((char *)this + 460));
  D3DXVec3TransformNormal((struct D2DVector3 *)&v63, v3, v17);
  v18 = (struct IAccelerator *)operator new(0x18uLL);
  if ( v18 )
  {
    *((_DWORD *)v18 + 2) = 0;
    *(_QWORD *)v18 = &CFrictionAccelerator::`vftable';
    *((_DWORD *)v18 + 4) = -1035468800;
    ((void (__fastcall *)(struct IAccelerator *))CFrictionAccelerator::`vftable')(v18);
  }
  v19 = (struct IAccelerator *)operator new(0x18uLL);
  v20 = v19;
  if ( v19 )
  {
    *((_DWORD *)v19 + 2) = 0;
    *(_QWORD *)v19 = &CFrictionAccelerator::`vftable';
    *((_DWORD *)v19 + 4) = -1035468800;
    ((void (__fastcall *)(struct IAccelerator *))CFrictionAccelerator::`vftable')(v19);
  }
  else
  {
    v20 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 32LL))(*((_QWORD *)this + 56));
  v21 = (CVector3Force *)operator new(0x168uLL);
  if ( v21 )
    v21 = CVector3Force::CVector3Force(v21, v18, v20, *((struct IAccelerator **)this + 56));
  Microsoft::WRL::ComPtr<CVector3Force>::operator=(
    (__int64 (__fastcall ****)(_QWORD))this + 55,
    (__int64 (__fastcall ***)(_QWORD))v21);
  v22 = *((_QWORD *)this + 55);
  v23 = v66;
  v24 = v64;
  *(_QWORD *)(v22 + 316) = v65;
  *(_QWORD *)(v22 + 328) = v63;
  *(float *)(v22 + 336) = v24;
  *(_DWORD *)(v22 + 324) = v23;
  *(_OWORD *)(v22 + 220) = *v14;
  *(_OWORD *)(v22 + 236) = *(_OWORD *)((char *)this + 476);
  *(_OWORD *)(v22 + 252) = *(_OWORD *)((char *)this + 492);
  *(_OWORD *)(v22 + 268) = *(_OWORD *)((char *)this + 508);
  *(_DWORD *)(v22 + 312) = 0;
  v25 = *((_QWORD *)this + 55);
  *(_QWORD *)(v25 + 340) = *((_QWORD *)this + 45);
  LODWORD(v22) = *((_DWORD *)this + 92);
  *(_BYTE *)(v25 + 352) |= 2u;
  *(_DWORD *)(v25 + 348) = v22;
  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0
    && (unsigned int)dword_1803E07D0 > 4
    && tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
  {
    v31 = *((_DWORD *)this + 130);
    v32 = *((_DWORD *)this + 129);
    v33 = *((_DWORD *)this + 128);
    v34 = *((_DWORD *)this + 127);
    v35 = *((_DWORD *)this + 126);
    v36 = *((_DWORD *)this + 125);
    v37 = *((_DWORD *)this + 124);
    v38 = *((_DWORD *)this + 123);
    v39 = *((_DWORD *)this + 122);
    v40 = *((_DWORD *)this + 121);
    v41 = *((_DWORD *)this + 120);
    v42 = *((_DWORD *)this + 119);
    v43 = *((_DWORD *)this + 118);
    v44 = *((_DWORD *)this + 117);
    v45 = *((_DWORD *)this + 116);
    v46 = *(_DWORD *)v14;
    v48 = HIDWORD(v65);
    v49 = v65;
    v51 = HIDWORD(v63);
    v52 = v63;
    v53 = *((_DWORD *)this + 92);
    v54 = *((_DWORD *)this + 91);
    v55 = *((_DWORD *)this + 90);
    v56 = *((_DWORD *)this + 86);
    v57 = *((_DWORD *)this + 85);
    v58 = *((_DWORD *)this + 84);
    v59 = *((_DWORD *)this + 95);
    v60 = *((_DWORD *)this + 94);
    v61 = *(_DWORD *)v3;
    v47 = v26;
    v50 = v27;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      byte_18037DED3,
      v29,
      v30,
      (__int64)&TracingCookie,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
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
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v20 + 8LL))(v20);
  if ( v18 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v18 + 8LL))(v18);
}
