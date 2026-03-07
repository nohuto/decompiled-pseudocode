void InputConfig::TraceCurrentConfig(void)
{
  CInputConfig *v0; // rsi
  CInputConfig *v1; // rcx
  CInputConfig *i; // r14
  _QWORD **v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *j; // rbx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  _DWORD *v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // r8
  int v14; // r9d
  int *v15; // r8
  int v16; // r9d
  int v17; // [rsp+C8h] [rbp-80h] BYREF
  int v18; // [rsp+CCh] [rbp-7Ch] BYREF
  int v19; // [rsp+D0h] [rbp-78h] BYREF
  int v20; // [rsp+D4h] [rbp-74h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-70h] BYREF
  int v22; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-60h] BYREF
  int v24; // [rsp+F0h] [rbp-58h] BYREF
  int v25; // [rsp+F4h] [rbp-54h] BYREF
  int v26; // [rsp+F8h] [rbp-50h] BYREF
  int v27; // [rsp+FCh] [rbp-4Ch] BYREF
  int v28; // [rsp+100h] [rbp-48h] BYREF
  int v29; // [rsp+104h] [rbp-44h] BYREF
  int v30; // [rsp+108h] [rbp-40h] BYREF
  int v31; // [rsp+10Ch] [rbp-3Ch] BYREF
  int v32; // [rsp+110h] [rbp-38h] BYREF
  __int64 v33; // [rsp+118h] [rbp-30h] BYREF
  __int64 v34; // [rsp+120h] [rbp-28h] BYREF
  __int64 v35; // [rsp+128h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+138h] [rbp-10h] BYREF
  __int64 *v37; // [rsp+158h] [rbp+10h]
  int v38; // [rsp+160h] [rbp+18h]
  int v39; // [rsp+164h] [rbp+1Ch]
  int *v40; // [rsp+168h] [rbp+20h]
  int v41; // [rsp+170h] [rbp+28h]
  int v42; // [rsp+174h] [rbp+2Ch]
  int *v43; // [rsp+178h] [rbp+30h]
  int v44; // [rsp+180h] [rbp+38h]
  int v45; // [rsp+184h] [rbp+3Ch]
  int *v46; // [rsp+188h] [rbp+40h]
  int v47; // [rsp+190h] [rbp+48h]
  int v48; // [rsp+194h] [rbp+4Ch]

  v0 = gpInputConfig;
  if ( gpInputConfig )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v1 = *(CInputConfig **)v0;
    for ( i = **(CInputConfig ***)v0; ; i = *(CInputConfig **)i )
    {
      v3 = 0LL;
      if ( v1 != v0 )
        v3 = (_QWORD **)((char *)v1 + 16);
      if ( !v3 )
        break;
      if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 2LL) )
      {
        v9 = *((unsigned __int8 *)v3 + 1448);
        v48 = 0;
        v45 = 0;
        v42 = 0;
        v39 = 0;
        v18 = v9;
        v17 = *((_DWORD *)v3 + 363);
        v19 = *((_DWORD *)v3 + 2);
        v23 = (__int64)*v3;
        v46 = &v18;
        v43 = &v17;
        v40 = &v19;
        v37 = &v23;
        v47 = 4;
        v44 = 4;
        v41 = 4;
        v38 = 8;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029C409, 0, 0, 6u, &v36);
      }
      v4 = v3 + 182;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = v3[182]; ; j = (_QWORD *)*j )
      {
        v6 = 0LL;
        if ( j != v4 )
          v6 = j + 2;
        if ( !v6 )
          break;
        if ( (v6[2] & 2) != 0 )
        {
          if ( (unsigned int)dword_1C02CA7E0 > 4 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 2LL) )
            {
              v12 = v11[41];
              v19 = v11[49];
              v24 = v11[48];
              v25 = v11[47];
              v26 = v11[46];
              v27 = v11[45];
              v28 = v11[44];
              v29 = v11[43];
              v30 = v11[42];
              v33 = (__int64)InputTraceLogging::OrientationToString(v12);
              v31 = *(_DWORD *)(v13 + 44);
              v34 = *(_QWORD *)(v13 + 36);
              v32 = *(_DWORD *)(v13 + 32);
              v35 = *(_QWORD *)(v13 + 24);
              LOWORD(v17) = *(_WORD *)(v13 + 22);
              LOWORD(v18) = *(_WORD *)(v13 + 20);
              LODWORD(v21) = *(_DWORD *)(v13 + 12);
              HIDWORD(v21) = *(_DWORD *)(v13 + 8);
              v22 = *(_DWORD *)(v13 + 4);
              LODWORD(v23) = *(_DWORD *)v13;
              v20 = v14;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)&dword_1C02CA7E0,
                (__int64)&v23,
                (__int64)&v22,
                (__int64)&v21 + 4,
                (__int64)&v21,
                (__int64)&v20,
                (__int64)&v18,
                (__int64)&v17,
                (__int64)&v35,
                (__int64)&v32,
                (__int64)&v34,
                (__int64)&v31,
                (__int64)&v33,
                (__int64)&v30,
                (__int64)&v29,
                (__int64)&v28,
                (__int64)&v27,
                (__int64)&v26,
                (__int64)&v25,
                (__int64)&v24,
                (__int64)&v19);
            }
          }
        }
        else if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 2LL) )
        {
          LOWORD(v18) = *((_WORD *)v15 + 11);
          LOWORD(v17) = *((_WORD *)v15 + 10);
          v22 = v15[3];
          v21 = *(_QWORD *)(v15 + 1);
          v20 = *v15;
          LODWORD(v23) = v16;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
            (unsigned int)&dword_1C02CA7E0,
            (unsigned int)&unk_1C029C38A,
            (_DWORD)v15,
            v16,
            (__int64)&v20,
            (__int64)&v21,
            (__int64)&v21 + 4,
            (__int64)&v22,
            (__int64)&v23,
            (__int64)&v17,
            (__int64)&v18);
        }
        v7 = 488LL;
        if ( j != v4 )
          v7 = (__int64)(j + 63);
        if ( *(_BYTE *)v7 )
        {
          v8 = 496LL;
          if ( j != v4 )
            v8 = (__int64)(j + 64);
          InputTraceLogging::InputConfig::DisplayPath((const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v8);
        }
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      v1 = i;
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
  }
}
