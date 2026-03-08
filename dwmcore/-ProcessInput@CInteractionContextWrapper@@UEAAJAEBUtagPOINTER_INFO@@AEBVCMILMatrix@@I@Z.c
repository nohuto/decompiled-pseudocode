/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180281700
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x180031670 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180039CE0 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18019CBB0 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444@Z @ 0x1802802C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1802802C0.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x180280D90 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180281E74 (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x1802B76B0 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1802B7D7C (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2,
        const struct CMILMatrix *a3,
        int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  int updated; // r14d
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  bool *v14; // r8
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v43; // [rsp+100h] [rbp-80h] BYREF
  int v44; // [rsp+104h] [rbp-7Ch] BYREF
  int v45; // [rsp+108h] [rbp-78h] BYREF
  int v46; // [rsp+10Ch] [rbp-74h] BYREF
  int v47; // [rsp+110h] [rbp-70h] BYREF
  int v48; // [rsp+114h] [rbp-6Ch] BYREF
  int v49; // [rsp+118h] [rbp-68h] BYREF
  int v50; // [rsp+11Ch] [rbp-64h] BYREF
  int v51; // [rsp+120h] [rbp-60h] BYREF
  int v52; // [rsp+124h] [rbp-5Ch] BYREF
  int v53; // [rsp+128h] [rbp-58h] BYREF
  int v54; // [rsp+12Ch] [rbp-54h] BYREF
  int v55; // [rsp+130h] [rbp-50h] BYREF
  int v56; // [rsp+134h] [rbp-4Ch] BYREF
  int v57; // [rsp+138h] [rbp-48h] BYREF
  int v58; // [rsp+13Ch] [rbp-44h] BYREF
  int v59; // [rsp+140h] [rbp-40h] BYREF
  int v60; // [rsp+144h] [rbp-3Ch] BYREF
  int v61; // [rsp+148h] [rbp-38h] BYREF
  int v62; // [rsp+14Ch] [rbp-34h] BYREF
  int v63; // [rsp+150h] [rbp-30h] BYREF
  int v64; // [rsp+154h] [rbp-2Ch] BYREF
  int v65; // [rsp+158h] [rbp-28h] BYREF
  int v66; // [rsp+15Ch] [rbp-24h] BYREF
  int v67; // [rsp+160h] [rbp-20h] BYREF
  unsigned __int64 v68; // [rsp+168h] [rbp-18h] BYREF
  CInteractionContextWrapper *v69; // [rsp+170h] [rbp-10h] BYREF
  _OWORD v70[3]; // [rsp+180h] [rbp+0h] BYREF
  __int128 v71; // [rsp+1B0h] [rbp+30h]
  __int128 v72; // [rsp+1C0h] [rbp+40h]
  __int128 v73; // [rsp+1D0h] [rbp+50h]
  _DWORD v74[6]; // [rsp+1E0h] [rbp+60h] BYREF

  v8 = CInteractionContextWrapper::EnsureInteractionContext(this);
  *((_DWORD *)this + 79) = a4;
  updated = v8;
  *((_QWORD *)this + 30) = *((_QWORD *)a2 + 2);
  if ( v8 >= 0 )
  {
    v11 = *((_DWORD *)this + 55);
    *((_DWORD *)this + 53) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 58) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 54) = *(_DWORD *)a2;
    if ( *((_DWORD *)a2 + 2) != v11 )
    {
      LOBYTE(v9) = 1;
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, v9);
      *((_DWORD *)this + 55) = *((_DWORD *)a2 + 2);
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                           (CInteractionContextWrapper *)((char *)this + 616),
                           *((_QWORD *)a2 + 10),
                           &v68) )
        v12 = v68;
      else
        v12 = 1000LL * *((unsigned int *)a2 + 16);
      *((_QWORD *)this + 28) = v12;
    }
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 62, (float *)a3) )
    {
      *(_OWORD *)v13 = *(_OWORD *)a3;
      *(_OWORD *)(v13 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v13 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v13 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v13 + 64) = *((_DWORD *)a3 + 16);
      v15 = *(_DWORD *)(v13 + 4);
      v74[0] = *(_DWORD *)v13;
      v16 = *(_DWORD *)(v13 + 16);
      v74[1] = v15;
      v17 = *(_DWORD *)(v13 + 20);
      v74[2] = v16;
      v18 = *(_DWORD *)(v13 + 48);
      v74[3] = v17;
      v19 = *(_DWORD *)(v13 + 52);
      v74[4] = v18;
      v74[5] = v19;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 328),
                  (const struct D2D1::Matrix3x2F *)v74,
                  v14);
    }
  }
  v20 = *((_OWORD *)a2 + 1);
  v70[0] = *(_OWORD *)a2;
  v70[1] = v20;
  v21 = *((_OWORD *)a2 + 3);
  v70[2] = *((_OWORD *)a2 + 2);
  v71 = v21;
  v22 = *((_OWORD *)a2 + 5);
  v72 = *((_OWORD *)a2 + 4);
  v73 = v22;
  if ( updated >= 0 )
  {
    updated = CInteractionContextTransformHelper::TransformInput(
                (CInteractionContextWrapper *)((char *)this + 328),
                a2,
                *((_BYTE *)this + 320),
                (struct tagPOINTER_INFO *)v70);
    if ( updated >= 0 )
    {
      if ( (HIDWORD(v70[0]) & 0x180000) == 0
        || (updated = CInteractionContextWrapper::UpdateMouseWheelParameters(this), updated >= 0) )
      {
        updated = ProcessPointerFramesInteractionContext(*((_QWORD *)this + 2), 1LL, 1LL, v70);
      }
    }
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v26 = *((_DWORD *)a3 + 15);
    v27 = *((_DWORD *)a3 + 14);
    v60 = HIDWORD(v71);
    v61 = DWORD2(v71);
    v62 = *((_DWORD *)a2 + 15);
    v63 = *((_DWORD *)a2 + 14);
    v64 = *((_DWORD *)a2 + 16);
    v65 = *((_DWORD *)a2 + 18);
    v66 = *((_DWORD *)a2 + 2);
    v67 = *(_DWORD *)a2;
    LODWORD(v68) = *((_DWORD *)a2 + 1);
    v44 = v26;
    v28 = *((_DWORD *)a3 + 13);
    v45 = v27;
    v29 = *((_DWORD *)a3 + 12);
    v46 = v28;
    v30 = *((_DWORD *)a3 + 11);
    v47 = v29;
    v31 = *((_DWORD *)a3 + 10);
    v48 = v30;
    v32 = *((_DWORD *)a3 + 9);
    v49 = v31;
    v33 = *((_DWORD *)a3 + 8);
    v50 = v32;
    v34 = *((_DWORD *)a3 + 7);
    v51 = v33;
    v35 = *((_DWORD *)a3 + 6);
    v52 = v34;
    v36 = *((_DWORD *)a3 + 5);
    v53 = v35;
    v37 = *((_DWORD *)a3 + 4);
    v54 = v36;
    v38 = *((_DWORD *)a3 + 3);
    v55 = v37;
    v39 = *((_DWORD *)a3 + 2);
    v56 = v38;
    v40 = *((_DWORD *)a3 + 1);
    v57 = v39;
    v41 = *(_DWORD *)a3;
    v58 = v40;
    v59 = v41;
    v43 = updated;
    v69 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      byte_18037F441,
      v24,
      v25,
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
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43);
  }
  return (unsigned int)updated;
}
