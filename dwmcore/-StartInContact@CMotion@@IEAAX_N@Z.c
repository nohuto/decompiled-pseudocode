void __fastcall CMotion::StartInContact(CMotion *this, char a2)
{
  char v2; // al
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  wchar_t *v7; // [rsp+40h] [rbp+8h] BYREF
  CMotion *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 8) & 0xFD;
  *((_DWORD *)this + 4) = 1;
  *((_BYTE *)this + 8) = (2 * a2) | v2;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 12);
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v7 = (wchar_t *)ScrollAxisToString(*((_DWORD *)this + 3));
      v8 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        v4,
        byte_18037EC5E,
        v5,
        v6,
        (__int64)&v8,
        &v7);
    }
  }
}
