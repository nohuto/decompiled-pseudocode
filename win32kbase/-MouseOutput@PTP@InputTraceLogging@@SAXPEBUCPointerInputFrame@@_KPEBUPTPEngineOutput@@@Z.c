void __fastcall InputTraceLogging::PTP::MouseOutput(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct PTPEngineOutput *a3)
{
  _DWORD *v4; // r8
  int v5; // r9d
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  const char *v13; // rax
  __int64 v14; // [rsp+60h] [rbp+27h] BYREF
  __int64 v15; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+70h] [rbp+37h] BYREF
  __int64 v17; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+47h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 128LL) )
  {
    v8 = v4[1];
    LODWORD(v19) = v4[3];
    LODWORD(v20) = v4[2];
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
                v13 = "SetPosition";
              else
                v13 = "UNKNOWN";
            }
            else
            {
              v13 = "RightUp";
            }
          }
          else
          {
            v13 = "RightDown";
          }
        }
        else
        {
          v13 = "LeftUp";
        }
      }
      else
      {
        v13 = "LeftDown";
      }
    }
    else
    {
      v13 = "Move";
    }
    v15 = (__int64)v13;
    v16 = a2;
    LODWORD(v14) = v5;
    v17 = v6;
    v18 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v20,
      (__int64)&v19);
  }
}
