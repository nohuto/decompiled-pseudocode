/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C01DB860
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01DB174 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C01DB238 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C01DB33C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01DBACC (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

char __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rcx
  int v7; // eax
  BOOL v8; // r9d
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // ecx
  unsigned __int8 *v16; // rdx
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+10h] BYREF
  __int64 v21; // [rsp+78h] [rbp+18h] BYREF
  __int64 v22; // [rsp+80h] [rbp+20h] BYREF
  __int64 v23; // [rsp+88h] [rbp+28h] BYREF

  LODWORD(v22) = a3;
  LODWORD(v21) = a2;
  LOBYTE(v4) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v4 != 2 )
  {
    if ( (_BYTE)v4 )
    {
      if ( (_BYTE)v4 != 1 )
        return v4;
      if ( (unsigned int)dword_1C0330B20 <= 4 )
        return v4;
      if ( (qword_1C0330B30 & 0x100) == 0 )
        return v4;
      LOBYTE(v4) = 0;
      if ( (qword_1C0330B38 & 0x100) != qword_1C0330B38 )
        return v4;
      v16 = (unsigned __int8 *)&unk_1C02F1893;
    }
    else
    {
      if ( (unsigned int)dword_1C0330B20 <= 4 )
        return v4;
      if ( (qword_1C0330B30 & 0x100) == 0 )
        return v4;
      LOBYTE(v4) = 0;
      if ( (qword_1C0330B38 & 0x100) != qword_1C0330B38 )
        return v4;
      v16 = (unsigned __int8 *)&unk_1C02F1856;
    }
    v23 = (__int64)"InjectTouchInput";
    LODWORD(v22) = 1;
    v20 = a1;
    LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                   (__int64)&dword_1C0330B20,
                   v16,
                   a3,
                   1LL,
                   (void **)&v23,
                   (__int64)&v20,
                   (__int64)&v22);
    return v4;
  }
  v4 = *(_DWORD *)(a1 + 200);
  if ( (v4 & 0x80u) == 0 )
  {
    if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 0x100) != 0 )
    {
      LOBYTE(v4) = 0;
      if ( (qword_1C0330B38 & 0x100) == qword_1C0330B38 )
      {
        v14 = *(_QWORD *)(a1 + 472);
        v15 = *(unsigned __int16 *)(v14 + 16);
        LODWORD(v22) = *(unsigned __int16 *)(v14 + 18);
        v20 = (__int64)"InjectTouchInput";
        LODWORD(v21) = v15;
        v23 = a1;
        LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (__int64)&dword_1C0330B20,
                       byte_1C02F1810,
                       a3,
                       a4,
                       (__int64)&v23,
                       (void **)&v20,
                       (__int64)&v21,
                       (__int64)&v22);
      }
    }
  }
  else if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 0x100) != 0 )
  {
    LOBYTE(v4) = 0;
    if ( (qword_1C0330B38 & 0x100) == qword_1C0330B38 )
    {
      v6 = *(_QWORD *)(a1 + 480);
      v7 = *(_DWORD *)(v6 + 312);
      v8 = (v7 & 8) != 0 && (v7 & 0x2000) == 0;
      v9 = *(_QWORD *)(a1 + 472);
      v10 = *(unsigned __int16 *)(v9 + 16);
      LODWORD(v21) = *(unsigned __int16 *)(v9 + 18);
      LODWORD(v20) = v10;
      LODWORD(v22) = v8;
      v23 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v6 + 24));
      v19 = v11;
      v18 = (__int64)"InjectTouchInput";
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_1C0330B20,
                     (unsigned __int8 *)dword_1C02F17A2,
                     v12,
                     v13,
                     (__int64)&v19,
                     (void **)&v18,
                     (void **)&v23,
                     (__int64)&v20,
                     (__int64)&v21,
                     (__int64)&v22);
    }
  }
  return v4;
}
