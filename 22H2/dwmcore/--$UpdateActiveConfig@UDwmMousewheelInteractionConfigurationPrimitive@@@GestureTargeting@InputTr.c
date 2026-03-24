/*
 * XREFs of ??$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x180229B94
 * Callers:
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x18022F500 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18004EC34 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3333333333333AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180229DC0 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$.c)
 */

__int64 __fastcall InputTraceLogging::GestureTargeting::UpdateActiveConfig<DwmMousewheelInteractionConfigurationPrimitive>(
        _DWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // r8
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
  __int64 v19; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v31; // [rsp+100h] [rbp-20h] BYREF
  __int64 v32; // [rsp+128h] [rbp+8h] BYREF
  __int64 v33; // [rsp+130h] [rbp+10h] BYREF
  __int64 v34; // [rsp+138h] [rbp+18h] BYREF

  result = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                      (__int64)a1,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v3 > 4u )
  {
    result = *(unsigned int *)(v3 + 16);
    if ( (result & 0x800) != 0 )
    {
      result = *(_QWORD *)(v3 + 24) & 0x800LL;
      if ( result == *(_QWORD *)(v3 + 24) )
      {
        v4 = a1[2];
        LODWORD(v32) = a1[1];
        LODWORD(v33) = *a1;
        v5 = "StopInertia";
        if ( (v4 & 0x20000000) == 0 )
          v5 = (const char *)&word_1802CE406;
        v34 = (__int64)v5;
        v6 = "DisableGestures";
        if ( (v4 & 0x10000000) == 0 )
          v6 = (const char *)&word_1802CE406;
        v19 = (__int64)v6;
        v7 = "Wheel";
        if ( (v4 & 0x8000) == 0 )
          v7 = (const char *)&word_1802CE406;
        v20 = (__int64)v7;
        v8 = "Hover";
        if ( (v4 & 0x400) == 0 )
          v8 = (const char *)&word_1802CE406;
        v21 = (__int64)v8;
        v9 = "Eraser";
        if ( (v4 & 0x200) == 0 )
          v9 = (const char *)&word_1802CE406;
        v22 = (__int64)v9;
        v10 = "Button";
        if ( (v4 & 0x100) == 0 )
          v10 = (const char *)&word_1802CE406;
        v23 = (__int64)v10;
        v11 = "Hold";
        if ( (v4 & 0x80u) == 0 )
          v11 = (const char *)&word_1802CE406;
        v24 = (__int64)v11;
        v12 = "Tap";
        if ( (v4 & 0x40) == 0 )
          v12 = (const char *)&word_1802CE406;
        v25 = (__int64)v12;
        v13 = "Zoom-";
        if ( (v4 & 0x20) == 0 )
          v13 = (const char *)&word_1802CE406;
        v26 = (__int64)v13;
        v14 = "Zoom+";
        if ( (v4 & 0x10) == 0 )
          v14 = (const char *)&word_1802CE406;
        v27 = (__int64)v14;
        v15 = "PanY-";
        if ( (v4 & 8) == 0 )
          v15 = (const char *)&word_1802CE406;
        v28 = (__int64)v15;
        v16 = "PanY+";
        if ( (v4 & 4) == 0 )
          v16 = (const char *)&word_1802CE406;
        v29 = (__int64)v16;
        v17 = "PanX-";
        if ( (v4 & 2) == 0 )
          v17 = (const char *)&word_1802CE406;
        v30 = (__int64)v17;
        v18 = "PanX+";
        if ( (v4 & 1) == 0 )
          v18 = (const char *)&word_1802CE406;
        v31 = (__int64)v18;
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 v3,
                 (int)&dword_1802EB65B,
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
                 (__int64)&v19,
                 (__int64)&v34,
                 (__int64)&v33,
                 (__int64)&v32);
      }
    }
  }
  return result;
}
