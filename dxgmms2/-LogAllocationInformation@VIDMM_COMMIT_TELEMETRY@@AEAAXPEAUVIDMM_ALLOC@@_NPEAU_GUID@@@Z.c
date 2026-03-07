void __fastcall VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        __int64 **a2,
        __int64 a3,
        struct _GUID *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // [rsp+60h] [rbp+27h] BYREF
  int v12; // [rsp+64h] [rbp+2Bh] BYREF
  int v13; // [rsp+68h] [rbp+2Fh] BYREF
  int v14; // [rsp+6Ch] [rbp+33h] BYREF
  int v15; // [rsp+70h] [rbp+37h] BYREF
  __int64 v16; // [rsp+78h] [rbp+3Fh] BYREF
  unsigned __int16 *v17; // [rsp+80h] [rbp+47h] BYREF
  int v18; // [rsp+A0h] [rbp+67h] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      v5 = **a2;
      if ( (unsigned int)dword_1C0076048 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
        {
          v9 = *(_DWORD *)(v5 + 64);
          v15 = v8;
          v18 = HIBYTE(v9) & 0x1F;
          v11 = (v9 >> 18) & 0x1F;
          v12 = (v9 >> 12) & 0x1F;
          v14 = v9 & 0x1F;
          v13 = (v9 >> 6) & 0x1F;
          v16 = *(_QWORD *)(v5 + 16);
          v10 = *(_QWORD *)(*(_QWORD *)v7 + 24LL);
          v17 = *(unsigned __int16 **)(v10 + 1744);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v10,
            byte_1C00564A3,
            a4,
            v6,
            &v17,
            (__int64)&v16,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v18);
        }
      }
    }
  }
}
