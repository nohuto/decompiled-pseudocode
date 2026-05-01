/*
 * XREFs of ?Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAX_N000@Z @ 0x1800AA098
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A19E4 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AAAD4 (-TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByVal@$00@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByVal@$00@@777@Z @ 0x1800010E4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180011F00 (-Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180074FA0 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013ABDC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 */

void __fastcall CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
        CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *this,
        char a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  int *v4; // rdi
  int v9; // eax
  int *v10; // rdi
  const struct _tlgProvider_t *v11; // rax
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  char v18; // [rsp+C8h] [rbp-80h] BYREF
  unsigned __int8 v19; // [rsp+C9h] [rbp-7Fh] BYREF
  __int16 v20; // [rsp+CAh] [rbp-7Eh] BYREF
  int v21; // [rsp+CCh] [rbp-7Ch] BYREF
  DWORD v22; // [rsp+D0h] [rbp-78h] BYREF
  int v23; // [rsp+D4h] [rbp-74h] BYREF
  int v24; // [rsp+D8h] [rbp-70h] BYREF
  int v25; // [rsp+DCh] [rbp-6Ch] BYREF
  int v26; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+100h] [rbp-48h] BYREF
  __int64 v31; // [rsp+108h] [rbp-40h] BYREF
  __int64 v32; // [rsp+110h] [rbp-38h] BYREF
  __int64 v33; // [rsp+118h] [rbp-30h] BYREF
  __int64 v34; // [rsp+120h] [rbp-28h] BYREF
  __int64 v35; // [rsp+128h] [rbp-20h] BYREF
  __int64 v36; // [rsp+130h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+138h] [rbp-10h] BYREF
  __int64 *v38; // [rsp+158h] [rbp+10h]
  int v39; // [rsp+160h] [rbp+18h]
  int v40; // [rsp+164h] [rbp+1Ch]
  int *v41; // [rsp+168h] [rbp+20h]
  int v42; // [rsp+170h] [rbp+28h]
  int v43; // [rsp+174h] [rbp+2Ch]
  DWORD *v44; // [rsp+178h] [rbp+30h]
  int v45; // [rsp+180h] [rbp+38h]
  int v46; // [rsp+184h] [rbp+3Ch]
  char *v47; // [rsp+188h] [rbp+40h]
  int v48; // [rsp+190h] [rbp+48h]
  int v49; // [rsp+194h] [rbp+4Ch]
  char *v50; // [rsp+198h] [rbp+50h]
  int v51; // [rsp+1A0h] [rbp+58h]
  int v52; // [rsp+1A4h] [rbp+5Ch]
  __int16 *v53; // [rsp+1A8h] [rbp+60h]
  int v54; // [rsp+1B0h] [rbp+68h]
  int v55; // [rsp+1B4h] [rbp+6Ch]
  char *v56; // [rsp+1B8h] [rbp+70h]
  int v57; // [rsp+1C0h] [rbp+78h]
  int v58; // [rsp+1C4h] [rbp+7Ch]

  v4 = (int *)*((_QWORD *)this + 6);
  v9 = v4[19];
  if ( v9 < 0 && v9 == v4[21] )
    v10 = v4 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v11 = CortanaProactiveLogging::Provider();
  if ( v10 )
  {
    if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
    {
      v28 = *((_QWORD *)v10 + 14);
      v29 = *((_QWORD *)v10 + 13);
      v23 = v10[24];
      v30 = *((_QWORD *)v10 + 11);
      v14 = *((_QWORD *)this + 6);
      v31 = *((_QWORD *)v10 + 10);
      v24 = v10[18];
      v32 = *((_QWORD *)v10 + 8);
      v25 = v10[6];
      v33 = *((_QWORD *)v10 + 2);
      v26 = *v10;
      v34 = *((_QWORD *)v10 + 15);
      v21 = v10[14];
      v35 = *((_QWORD *)v10 + 6);
      v22 = v10[1];
      v36 = 0x1000000LL;
      v27 = 0x1000000LL;
      v18 = 0;
      v19 = a4;
      LOBYTE(v20) = a3;
      HIBYTE(v20) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v12,
        (int)&dword_18057D499,
        v14 + 8,
        v13,
        (__int64)&v27,
        (__int64)&v36,
        (__int64)&v22,
        (const wchar_t **)&v35,
        (__int64)&v21,
        (const wchar_t **)&v34,
        (__int64)&v26,
        (const WCHAR **)&v33,
        (__int64)&v25,
        (const wchar_t **)&v32,
        (__int64)&v24,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        (__int64)&v23,
        (const wchar_t **)&v29,
        (const WCHAR **)&v28,
        (__int64)&v20 + 1,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  else
  {
    v15 = (__int64)v11;
    if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
    {
      v20 = a4;
      v19 = a3;
      v18 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      v58 = 0;
      v55 = 0;
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v40 = 0;
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v17 + 76);
      v27 = 0x1000000LL;
      v56 = (char *)&v20 + 1;
      v53 = &v20;
      v50 = (char *)&v19;
      v47 = &v18;
      v44 = &v22;
      v41 = &v21;
      v57 = 1;
      v54 = 1;
      v51 = 1;
      v48 = 1;
      v38 = &v27;
      v45 = 4;
      v42 = 4;
      v39 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        v15,
        (unsigned __int8 *)dword_18057D655,
        (const GUID *)(v17 + 8),
        0LL,
        9u,
        &v37);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
