__int64 __fastcall CInteractionContextWrapper::GetGlobalMotion(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 84) )
  {
    CInteractionContextTransformHelper::UnTransformOutput(
      (CInteractionContextTransformHelper *)(a1 + 328),
      (const struct InteractionOutput *)(a1 + 24),
      *(_DWORD *)(a1 + 216),
      *(_BYTE *)(a1 + 320),
      (struct InteractionOutput *)(a1 + 88));
    *(_BYTE *)(a1 + 84) = 0;
    if ( (unsigned int)dword_1803E07D0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v9 = *(_DWORD *)(a1 + 104);
        v10 = *(_DWORD *)(a1 + 100);
        v11 = *(_DWORD *)(a1 + 96);
        v12 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v4,
          byte_18037F3CD,
          v5,
          v6,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9);
      }
    }
  }
  v7 = *(_DWORD *)(a1 + 104);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 8) = v7;
  return a2;
}
