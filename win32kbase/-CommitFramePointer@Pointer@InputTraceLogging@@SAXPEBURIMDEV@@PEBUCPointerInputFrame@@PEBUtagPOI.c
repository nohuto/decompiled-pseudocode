void __fastcall InputTraceLogging::Pointer::CommitFramePointer(
        const struct RIMDEV *a1,
        const struct CPointerInputFrame *a2,
        const struct tagPOINTEREVENTINT *a3)
{
  int v3; // r9d
  _DWORD *v4; // r8
  int v5; // ecx
  const char *v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // ecx
  const char *v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // ecx
  const char *v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // r11
  __int64 v30; // r9
  __int64 v31; // r8
  const char *v32; // rax
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r10
  __int64 v36; // r8
  __int64 v37; // r11
  __int64 v38; // r9
  int v39; // [rsp+140h] [rbp-80h] BYREF
  int v40; // [rsp+144h] [rbp-7Ch] BYREF
  __int64 v41; // [rsp+148h] [rbp-78h] BYREF
  __int64 v42; // [rsp+150h] [rbp-70h] BYREF
  __int64 v43; // [rsp+158h] [rbp-68h] BYREF
  __int64 v44; // [rsp+160h] [rbp-60h] BYREF
  __int64 v45; // [rsp+168h] [rbp-58h] BYREF
  __int64 v46; // [rsp+170h] [rbp-50h] BYREF
  int v47; // [rsp+178h] [rbp-48h] BYREF
  int v48; // [rsp+17Ch] [rbp-44h] BYREF
  int v49; // [rsp+180h] [rbp-40h] BYREF
  int v50; // [rsp+184h] [rbp-3Ch] BYREF
  int v51; // [rsp+188h] [rbp-38h] BYREF
  int v52; // [rsp+18Ch] [rbp-34h] BYREF
  __int64 v53; // [rsp+190h] [rbp-30h] BYREF
  int v54; // [rsp+198h] [rbp-28h] BYREF
  int v55; // [rsp+19Ch] [rbp-24h] BYREF
  int v56; // [rsp+1A0h] [rbp-20h] BYREF
  _DWORD v57[3]; // [rsp+1A4h] [rbp-1Ch] BYREF
  __int64 v58; // [rsp+1B0h] [rbp-10h] BYREF
  __int64 v59; // [rsp+1B8h] [rbp-8h] BYREF
  __int64 v60; // [rsp+1C0h] [rbp+0h] BYREF
  __int64 v61; // [rsp+1C8h] [rbp+8h] BYREF
  __int64 v62; // [rsp+1D0h] [rbp+10h] BYREF
  __int64 v63; // [rsp+1D8h] [rbp+18h] BYREF
  __int64 v64[2]; // [rsp+1E0h] [rbp+20h] BYREF
  __int64 v65; // [rsp+200h] [rbp+40h] BYREF
  __int64 v66; // [rsp+218h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL);
  if ( (unsigned int)(v3 - 1) > 3 )
  {
    if ( (unsigned int)(v3 - 5) > 1 )
    {
      if ( v3 == 7 )
      {
        if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
        {
          v23 = *(_DWORD *)(v22 + 96);
          LODWORD(v66) = *(_DWORD *)(v22 + 148);
          v46 = *(_QWORD *)(v22 + 140);
          v45 = *(_QWORD *)(v22 + 132);
          v44 = *(_QWORD *)(v22 + 124);
          v43 = *(_QWORD *)(v22 + 116);
          v39 = *(_DWORD *)(v22 + 112);
          v42 = *(_QWORD *)(v22 + 104);
          v24 = InputTraceLogging::ButtonChangeTypeToString(v23);
          v26 = *(_DWORD *)(v25 + 8);
          v64[0] = (__int64)v24;
          HIDWORD(v41) = *(_DWORD *)(v25 + 84);
          LODWORD(v41) = *(_DWORD *)(v25 + 76);
          v63 = *(_QWORD *)(v25 + 88);
          v40 = *(_DWORD *)(v25 + 72);
          v62 = *(_QWORD *)(v25 + 32);
          v61 = *(_QWORD *)(v25 + 24);
          v52 = *(_DWORD *)(v25 + 80);
          v51 = *(_DWORD *)(v25 + 68);
          v50 = *(_DWORD *)(v25 + 64);
          v49 = *(_DWORD *)(v25 + 52);
          v48 = *(_DWORD *)(v25 + 48);
          v47 = *(_DWORD *)(v25 + 60);
          v54 = *(_DWORD *)(v25 + 56);
          v53 = *(_QWORD *)(v25 + 40);
          v57[0] = *(_DWORD *)(v25 + 20);
          v60 = (__int64)InputTraceLogging::PointerTypeToString(v26);
          v56 = *(_DWORD *)(v28 + 16) + *(_DWORD *)(v27 + 40);
          v55 = *(_DWORD *)(v28 + 12);
          LOWORD(v65) = *(_WORD *)v28;
          v59 = *(_QWORD *)(v27 + 72);
          v58 = *(_QWORD *)(v27 + 216);
          *(_QWORD *)&v57[1] = v29;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C02CA7E0,
            (unsigned __int8 *)dword_1C029A247,
            v28,
            v30,
            (__int64)&v57[1],
            (__int64)&v58,
            (__int64)&v59,
            (__int64)&v65,
            (__int64)&v55,
            (__int64)&v56,
            (void **)&v60,
            (__int64)v57,
            (__int64)&v53,
            (__int64)&v53 + 4,
            (__int64)&v54,
            (__int64)&v47,
            (__int64)&v48,
            (__int64)&v49,
            (__int64)&v50,
            (__int64)&v51,
            (__int64)&v52,
            (__int64)&v61,
            (__int64)&v62,
            (__int64)&v40,
            (__int64)&v63,
            (__int64)&v41,
            (__int64)&v41 + 4,
            (void **)v64,
            (__int64)&v42,
            (__int64)&v42 + 4,
            (__int64)&v39,
            (__int64)&v43,
            (__int64)&v43 + 4,
            (__int64)&v44,
            (__int64)&v44 + 4,
            (__int64)&v45,
            (__int64)&v45 + 4,
            (__int64)&v46,
            (__int64)&v46 + 4,
            (__int64)&v66);
        }
      }
      else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
      {
        v32 = InputTraceLogging::ButtonChangeTypeToString(*(_DWORD *)(v31 + 96));
        v34 = *(_DWORD *)(v33 + 8);
        v64[0] = (__int64)v32;
        LODWORD(v66) = *(_DWORD *)(v33 + 84);
        HIDWORD(v46) = *(_DWORD *)(v33 + 76);
        v63 = *(_QWORD *)(v33 + 88);
        LODWORD(v46) = *(_DWORD *)(v33 + 72);
        v62 = *(_QWORD *)(v33 + 32);
        v61 = *(_QWORD *)(v33 + 24);
        HIDWORD(v45) = *(_DWORD *)(v33 + 80);
        LODWORD(v45) = *(_DWORD *)(v33 + 68);
        HIDWORD(v44) = *(_DWORD *)(v33 + 64);
        LODWORD(v44) = *(_DWORD *)(v33 + 52);
        HIDWORD(v43) = *(_DWORD *)(v33 + 48);
        LODWORD(v43) = *(_DWORD *)(v33 + 60);
        v39 = *(_DWORD *)(v33 + 56);
        v42 = *(_QWORD *)(v33 + 40);
        HIDWORD(v41) = *(_DWORD *)(v33 + 20);
        v60 = (__int64)InputTraceLogging::PointerTypeToString(v34);
        LODWORD(v41) = *(_DWORD *)(v36 + 16) + *(_DWORD *)(v35 + 40);
        v40 = *(_DWORD *)(v36 + 12);
        LOWORD(v65) = *(_WORD *)v36;
        v59 = *(_QWORD *)(v35 + 72);
        v58 = *(_QWORD *)(v35 + 216);
        *(_QWORD *)&v57[1] = v37;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (__int64)&dword_1C02CA7E0,
          (unsigned __int8 *)dword_1C029A0F3,
          v36,
          v38,
          (__int64)&v57[1],
          (__int64)&v58,
          (__int64)&v59,
          (__int64)&v65,
          (__int64)&v40,
          (__int64)&v41,
          (void **)&v60,
          (__int64)&v41 + 4,
          (__int64)&v42,
          (__int64)&v42 + 4,
          (__int64)&v39,
          (__int64)&v43,
          (__int64)&v43 + 4,
          (__int64)&v44,
          (__int64)&v44 + 4,
          (__int64)&v45,
          (__int64)&v45 + 4,
          (__int64)&v61,
          (__int64)&v62,
          (__int64)&v46,
          (__int64)&v63,
          (__int64)&v46 + 4,
          (__int64)&v66,
          (void **)v64);
      }
    }
    else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
    {
      v14 = *(_DWORD *)(v13 + 96);
      LODWORD(v66) = *(_DWORD *)(v13 + 124);
      v46 = *(_QWORD *)(v13 + 116);
      v45 = *(_QWORD *)(v13 + 108);
      HIDWORD(v44) = *(_DWORD *)(v13 + 104);
      v15 = InputTraceLogging::ButtonChangeTypeToString(v14);
      v17 = *(_DWORD *)(v16 + 8);
      v64[0] = (__int64)v15;
      LODWORD(v44) = *(_DWORD *)(v16 + 84);
      HIDWORD(v43) = *(_DWORD *)(v16 + 76);
      v63 = *(_QWORD *)(v16 + 88);
      LODWORD(v43) = *(_DWORD *)(v16 + 72);
      v62 = *(_QWORD *)(v16 + 32);
      v61 = *(_QWORD *)(v16 + 24);
      v39 = *(_DWORD *)(v16 + 80);
      v42 = *(_QWORD *)(v16 + 64);
      v41 = *(_QWORD *)(v16 + 48);
      v40 = *(_DWORD *)(v16 + 60);
      v52 = *(_DWORD *)(v16 + 56);
      v51 = *(_DWORD *)(v16 + 44);
      v50 = *(_DWORD *)(v16 + 40);
      v49 = *(_DWORD *)(v16 + 20);
      v60 = (__int64)InputTraceLogging::PointerTypeToString(v17);
      v48 = *(_DWORD *)(v19 + 16) + *(_DWORD *)(v18 + 40);
      v47 = *(_DWORD *)(v19 + 12);
      LOWORD(v65) = *(_WORD *)v19;
      v59 = *(_QWORD *)(v18 + 72);
      v58 = *(_QWORD *)(v18 + 216);
      *(_QWORD *)&v57[1] = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C0299D9F,
        v19,
        v21,
        (__int64)&v57[1],
        (__int64)&v58,
        (__int64)&v59,
        (__int64)&v65,
        (__int64)&v47,
        (__int64)&v48,
        (void **)&v60,
        (__int64)&v49,
        (__int64)&v50,
        (__int64)&v51,
        (__int64)&v52,
        (__int64)&v40,
        (__int64)&v41,
        (__int64)&v41 + 4,
        (__int64)&v42,
        (__int64)&v42 + 4,
        (__int64)&v39,
        (__int64)&v61,
        (__int64)&v62,
        (__int64)&v43,
        (__int64)&v63,
        (__int64)&v43 + 4,
        (__int64)&v44,
        (void **)v64,
        (__int64)&v44 + 4,
        (__int64)&v45,
        (__int64)&v45 + 4,
        (__int64)&v46,
        (__int64)&v46 + 4,
        (__int64)&v66);
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v5 = v4[24];
    LODWORD(v66) = v4[37];
    v55 = v4[36];
    v56 = v4[35];
    v57[0] = v4[34];
    LODWORD(v53) = v4[33];
    HIDWORD(v53) = v4[32];
    v54 = v4[31];
    v47 = v4[30];
    v48 = v4[29];
    v49 = v4[28];
    v50 = v4[27];
    v51 = v4[26];
    v6 = InputTraceLogging::ButtonChangeTypeToString(v5);
    v8 = *(_DWORD *)(v7 + 8);
    *(_QWORD *)&v57[1] = v6;
    v52 = *(_DWORD *)(v7 + 84);
    v40 = *(_DWORD *)(v7 + 76);
    v58 = *(_QWORD *)(v7 + 88);
    LODWORD(v41) = *(_DWORD *)(v7 + 72);
    v59 = *(_QWORD *)(v7 + 32);
    v60 = *(_QWORD *)(v7 + 24);
    HIDWORD(v41) = *(_DWORD *)(v7 + 80);
    LODWORD(v42) = *(_DWORD *)(v7 + 68);
    HIDWORD(v42) = *(_DWORD *)(v7 + 64);
    v39 = *(_DWORD *)(v7 + 52);
    LODWORD(v43) = *(_DWORD *)(v7 + 48);
    HIDWORD(v43) = *(_DWORD *)(v7 + 60);
    LODWORD(v44) = *(_DWORD *)(v7 + 56);
    HIDWORD(v44) = *(_DWORD *)(v7 + 44);
    LODWORD(v45) = *(_DWORD *)(v7 + 40);
    HIDWORD(v45) = *(_DWORD *)(v7 + 20);
    v61 = (__int64)InputTraceLogging::PointerTypeToString(v8);
    LODWORD(v46) = *(_DWORD *)(v10 + 16) + *(_DWORD *)(v9 + 40);
    HIDWORD(v46) = *(_DWORD *)(v10 + 12);
    LOWORD(v65) = *(_WORD *)v10;
    v62 = *(_QWORD *)(v9 + 72);
    v63 = *(_QWORD *)(v9 + 216);
    v64[0] = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0299F24,
      v10,
      v12,
      (__int64)v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v65,
      (__int64)&v46 + 4,
      (__int64)&v46,
      (void **)&v61,
      (__int64)&v45 + 4,
      (__int64)&v45,
      (__int64)&v44 + 4,
      (__int64)&v44,
      (__int64)&v43 + 4,
      (__int64)&v43,
      (__int64)&v39,
      (__int64)&v42 + 4,
      (__int64)&v42,
      (__int64)&v41 + 4,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v41,
      (__int64)&v58,
      (__int64)&v40,
      (__int64)&v52,
      (void **)&v57[1],
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v54,
      (__int64)&v53 + 4,
      (__int64)&v53,
      (__int64)v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v66);
  }
}
