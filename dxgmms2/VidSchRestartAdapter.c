__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  __int64 v10; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int16 *v11; // [rsp+70h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8h] BYREF
  __int16 v13; // [rsp+90h] [rbp+10h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  void *v15; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v4 = *(_QWORD *)(a1 + 3016);
    v15 = (void *)(v4 + 2821);
    v9 = *(_QWORD *)(v4 + 2808);
    v14 = *(_DWORD *)(a1 + 3032);
    v10 = v4;
    v5 = *(_QWORD *)(a1 + 16);
    v11 = *(unsigned __int16 **)(v5 + 1744);
    v12 = *(_QWORD *)(v5 + 404);
    v13 = 2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      v5,
      byte_1C0056F13,
      v2,
      v3,
      (__int64)&v13,
      (__int64)&v12,
      &v11,
      (__int64)&v10,
      (__int64)&v14,
      (__int64)&v9,
      &v15);
  }
  *(_QWORD *)(a1 + 3016) = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a1 + 3012) = 0;
  *(_BYTE *)(a1 + 3036) &= ~4u;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 3037) = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 632);
      if ( (unsigned int)v6 < *(_DWORD *)(a1 + 704) )
        v7 += 8 * v6;
      v6 = (unsigned int)(v6 + 1);
      *(_QWORD *)(*(_QWORD *)v7 + 40LL) = 0LL;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 80) );
  }
  *(_QWORD *)(a1 + 3024) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(a1);
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 3LL);
  return 0LL;
}
