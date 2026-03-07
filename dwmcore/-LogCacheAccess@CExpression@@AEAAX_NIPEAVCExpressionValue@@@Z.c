void __fastcall CExpression::LogCacheAccess(CExpression *this, char a2, int a3, struct CExpressionValue *a4)
{
  int v4; // r11d
  int *v6; // r9
  CBaseExpression *v7; // r10
  int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // r9
  CBaseExpression *v13; // r10
  int v14; // r11d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int *v18; // r9
  CBaseExpression *v19; // r10
  int v20; // r11d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 *v25; // rdx
  unsigned __int8 *v26; // r9
  CBaseExpression *v27; // r10
  int v28; // r11d
  int *v29; // r9
  CBaseExpression *v30; // r10
  int v31; // r11d
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int *v35; // r9
  CBaseExpression *v36; // r10
  int v37; // r11d
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int *v41; // r9
  CBaseExpression *v42; // r10
  int v43; // r11d
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // r9
  CBaseExpression *v48; // r10
  int v49; // r11d
  int TracingCookie; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int8 *v54; // rdx
  _DWORD *v55; // r9
  CBaseExpression *v56; // r10
  int v57; // r11d
  CBaseExpression *v58; // r10
  int v59; // r11d
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // [rsp+D0h] [rbp-80h] BYREF
  const char *v64; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-70h] BYREF
  int v66; // [rsp+E8h] [rbp-68h] BYREF
  int v67; // [rsp+ECh] [rbp-64h] BYREF
  int v68; // [rsp+F0h] [rbp-60h] BYREF
  int v69; // [rsp+F4h] [rbp-5Ch] BYREF
  int v70; // [rsp+F8h] [rbp-58h] BYREF
  const char *v71; // [rsp+100h] [rbp-50h] BYREF
  wchar_t *v72; // [rsp+108h] [rbp-48h] BYREF
  int v73; // [rsp+110h] [rbp-40h] BYREF
  int v74; // [rsp+114h] [rbp-3Ch] BYREF
  int v75; // [rsp+118h] [rbp-38h] BYREF
  int v76; // [rsp+11Ch] [rbp-34h] BYREF
  int v77; // [rsp+120h] [rbp-30h] BYREF
  int v78; // [rsp+124h] [rbp-2Ch] BYREF
  int v79; // [rsp+128h] [rbp-28h] BYREF
  int v80; // [rsp+12Ch] [rbp-24h] BYREF
  _DWORD v81[4]; // [rsp+130h] [rbp-20h] BYREF
  void *retaddr; // [rsp+148h] [rbp-8h]
  int v83; // [rsp+158h] [rbp+8h] BYREF
  int v84; // [rsp+168h] [rbp+18h] BYREF

  LOBYTE(v83) = a2;
  v4 = *((_DWORD *)a4 + 18);
  if ( v4 == 11 )
  {
    if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
    {
      v83 = v59;
      v72 = L"PathData isn't logged";
      v71 = (const char *)*((_QWORD *)v58 + 21);
      v64 = "Read";
      v84 = a3;
      LODWORD(v65) = CBaseExpression::GetTracingCookie(v58);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        v60,
        byte_18037D5BC,
        v61,
        v62,
        (__int64)&v65,
        (__int64)&v84,
        &v64,
        (__int64)&v83,
        (__int64)&v71,
        &v72);
    }
    return;
  }
  if ( v4 > 52 )
  {
    if ( v4 == 69 )
    {
      if ( (unsigned int)dword_1803E07D0 <= 4 || !tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
        return;
    }
    else
    {
      if ( v4 == 70 )
      {
        if ( (unsigned int)dword_1803E07D0 <= 4 || !tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
          return;
        v83 = v55[3];
        v84 = v55[2];
        LODWORD(v65) = v55[1];
        LODWORD(v64) = *v55;
        v72 = (wchar_t *)*((_QWORD *)v56 + 21);
        v71 = "Read";
        v69 = v57;
        v68 = a3;
        TracingCookie = CBaseExpression::GetTracingCookie(v56);
        v54 = (unsigned __int8 *)&unk_18037D68B;
LABEL_42:
        v67 = TracingCookie;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v51,
          v54,
          v52,
          v53,
          (__int64)&v67,
          (__int64)&v68,
          &v71,
          (__int64)&v69,
          (__int64)&v72,
          (__int64)&v64,
          (__int64)&v65,
          (__int64)&v84,
          (__int64)&v83);
        return;
      }
      if ( v4 != 71 )
      {
        if ( v4 == 104 )
        {
          if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
          {
            v83 = v41[5];
            v84 = v41[4];
            LODWORD(v65) = v41[3];
            LODWORD(v64) = v41[2];
            v69 = v41[1];
            v68 = *v41;
            v72 = (wchar_t *)*((_QWORD *)v42 + 21);
            v71 = "Read";
            v67 = v43;
            v75 = a3;
            v74 = CBaseExpression::GetTracingCookie(v42);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v44,
              byte_18037D6F9,
              v45,
              v46,
              (__int64)&v74,
              (__int64)&v75,
              &v71,
              (__int64)&v67,
              (__int64)&v72,
              (__int64)&v68,
              (__int64)&v69,
              (__int64)&v64,
              (__int64)&v65,
              (__int64)&v84,
              (__int64)&v83);
          }
        }
        else
        {
          if ( v4 != 265 )
            goto LABEL_29;
          if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
          {
            v83 = v35[15];
            v84 = v35[14];
            v73 = v35[13];
            v66 = v35[12];
            v63 = v35[11];
            v70 = v35[10];
            v76 = v35[9];
            v77 = v35[8];
            v78 = v35[7];
            v79 = v35[6];
            v80 = v35[5];
            v81[0] = v35[4];
            v74 = v35[3];
            v75 = v35[2];
            v67 = v35[1];
            v68 = *v35;
            v71 = (const char *)*((_QWORD *)v36 + 21);
            v72 = (wchar_t *)"Read";
            v69 = v37;
            LODWORD(v64) = a3;
            LODWORD(v65) = CBaseExpression::GetTracingCookie(v36);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v38,
              byte_18037D4A9,
              v39,
              v40,
              (__int64)&v65,
              (__int64)&v64,
              (const char **)&v72,
              (__int64)&v69,
              (__int64)&v71,
              (__int64)&v68,
              (__int64)&v67,
              (__int64)&v75,
              (__int64)&v74,
              (__int64)v81,
              (__int64)&v80,
              (__int64)&v79,
              (__int64)&v78,
              (__int64)&v77,
              (__int64)&v76,
              (__int64)&v70,
              (__int64)&v63,
              (__int64)&v66,
              (__int64)&v73,
              (__int64)&v84,
              (__int64)&v83);
          }
        }
        return;
      }
      if ( (unsigned int)dword_1803E07D0 <= 4 || !tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
        return;
    }
    v83 = v47[3];
    v84 = v47[2];
    LODWORD(v65) = v47[1];
    LODWORD(v64) = *v47;
    v72 = (wchar_t *)*((_QWORD *)v48 + 21);
    v71 = "Read";
    v69 = v49;
    v68 = a3;
    TracingCookie = CBaseExpression::GetTracingCookie(v48);
    v54 = (unsigned __int8 *)&unk_18037D61D;
    goto LABEL_42;
  }
  switch ( v4 )
  {
    case 52:
      if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
      {
        v83 = v29[2];
        v84 = v29[1];
        v66 = *v29;
        v65 = *((_QWORD *)v30 + 21);
        v64 = "Read";
        v63 = v31;
        v70 = a3;
        v73 = CBaseExpression::GetTracingCookie(v30);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v32,
          byte_18037D7E1,
          v33,
          v34,
          (__int64)&v73,
          (__int64)&v70,
          &v64,
          (__int64)&v63,
          (__int64)&v65,
          (__int64)&v66,
          (__int64)&v84,
          (__int64)&v83);
      }
      return;
    case 17:
      if ( (unsigned int)dword_1803E07D0 <= 4 || !tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
        return;
      v83 = *v26;
      v65 = *((_QWORD *)v27 + 21);
      v64 = "Read";
      v84 = v28;
      v66 = a3;
      v21 = CBaseExpression::GetTracingCookie(v27);
      v25 = (unsigned __int8 *)&unk_18037D8A7;
LABEL_20:
      v63 = v21;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v22,
        v25,
        v23,
        v24,
        (__int64)&v63,
        (__int64)&v66,
        &v64,
        (__int64)&v84,
        (__int64)&v65,
        (__int64)&v83);
      return;
    case 18:
      if ( (unsigned int)dword_1803E07D0 <= 4 || !tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
        return;
      v83 = *v18;
      v65 = *((_QWORD *)v19 + 21);
      v64 = "Read";
      v84 = v20;
      v66 = a3;
      v21 = CBaseExpression::GetTracingCookie(v19);
      v25 = byte_18037D55B;
      goto LABEL_20;
  }
  if ( v4 != 35 )
  {
    if ( v4 == 42 )
    {
      if ( (unsigned int)dword_1803E07D0 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
        {
          v83 = *v6;
          v65 = *((_QWORD *)v7 + 21);
          v64 = "Read";
          v84 = v8;
          v70 = a3;
          v63 = CBaseExpression::GetTracingCookie(v7);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            v9,
            byte_18037D55B,
            v10,
            v11,
            (__int64)&v63,
            (__int64)&v70,
            &v64,
            (__int64)&v84,
            (__int64)&v65,
            (__int64)&v83);
        }
      }
      return;
    }
LABEL_29:
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
  {
    v83 = v12[1];
    v84 = *v12;
    v65 = *((_QWORD *)v13 + 21);
    v64 = "Read";
    v63 = v14;
    v70 = a3;
    v66 = CBaseExpression::GetTracingCookie(v13);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      byte_18037D779,
      v16,
      v17,
      (__int64)&v66,
      (__int64)&v70,
      &v64,
      (__int64)&v63,
      (__int64)&v65,
      (__int64)&v84,
      (__int64)&v83);
  }
}
