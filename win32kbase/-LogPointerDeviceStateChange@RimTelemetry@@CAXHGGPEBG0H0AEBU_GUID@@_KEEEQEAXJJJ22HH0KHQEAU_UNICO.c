/*
 * XREFs of ?LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x1C019D7C8
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00875D8 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U2@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U7@U2@U2@U3@U3@U3@U3@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@8875557755455AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@9445555557@Z @ 0x1C019D28C (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C019D28C.c)
 */

void __fastcall RimTelemetry::LogPointerDeviceStateChange(
        int a1,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        LONG a6,
        const unsigned __int16 *a7,
        struct _UNICODE_STRING *a8,
        unsigned __int16 *a9,
        char a10,
        char a11,
        char a12,
        const WCHAR *a13,
        LONG a14,
        LONG a15,
        LONG a16,
        unsigned __int64 a17,
        unsigned __int64 a18,
        LONG a19,
        LONG a20,
        const unsigned __int16 *a21,
        unsigned int a22,
        int a23,
        struct _UNICODE_STRING *const a24,
        struct _UNICODE_STRING *const a25,
        const unsigned __int16 *a26,
        const unsigned __int16 *a27,
        const struct tagRECT *a28,
        const struct tagRECT *a29)
{
  __int64 v29; // r8
  const WCHAR *v30; // r9
  __int16 v31; // r10
  __int64 v32; // r8
  const WCHAR *v33; // r9
  __int16 v34; // r10
  char v35; // [rsp+130h] [rbp-80h] BYREF
  char v36; // [rsp+131h] [rbp-7Fh] BYREF
  __int16 v37; // [rsp+132h] [rbp-7Eh] BYREF
  _WORD v38[2]; // [rsp+134h] [rbp-7Ch] BYREF
  LONG right; // [rsp+138h] [rbp-78h] BYREF
  LONG bottom; // [rsp+13Ch] [rbp-74h] BYREF
  LONG v41; // [rsp+140h] [rbp-70h] BYREF
  LONG v42; // [rsp+144h] [rbp-6Ch] BYREF
  LONG top; // [rsp+148h] [rbp-68h] BYREF
  LONG left; // [rsp+14Ch] [rbp-64h] BYREF
  int v45; // [rsp+150h] [rbp-60h] BYREF
  int v46; // [rsp+154h] [rbp-5Ch] BYREF
  struct tagRECT v47; // [rsp+158h] [rbp-58h] BYREF
  LONG v48; // [rsp+168h] [rbp-48h] BYREF
  LONG v49; // [rsp+16Ch] [rbp-44h] BYREF
  __int64 v50; // [rsp+170h] [rbp-40h] BYREF
  const WCHAR *v51; // [rsp+178h] [rbp-38h] BYREF
  const WCHAR *v52; // [rsp+180h] [rbp-30h] BYREF
  struct _UNICODE_STRING *v53; // [rsp+188h] [rbp-28h] BYREF
  struct _UNICODE_STRING *v54; // [rsp+190h] [rbp-20h] BYREF
  const WCHAR *v55; // [rsp+198h] [rbp-18h] BYREF
  unsigned __int64 v56; // [rsp+1A0h] [rbp-10h] BYREF
  unsigned __int64 v57; // [rsp+1A8h] [rbp-8h] BYREF
  const WCHAR *v58; // [rsp+1B0h] [rbp+0h] BYREF
  struct _UNICODE_STRING *v59; // [rsp+1B8h] [rbp+8h] BYREF
  struct _UNICODE_STRING *v60; // [rsp+1C0h] [rbp+10h] BYREF
  const WCHAR *v61; // [rsp+1C8h] [rbp+18h] BYREF
  const WCHAR *v62; // [rsp+1D0h] [rbp+20h] BYREF
  __int64 v63; // [rsp+1D8h] [rbp+28h] BYREF
  char v64; // [rsp+1F0h] [rbp+40h] BYREF

  if ( a1 )
  {
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x800000000000LL) )
    {
      v50 = 2048LL;
      v63 = (__int64)v30;
      v37 = v29;
      right = a29->right;
      bottom = a29->bottom;
      v38[0] = v31;
      v41 = a28->bottom;
      v42 = a28->right;
      top = a28->top;
      left = a28->left;
      v51 = a27;
      v52 = a26;
      v53 = a25;
      v54 = a24;
      v45 = a23;
      v46 = a22;
      v55 = a21;
      v47.left = a20;
      v47.top = a19;
      v56 = a18;
      v57 = a17;
      v47.right = a16;
      v47.bottom = a15;
      v48 = a14;
      v58 = a13;
      v64 = a12;
      v35 = a11;
      v36 = a10;
      v59 = (struct _UNICODE_STRING *)a9;
      v60 = a8;
      v61 = a7;
      v49 = a6;
      v62 = a5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)a28,
        byte_1C0295D80,
        v29,
        (__int64)v30,
        (__int64)v38,
        (__int64)&v37,
        (const WCHAR **)&v63,
        &v62,
        (__int64)&v49,
        &v61,
        (__int64 *)&v60,
        (__int64)&v59,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v64,
        (__int64)&v58,
        (__int64)&v48,
        (__int64)&v47.bottom,
        (__int64)&v47.right,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v47.top,
        (__int64)&v47,
        &v55,
        (__int64)&v46,
        (__int64)&v45,
        (unsigned __int16 **)&v54,
        (unsigned __int16 **)&v53,
        &v52,
        &v51,
        (__int64)&left,
        (__int64)&top,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&bottom,
        (__int64)&right,
        (__int64)&v50);
    }
  }
  else if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x800000000000LL) )
  {
    v63 = 2048LL;
    v50 = (__int64)v33;
    v38[0] = v32;
    v49 = a29->right;
    v48 = a29->bottom;
    v37 = v34;
    v47 = *a28;
    v62 = a27;
    v61 = a26;
    v60 = a25;
    v59 = a24;
    v46 = a23;
    v45 = a22;
    v58 = a21;
    left = a20;
    top = a19;
    v57 = a18;
    v56 = a17;
    v42 = a16;
    v41 = a15;
    bottom = a14;
    v55 = a13;
    v64 = a12;
    v36 = a11;
    v35 = a10;
    v54 = (struct _UNICODE_STRING *)a9;
    v53 = a8;
    v52 = a7;
    right = a6;
    v51 = a5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)a28,
      byte_1C029596F,
      v32,
      (__int64)v33,
      (__int64)&v37,
      (__int64)v38,
      (const WCHAR **)&v50,
      &v51,
      (__int64)&right,
      &v52,
      (__int64 *)&v53,
      (__int64)&v54,
      (__int64)&v35,
      (__int64)&v36,
      (__int64)&v64,
      (__int64)&v55,
      (__int64)&bottom,
      (__int64)&v41,
      (__int64)&v42,
      (__int64)&v56,
      (__int64)&v57,
      (__int64)&top,
      (__int64)&left,
      &v58,
      (__int64)&v45,
      (__int64)&v46,
      (unsigned __int16 **)&v59,
      (unsigned __int16 **)&v60,
      &v61,
      &v62,
      (__int64)&v47,
      (__int64)&v47.top,
      (__int64)&v47.right,
      (__int64)&v47.bottom,
      (__int64)&v48,
      (__int64)&v49,
      (__int64)&v63);
  }
}
