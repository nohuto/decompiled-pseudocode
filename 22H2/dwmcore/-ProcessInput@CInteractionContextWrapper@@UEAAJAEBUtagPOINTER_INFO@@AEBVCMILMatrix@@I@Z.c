/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180230C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008D638 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800B6048 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180226404 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444@Z @ 0x18022F824 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_18022F824.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x180230290 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802313B8 (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x18026B338 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x18026BA04 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2,
        const struct CMILMatrix *a3,
        int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool *v11; // r8
  int updated; // r14d
  __int64 v13; // r9
  int v14; // eax
  unsigned __int64 v15; // rcx
  int v16; // xmm1_4
  int v17; // xmm0_4
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // xmm1_4
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  int v24; // xmm0_4
  int v25; // xmm1_4
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
  int v41; // [rsp+100h] [rbp-80h] BYREF
  int v42; // [rsp+104h] [rbp-7Ch] BYREF
  int v43; // [rsp+108h] [rbp-78h] BYREF
  int v44; // [rsp+10Ch] [rbp-74h] BYREF
  int v45; // [rsp+110h] [rbp-70h] BYREF
  int v46; // [rsp+114h] [rbp-6Ch] BYREF
  int v47; // [rsp+118h] [rbp-68h] BYREF
  int v48; // [rsp+11Ch] [rbp-64h] BYREF
  int v49; // [rsp+120h] [rbp-60h] BYREF
  int v50; // [rsp+124h] [rbp-5Ch] BYREF
  int v51; // [rsp+128h] [rbp-58h] BYREF
  int v52; // [rsp+12Ch] [rbp-54h] BYREF
  int v53; // [rsp+130h] [rbp-50h] BYREF
  int v54; // [rsp+134h] [rbp-4Ch] BYREF
  int v55; // [rsp+138h] [rbp-48h] BYREF
  int v56; // [rsp+13Ch] [rbp-44h] BYREF
  int v57; // [rsp+140h] [rbp-40h] BYREF
  int v58; // [rsp+144h] [rbp-3Ch] BYREF
  int v59; // [rsp+148h] [rbp-38h] BYREF
  int v60; // [rsp+14Ch] [rbp-34h] BYREF
  int v61; // [rsp+150h] [rbp-30h] BYREF
  int v62; // [rsp+154h] [rbp-2Ch] BYREF
  int v63; // [rsp+158h] [rbp-28h] BYREF
  int v64; // [rsp+15Ch] [rbp-24h] BYREF
  int v65; // [rsp+160h] [rbp-20h] BYREF
  unsigned __int64 v66; // [rsp+168h] [rbp-18h] BYREF
  CInteractionContextWrapper *v67; // [rsp+170h] [rbp-10h] BYREF
  _OWORD v68[3]; // [rsp+180h] [rbp+0h] BYREF
  __int128 v69; // [rsp+1B0h] [rbp+30h]
  __int128 v70; // [rsp+1C0h] [rbp+40h]
  __int128 v71; // [rsp+1D0h] [rbp+50h]
  _DWORD v72[6]; // [rsp+1E0h] [rbp+60h] BYREF

  v8 = CInteractionContextWrapper::EnsureInteractionContext(this);
  *((_DWORD *)this + 81) = a4;
  updated = v8;
  v13 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 31) = v13;
  if ( v8 >= 0 )
  {
    v14 = *((_DWORD *)this + 57);
    *((_DWORD *)this + 55) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 56) = *(_DWORD *)a2;
    if ( *((_DWORD *)a2 + 2) != v14 )
    {
      LOBYTE(v9) = 1;
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, v9);
      *((_DWORD *)this + 57) = *((_DWORD *)a2 + 2);
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                           (CInteractionContextWrapper *)((char *)this + 624),
                           *((_QWORD *)a2 + 10),
                           &v66) )
        v15 = v66;
      else
        v15 = 1000LL * *((unsigned int *)a2 + 16);
      *((_QWORD *)this + 29) = v15;
    }
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 64, (float *)a3) )
    {
      *(_OWORD *)v10 = *(_OWORD *)a3;
      *(_OWORD *)(v10 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v10 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v10 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v10 + 64) = *((_DWORD *)a3 + 16);
      v16 = *(_DWORD *)(v10 + 4);
      v72[0] = *(_DWORD *)v10;
      v17 = *(_DWORD *)(v10 + 16);
      v72[1] = v16;
      v18 = *(_DWORD *)(v10 + 20);
      v72[2] = v17;
      v19 = *(_DWORD *)(v10 + 48);
      v72[3] = v18;
      v20 = *(_DWORD *)(v10 + 52);
      v72[4] = v19;
      v72[5] = v20;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 336),
                  (const struct D2D1::Matrix3x2F *)v72,
                  v11);
    }
  }
  v21 = *((_OWORD *)a2 + 1);
  v68[0] = *(_OWORD *)a2;
  v68[1] = v21;
  v22 = *((_OWORD *)a2 + 3);
  v68[2] = *((_OWORD *)a2 + 2);
  v69 = v22;
  v23 = *((_OWORD *)a2 + 5);
  v70 = *((_OWORD *)a2 + 4);
  v71 = v23;
  if ( updated >= 0 )
  {
    updated = CInteractionContextTransformHelper::TransformInput(
                (CInteractionContextWrapper *)((char *)this + 336),
                a2,
                *((_BYTE *)this + 328),
                (struct tagPOINTER_INFO *)v68);
    if ( updated >= 0 )
    {
      if ( (HIDWORD(v68[0]) & 0x180000) != 0 )
        updated = CInteractionContextWrapper::UpdateMouseWheelParameters(this);
      if ( updated >= 0 )
        updated = ProcessPointerFramesInteractionContext(*((_QWORD *)this + 3), 1LL, 1LL, v68);
    }
  }
  if ( (unsigned int)dword_180344E80 > 4 && (qword_180344E90 & 2) != 0 && (qword_180344E98 & 2) == qword_180344E98 )
  {
    v24 = *((_DWORD *)a3 + 15);
    v25 = *((_DWORD *)a3 + 14);
    v58 = HIDWORD(v69);
    v59 = DWORD2(v69);
    v60 = *((_DWORD *)a2 + 15);
    v61 = *((_DWORD *)a2 + 14);
    v62 = *((_DWORD *)a2 + 16);
    v63 = *((_DWORD *)a2 + 18);
    v64 = *((_DWORD *)a2 + 2);
    v65 = *(_DWORD *)a2;
    LODWORD(v66) = *((_DWORD *)a2 + 1);
    v42 = v24;
    v26 = *((_DWORD *)a3 + 13);
    v43 = v25;
    v27 = *((_DWORD *)a3 + 12);
    v44 = v26;
    v28 = *((_DWORD *)a3 + 11);
    v45 = v27;
    v29 = *((_DWORD *)a3 + 10);
    v46 = v28;
    v30 = *((_DWORD *)a3 + 9);
    v47 = v29;
    v31 = *((_DWORD *)a3 + 8);
    v48 = v30;
    v32 = *((_DWORD *)a3 + 7);
    v49 = v31;
    v33 = *((_DWORD *)a3 + 6);
    v50 = v32;
    v34 = *((_DWORD *)a3 + 5);
    v51 = v33;
    v35 = *((_DWORD *)a3 + 4);
    v52 = v34;
    v36 = *((_DWORD *)a3 + 3);
    v53 = v35;
    v37 = *((_DWORD *)a3 + 2);
    v54 = v36;
    v38 = *((_DWORD *)a3 + 1);
    v55 = v37;
    v39 = *(_DWORD *)a3;
    v56 = v38;
    v57 = v39;
    v41 = updated;
    v67 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_1802EC7F1,
      (__int64)v11,
      v13,
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
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41);
  }
  return (unsigned int)updated;
}
