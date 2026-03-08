/*
 * XREFs of ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x1802740D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x180249864 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 */

float __fastcall CGravityBounceAccelerator::Accelerate(
        CGravityBounceAccelerator *this,
        struct IntegrationState *a2,
        float a3)
{
  float v3; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm3_4
  float v6; // xmm3_4
  bool v7; // zf
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // r10
  int *v13; // r11
  float v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v17; // [rsp+70h] [rbp+1Fh] BYREF
  int v18; // [rsp+74h] [rbp+23h] BYREF
  int v19; // [rsp+78h] [rbp+27h] BYREF
  float v20; // [rsp+B8h] [rbp+67h] BYREF
  int v21; // [rsp+C0h] [rbp+6Fh] BYREF
  float v22; // [rsp+C8h] [rbp+77h]
  int v23; // [rsp+D0h] [rbp+7Fh] BYREF

  v22 = a3;
  v3 = *((float *)a2 + 1);
  v4 = 0.0;
  v20 = 0.0;
  if ( COERCE_FLOAT(LODWORD(v3) & _xmm) < 0.000099999997 && COERCE_FLOAT(*((_DWORD *)this + 4) & _xmm) < 0.000099999997
    || (v5 = v3 - *((float *)this + 4), COERCE_FLOAT(LODWORD(v5) & _xmm) <= 0.0049999999) )
  {
    v6 = *((float *)a2 + 2);
    if ( *((float *)a2 + 3) <= COERCE_FLOAT(LODWORD(v6) & _xmm) )
    {
      if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
      {
        v7 = *((_BYTE *)this + 40) == 0;
        v4 = v6 * *((float *)this + 8);
        v20 = v4;
        if ( v7 )
        {
          *((_BYTE *)this + 40) = 1;
        }
        else if ( COERCE_FLOAT(LODWORD(v4) & _xmm) > COERCE_FLOAT(*((_DWORD *)this + 9) & _xmm) )
        {
          if ( (float)(*((float *)this + 11) > 0.0) == (float)(v6 > 0.0) )
            v4 = *((float *)this + 9) * *((float *)this + 7);
          else
            v4 = COERCE_FLOAT(LODWORD(v6) ^ _xmm) / 0.0099999998;
          v20 = v4;
        }
        *((float *)this + 9) = v4;
        *((_DWORD *)this + 11) = *((_DWORD *)a2 + 2);
      }
    }
    else
    {
      v4 = COERCE_FLOAT(LODWORD(v6) ^ _xmm) / 0.0099999998;
      v20 = v4;
    }
  }
  else
  {
    v4 = (float)(v5 > 0.0) * COERCE_FLOAT(*((_DWORD *)this + 6) ^ _xmm);
    v20 = v4;
  }
  v8 = *((_DWORD *)this + 12);
  if ( v8 && (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
  {
    v21 = *(_DWORD *)(v11 + 28);
    v23 = *(_DWORD *)(v11 + 20);
    v15 = v22;
    v16 = *v13;
    v17 = *v12;
    v18 = v13[1];
    v19 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_18037EEEF,
      v10,
      v11,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v23,
      (__int64)&v21);
  }
  return v4;
}
