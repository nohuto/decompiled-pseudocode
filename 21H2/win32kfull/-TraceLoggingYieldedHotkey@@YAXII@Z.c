/*
 * XREFs of ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C0225AE8
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C022491C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 */

void __fastcall TraceLoggingYieldedHotkey(__int64 a1, int a2)
{
  int v3; // edi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  void *ProcessImageFileName; // rax
  void *v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)dword_1C032B3D8 > 5 )
  {
    v7 = 0x400000000000LL;
    if ( (qword_1C032B3E8 & 0x400000000000LL) != 0 && (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
    {
      if ( CurrentProcessWin32Process )
        ProcessImageFileName = (void *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
      else
        ProcessImageFileName = &unk_1C02F6100;
      v9 = ProcessImageFileName;
      v11 = a2;
      v12 = v3;
      v10 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v7,
        byte_1C02F3194,
        v5,
        v6,
        (__int64)&v10,
        (__int64)&v12,
        (__int64)&v11,
        &v9);
    }
  }
}
