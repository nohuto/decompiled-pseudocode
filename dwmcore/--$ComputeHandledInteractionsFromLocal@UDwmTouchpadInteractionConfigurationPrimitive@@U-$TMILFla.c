__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const struct D2DVector3 *a4,
        struct D2DMatrix *a5)
{
  _OWORD *v9; // rax
  const struct D2DMatrix *v10; // rax
  float v11; // ebx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  __int64 v17; // xmm0_8
  __int64 result; // rax
  int v19; // [rsp+E0h] [rbp-80h] BYREF
  int v20; // [rsp+E4h] [rbp-7Ch] BYREF
  int v21; // [rsp+E8h] [rbp-78h] BYREF
  int v22; // [rsp+ECh] [rbp-74h] BYREF
  int v23; // [rsp+F0h] [rbp-70h] BYREF
  int v24; // [rsp+F4h] [rbp-6Ch] BYREF
  int v25; // [rsp+F8h] [rbp-68h] BYREF
  int v26; // [rsp+FCh] [rbp-64h] BYREF
  int v27; // [rsp+100h] [rbp-60h] BYREF
  int v28; // [rsp+104h] [rbp-5Ch] BYREF
  int v29; // [rsp+108h] [rbp-58h] BYREF
  int v30; // [rsp+10Ch] [rbp-54h] BYREF
  int v31; // [rsp+110h] [rbp-50h] BYREF
  int v32; // [rsp+114h] [rbp-4Ch] BYREF
  int v33; // [rsp+118h] [rbp-48h] BYREF
  int v34; // [rsp+11Ch] [rbp-44h] BYREF
  int v35; // [rsp+120h] [rbp-40h] BYREF
  int v36; // [rsp+124h] [rbp-3Ch] BYREF
  float v37; // [rsp+128h] [rbp-38h] BYREF
  int v38; // [rsp+12Ch] [rbp-34h] BYREF
  int v39; // [rsp+130h] [rbp-30h] BYREF
  int v40; // [rsp+134h] [rbp-2Ch] BYREF
  __int64 v41; // [rsp+138h] [rbp-28h] BYREF
  __int64 v42; // [rsp+140h] [rbp-20h] BYREF
  char v43[64]; // [rsp+150h] [rbp-10h] BYREF
  __int64 v44; // [rsp+190h] [rbp+30h] BYREF
  float v45; // [rsp+198h] [rbp+38h]
  _DWORD v46[16]; // [rsp+1A0h] [rbp+40h] BYREF

  v9 = (_OWORD *)anonymous_namespace_::ReverseAndLeftShift(v43, (char *)a3 + 20);
  *(_OWORD *)a5 = *v9;
  *((_OWORD *)a5 + 1) = v9[1];
  *((_OWORD *)a5 + 2) = v9[2];
  *((_OWORD *)a5 + 3) = v9[3];
  v10 = D2DMatrixTranspose((struct D2DMatrix *)v46, a5);
  D3DXVec3TransformCoord((struct D2DVector3 *)&v44, a4, v10);
  v11 = v45;
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v19 = *((_DWORD *)a3 + 15);
    v20 = *((_DWORD *)a3 + 14);
    v21 = *((_DWORD *)a3 + 13);
    v22 = *((_DWORD *)a3 + 11);
    v23 = *((_DWORD *)a3 + 10);
    v24 = *((_DWORD *)a3 + 9);
    v25 = *((_DWORD *)a3 + 7);
    v26 = *((_DWORD *)a3 + 6);
    v27 = *((_DWORD *)a3 + 5);
    v28 = v46[10];
    v29 = v46[9];
    v30 = v46[8];
    v31 = v46[6];
    v32 = v46[5];
    v33 = v46[4];
    v34 = v46[2];
    v35 = v46[1];
    v36 = v46[0];
    v38 = HIDWORD(v44);
    v39 = v44;
    v40 = *(_DWORD *)(a1 + 788);
    v41 = *a3;
    v37 = v11;
    v42 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_18037B02E,
      v13,
      v14,
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
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  v15 = a3 + 2;
  if ( *(float *)&v44 > 0.0 && (*v15 & 1) == 0 || (v16 = a3 + 2, *(float *)&v44 < 0.0) && (*v15 & 2) == 0 )
  {
    LODWORD(v44) = 0;
    v16 = a3 + 2;
  }
  if ( *((float *)&v44 + 1) > 0.0 && (*v16 & 4) == 0 || *((float *)&v44 + 1) < 0.0 && (*v16 & 8) == 0 )
    HIDWORD(v44) = 0;
  if ( v45 < 0.0 && (*v16 & 0x10) == 0 || v45 > 0.0 && (*v16 & 0x20) == 0 )
  {
    v45 = 0.0;
    v11 = 0.0;
  }
  v17 = v44;
  result = a2;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = v17;
  *(float *)(a2 + 12) = v11;
  return result;
}
