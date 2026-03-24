/*
 * XREFs of ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x180216170
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x1801E5D68 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 */

float __fastcall CGravityBounceAccelerator::Accelerate(__int64 this, struct IntegrationState *a2, float a3)
{
  float v3; // xmm4_4
  CGravityBounceAccelerator *v5; // r8
  float v6; // xmm6_4
  float v7; // xmm4_4
  float v8; // xmm2_4
  bool v9; // zf
  float v10; // xmm1_4
  __int64 v11; // r9
  float v13; // [rsp+68h] [rbp+17h] BYREF
  float v14; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v15; // [rsp+70h] [rbp+1Fh] BYREF
  int v16; // [rsp+74h] [rbp+23h] BYREF
  _DWORD v17[12]; // [rsp+78h] [rbp+27h] BYREF
  float v18; // [rsp+B8h] [rbp+67h] BYREF
  int v19; // [rsp+C0h] [rbp+6Fh] BYREF
  float v20; // [rsp+C8h] [rbp+77h]
  int v21; // [rsp+D0h] [rbp+7Fh] BYREF

  v20 = a3;
  v3 = *((float *)a2 + 1);
  v5 = (CGravityBounceAccelerator *)this;
  v6 = 0.0;
  v18 = 0.0;
  if ( COERCE_FLOAT(LODWORD(v3) & _xmm) >= 0.000099999997
    || COERCE_FLOAT(*(_DWORD *)(this + 24) & _xmm) >= 0.000099999997 )
  {
    v7 = v3 - *(float *)(this + 24);
    if ( COERCE_FLOAT(LODWORD(v7) & _xmm) > 0.0049999999 )
    {
      this = v7 > 0.0;
      LODWORD(v6) = COERCE_UNSIGNED_INT((float)(int)this * *((float *)v5 + 8)) ^ _xmm;
LABEL_7:
      v18 = v6;
      goto LABEL_17;
    }
  }
  v8 = *((float *)a2 + 2);
  if ( *((float *)a2 + 3) > COERCE_FLOAT(LODWORD(v8) & _xmm) )
  {
    v6 = v8 / -0.0099999998;
    goto LABEL_7;
  }
  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
  {
    v9 = *(_BYTE *)(this + 48) == 0;
    v6 = v8 * *(float *)(this + 40);
    v18 = v6;
    if ( v9 )
    {
      *(_BYTE *)(this + 48) = 1;
    }
    else if ( COERCE_FLOAT(LODWORD(v6) & _xmm) > COERCE_FLOAT(*(_DWORD *)(this + 44) & _xmm) )
    {
      v10 = (float)(*(float *)(this + 52) > 0.0);
      this = v8 > 0.0;
      if ( v10 == (float)(v8 > 0.0) )
        v6 = *((float *)v5 + 11) * *((float *)v5 + 9);
      else
        v6 = v8 / -0.0099999998;
      v18 = v6;
    }
    *((float *)v5 + 11) = v6;
    *((_DWORD *)v5 + 13) = *((_DWORD *)a2 + 2);
  }
LABEL_17:
  v11 = *((unsigned int *)v5 + 14);
  if ( (_DWORD)v11
    && (unsigned int)dword_180344E80 > 4
    && (qword_180344E90 & 4) != 0
    && (qword_180344E98 & 4) == qword_180344E98 )
  {
    v19 = *((_DWORD *)v5 + 9);
    v21 = *((_DWORD *)v5 + 7);
    v13 = v20;
    v14 = *(float *)a2;
    v15 = *((_DWORD *)a2 + 2);
    v16 = *((_DWORD *)a2 + 1);
    v17[0] = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      this,
      byte_1802EA092,
      (__int64)v5,
      v11,
      (__int64)v17,
      (__int64)&v18,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v21,
      (__int64)&v19);
  }
  return v6;
}
