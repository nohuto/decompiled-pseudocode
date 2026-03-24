/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C0066970
 * Callers:
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C006A26C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C006B2D4 (IsPointerInputMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@535@Z @ 0x1C01DEC08 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U1@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DECE0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x1C01DED74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  bool v9; // cf
  void *v10; // rdx
  int v11; // [rsp+60h] [rbp+27h] BYREF
  __int64 v12; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+70h] [rbp+37h] BYREF
  __int64 v14; // [rsp+78h] [rbp+3Fh] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp+47h] BYREF
  int v16; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+77h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1C032FB20 > 4
      && (qword_1C032FB30 & 0x10) != 0
      && (qword_1C032FB38 & 0x10) == qword_1C032FB38 )
    {
      v9 = __CFSHR__(*(_DWORD *)(v4 + 100), 6);
      v14 = v2;
      LODWORD(v18) = v5;
      LODWORD(v17) = -v9;
      v12 = *(_QWORD *)(v4 + 16);
      v11 = *(unsigned __int16 *)(v4 + 34);
      v13 = *(_QWORD *)(v4 + 40);
      LOWORD(v16) = *(_WORD *)(v4 + 32);
      v15[0] = *(_QWORD *)(v4 + 136);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C032FB20,
        (unsigned int)&unk_1C02F0E44,
        v4,
        v5,
        (__int64)v15,
        (__int64)&v14,
        (__int64)&v16,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v18,
        (__int64)&v12,
        (__int64)&v17);
    }
  }
  else
  {
    if ( !InputTraceLogging::IsMouseInputMessage(v3) )
    {
      if ( (unsigned int)(v8 - 256) > 9 )
      {
        if ( (unsigned int)dword_1C032FB20 <= 4
          || v8 != 255
          || (qword_1C032FB30 & 0x10) == 0
          || (qword_1C032FB38 & 0x10) != qword_1C032FB38 )
        {
          return;
        }
        v18 = v6;
        v10 = &unk_1C02F0F8E;
        v16 = 255;
      }
      else
      {
        if ( (unsigned int)dword_1C032FB20 <= 4
          || (qword_1C032FB30 & 0x10) == 0
          || (qword_1C032FB38 & 0x10) != qword_1C032FB38 )
        {
          return;
        }
        v18 = v6;
        v10 = &unk_1C02F0F33;
        v16 = v8;
      }
      v17 = *(_QWORD *)(v7 + 16);
      v15[0] = *(_QWORD *)(v7 + 136);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C032FB20,
        (_DWORD)v10,
        v7,
        v8,
        (__int64)v15,
        (__int64)&v18,
        (__int64)&v16,
        (__int64)&v17);
      return;
    }
    if ( (unsigned int)dword_1C032FB20 > 4
      && (qword_1C032FB30 & 0x10) != 0
      && (qword_1C032FB38 & 0x10) == qword_1C032FB38 )
    {
      v9 = __CFSHR__(*(_DWORD *)(v7 + 100), 6);
      v15[0] = v6;
      LODWORD(v17) = v8;
      v16 = -v9;
      v18 = *(_QWORD *)(v7 + 16);
      v14 = *(_QWORD *)(v7 + 136);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C032FB20,
        (unsigned int)&unk_1C02F0ED0,
        v7,
        v8,
        (__int64)&v14,
        (__int64)v15,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v16);
    }
  }
}
