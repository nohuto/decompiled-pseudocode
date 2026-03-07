void __fastcall InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  int v2; // ebx
  __int64 *v3; // rax
  const char *v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  int v10; // ecx
  int v11; // ecx
  const char *v12; // rax
  int v13; // ecx
  const char *updated; // rax
  __int64 v15; // rdx
  const struct CInteraction *v16; // r8
  int v17; // eax
  const struct CInteraction *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // r10
  unsigned __int8 v22; // al
  __int64 v23; // rax
  const struct CInteraction *v24; // r8
  const char *v25; // rax
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  BOOL v30; // [rsp+D0h] [rbp-80h] BYREF
  int v31; // [rsp+D4h] [rbp-7Ch] BYREF
  __int64 v32; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+100h] [rbp-50h] BYREF
  __int64 v38; // [rsp+108h] [rbp-48h] BYREF
  __int64 v39; // [rsp+110h] [rbp-40h] BYREF
  __int64 v40; // [rsp+118h] [rbp-38h] BYREF
  __int64 v41; // [rsp+120h] [rbp-30h] BYREF
  __int64 v42; // [rsp+128h] [rbp-28h] BYREF
  __int64 v43; // [rsp+130h] [rbp-20h] BYREF
  __int64 v44; // [rsp+138h] [rbp-18h] BYREF
  __int64 v45; // [rsp+140h] [rbp-10h] BYREF
  __int64 v46; // [rsp+148h] [rbp-8h] BYREF
  __int64 v47; // [rsp+150h] [rbp+0h] BYREF
  __int64 v48; // [rsp+180h] [rbp+30h] BYREF
  __int64 v49; // [rsp+188h] [rbp+38h] BYREF
  __int64 v50; // [rsp+190h] [rbp+40h] BYREF
  __int64 v51; // [rsp+198h] [rbp+48h] BYREF

  v2 = **((_DWORD **)a1 + 7);
  v3 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v3[1] > 4u && tlgKeywordOn(v3[1], 2048LL) )
  {
    v4 = "Zoom-";
    if ( (v2 & 0x20) == 0 )
      v4 = word_180338FC0;
    v35 = (__int64)v4;
    v5 = "Zoom+";
    if ( (v2 & 0x10) == 0 )
      v5 = word_180338FC0;
    v36 = (__int64)v5;
    v6 = "PanY-";
    if ( (v2 & 8) == 0 )
      v6 = word_180338FC0;
    v37 = (__int64)v6;
    v7 = "PanY+";
    if ( (v2 & 4) == 0 )
      v7 = word_180338FC0;
    v38 = (__int64)v7;
    v8 = "PanX-";
    if ( (v2 & 2) == 0 )
      v8 = word_180338FC0;
    v39 = (__int64)v8;
    v9 = "PanX+";
    if ( (v2 & 1) == 0 )
      v9 = word_180338FC0;
    v10 = *((_DWORD *)a1 + 11);
    v40 = (__int64)v9;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          v12 = "Scale";
        else
          v12 = "UNKNOWN";
      }
      else
      {
        v12 = "Y";
      }
    }
    else
    {
      v12 = "X";
    }
    v13 = *((_DWORD *)a1 + 10);
    v41 = (__int64)v12;
    LOBYTE(v48) = *((_BYTE *)a1 + 64) & 1;
    updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v13);
    v16 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v42 = (__int64)updated;
    if ( v16 )
    {
      v33 = *((_QWORD *)v16 + 214);
      v17 = v15;
      LOBYTE(v17) = *((_QWORD *)v16 + 35) != v15;
    }
    else
    {
      v33 = v15;
      v17 = v15;
    }
    LODWORD(v50) = v17;
    LODWORD(v51) = InputTraceLogging::InteractionInputTransparency(v16);
    v30 = InputTraceLogging::InteractionFurtherProcessingForInput(v18);
    if ( v20 )
      v22 = v21 & *(_BYTE *)(v20 + 192);
    else
      v22 = v19;
    v31 = v22;
    if ( v20 )
    {
      LODWORD(v49) = *(_DWORD *)(v20 + 188);
      v23 = *(_QWORD *)(v20 + 104);
      if ( v23 )
        v19 = *(_QWORD *)(v23 + 64);
      v34 = v19;
      LODWORD(v19) = *(_DWORD *)(v20 + 1704);
    }
    else
    {
      LODWORD(v49) = v19;
      v34 = v19;
    }
    LODWORD(v32) = v19;
    v43 = (__int64)InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v20);
    v25 = InputTraceLogging::InteractionSourceTypeToString(v24);
    v26 = *(_DWORD *)a1;
    v44 = (__int64)v25;
    v45 = v27;
    v46 = v27;
    v47 = (__int64)InputTraceLogging::MidManipulationUpdateTypeToString(v26);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      v29,
      (unsigned __int8 *)dword_180379D75,
      v28,
      v29,
      (const char **)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (const char **)&v44,
      (const char **)&v43,
      (__int64)&v32,
      (__int64)&v34,
      (__int64)&v49,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v33,
      (const char **)&v42,
      (__int64)&v48,
      (const char **)&v41,
      (const char **)&v40,
      (const char **)&v39,
      (const char **)&v38,
      (const char **)&v37,
      (const char **)&v36,
      (const char **)&v35);
  }
}
