void __fastcall InputTraceLogging::Delivery::GetMessageW(
        const struct tagMSG *a1,
        const struct tagTHREADINFO *a2,
        struct tagWND *a3,
        struct tagBWND *a4,
        bool a5)
{
  __int64 v7; // r9
  __int64 WindowDetails; // rax
  unsigned int v9; // ecx
  __int128 v10; // xmm1
  int v11; // ecx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // r9d
  __int16 v15; // r10
  __int64 v16; // rcx
  int v17; // r9d
  BOOL v18; // r9d
  const int *v19; // rdx
  BOOL v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+B0h] [rbp-80h] BYREF
  BOOL v24; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v25; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+100h] [rbp-30h] BYREF
  __int64 v35; // [rsp+108h] [rbp-28h] BYREF
  __int128 v36; // [rsp+110h] [rbp-20h]
  __int128 v37; // [rsp+120h] [rbp-10h]
  __int64 v38; // [rsp+130h] [rbp+0h]
  int v39; // [rsp+138h] [rbp+8h] BYREF
  int v40; // [rsp+13Ch] [rbp+Ch] BYREF
  _BYTE v41[48]; // [rsp+140h] [rbp+10h] BYREF
  __int64 v42; // [rsp+198h] [rbp+68h] BYREF

  v42 = (__int64)a4;
  if ( !dword_1C035C080 || !(unsigned __int8)tlgKeywordOn(&dword_1C035C080, 0LL) )
    return;
  WindowDetails = InputTraceLogging::GetWindowDetails(v41, v7);
  v9 = *((_DWORD *)a1 + 2);
  v10 = *(_OWORD *)(WindowDetails + 16);
  v36 = *(_OWORD *)WindowDetails;
  v38 = *(_QWORD *)(WindowDetails + 32);
  v37 = v10;
  if ( IsPointerInputMessage(v9) )
  {
    if ( *((_WORD *)a1 + 8) == 1 )
    {
      if ( (unsigned int)dword_1C035C080 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
        {
          v13 = *(_QWORD *)a1;
          v33 = *((_QWORD *)&v36 + 1);
          v27 = v36;
          LODWORD(v42) = HIDWORD(v38);
          v39 = v38;
          v40 = HIDWORD(v37);
          v23 = DWORD2(v37);
          v34 = v37;
          v24 = a5;
          LODWORD(v25) = *((unsigned __int16 *)a1 + 9);
          v29 = *((_QWORD *)a2 + 54);
          HIDWORD(v25) = *((_DWORD *)a1 + 8);
          v30 = *((_QWORD *)a1 + 3);
          v31 = *((_QWORD *)a1 + 2);
          v28 = v13;
          v32 = v13;
          LODWORD(v26) = v12;
          HIDWORD(v26) = v12;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)&dword_1C035C080,
            (int)&dword_1C031C5EF,
            (__int64)&v26 + 4,
            (__int64)&v26,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v25 + 4,
            (__int64)&v29,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v28,
            (__int64)&v34,
            (__int64)&v23,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v42,
            (__int64)&v33,
            (__int64)&v27);
        }
      }
    }
    else if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
    {
      v16 = *(_QWORD *)a1;
      v31 = *((_QWORD *)&v36 + 1);
      v32 = v36;
      v26 = v38;
      v25 = *((_QWORD *)&v37 + 1);
      v30 = v37;
      v24 = a5;
      v23 = *((unsigned __int16 *)a1 + 9);
      v28 = *((_QWORD *)a2 + 54);
      v40 = *((_DWORD *)a1 + 8);
      v34 = *((_QWORD *)a1 + 3);
      v33 = *((_QWORD *)a1 + 2);
      v29 = v16;
      v35 = v16;
      v39 = v14;
      LODWORD(v27) = v14;
      LOWORD(v42) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (int)&dword_1C035C080,
        (int)&dword_1C031C6EF,
        (__int64)&v42,
        (__int64)&v27,
        (__int64)&v39,
        (__int64)&v35,
        (__int64)&v33,
        (__int64)&v34,
        (__int64)&v40,
        (__int64)&v28,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v25,
        (__int64)&v25 + 4,
        (__int64)&v26,
        (__int64)&v26 + 4,
        (__int64)&v31,
        (__int64)&v32);
    }
    return;
  }
  if ( InputTraceLogging::IsMouseInputMessage(v11) )
  {
    if ( (unsigned int)dword_1C035C080 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
      return;
    v19 = (const int *)&unk_1C031C7FE;
    goto LABEL_29;
  }
  if ( (unsigned int)(v17 - 256) > 9 )
  {
    if ( v17 == 255 )
    {
      if ( (unsigned int)dword_1C035C080 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
        return;
      v19 = (const int *)&unk_1C031C9D9;
    }
    else
    {
      if ( v17 != 571 && v17 != 572
        || (unsigned int)dword_1C035C080 <= 4
        || !(unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
      {
        return;
      }
      v19 = &dword_1C031CAD0;
    }
LABEL_29:
    v22 = *(_QWORD *)a1;
    v32 = *((_QWORD *)&v36 + 1);
    v35 = v36;
    LODWORD(v42) = HIDWORD(v38);
    LODWORD(v27) = v38;
    v26 = *((_QWORD *)&v37 + 1);
    v31 = v37;
    HIDWORD(v25) = a5;
    v29 = *((_QWORD *)a2 + 54);
    LODWORD(v25) = *((_DWORD *)a1 + 8);
    v28 = *((_QWORD *)a1 + 3);
    v34 = *((_QWORD *)a1 + 2);
    v30 = v22;
    v33 = v22;
    v24 = v18;
    v23 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (int)&dword_1C035C080,
      (int)v19,
      (__int64)&v23,
      (__int64)&v24,
      (__int64)&v33,
      (__int64)&v34,
      (__int64)&v28,
      (__int64)&v25,
      (__int64)&v29,
      (__int64)&v25 + 4,
      (__int64)&v30,
      (__int64)&v31,
      (__int64)&v26,
      (__int64)&v26 + 4,
      (__int64)&v27,
      (__int64)&v42,
      (__int64)&v32,
      (__int64)&v35);
    return;
  }
  if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 16LL) )
  {
    v21 = *(_QWORD *)a1;
    v32 = *((_QWORD *)&v36 + 1);
    v35 = v36;
    LODWORD(v42) = HIDWORD(v38);
    LODWORD(v27) = v38;
    v26 = *((_QWORD *)&v37 + 1);
    v31 = v37;
    HIDWORD(v25) = a5;
    v29 = *((_QWORD *)a2 + 54);
    LODWORD(v25) = *((_DWORD *)a1 + 8);
    v30 = v21;
    v28 = v21;
    v24 = v20;
    v23 = v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (int)&dword_1C035C080,
      (int)&dword_1C031C8F2,
      (__int64)&v23,
      (__int64)&v24,
      (__int64)&v28,
      (__int64)&v25,
      (__int64)&v29,
      (__int64)&v25 + 4,
      (__int64)&v30,
      (__int64)&v31,
      (__int64)&v26,
      (__int64)&v26 + 4,
      (__int64)&v27,
      (__int64)&v42,
      (__int64)&v32,
      (__int64)&v35);
  }
}
