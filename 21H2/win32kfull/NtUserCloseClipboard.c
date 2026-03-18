/*
 * XREFs of NtUserCloseClipboard @ 0x1C00CCF00
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C00CCFD0 (xxxCloseClipboard.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0198 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0290 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // eax
  bool v8; // sf
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  signed int LastError; // eax
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // [rsp+70h] [rbp+28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+30h] BYREF
  const char *v17; // [rsp+80h] [rbp+38h] BYREF
  __int64 v18; // [rsp+88h] [rbp+40h] BYREF

  EnterCrit(0LL, 0LL);
  v0 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
  v3 = (int)xxxCloseClipboard(0LL);
  if ( (unsigned int)dword_1C03263C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263C0, 0x400000000000LL) )
  {
    v16 = v0;
    if ( (_DWORD)v3 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError(v2, v1, v4, v5);
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v15 = LastError;
    v17 = "FunctionExit";
    v18 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v2,
      (unsigned int)&unk_1C02EFC32,
      v4,
      (unsigned int)&v18,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v16);
  }
  if ( !(_DWORD)v3 )
  {
    v7 = UserGetLastError(v2, v1, v4, v5);
    v8 = v7 < 0;
    if ( v7 > 0 )
      v8 = 1;
    if ( v8 && (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 1LL) )
    {
      v16 = v0;
      v13 = UserGetLastError(v2, v9, v10, v11);
      if ( v13 > 0 )
        v13 = (unsigned __int16)v13 | 0x80070000;
      v15 = v13;
      v17 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14,
        &unk_1C02EFBF4);
    }
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
