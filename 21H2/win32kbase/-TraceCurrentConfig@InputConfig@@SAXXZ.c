/*
 * XREFs of ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C006E7F4
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C006DCF4 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0121370 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0071734 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x1C01B28C8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$07@@U1@U3@U1@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$07@@353AEBU?$_tlgWrapSz@D@@33333333@Z @ 0x1C01B2990 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapperByVal@$0.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B357C (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void InputConfig::TraceCurrentConfig(void)
{
  CInputConfig *v0; // rsi
  CInputConfig *v1; // rbx
  CInputConfig *i; // r14
  _QWORD **v3; // rbx
  _QWORD **v4; // r15
  _QWORD *j; // rdi
  _DWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // r8d
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+C8h] [rbp-80h] BYREF
  int v14; // [rsp+CCh] [rbp-7Ch] BYREF
  int v15; // [rsp+D0h] [rbp-78h] BYREF
  int v16; // [rsp+D4h] [rbp-74h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-70h] BYREF
  int v18; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-60h] BYREF
  int v20; // [rsp+F0h] [rbp-58h] BYREF
  int v21; // [rsp+F4h] [rbp-54h] BYREF
  int v22; // [rsp+F8h] [rbp-50h] BYREF
  int v23; // [rsp+FCh] [rbp-4Ch] BYREF
  int v24; // [rsp+100h] [rbp-48h] BYREF
  int v25; // [rsp+104h] [rbp-44h] BYREF
  int v26; // [rsp+108h] [rbp-40h] BYREF
  int v27; // [rsp+10Ch] [rbp-3Ch] BYREF
  int v28; // [rsp+110h] [rbp-38h] BYREF
  __int64 v29; // [rsp+118h] [rbp-30h] BYREF
  __int64 v30; // [rsp+120h] [rbp-28h] BYREF
  __int64 v31; // [rsp+128h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+138h] [rbp-10h] BYREF
  __int64 *v33; // [rsp+158h] [rbp+10h]
  int v34; // [rsp+160h] [rbp+18h]
  int v35; // [rsp+164h] [rbp+1Ch]
  int *v36; // [rsp+168h] [rbp+20h]
  int v37; // [rsp+170h] [rbp+28h]
  int v38; // [rsp+174h] [rbp+2Ch]
  int *v39; // [rsp+178h] [rbp+30h]
  int v40; // [rsp+180h] [rbp+38h]
  int v41; // [rsp+184h] [rbp+3Ch]
  int *v42; // [rsp+188h] [rbp+40h]
  int v43; // [rsp+190h] [rbp+48h]
  int v44; // [rsp+194h] [rbp+4Ch]

  v0 = gpInputConfig;
  if ( gpInputConfig )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v1 = *(CInputConfig **)v0;
    for ( i = **(CInputConfig ***)v0; v1 != v0; i = *(CInputConfig **)i )
    {
      v3 = (_QWORD **)((char *)v1 + 16);
      if ( !v3 )
        break;
      if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 2LL) )
      {
        v7 = *((unsigned __int8 *)v3 + 1416);
        v44 = 0;
        v41 = 0;
        v38 = 0;
        v35 = 0;
        v14 = v7;
        v13 = *((_DWORD *)v3 + 355);
        v15 = *((_DWORD *)v3 + 2);
        v19 = (__int64)*v3;
        v42 = &v14;
        v39 = &v13;
        v36 = &v15;
        v33 = &v19;
        v43 = 4;
        v40 = 4;
        v37 = 4;
        v34 = 8;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C02203A7, 0, 0, 6u, &v32);
      }
      v4 = v3 + 178;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = v3[178]; j != v4; j = (_QWORD *)*j )
      {
        v6 = j + 2;
        if ( j == (_QWORD *)-16LL )
          break;
        if ( (j[4] & 2) != 0 )
        {
          if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 2LL) )
          {
            v8 = *((_DWORD *)j + 45);
            v15 = *((_DWORD *)j + 53);
            v20 = *((_DWORD *)j + 52);
            v21 = *((_DWORD *)j + 51);
            v22 = *((_DWORD *)j + 50);
            v23 = *((_DWORD *)j + 49);
            v24 = *((_DWORD *)j + 48);
            v25 = *((_DWORD *)j + 47);
            v26 = *((_DWORD *)j + 46);
            v29 = (__int64)InputTraceLogging::OrientationToString(v8);
            v27 = *((_DWORD *)j + 15);
            v30 = *(_QWORD *)((char *)j + 52);
            v28 = *((_DWORD *)j + 12);
            v31 = j[5];
            LOWORD(v13) = *((_WORD *)j + 19);
            LOWORD(v14) = *((_WORD *)j + 18);
            LODWORD(v17) = *((_DWORD *)j + 7);
            HIDWORD(v17) = *((_DWORD *)j + 6);
            v18 = *((_DWORD *)j + 5);
            LODWORD(v19) = *v6;
            v16 = v9;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)&dword_1C024BA90,
              (__int64)&v19,
              (__int64)&v18,
              (__int64)&v17 + 4,
              (__int64)&v17,
              (__int64)&v16,
              (__int64)&v14,
              (__int64)&v13,
              (__int64)&v31,
              (__int64)&v28,
              (__int64)&v30,
              (__int64)&v27,
              (__int64)&v29,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v15);
          }
        }
        else if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 2LL) )
        {
          LOWORD(v14) = *((_WORD *)j + 19);
          LOWORD(v13) = *((_WORD *)j + 18);
          v18 = *((_DWORD *)j + 7);
          v17 = *(_QWORD *)((char *)j + 20);
          v16 = *v6;
          LODWORD(v19) = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
            (unsigned int)&dword_1C024BA90,
            (unsigned int)&unk_1C0220204,
            v11,
            v12,
            (__int64)&v16,
            (__int64)&v17,
            (__int64)&v17 + 4,
            (__int64)&v18,
            (__int64)&v19,
            (__int64)&v13,
            (__int64)&v14);
        }
        if ( *((_BYTE *)j + 504) )
          InputTraceLogging::InputConfig::DisplayPath((const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(j + 64));
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      v1 = i;
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
  }
}
