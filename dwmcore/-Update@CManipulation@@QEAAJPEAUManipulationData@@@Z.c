/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x18020B184
 * Callers:
 *     ?Thunk_UpdateManipulation_108@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18019EF40 (-Thunk_UpdateManipulation_108@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18020A87C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444@Z @ 0x180209CCC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_180209CCC.c)
 */

__int64 __fastcall CManipulation::Update(CManipulation *this, struct ManipulationData *a2)
{
  _OWORD *v2; // r9
  int v4; // edi
  __m128 v5; // xmm3
  __m128 v6; // xmm2
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  char *v11; // rcx
  __int128 v12; // xmm0
  char *v13; // rdx
  float v14; // eax
  __int64 v15; // r8
  int *v16; // r9
  unsigned __int8 v17; // cl
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v23; // [rsp+118h] [rbp-80h] BYREF
  int v24; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v25; // [rsp+120h] [rbp-78h] BYREF
  int v26; // [rsp+124h] [rbp-74h] BYREF
  int v27; // [rsp+128h] [rbp-70h] BYREF
  int v28; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v29; // [rsp+130h] [rbp-68h] BYREF
  int v30; // [rsp+134h] [rbp-64h] BYREF
  int v31; // [rsp+138h] [rbp-60h] BYREF
  int v32; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v33; // [rsp+140h] [rbp-58h] BYREF
  int v34; // [rsp+144h] [rbp-54h] BYREF
  int v35; // [rsp+148h] [rbp-50h] BYREF
  int v36; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v37; // [rsp+150h] [rbp-48h] BYREF
  int v38; // [rsp+154h] [rbp-44h] BYREF
  int v39; // [rsp+158h] [rbp-40h] BYREF
  int v40; // [rsp+15Ch] [rbp-3Ch] BYREF
  int v41; // [rsp+160h] [rbp-38h] BYREF
  int v42; // [rsp+164h] [rbp-34h] BYREF
  int v43; // [rsp+168h] [rbp-30h] BYREF
  int v44; // [rsp+16Ch] [rbp-2Ch] BYREF
  int v45; // [rsp+170h] [rbp-28h] BYREF
  int v46; // [rsp+174h] [rbp-24h] BYREF
  int v47; // [rsp+178h] [rbp-20h] BYREF
  int v48; // [rsp+17Ch] [rbp-1Ch] BYREF
  int v49; // [rsp+180h] [rbp-18h] BYREF
  int v50; // [rsp+184h] [rbp-14h] BYREF
  int v51; // [rsp+188h] [rbp-10h] BYREF
  CManipulation *v52; // [rsp+190h] [rbp-8h] BYREF
  float v53; // [rsp+198h] [rbp+0h]

  v2 = (_OWORD *)((char *)this + 264);
  v4 = *((_DWORD *)this + 105);
  v5 = (__m128)*((unsigned int *)a2 + 9);
  v6 = (__m128)*((unsigned int *)a2 + 10);
  v5.m128_f32[0] = v5.m128_f32[0] * *((float *)this + 75);
  v6.m128_f32[0] = v6.m128_f32[0] * *((float *)this + 76);
  v7 = *((float *)a2 + 4) + *((float *)this + 70);
  v8 = *((float *)a2 + 5) + *((float *)this + 71);
  v53 = *((float *)a2 + 11) * *((float *)this + 77);
  v9 = *((float *)this + 69);
  v10 = *((float *)a2 + 3);
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)a2;
  v11 = (char *)this + 392;
  v2[1] = *((_OWORD *)a2 + 1);
  v2[2] = *((_OWORD *)a2 + 2);
  v2[3] = *((_OWORD *)a2 + 3);
  v2[4] = *((_OWORD *)a2 + 4);
  v2[5] = *((_OWORD *)a2 + 5);
  v2[6] = *((_OWORD *)a2 + 6);
  v12 = *((_OWORD *)a2 + 7);
  v13 = (char *)a2 + 128;
  *((_OWORD *)v11 - 1) = v12;
  *(_OWORD *)v11 = *(_OWORD *)v13;
  *((_OWORD *)v11 + 1) = *((_OWORD *)v13 + 1);
  *((_OWORD *)v11 + 2) = *((_OWORD *)v13 + 2);
  *((_QWORD *)v11 + 6) = *((_QWORD *)v13 + 6);
  *((float *)this + 69) = v10 + v9;
  *((float *)this + 70) = v7;
  *((float *)this + 71) = v8;
  v14 = v53;
  *(_QWORD *)((char *)this + 300) = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  *((float *)this + 77) = v14;
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v17 = *((_BYTE *)this + 444);
    v52 = this;
    v23 = (v17 >> 1) & 1;
    v18 = v17 & 1;
    v25 = *((_DWORD *)this + 110);
    v26 = *((_DWORD *)this + 109);
    v27 = *((_DWORD *)this + 108);
    v28 = *((_DWORD *)this + 105);
    v29 = *((_DWORD *)this + 103);
    v30 = *((_DWORD *)this + 102);
    v31 = *((_DWORD *)this + 101);
    v32 = *((_DWORD *)this + 100);
    v33 = *((_DWORD *)this + 99);
    v34 = *((_DWORD *)this + 98);
    v35 = *((_DWORD *)this + 104);
    v36 = *((_DWORD *)this + 78);
    v37 = *((_DWORD *)this + 81);
    v38 = *((_DWORD *)this + 80);
    v39 = *((_DWORD *)this + 79);
    v40 = *((_DWORD *)this + 77);
    v41 = *((_DWORD *)this + 76);
    v42 = *((_DWORD *)this + 75);
    v43 = *((_DWORD *)this + 74);
    v44 = *((_DWORD *)this + 73);
    v45 = *((_DWORD *)this + 72);
    v46 = *((_DWORD *)this + 71);
    v47 = *((_DWORD *)this + 70);
    v48 = *((_DWORD *)this + 69);
    v49 = *((_DWORD *)this + 68);
    v50 = *((_DWORD *)this + 67);
    v51 = *v16;
    v24 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_18037C518,
      v15,
      (__int64)v16,
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
      (__int64)&v23);
  }
  v19 = *((_DWORD *)this + 105);
  if ( v19 == v4 )
  {
    if ( v19 || v4 )
    {
      (*(void (__fastcall **)(CManipulation *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
      goto LABEL_11;
    }
    v20 = *(_QWORD *)this;
    v21 = 10LL;
  }
  else
  {
    v20 = *(_QWORD *)this;
    v21 = 7LL;
  }
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(v20 + 72))(this, v21, this);
LABEL_11:
  CResource::InvalidateAnimationSources(this, 0);
  CResource::InvalidateAnimationSources(this, 1);
  CResource::InvalidateAnimationSources(this, 2);
  CResource::InvalidateAnimationSources(this, 3);
  CResource::InvalidateAnimationSources(this, 4);
  CResource::InvalidateAnimationSources(this, 5);
  CResource::InvalidateAnimationSources(this, 6);
  CResource::InvalidateAnimationSources(this, 7);
  return 0LL;
}
