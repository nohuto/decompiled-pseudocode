/*
 * XREFs of ldevLoadImage @ 0x1C00157E0
 * Callers:
 *     ldevLoadDriver @ 0x1C0015500 (ldevLoadDriver.c)
 * Callees:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0015860 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _wcsicmp @ 0x1C00C5384 (_wcsicmp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C014297C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 */

struct _LDEV *__fastcall ldevLoadImage(const WCHAR *a1, int a2, int *a3, int a4, int a5, const wchar_t **a6)
{
  int v6; // r15d
  struct _LDEV *ImageInternal; // rdi
  const wchar_t **v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch] BYREF
  int v17; // [rsp+68h] [rbp-18h] BYREF
  int v18; // [rsp+6Ch] [rbp-14h] BYREF
  const wchar_t *v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp-8h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF

  v6 = a5;
  ImageInternal = ldevLoadImageInternal(a1, a2, a3, a4, a5);
  if ( !*a3 )
  {
    v12 = a6;
    if ( wcsicmp(*a6, L"cdd") )
    {
      if ( wcsicmp(*v12, L"rdpudd")
        && (unsigned int)dword_1C0246378 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1C0246378, 0x400000000000LL, v13, v14) )
      {
        v17 = *((_DWORD *)v12 + 3);
        v18 = *((_DWORD *)v12 + 2);
        v19 = *v12;
        LODWORD(v21) = v6;
        v15 = a4;
        v16 = a2;
        v20 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C0246378,
          (int)&dword_1C021A459,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v21);
      }
    }
  }
  return ImageInternal;
}
