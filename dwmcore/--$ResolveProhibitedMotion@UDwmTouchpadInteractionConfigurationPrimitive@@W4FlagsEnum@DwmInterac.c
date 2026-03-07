unsigned __int8 __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  unsigned int v6; // r8d
  unsigned __int8 v9; // si
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rcx
  int v21; // [rsp+F0h] [rbp-80h] BYREF
  int v22; // [rsp+F4h] [rbp-7Ch] BYREF
  int v23; // [rsp+F8h] [rbp-78h] BYREF
  int v24; // [rsp+FCh] [rbp-74h] BYREF
  int v25; // [rsp+100h] [rbp-70h] BYREF
  int v26; // [rsp+104h] [rbp-6Ch] BYREF
  int v27; // [rsp+108h] [rbp-68h] BYREF
  int v28; // [rsp+10Ch] [rbp-64h] BYREF
  int v29; // [rsp+110h] [rbp-60h] BYREF
  int v30; // [rsp+114h] [rbp-5Ch] BYREF
  int v31; // [rsp+118h] [rbp-58h] BYREF
  int v32; // [rsp+11Ch] [rbp-54h] BYREF
  int v33; // [rsp+120h] [rbp-50h] BYREF
  int v34; // [rsp+124h] [rbp-4Ch] BYREF
  int v35; // [rsp+128h] [rbp-48h] BYREF
  int v36; // [rsp+12Ch] [rbp-44h] BYREF
  int v37; // [rsp+130h] [rbp-40h] BYREF
  int v38; // [rsp+134h] [rbp-3Ch] BYREF
  int v39; // [rsp+138h] [rbp-38h] BYREF
  int v40; // [rsp+13Ch] [rbp-34h] BYREF
  int v41; // [rsp+140h] [rbp-30h] BYREF
  __int64 v42; // [rsp+148h] [rbp-28h] BYREF
  int v43; // [rsp+150h] [rbp-20h]
  __int64 v44; // [rsp+158h] [rbp-18h] BYREF
  __int64 v45; // [rsp+160h] [rbp-10h] BYREF
  __int64 v46; // [rsp+168h] [rbp-8h] BYREF
  __int64 v47; // [rsp+170h] [rbp+0h] BYREF
  __int64 *v48; // [rsp+178h] [rbp+8h] BYREF
  int v49; // [rsp+180h] [rbp+10h] BYREF
  int v50; // [rsp+184h] [rbp+14h]
  int v51; // [rsp+188h] [rbp+18h]
  int v52; // [rsp+18Ch] [rbp+1Ch]
  int v53; // [rsp+190h] [rbp+20h]
  int v54; // [rsp+194h] [rbp+24h]
  int v55; // [rsp+198h] [rbp+28h]
  int v56; // [rsp+19Ch] [rbp+2Ch]
  int v57; // [rsp+1A0h] [rbp+30h]
  int v58; // [rsp+1A4h] [rbp+34h]
  int v59; // [rsp+1A8h] [rbp+38h]
  int v60; // [rsp+1ACh] [rbp+3Ch]
  int v61; // [rsp+1B0h] [rbp+40h]
  int v62; // [rsp+1B4h] [rbp+44h]
  int v63; // [rsp+1B8h] [rbp+48h]
  int v64; // [rsp+1BCh] [rbp+4Ch]

  v6 = *((_DWORD *)a2 + 6);
  if ( v6 && !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v9 = 1;
  v10 = 0LL;
  do
  {
    if ( (unsigned int)v10 >= v6 )
      break;
    v11 = *a2;
    v12 = *((_DWORD *)a1 + 198);
    if ( v12 >= *(_DWORD *)(*a2 + 12 * v10) && v12 <= *(_DWORD *)(v11 + 12 * v10 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12 * v10 + 8) & 0x40) != 0 )
        *a3 = 0;
      if ( *(char *)(*a2 + 12 * v10 + 8) < 0 )
        a3[1] = 0;
      v13 = *a2;
      v63 = 0;
      v62 = 0;
      v61 = 0;
      v60 = 0;
      v58 = 0;
      v57 = 0;
      v56 = 0;
      v55 = 0;
      v53 = 0;
      v52 = 0;
      v51 = 0;
      v50 = 0;
      v14 = *(_DWORD *)(v13 + 12 * v10 + 8);
      v64 = 1065353216;
      v59 = 1065353216;
      v54 = 1065353216;
      v49 = 1065353216;
      if ( (v14 & 1) != 0 && *((float *)a3 + 1) > 0.0 )
        v49 = 0;
      if ( (v14 & 2) != 0 && *((float *)a3 + 1) < 0.0 )
        v49 = 0;
      if ( (v14 & 4) != 0 && *((float *)a3 + 2) > 0.0 )
        v54 = 0;
      if ( (v14 & 8) != 0 && *((float *)a3 + 2) < 0.0 )
        v54 = 0;
      if ( (v14 & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
        v59 = 0;
      if ( (v14 & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
        v59 = 0;
      v15 = *((_DWORD *)a3 + 3);
      v42 = *(_QWORD *)(a3 + 4);
      v43 = v15;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v42, (const struct D2DVector3 *)&v42, (const struct D2DMatrix *)&v49);
      v16 = v43;
      *(_QWORD *)(a3 + 4) = v42;
      *((_DWORD *)a3 + 3) = v16;
      if ( !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v9 = 0;
        *a4 = *((_DWORD *)a1 + 196);
      }
      if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v21 = v59;
        v22 = v58;
        v23 = v57;
        v24 = v55;
        v19 = *a2;
        v25 = v54;
        v26 = v53;
        v27 = v51;
        v28 = v50;
        v29 = v49;
        v30 = *((_DWORD *)a3 + 3);
        v31 = *((_DWORD *)a3 + 2);
        v32 = *((_DWORD *)a3 + 1);
        v33 = a3[1];
        v34 = *a3;
        v35 = *(_DWORD *)(v19 + 4 * v18 + 8);
        v36 = *(_DWORD *)(v19 + 4 * v18 + 4);
        v37 = *(_DWORD *)(v19 + 4 * v18);
        v39 = v9;
        v40 = *((_DWORD *)a1 + 198);
        v41 = *((_DWORD *)a1 + 197);
        v44 = a1[60];
        v45 = a1[40];
        v46 = a1[20];
        v47 = *a1;
        v38 = v10;
        v48 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v19,
          (unsigned int)&unk_18037AEB8,
          v17,
          v18,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v44,
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
          (__int64)&v21);
      }
      v6 = *((_DWORD *)a2 + 6);
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( v9 );
  return v9;
}
