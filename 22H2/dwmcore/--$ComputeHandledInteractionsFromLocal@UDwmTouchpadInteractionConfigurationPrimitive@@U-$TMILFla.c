/*
 * XREFs of ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18022949C
 * Callers:
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18022C4D8 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18021D620 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021DF28 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444444444@Z @ 0x18022ACE8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_18022ACE8.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x18022EB88 (_anonymous_namespace_--ReverseAndLeftShift.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const struct D2DVector3 *a4,
        struct D2DMatrix *a5)
{
  _OWORD *v9; // rax
  const struct D2DMatrix *v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  float v14; // ebx
  __int64 v15; // xmm0_8
  __int64 result; // rax
  int v17; // [rsp+E0h] [rbp-80h] BYREF
  int v18; // [rsp+E4h] [rbp-7Ch] BYREF
  int v19; // [rsp+E8h] [rbp-78h] BYREF
  int v20; // [rsp+ECh] [rbp-74h] BYREF
  int v21; // [rsp+F0h] [rbp-70h] BYREF
  int v22; // [rsp+F4h] [rbp-6Ch] BYREF
  int v23; // [rsp+F8h] [rbp-68h] BYREF
  int v24; // [rsp+FCh] [rbp-64h] BYREF
  int v25; // [rsp+100h] [rbp-60h] BYREF
  int v26; // [rsp+104h] [rbp-5Ch] BYREF
  int v27; // [rsp+108h] [rbp-58h] BYREF
  int v28; // [rsp+10Ch] [rbp-54h] BYREF
  int v29; // [rsp+110h] [rbp-50h] BYREF
  int v30; // [rsp+114h] [rbp-4Ch] BYREF
  int v31; // [rsp+118h] [rbp-48h] BYREF
  int v32; // [rsp+11Ch] [rbp-44h] BYREF
  int v33; // [rsp+120h] [rbp-40h] BYREF
  int v34; // [rsp+124h] [rbp-3Ch] BYREF
  float v35; // [rsp+128h] [rbp-38h] BYREF
  int v36; // [rsp+12Ch] [rbp-34h] BYREF
  int v37; // [rsp+130h] [rbp-30h] BYREF
  int v38; // [rsp+134h] [rbp-2Ch] BYREF
  __int64 v39; // [rsp+138h] [rbp-28h] BYREF
  __int64 v40; // [rsp+140h] [rbp-20h] BYREF
  __int64 v41; // [rsp+148h] [rbp-18h] BYREF
  float v42; // [rsp+150h] [rbp-10h]
  _DWORD v43[16]; // [rsp+160h] [rbp+0h] BYREF

  v9 = (_OWORD *)anonymous_namespace_::ReverseAndLeftShift(v43, (char *)a3 + 20);
  *(_OWORD *)a5 = *v9;
  *((_OWORD *)a5 + 1) = v9[1];
  *((_OWORD *)a5 + 2) = v9[2];
  *((_OWORD *)a5 + 3) = v9[3];
  v10 = D2DMatrixTranspose((struct D2DMatrix *)v43, a5);
  D3DXVec3TransformCoord((struct D2DVector3 *)&v41, a4, v10);
  v14 = v42;
  if ( (unsigned int)dword_180344E80 > 4 && (qword_180344E90 & 2) != 0 && (qword_180344E98 & 2) == qword_180344E98 )
  {
    v17 = *((_DWORD *)a3 + 15);
    v18 = *((_DWORD *)a3 + 14);
    v19 = *((_DWORD *)a3 + 13);
    v20 = *((_DWORD *)a3 + 11);
    v21 = *((_DWORD *)a3 + 10);
    v22 = *((_DWORD *)a3 + 9);
    v23 = *((_DWORD *)a3 + 7);
    v24 = *((_DWORD *)a3 + 6);
    v25 = *((_DWORD *)a3 + 5);
    v26 = v43[10];
    v27 = v43[9];
    v28 = v43[8];
    v29 = v43[6];
    v30 = v43[5];
    v31 = v43[4];
    v32 = v43[2];
    v33 = v43[1];
    v34 = v43[0];
    v36 = HIDWORD(v41);
    v37 = v41;
    v38 = *(_DWORD *)(a1 + 788);
    v39 = *a3;
    v35 = v42;
    v40 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_1802EB903,
      v12,
      v13,
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
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  if ( *(float *)&v41 > 0.0 && (a3[2] & 1) == 0 || *(float *)&v41 < 0.0 && (a3[2] & 2) == 0 )
    LODWORD(v41) = 0;
  if ( *((float *)&v41 + 1) > 0.0 && (a3[2] & 4) == 0 || *((float *)&v41 + 1) < 0.0 && (a3[2] & 8) == 0 )
    HIDWORD(v41) = 0;
  if ( v42 < 0.0 && (a3[2] & 0x10) == 0 || v42 > 0.0 && (a3[2] & 0x20) == 0 )
  {
    v42 = 0.0;
    v14 = 0.0;
  }
  v15 = v41;
  result = a2;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = v15;
  *(float *)(a2 + 12) = v14;
  return result;
}
