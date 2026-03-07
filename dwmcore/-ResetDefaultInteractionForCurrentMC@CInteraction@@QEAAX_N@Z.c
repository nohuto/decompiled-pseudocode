void __fastcall CInteraction::ResetDefaultInteractionForCurrentMC(CInteraction *this, char a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v7) = a2;
  *((_BYTE *)this + 192) ^= (*((_BYTE *)this + 192) ^ (2 * *((_BYTE *)this + 192))) & 0x20;
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v6 = v5;
      v7 = ((unsigned __int8)v4 >> 4) & 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v2,
        byte_18037C2CD,
        v3,
        v4,
        (__int64)&v6,
        (__int64)&v7);
    }
  }
}
