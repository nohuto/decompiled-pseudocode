/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x1801AAAFC
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801A5C90 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800E4D30 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444@Z @ 0x1801A7B38 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@_ea_1801A7B38.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180279A80 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18027A07C (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18027AC30 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18027B6AC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

float *__fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        float *a2,
        int *a3,
        __int64 a4,
        struct D2DMatrix *a5,
        struct D2DMatrix *a6)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  struct _D3DMATRIX *v13; // rcx
  struct _D3DMATRIX *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  float *v18; // r8
  struct _D3DMATRIX *v19; // rcx
  struct _D3DMATRIX *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v25; // r8
  __int128 *v26; // r9
  const struct D2DMatrix *v27; // r10
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  struct _D3DMATRIX *v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  const struct D2DMatrix *v36; // r10
  const struct D2DMatrix *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  D3DVALUE _33; // [rsp+110h] [rbp-80h] BYREF
  D3DVALUE _32; // [rsp+114h] [rbp-7Ch] BYREF
  D3DVALUE _31; // [rsp+118h] [rbp-78h] BYREF
  D3DVALUE _23; // [rsp+11Ch] [rbp-74h] BYREF
  D3DVALUE _22; // [rsp+120h] [rbp-70h] BYREF
  D3DVALUE _21; // [rsp+124h] [rbp-6Ch] BYREF
  D3DVALUE _13; // [rsp+128h] [rbp-68h] BYREF
  D3DVALUE _12; // [rsp+12Ch] [rbp-64h] BYREF
  D3DVALUE _11; // [rsp+130h] [rbp-60h] BYREF
  int v51; // [rsp+134h] [rbp-5Ch] BYREF
  int v52; // [rsp+138h] [rbp-58h] BYREF
  int v53; // [rsp+13Ch] [rbp-54h] BYREF
  int v54; // [rsp+140h] [rbp-50h] BYREF
  int v55; // [rsp+144h] [rbp-4Ch] BYREF
  int v56; // [rsp+148h] [rbp-48h] BYREF
  int v57; // [rsp+14Ch] [rbp-44h] BYREF
  int v58; // [rsp+150h] [rbp-40h] BYREF
  int v59; // [rsp+154h] [rbp-3Ch] BYREF
  int v60; // [rsp+158h] [rbp-38h] BYREF
  int v61; // [rsp+15Ch] [rbp-34h] BYREF
  int v62; // [rsp+160h] [rbp-30h] BYREF
  int v63; // [rsp+164h] [rbp-2Ch] BYREF
  int v64; // [rsp+168h] [rbp-28h] BYREF
  float v65; // [rsp+16Ch] [rbp-24h] BYREF
  int v66; // [rsp+170h] [rbp-20h] BYREF
  __int64 v67; // [rsp+178h] [rbp-18h] BYREF
  __int64 v68; // [rsp+180h] [rbp-10h] BYREF
  __int64 v69; // [rsp+188h] [rbp-8h] BYREF
  __int64 v70; // [rsp+190h] [rbp+0h] BYREF
  __int64 *v71; // [rsp+198h] [rbp+8h] BYREF
  struct _D3DMATRIX v72; // [rsp+1A0h] [rbp+10h] BYREF
  int v73; // [rsp+1E0h] [rbp+50h]
  struct _D3DMATRIX v74; // [rsp+1F0h] [rbp+60h] BYREF
  struct _D3DMATRIX v75; // [rsp+230h] [rbp+A0h] BYREF

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v75);
  v10 = *(_OWORD *)&D3DMatrix->_21;
  v11 = *(_OWORD *)&D3DMatrix->_31;
  v12 = *(_OWORD *)&D3DMatrix->_41;
  *(_OWORD *)a5 = *(_OWORD *)&D3DMatrix->_11;
  *((_OWORD *)a5 + 1) = v10;
  *((_OWORD *)a5 + 2) = v11;
  *((_OWORD *)a5 + 3) = v12;
  v14 = CMILMatrix::GetD3DMatrix(v13, &v75);
  v15 = *(_OWORD *)&v14->_21;
  v16 = *(_OWORD *)&v14->_31;
  v17 = *(_OWORD *)&v14->_41;
  *(_OWORD *)a6 = *(_OWORD *)&v14->_11;
  *((_OWORD *)a6 + 1) = v15;
  *((_OWORD *)a6 + 2) = v16;
  *((_OWORD *)a6 + 3) = v17;
  *(float *)&v16 = v18[1];
  *(float *)&v15 = 1.0 / v18[2];
  *a2 = *v18;
  *((_DWORD *)a2 + 1) = v16;
  a2[2] = *(float *)&v15 - 1.0;
  v20 = CMILMatrix::GetD3DMatrix(v19, &v74);
  v21 = *(_OWORD *)&v20->_21;
  *(_OWORD *)&v75._11 = *(_OWORD *)&v20->_11;
  v22 = *(_OWORD *)&v20->_31;
  *(_OWORD *)&v75._21 = v21;
  v23 = *(_OWORD *)&v20->_41;
  *(_OWORD *)&v75._31 = v22;
  *(_OWORD *)&v75._41 = v23;
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 1044) )
  {
    v28 = *v26;
    v29 = v26[1];
    v73 = *((_DWORD *)v26 + 16);
    *(_OWORD *)&v72._11 = v28;
    v30 = v26[2];
    *(_OWORD *)&v72._21 = v29;
    v31 = v26[3];
    *(_OWORD *)&v72._31 = v30;
    *(_OWORD *)&v72._41 = v31;
    if ( CMILMatrix::Invert((CMILMatrix *)&v72, v24, v25) )
    {
      v32 = CMILMatrix::GetD3DMatrix(&v72, &v74);
      v33 = *(_OWORD *)&v32->_21;
      *(_OWORD *)&v75._11 = *(_OWORD *)&v32->_11;
      v34 = *(_OWORD *)&v32->_31;
      *(_OWORD *)&v75._21 = v33;
      v35 = *(_OWORD *)&v32->_41;
      *(_OWORD *)&v75._31 = v34;
      *(_OWORD *)&v75._41 = v35;
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v75);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(v27) )
  {
    v37 = D2DMatrixTranspose(a5, v36);
    if ( D2DMatrixInverse(a6, 0LL, v37) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    _33 = v75._33;
    _32 = v75._32;
    _31 = v75._31;
    _23 = v75._23;
    _22 = v75._22;
    _21 = v75._21;
    _13 = v75._13;
    _12 = v75._12;
    _11 = v75._11;
    v51 = *((_DWORD *)a6 + 10);
    v52 = *((_DWORD *)a6 + 9);
    v53 = *((_DWORD *)a6 + 8);
    v54 = *((_DWORD *)a6 + 6);
    v55 = *((_DWORD *)a6 + 5);
    v56 = *((_DWORD *)a6 + 4);
    v57 = *((_DWORD *)a6 + 2);
    v58 = *((_DWORD *)a6 + 1);
    v59 = *(_DWORD *)a6;
    v60 = a3[2];
    v61 = a3[1];
    v62 = *a3;
    v63 = *((_DWORD *)a2 + 2);
    v64 = *((_DWORD *)a2 + 1);
    v65 = *a2;
    v66 = *((_DWORD *)a1 + 197);
    v67 = a1[60];
    v68 = a1[40];
    v69 = a1[20];
    v70 = *a1;
    v71 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v38,
      byte_18037B508,
      v39,
      v40,
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
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&_11,
      (__int64)&_12,
      (__int64)&_13,
      (__int64)&_21,
      (__int64)&_22,
      (__int64)&_23,
      (__int64)&_31,
      (__int64)&_32,
      (__int64)&_33);
  }
  return a2;
}
