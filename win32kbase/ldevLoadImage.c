struct _LDEV *__fastcall ldevLoadImage(const WCHAR *a1, int a2, int *a3, int a4, int a5, const wchar_t **a6)
{
  int v6; // r15d
  struct _LDEV *ImageInternal; // rdi
  const wchar_t **v11; // rbx
  int v13; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+64h] [rbp-1Ch] BYREF
  int v15; // [rsp+68h] [rbp-18h] BYREF
  int v16; // [rsp+6Ch] [rbp-14h] BYREF
  const wchar_t *v17; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF

  v6 = a5;
  ImageInternal = ldevLoadImageInternal(a1, a2, a3, a4, a5);
  if ( !*a3 )
  {
    v11 = a6;
    if ( wcsicmp(*a6, L"cdd") )
    {
      if ( wcsicmp(*v11, L"rdpudd")
        && (unsigned int)dword_1C02C4098 > 5
        && tlgKeywordOn((__int64)&dword_1C02C4098, 0x400000000000LL) )
      {
        v15 = *((_DWORD *)v11 + 3);
        v16 = *((_DWORD *)v11 + 2);
        v17 = *v11;
        LODWORD(v19) = v6;
        v13 = a4;
        v14 = a2;
        v18 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C02C4098,
          (int)&dword_1C029573A,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v19);
      }
    }
  }
  return ImageInternal;
}
