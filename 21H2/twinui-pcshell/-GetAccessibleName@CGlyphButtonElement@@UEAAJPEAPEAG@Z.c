/*
 * XREFs of ?GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z @ 0x1804225E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005E140 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x1802DEA7C (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 */

__int64 __fastcall CGlyphButtonElement::GetAccessibleName(CGlyphButtonElement *this, unsigned __int16 **a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  int v6; // edi
  unsigned __int16 *v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned __int16 v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int16 *v13; // [rsp+78h] [rbp+28h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = *((_DWORD *)this + 102);
  if ( v5 )
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v6 = -2147467259;
    if ( Windows::Internal::ResourceString::FindAndSize(&_ImageBase, v5, a3, (const unsigned __int16 **)&v13, &v12)
      && (v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                 (LPVOID *)&v8,
                 (__int64)v13,
                 v12),
          v6 >= 0) )
    {
      *a2 = v8;
      v8 = 0LL;
      v10 = 0LL;
      v9 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
        (const char *)(unsigned int)v6);
      v3 = v6;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v8);
  }
  else
  {
    v3 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)0x80070490LL);
  }
  return v3;
}
