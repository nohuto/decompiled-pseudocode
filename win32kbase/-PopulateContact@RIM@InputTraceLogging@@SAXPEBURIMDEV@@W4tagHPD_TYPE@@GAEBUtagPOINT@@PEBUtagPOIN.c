char __fastcall InputTraceLogging::RIM::PopulateContact(__int64 a1, int a2, __int16 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // r10d
  char result; // al
  int v10; // ecx
  const char *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r8
  int *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  const char *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // r8
  int *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r11
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  const char *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // r8
  int *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r11
  __int64 v41; // r8
  __int64 v42; // r9
  const char *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // ecx
  __int64 v47; // rdx
  __int64 *v48; // r9
  __int64 v49; // r8
  __int64 v50; // r11
  __int64 v51; // r9
  int v52; // [rsp+160h] [rbp-80h] BYREF
  int v53; // [rsp+164h] [rbp-7Ch] BYREF
  __int64 v54; // [rsp+168h] [rbp-78h] BYREF
  __int64 v55; // [rsp+170h] [rbp-70h] BYREF
  __int64 v56; // [rsp+178h] [rbp-68h] BYREF
  __int64 v57; // [rsp+180h] [rbp-60h] BYREF
  __int64 v58; // [rsp+188h] [rbp-58h] BYREF
  __int64 v59; // [rsp+190h] [rbp-50h] BYREF
  __int64 v60; // [rsp+198h] [rbp-48h] BYREF
  int v61; // [rsp+1A0h] [rbp-40h] BYREF
  int v62; // [rsp+1A4h] [rbp-3Ch] BYREF
  __int64 v63; // [rsp+1A8h] [rbp-38h] BYREF
  __int64 v64; // [rsp+1B0h] [rbp-30h] BYREF
  int v65; // [rsp+1B8h] [rbp-28h] BYREF
  int v66; // [rsp+1BCh] [rbp-24h] BYREF
  int v67; // [rsp+1C0h] [rbp-20h] BYREF
  int v68; // [rsp+1C4h] [rbp-1Ch] BYREF
  int v69; // [rsp+1C8h] [rbp-18h] BYREF
  int v70; // [rsp+1CCh] [rbp-14h] BYREF
  __int64 v71; // [rsp+1D0h] [rbp-10h] BYREF
  __int64 v72; // [rsp+1D8h] [rbp-8h] BYREF
  __int64 v73; // [rsp+1E0h] [rbp+0h] BYREF
  __int64 v74; // [rsp+1E8h] [rbp+8h] BYREF
  __int64 v75; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v76; // [rsp+1F8h] [rbp+18h] BYREF
  __int64 v77; // [rsp+200h] [rbp+20h] BYREF
  __int64 v78; // [rsp+208h] [rbp+28h] BYREF
  __int64 v79; // [rsp+210h] [rbp+30h] BYREF
  __int64 v80; // [rsp+218h] [rbp+38h] BYREF
  __int64 v81; // [rsp+230h] [rbp+50h] BYREF

  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
  result = v8 - 1;
  if ( (unsigned int)(v8 - 1) > 3 )
  {
    result = v8 - 5;
    if ( (unsigned int)(v8 - 5) > 1 )
    {
      if ( v8 == 7 )
      {
        if ( (unsigned int)dword_1C02CA7E0 > 4 )
        {
          result = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
          if ( result )
          {
            v32 = *(_DWORD *)(a5 + 96);
            v61 = *(_DWORD *)(a5 + 148);
            v60 = *(_QWORD *)(a5 + 140);
            v59 = *(_QWORD *)(a5 + 132);
            v58 = *(_QWORD *)(a5 + 124);
            v57 = *(_QWORD *)(a5 + 116);
            v52 = *(_DWORD *)(a5 + 112);
            v55 = *(_QWORD *)(a5 + 104);
            v33 = InputTraceLogging::ButtonChangeTypeToString(v32);
            v35 = *(_QWORD *)(v34 + 88);
            v36 = *(_DWORD *)(v34 + 8);
            v80 = (__int64)v33;
            HIDWORD(v54) = *(_DWORD *)(v34 + 84);
            LODWORD(v54) = *(_DWORD *)(v34 + 76);
            v53 = *(_DWORD *)(v34 + 72);
            v78 = *(_QWORD *)(v34 + 32);
            v77 = *(_QWORD *)(v34 + 24);
            HIDWORD(v56) = *(_DWORD *)(v34 + 80);
            LODWORD(v56) = *(_DWORD *)(v34 + 68);
            v65 = *(_DWORD *)(v34 + 64);
            v64 = *(_QWORD *)(v34 + 48);
            v63 = *(_QWORD *)(v34 + 56);
            v62 = *(_DWORD *)(v34 + 44);
            v67 = *(_DWORD *)(v34 + 40);
            v66 = *(_DWORD *)(v34 + 20);
            v79 = v35;
            v76 = (__int64)InputTraceLogging::PointerTypeToString(v36);
            LODWORD(v71) = *(_DWORD *)(v37 + 16);
            v70 = *(_DWORD *)(v37 + 12);
            v69 = v38[1];
            v68 = *v38;
            v75 = (__int64)InputTraceLogging::PointerDeviceTypeToString(a2);
            LOWORD(v81) = a3;
            v74 = (__int64)InputTraceLogging::ContactPopulationSourceToString(a6);
            v73 = v39;
            v72 = v40;
            return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_1C02CA7E0,
                     (unsigned __int8 *)dword_1C0298E57,
                     v41,
                     v42,
                     (__int64)&v72,
                     (__int64)&v73,
                     (void **)&v74,
                     (__int64)&v81,
                     (void **)&v75,
                     (__int64)&v68,
                     (__int64)&v69,
                     (__int64)&v70,
                     (__int64)&v71,
                     (void **)&v76,
                     (__int64)&v66,
                     (__int64)&v67,
                     (__int64)&v62,
                     (__int64)&v63,
                     (__int64)&v63 + 4,
                     (__int64)&v64,
                     (__int64)&v64 + 4,
                     (__int64)&v65,
                     (__int64)&v56,
                     (__int64)&v56 + 4,
                     (__int64)&v77,
                     (__int64)&v78,
                     (__int64)&v53,
                     (__int64)&v79,
                     (__int64)&v54,
                     (__int64)&v54 + 4,
                     (void **)&v80,
                     (__int64)&v55,
                     (__int64)&v55 + 4,
                     (__int64)&v52,
                     (__int64)&v57,
                     (__int64)&v57 + 4,
                     (__int64)&v58,
                     (__int64)&v58 + 4,
                     (__int64)&v59,
                     (__int64)&v59 + 4,
                     (__int64)&v60,
                     (__int64)&v60 + 4,
                     (__int64)&v61);
          }
        }
      }
      else if ( (unsigned int)dword_1C02CA7E0 > 4 )
      {
        result = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
        if ( result )
        {
          v43 = InputTraceLogging::ButtonChangeTypeToString(*(_DWORD *)(a5 + 96));
          v45 = *(_QWORD *)(v44 + 88);
          v46 = *(_DWORD *)(v44 + 8);
          v80 = (__int64)v43;
          v61 = *(_DWORD *)(v44 + 84);
          v60 = *(_QWORD *)(v44 + 72);
          v78 = *(_QWORD *)(v44 + 32);
          v77 = *(_QWORD *)(v44 + 24);
          HIDWORD(v59) = *(_DWORD *)(v44 + 80);
          LODWORD(v59) = *(_DWORD *)(v44 + 68);
          HIDWORD(v58) = *(_DWORD *)(v44 + 64);
          LODWORD(v58) = *(_DWORD *)(v44 + 52);
          HIDWORD(v57) = *(_DWORD *)(v44 + 48);
          LODWORD(v57) = *(_DWORD *)(v44 + 60);
          v52 = *(_DWORD *)(v44 + 56);
          v55 = *(_QWORD *)(v44 + 40);
          HIDWORD(v54) = *(_DWORD *)(v44 + 20);
          v79 = v45;
          v76 = (__int64)InputTraceLogging::PointerTypeToString(v46);
          LODWORD(v54) = *(_DWORD *)(v47 + 16);
          v53 = *(_DWORD *)(v47 + 12);
          v56 = *v48;
          v75 = (__int64)InputTraceLogging::PointerDeviceTypeToString(a2);
          LOWORD(v81) = a3;
          v74 = (__int64)InputTraceLogging::ContactPopulationSourceToString(a6);
          v73 = v49;
          v72 = v50;
          return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
                   (__int64)&dword_1C02CA7E0,
                   (unsigned __int8 *)dword_1C02991E7,
                   v49,
                   v51,
                   (__int64)&v72,
                   (__int64)&v73,
                   (void **)&v74,
                   (__int64)&v81,
                   (void **)&v75,
                   (__int64)&v56,
                   (__int64)&v56 + 4,
                   (__int64)&v53,
                   (__int64)&v54,
                   (void **)&v76,
                   (__int64)&v54 + 4,
                   (__int64)&v55,
                   (__int64)&v55 + 4,
                   (__int64)&v52,
                   (__int64)&v57,
                   (__int64)&v57 + 4,
                   (__int64)&v58,
                   (__int64)&v58 + 4,
                   (__int64)&v59,
                   (__int64)&v59 + 4,
                   (__int64)&v77,
                   (__int64)&v78,
                   (__int64)&v60,
                   (__int64)&v79,
                   (__int64)&v60 + 4,
                   (__int64)&v61,
                   (void **)&v80);
        }
      }
    }
    else if ( (unsigned int)dword_1C02CA7E0 > 4 )
    {
      result = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
      if ( result )
      {
        v21 = *(_DWORD *)(a5 + 96);
        v61 = *(_DWORD *)(a5 + 124);
        v60 = *(_QWORD *)(a5 + 116);
        v59 = *(_QWORD *)(a5 + 108);
        HIDWORD(v58) = *(_DWORD *)(a5 + 104);
        v22 = InputTraceLogging::ButtonChangeTypeToString(v21);
        v24 = *(_QWORD *)(v23 + 88);
        v25 = *(_DWORD *)(v23 + 8);
        v80 = (__int64)v22;
        LODWORD(v58) = *(_DWORD *)(v23 + 84);
        v57 = *(_QWORD *)(v23 + 72);
        v78 = *(_QWORD *)(v23 + 32);
        v77 = *(_QWORD *)(v23 + 24);
        v52 = *(_DWORD *)(v23 + 80);
        v55 = *(_QWORD *)(v23 + 64);
        v54 = *(_QWORD *)(v23 + 48);
        v53 = *(_DWORD *)(v23 + 60);
        HIDWORD(v56) = *(_DWORD *)(v23 + 56);
        LODWORD(v56) = *(_DWORD *)(v23 + 44);
        v65 = *(_DWORD *)(v23 + 40);
        HIDWORD(v64) = *(_DWORD *)(v23 + 20);
        v79 = v24;
        v76 = (__int64)InputTraceLogging::PointerTypeToString(v25);
        LODWORD(v64) = *(_DWORD *)(v26 + 16);
        HIDWORD(v63) = *(_DWORD *)(v26 + 12);
        LODWORD(v63) = v27[1];
        v62 = *v27;
        v75 = (__int64)InputTraceLogging::PointerDeviceTypeToString(a2);
        LOWORD(v81) = a3;
        v74 = (__int64)InputTraceLogging::ContactPopulationSourceToString(a6);
        v73 = v28;
        v72 = v29;
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 (__int64)&dword_1C02CA7E0,
                 (unsigned __int8 *)dword_1C0299043,
                 v30,
                 v31,
                 (__int64)&v72,
                 (__int64)&v73,
                 (void **)&v74,
                 (__int64)&v81,
                 (void **)&v75,
                 (__int64)&v62,
                 (__int64)&v63,
                 (__int64)&v63 + 4,
                 (__int64)&v64,
                 (void **)&v76,
                 (__int64)&v64 + 4,
                 (__int64)&v65,
                 (__int64)&v56,
                 (__int64)&v56 + 4,
                 (__int64)&v53,
                 (__int64)&v54,
                 (__int64)&v54 + 4,
                 (__int64)&v55,
                 (__int64)&v55 + 4,
                 (__int64)&v52,
                 (__int64)&v77,
                 (__int64)&v78,
                 (__int64)&v57,
                 (__int64)&v79,
                 (__int64)&v57 + 4,
                 (__int64)&v58,
                 (void **)&v80,
                 (__int64)&v58 + 4,
                 (__int64)&v59,
                 (__int64)&v59 + 4,
                 (__int64)&v60,
                 (__int64)&v60 + 4,
                 (__int64)&v61);
      }
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
    if ( result )
    {
      v10 = *(_DWORD *)(a5 + 96);
      v68 = *(_DWORD *)(a5 + 148);
      v69 = *(_DWORD *)(a5 + 144);
      v70 = *(_DWORD *)(a5 + 140);
      LODWORD(v71) = *(_DWORD *)(a5 + 136);
      v66 = *(_DWORD *)(a5 + 132);
      v67 = *(_DWORD *)(a5 + 128);
      v62 = *(_DWORD *)(a5 + 124);
      LODWORD(v63) = *(_DWORD *)(a5 + 120);
      HIDWORD(v63) = *(_DWORD *)(a5 + 116);
      LODWORD(v64) = *(_DWORD *)(a5 + 112);
      HIDWORD(v64) = *(_DWORD *)(a5 + 108);
      v65 = *(_DWORD *)(a5 + 104);
      v11 = InputTraceLogging::ButtonChangeTypeToString(v10);
      v13 = *(_QWORD *)(v12 + 88);
      v14 = *(_DWORD *)(v12 + 8);
      v72 = (__int64)v11;
      LODWORD(v56) = *(_DWORD *)(v12 + 84);
      HIDWORD(v56) = *(_DWORD *)(v12 + 76);
      v53 = *(_DWORD *)(v12 + 72);
      v74 = *(_QWORD *)(v12 + 32);
      v75 = *(_QWORD *)(v12 + 24);
      LODWORD(v54) = *(_DWORD *)(v12 + 80);
      HIDWORD(v54) = *(_DWORD *)(v12 + 68);
      LODWORD(v55) = *(_DWORD *)(v12 + 64);
      HIDWORD(v55) = *(_DWORD *)(v12 + 52);
      v52 = *(_DWORD *)(v12 + 48);
      LODWORD(v57) = *(_DWORD *)(v12 + 60);
      HIDWORD(v57) = *(_DWORD *)(v12 + 56);
      LODWORD(v58) = *(_DWORD *)(v12 + 44);
      HIDWORD(v58) = *(_DWORD *)(v12 + 40);
      LODWORD(v59) = *(_DWORD *)(v12 + 20);
      v73 = v13;
      v76 = (__int64)InputTraceLogging::PointerTypeToString(v14);
      HIDWORD(v59) = *(_DWORD *)(v15 + 16);
      LODWORD(v60) = *(_DWORD *)(v15 + 12);
      HIDWORD(v60) = v16[1];
      v61 = *v16;
      v77 = (__int64)InputTraceLogging::PointerDeviceTypeToString(a2);
      LOWORD(v81) = a3;
      v78 = (__int64)InputTraceLogging::ContactPopulationSourceToString(a6);
      v79 = v17;
      v80 = v18;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               (__int64)&dword_1C02CA7E0,
               byte_1C0298C69,
               v19,
               v20,
               (__int64)&v80,
               (__int64)&v79,
               (void **)&v78,
               (__int64)&v81,
               (void **)&v77,
               (__int64)&v61,
               (__int64)&v60 + 4,
               (__int64)&v60,
               (__int64)&v59 + 4,
               (void **)&v76,
               (__int64)&v59,
               (__int64)&v58 + 4,
               (__int64)&v58,
               (__int64)&v57 + 4,
               (__int64)&v57,
               (__int64)&v52,
               (__int64)&v55 + 4,
               (__int64)&v55,
               (__int64)&v54 + 4,
               (__int64)&v54,
               (__int64)&v75,
               (__int64)&v74,
               (__int64)&v53,
               (__int64)&v73,
               (__int64)&v56 + 4,
               (__int64)&v56,
               (void **)&v72,
               (__int64)&v65,
               (__int64)&v64 + 4,
               (__int64)&v64,
               (__int64)&v63 + 4,
               (__int64)&v63,
               (__int64)&v62,
               (__int64)&v67,
               (__int64)&v66,
               (__int64)&v71,
               (__int64)&v70,
               (__int64)&v69,
               (__int64)&v68);
    }
  }
  return result;
}
