/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x1801AAFC0
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801AC330 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180006F20 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180011824 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180023B58 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A530 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     acosf_0 @ 0x1801176BC (acosf_0.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801A3BE4 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333333@Z @ 0x1801A71C8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     TransformPoint @ 0x1801AD558 (TransformPoint.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x18026D058 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18026D20C (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        CMILMatrix *this,
        __int64 a2,
        CMILMatrix *a3,
        CMILMatrix *a4,
        CMILMatrix *a5,
        CMILMatrix *a6)
{
  CMILMatrix *v10; // r14
  CMILMatrix *v11; // rdi
  __int64 v12; // r8
  float v13; // xmm6_4
  __int128 v14; // xmm1
  int v15; // xmm8_4
  int v16; // xmm9_4
  __int64 v17; // rdx
  int v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  const struct DEVICE_INFO *v21; // r14
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // xmm0_4
  int v28; // xmm1_4
  int v29; // xmm0_4
  int v30; // xmm1_4
  int v31; // xmm0_4
  int v32; // xmm1_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  int v36; // xmm1_4
  int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // [rsp+148h] [rbp-80h] BYREF
  int v44; // [rsp+14Ch] [rbp-7Ch]
  int v45; // [rsp+150h] [rbp-78h] BYREF
  int v46; // [rsp+154h] [rbp-74h]
  int v47; // [rsp+158h] [rbp-70h] BYREF
  int v48; // [rsp+15Ch] [rbp-6Ch]
  float v49; // [rsp+160h] [rbp-68h]
  float v50; // [rsp+164h] [rbp-64h]
  int v51; // [rsp+168h] [rbp-60h] BYREF
  int v52; // [rsp+16Ch] [rbp-5Ch] BYREF
  int v53; // [rsp+170h] [rbp-58h] BYREF
  int v54; // [rsp+174h] [rbp-54h] BYREF
  int v55; // [rsp+178h] [rbp-50h] BYREF
  int v56; // [rsp+17Ch] [rbp-4Ch] BYREF
  float v57; // [rsp+180h] [rbp-48h] BYREF
  float v58; // [rsp+184h] [rbp-44h] BYREF
  int v59; // [rsp+188h] [rbp-40h] BYREF
  int v60; // [rsp+18Ch] [rbp-3Ch] BYREF
  int v61; // [rsp+190h] [rbp-38h] BYREF
  int v62; // [rsp+194h] [rbp-34h] BYREF
  int v63; // [rsp+198h] [rbp-30h] BYREF
  int v64; // [rsp+19Ch] [rbp-2Ch] BYREF
  int v65; // [rsp+1A0h] [rbp-28h] BYREF
  int v66; // [rsp+1A4h] [rbp-24h] BYREF
  int v67; // [rsp+1A8h] [rbp-20h] BYREF
  int v68; // [rsp+1ACh] [rbp-1Ch] BYREF
  int v69; // [rsp+1B0h] [rbp-18h] BYREF
  int v70; // [rsp+1B4h] [rbp-14h] BYREF
  int v71; // [rsp+1B8h] [rbp-10h] BYREF
  int v72; // [rsp+1BCh] [rbp-Ch] BYREF
  int v73; // [rsp+1C0h] [rbp-8h] BYREF
  int v74; // [rsp+1C4h] [rbp-4h] BYREF
  int v75; // [rsp+1C8h] [rbp+0h] BYREF
  int v76; // [rsp+1CCh] [rbp+4h] BYREF
  int v77; // [rsp+1D0h] [rbp+8h] BYREF
  int v78; // [rsp+1D4h] [rbp+Ch] BYREF
  _BYTE v79[144]; // [rsp+1D8h] [rbp+10h] BYREF
  int v80; // [rsp+2A8h] [rbp+E0h] BYREF
  int v81; // [rsp+2ACh] [rbp+E4h]
  int v82; // [rsp+2B8h] [rbp+F0h] BYREF
  int v83; // [rsp+2BCh] [rbp+F4h]
  int v84; // [rsp+2C0h] [rbp+F8h] BYREF
  char v85; // [rsp+2C4h] [rbp+FCh] BYREF

  *(_OWORD *)a3 = *(_OWORD *)this;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)this + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)this + 16);
  CMILMatrix::SetToIdentity(a4);
  v10 = a5;
  CMILMatrix::SetToIdentity(a5);
  v11 = a6;
  v13 = 0.0;
  *(_OWORD *)a6 = *(_OWORD *)v12;
  v14 = *(_OWORD *)(v12 + 16);
  LODWORD(a6) = 0;
  *((_OWORD *)v11 + 1) = v14;
  *((_OWORD *)v11 + 2) = *(_OWORD *)(v12 + 32);
  *((_OWORD *)v11 + 3) = *(_OWORD *)(v12 + 48);
  *((_DWORD *)v11 + 16) = *(_DWORD *)(v12 + 64);
  v15 = *((_DWORD *)this + 12);
  v16 = *((_DWORD *)this + 13);
  v43 = *(_DWORD *)this;
  v44 = *((_DWORD *)this + 5);
  v45 = v15;
  v46 = v16;
  CMILMatrix::SetToIdentity((CMILMatrix *)v79);
  LOBYTE(a5) = 0;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(this, v10, (struct CMILMatrix *)v79, (bool *)&a5);
  if ( (_BYTE)a5 )
  {
    v18 = *((_DWORD *)v10 + 5);
    v43 = *(_DWORD *)v10;
    v44 = v18;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v47, (const struct D2DMatrix *)v79);
    v47 = 0;
    v48 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v47, (const struct D2DQuaternion *)&v47);
    if ( v49 >= 0.0 )
      v19 = *(float *)&FLOAT_1_0;
    else
      v19 = FLOAT_N1_0;
    v20 = acosf_0(v50 * v19);
    v13 = v20 + v20;
    *(float *)&a6 = v20 + v20;
    CMILMatrix::Set2DRotation(a4, v20 + v20, 0.0, 0.0);
  }
  LOBYTE(v17) = 1;
  if ( !CMILMatrix::Is2DAffine<1>((__int64)this, v17) )
  {
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v43,
      v13,
      (const struct Windows::Foundation::Numerics::float2 *)&v45,
      (const struct Windows::Foundation::Numerics::float2 *)&v82,
      (const struct Windows::Foundation::Numerics::float2 *)&v80);
    *(_OWORD *)v11 = *(_OWORD *)a3;
    *((_OWORD *)v11 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)v11 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)v11 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)v11 + 16) = *((_DWORD *)a3 + 16);
  }
  v21 = CPointerDeviceCache::Query(a2);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a3) && *((_BYTE *)v21 + 48) )
  {
    TransformPoint((_DWORD)v21, (_DWORD)v21 + 16, v22, v23, (__int64)&v84, (__int64)&v85);
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    CMILMatrix::Set2DAffineMatrix(
      v11,
      (const struct Windows::Foundation::Numerics::float2 *)&v43,
      v13,
      (const struct Windows::Foundation::Numerics::float2 *)&v84,
      (const struct Windows::Foundation::Numerics::float2 *)&v82,
      (const struct Windows::Foundation::Numerics::float2 *)&v80);
  }
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v27 = *((_DWORD *)this + 15);
      v28 = *((_DWORD *)this + 14);
      v80 = *((_DWORD *)v21 + 3);
      v82 = *((_DWORD *)v21 + 2);
      v84 = *((_DWORD *)v21 + 1);
      v51 = *(_DWORD *)v21;
      v52 = *((_DWORD *)v21 + 7);
      v53 = *((_DWORD *)v21 + 6);
      v54 = *((_DWORD *)v21 + 5);
      v55 = *((_DWORD *)v21 + 4);
      v57 = v50;
      v58 = v49;
      v59 = v48;
      v60 = v47;
      v61 = v44;
      v62 = v43;
      v63 = v46;
      v64 = v45;
      v65 = v27;
      v29 = *((_DWORD *)this + 13);
      v66 = v28;
      v30 = *((_DWORD *)this + 12);
      LODWORD(a5) = (unsigned __int8)a5;
      v67 = v29;
      v31 = *((_DWORD *)this + 11);
      v68 = v30;
      v32 = *((_DWORD *)this + 10);
      v69 = v31;
      v33 = *((_DWORD *)this + 9);
      v70 = v32;
      v34 = *((_DWORD *)this + 8);
      v71 = v33;
      v35 = *((_DWORD *)this + 7);
      v72 = v34;
      v36 = *((_DWORD *)this + 6);
      v73 = v35;
      v37 = *((_DWORD *)this + 5);
      v74 = v36;
      v38 = *((_DWORD *)this + 4);
      v75 = v37;
      v39 = *((_DWORD *)this + 3);
      v76 = v38;
      v40 = *((_DWORD *)this + 2);
      v77 = v39;
      v41 = *((_DWORD *)this + 1);
      v78 = v40;
      v42 = *(_DWORD *)this;
      v45 = v41;
      v43 = v42;
      v56 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v24,
        byte_18037B926,
        v25,
        v26,
        (__int64)&a5,
        (__int64)&v43,
        (__int64)&v45,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&a6,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v84,
        (__int64)&v82,
        (__int64)&v80);
    }
  }
}
