/*
 * XREFs of ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180273084
 * Callers:
 *     ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180272950 (-Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180272B10 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z @ 0x1802739BC (-AdvanceToTime@CVector3ForceEvaluator@@QEAA-AUD2DVector3@@MPEAUIAccelerator@@00@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801CE600 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?CorrectOvershootIfNecessary@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEBU2@PEAUIAccelerator@@PEA_N@Z @ 0x18027323C (-CorrectOvershootIfNecessary@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEBU2@PEAUIAccelera.c)
 *     ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x1802734C0 (-Integrate@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 */

float __fastcall CScalarForceEvaluator::AdvanceToTime(CScalarForceEvaluator *this, float a2, struct IAccelerator *a3)
{
  float v7; // xmm2_4
  float v8; // xmm2_4
  char *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  __int64 v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[32]; // [rsp+30h] [rbp-48h] BYREF
  CScalarForceEvaluator *v22; // [rsp+80h] [rbp+8h] BYREF
  int v23; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 == *(float *)this )
    return *((float *)this + 9);
  v7 = a2 - *(float *)this;
  if ( (*((_BYTE *)this + 64) & 2) != 0 )
    v7 = fmaxf(0.0, fminf(a2 - *(float *)this, 0.25));
  v8 = v7 + *((float *)this + 1);
  *((float *)this + 1) = v8;
  if ( v8 >= 0.0099999998 )
  {
    v9 = (char *)this + 12;
    do
    {
      if ( (unsigned int)dword_1803E07D0 > 5 && tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
      {
        v23 = *((_DWORD *)this + 1);
        v22 = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1803E07D0,
          byte_18037EE93,
          v10,
          v11,
          (__int64)&v22,
          (__int64)&v23);
      }
      v12 = *((_DWORD *)v9 + 4);
      *((_OWORD *)this + 2) = *(_OWORD *)v9;
      LODWORD(v20) = *((_DWORD *)this + 2);
      *((_DWORD *)this + 12) = v12;
      v13 = CScalarForceEvaluator::Integrate(this, v21, v9, a3, v20, LODWORD(FLOAT_0_0099999998));
      LOBYTE(v23) = 0;
      *(_OWORD *)v9 = *(_OWORD *)v13;
      *((_DWORD *)v9 + 4) = *(_DWORD *)(v13 + 16);
      v14 = CScalarForceEvaluator::CorrectOvershootIfNecessary(this, v21, v9, a3, &v23);
      v15 = (_BYTE)v23 == 0;
      v8 = *((float *)this + 1) - 0.0099999998;
      *(_OWORD *)v9 = *(_OWORD *)v14;
      LODWORD(v14) = *(_DWORD *)(v14 + 16);
      v16 = *((float *)this + 2) + 0.0099999998;
      *((float *)this + 1) = v8;
      *((_DWORD *)v9 + 4) = v14;
      *((float *)this + 2) = v16;
    }
    while ( v15 && v8 >= 0.0099999998 );
  }
  v17 = v8 / 0.0099999998;
  v18 = *((float *)this + 4) * v17;
  v19 = (float)(1.0 - v17) * *((float *)this + 9);
  *(float *)this = a2;
  return v19 + v18;
}
