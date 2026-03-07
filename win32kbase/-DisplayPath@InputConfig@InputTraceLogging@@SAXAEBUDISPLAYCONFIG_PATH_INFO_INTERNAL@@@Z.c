void __fastcall InputTraceLogging::InputConfig::DisplayPath(const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // r8
  int v10; // [rsp+190h] [rbp-80h] BYREF
  int v11; // [rsp+194h] [rbp-7Ch] BYREF
  int v12; // [rsp+198h] [rbp-78h] BYREF
  int v13; // [rsp+19Ch] [rbp-74h] BYREF
  int v14; // [rsp+1A0h] [rbp-70h] BYREF
  int v15; // [rsp+1A4h] [rbp-6Ch] BYREF
  int v16; // [rsp+1A8h] [rbp-68h] BYREF
  int v17; // [rsp+1ACh] [rbp-64h] BYREF
  int v18; // [rsp+1B0h] [rbp-60h] BYREF
  int v19; // [rsp+1B4h] [rbp-5Ch] BYREF
  int v20; // [rsp+1B8h] [rbp-58h] BYREF
  int v21; // [rsp+1BCh] [rbp-54h] BYREF
  int v22; // [rsp+1C0h] [rbp-50h] BYREF
  int v23; // [rsp+1C4h] [rbp-4Ch] BYREF
  int v24; // [rsp+1C8h] [rbp-48h] BYREF
  int v25; // [rsp+1CCh] [rbp-44h] BYREF
  int v26; // [rsp+1D0h] [rbp-40h] BYREF
  int v27; // [rsp+1D4h] [rbp-3Ch] BYREF
  int v28; // [rsp+1D8h] [rbp-38h] BYREF
  int v29; // [rsp+1DCh] [rbp-34h] BYREF
  int v30; // [rsp+1E0h] [rbp-30h] BYREF
  int v31; // [rsp+1E4h] [rbp-2Ch] BYREF
  int v32; // [rsp+1E8h] [rbp-28h] BYREF
  int v33; // [rsp+1ECh] [rbp-24h] BYREF
  int v34; // [rsp+1F0h] [rbp-20h] BYREF
  int v35; // [rsp+1F4h] [rbp-1Ch] BYREF
  int v36; // [rsp+1F8h] [rbp-18h] BYREF
  int v37; // [rsp+1FCh] [rbp-14h] BYREF
  int v38; // [rsp+200h] [rbp-10h] BYREF
  int v39; // [rsp+204h] [rbp-Ch] BYREF
  int v40; // [rsp+208h] [rbp-8h] BYREF
  int v41; // [rsp+20Ch] [rbp-4h] BYREF
  int v42; // [rsp+210h] [rbp+0h] BYREF
  int v43; // [rsp+214h] [rbp+4h] BYREF
  int v44; // [rsp+218h] [rbp+8h] BYREF
  int v45; // [rsp+21Ch] [rbp+Ch] BYREF
  __int64 v46; // [rsp+220h] [rbp+10h] BYREF
  __int64 v47; // [rsp+228h] [rbp+18h] BYREF
  __int64 v48; // [rsp+230h] [rbp+20h] BYREF
  __int64 v49; // [rsp+238h] [rbp+28h] BYREF
  __int64 v50; // [rsp+240h] [rbp+30h] BYREF
  __int64 v51; // [rsp+248h] [rbp+38h] BYREF
  __int64 v52; // [rsp+250h] [rbp+40h] BYREF
  __int64 v53; // [rsp+278h] [rbp+68h] BYREF
  __int64 v54; // [rsp+280h] [rbp+70h] BYREF
  __int64 v55; // [rsp+288h] [rbp+78h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 2LL) )
    {
      v2 = *(unsigned int *)(v1 + 112);
      LODWORD(v53) = *(_DWORD *)(v1 + 212);
      LODWORD(v54) = *(_DWORD *)(v1 + 200);
      LODWORD(v55) = *(_DWORD *)(v1 + 196);
      v10 = *(_DWORD *)(v1 + 192);
      v11 = *(_DWORD *)(v1 + 188);
      v12 = *(_DWORD *)(v1 + 184);
      v13 = *(_DWORD *)(v1 + 180);
      v14 = *(_DWORD *)(v1 + 176);
      v46 = *(_QWORD *)(v1 + 168);
      v15 = *(_DWORD *)(v1 + 164);
      v16 = *(_DWORD *)(v1 + 160);
      v17 = *(_DWORD *)(v1 + 152);
      v18 = *(_DWORD *)(v1 + 148);
      v19 = *(_DWORD *)(v1 + 144);
      v20 = *(_DWORD *)(v1 + 140);
      v21 = *(_DWORD *)(v1 + 136);
      v22 = *(_DWORD *)(v1 + 132);
      v23 = *(_DWORD *)(v1 + 128);
      v24 = *(_DWORD *)(v1 + 124);
      v25 = *(_DWORD *)(v1 + 120);
      v26 = *(_DWORD *)(v1 + 116);
      v3 = InputTraceLogging::ScalingToString(v2);
      v5 = *(unsigned int *)(v4 + 108);
      v47 = v3;
      v6 = InputTraceLogging::ScalingToString(v5);
      v8 = *(_DWORD *)(v7 + 104);
      v48 = v6;
      v49 = (__int64)InputTraceLogging::OrientationToString(v8);
      v27 = *(unsigned __int8 *)(v9 + 101);
      v28 = *(unsigned __int8 *)(v9 + 100);
      v29 = *(_DWORD *)(v9 + 96);
      v30 = *(_DWORD *)(v9 + 92);
      v31 = *(_DWORD *)(v9 + 88);
      v32 = *(_DWORD *)(v9 + 84);
      v33 = *(_DWORD *)(v9 + 80);
      v34 = *(_DWORD *)(v9 + 76);
      v35 = *(_DWORD *)(v9 + 72);
      v36 = *(_DWORD *)(v9 + 68);
      v37 = *(_DWORD *)(v9 + 64);
      v38 = *(_DWORD *)(v9 + 60);
      v39 = *(_DWORD *)(v9 + 56);
      v40 = *(_DWORD *)(v9 + 52);
      v41 = *(_DWORD *)(v9 + 48);
      v42 = *(_DWORD *)(v9 + 44);
      v43 = *(_DWORD *)(v9 + 40);
      v50 = *(_QWORD *)(v9 + 32);
      v44 = *(_DWORD *)(v9 + 28);
      v45 = *(_DWORD *)(v9 + 24);
      v51 = *(_QWORD *)(v9 + 8);
      v52 = *(_QWORD *)v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C02CA7E0,
        (int)&dword_1C029C45A,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v50,
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
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v46,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53);
    }
  }
}
