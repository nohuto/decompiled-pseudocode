/*
 * XREFs of ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C021F388
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C021E15C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 */

void __fastcall TraceLoggingYieldedHotkey(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r9
  void *ProcessImageFileName; // rax
  void *v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
  {
    if ( v6 )
      ProcessImageFileName = (void *)PsGetProcessImageFileName(*v6);
    else
      ProcessImageFileName = &unk_1C02F2D0B;
    v8 = ProcessImageFileName;
    v10 = a2;
    v11 = v3;
    v9 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      byte_1C02F02C8,
      v5,
      (__int64)v6,
      (__int64)&v9,
      (__int64)&v11,
      (__int64)&v10,
      &v8);
  }
}
