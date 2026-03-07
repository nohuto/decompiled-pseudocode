char __fastcall InputTraceLogging::GestureTargeting::UpdateActiveConfig<DwmTouchpadInteractionConfigurationPrimitive>(
        _DWORD *a1)
{
  __int64 *v2; // rax
  int v3; // r9d
  int v4; // ecx
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  __int64 v20; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v32; // [rsp+100h] [rbp-20h] BYREF
  __int64 v33; // [rsp+128h] [rbp+8h] BYREF
  __int64 v34; // [rsp+130h] [rbp+10h] BYREF
  __int64 v35; // [rsp+138h] [rbp+18h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v2[1] > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn(v2[1], 2048LL);
    if ( (_BYTE)v2 )
    {
      v4 = a1[2];
      LODWORD(v33) = a1[1];
      LODWORD(v34) = *a1;
      v5 = "StopInertia";
      if ( (v4 & 0x20000000) == 0 )
        v5 = word_180338FC0;
      v35 = (__int64)v5;
      v6 = "DisableGestures";
      if ( (v4 & 0x10000000) == 0 )
        v6 = word_180338FC0;
      v20 = (__int64)v6;
      v7 = "Wheel";
      if ( (v4 & 0x8000) == 0 )
        v7 = word_180338FC0;
      v21 = (__int64)v7;
      v8 = "Hover";
      if ( (v4 & 0x400) == 0 )
        v8 = word_180338FC0;
      v22 = (__int64)v8;
      v9 = "Eraser";
      if ( (v4 & 0x200) == 0 )
        v9 = word_180338FC0;
      v23 = (__int64)v9;
      v10 = "Button";
      if ( (v4 & 0x100) == 0 )
        v10 = word_180338FC0;
      v24 = (__int64)v10;
      v11 = "Hold";
      if ( (v4 & 0x80u) == 0 )
        v11 = word_180338FC0;
      v25 = (__int64)v11;
      v12 = "Tap";
      if ( (v4 & 0x40) == 0 )
        v12 = word_180338FC0;
      v26 = (__int64)v12;
      v13 = "Zoom-";
      if ( (v4 & 0x20) == 0 )
        v13 = word_180338FC0;
      v27 = (__int64)v13;
      v14 = "Zoom+";
      if ( (v4 & 0x10) == 0 )
        v14 = word_180338FC0;
      v28 = (__int64)v14;
      v15 = "PanY-";
      if ( (v4 & 8) == 0 )
        v15 = word_180338FC0;
      v29 = (__int64)v15;
      v16 = "PanY+";
      if ( (v4 & 4) == 0 )
        v16 = word_180338FC0;
      v30 = (__int64)v16;
      v17 = "PanX-";
      if ( (v4 & 2) == 0 )
        v17 = word_180338FC0;
      v31 = (__int64)v17;
      v18 = "PanX+";
      if ( (v4 & 1) == 0 )
        v18 = word_180338FC0;
      v32 = (__int64)v18;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v3,
                     (int)&dword_18037AD86,
                     (__int64)&v32,
                     (__int64)&v31,
                     (__int64)&v30,
                     (__int64)&v29,
                     (__int64)&v28,
                     (__int64)&v27,
                     (__int64)&v26,
                     (__int64)&v25,
                     (__int64)&v24,
                     (__int64)&v23,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v35,
                     (__int64)&v34,
                     (__int64)&v33);
    }
  }
  return (char)v2;
}
