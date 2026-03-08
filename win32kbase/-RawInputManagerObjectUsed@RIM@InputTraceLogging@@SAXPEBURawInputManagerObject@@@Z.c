/*
 * XREFs of ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x1C0034770
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00356F0 (RIMRegisterForInputWithCallbacks.c)
 *     _lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_ @ 0x1C019EEB0 (_lambda_7c683ce7e834e820b1e487ff164319c2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1C019F3E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 */

void __fastcall InputTraceLogging::RIM::RawInputManagerObjectUsed(const struct RawInputManagerObject *a1)
{
  __int64 v1; // r8
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  const char *v9; // rax
  __int64 v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  __int64 v13; // [rsp+88h] [rbp+18h] BYREF
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
  {
    v2 = *(_DWORD *)(v1 + 84);
    LODWORD(v13) = -(*(_DWORD *)(v1 + 1076) & 1);
    LODWORD(v14) = *(_DWORD *)(v1 + 1056);
    LODWORD(v15) = *(unsigned __int8 *)(v1 + 81);
    LODWORD(v10) = *(unsigned __int8 *)(v1 + 80);
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 4;
          if ( v6 )
          {
            v7 = v6 - 8;
            if ( v7 )
            {
              v8 = v7 - 16;
              if ( v8 )
              {
                if ( v8 == 28 )
                  v9 = "AllHid";
                else
                  v9 = "UNKNOWN";
              }
              else
              {
                v9 = "GenericHid";
              }
            }
            else
            {
              v9 = "Touch";
            }
          }
          else
          {
            v9 = "Touchpad";
          }
        }
        else
        {
          v9 = "Pen";
        }
      }
      else
      {
        v9 = "Keyboard";
      }
    }
    else
    {
      v9 = "Mouse";
    }
    v11 = (__int64)v9;
    v12 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
