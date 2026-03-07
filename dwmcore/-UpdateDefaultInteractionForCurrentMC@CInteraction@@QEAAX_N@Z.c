void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this)
{
  __int64 v2; // rcx
  char v3; // r9
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // rcx
  CInteraction *v9; // [rsp+40h] [rbp-18h] BYREF
  CInteraction *v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  if ( !CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    if ( v3 )
      v4 = 0;
    else
      v4 = *(_BYTE *)(v2 + 192) >> 4;
    *(_BYTE *)(v2 + 192) &= ~0x20u;
    v10 = this;
    *(_BYTE *)(v2 + 192) |= 32 * (v4 & 1);
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(v2, &v10);
    if ( (unsigned int)dword_1803E07D0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v7 = *((unsigned __int8 *)this + 192);
        v9 = this;
        LODWORD(v10) = (v7 >> 4) & 1;
        v8 = (v7 >> 5) & 1;
        v11 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_18037C330,
          v5,
          v6,
          (__int64)&v9,
          (__int64)&v11,
          (__int64)&v10);
      }
    }
  }
}
