/*
 * XREFs of NtUserCloseClipboard @ 0x1C0010F10
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C0011320 (xxxCloseClipboard.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C00114AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1C00164F8 (UserGetLastError.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CBB98 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  signed int LastError; // eax
  int v8; // eax
  bool v9; // sf
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // [rsp+70h] [rbp+28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+30h] BYREF
  const char *v14; // [rsp+80h] [rbp+38h] BYREF
  __int64 v15; // [rsp+88h] [rbp+40h] BYREF

  EnterCrit(0LL, 0LL);
  v0 = *(_QWORD *)(gptiCurrent + 424LL) + 1000LL;
  v3 = (int)xxxCloseClipboard(0LL);
  if ( (unsigned int)dword_1C0354060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354060, 0x400000000000LL) )
  {
    v13 = v0;
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
    v12 = LastError;
    v14 = "FunctionExit";
    v15 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v2,
      (unsigned int)&unk_1C031BE45,
      v4,
      (unsigned int)&v15,
      (__int64)&v14,
      (__int64)&v12,
      (__int64)&v13);
  }
  if ( !(_DWORD)v3 )
  {
    v8 = UserGetLastError(v2, v1, v4, v5);
    v9 = v8 < 0;
    if ( v8 > 0 )
      v9 = 1;
    if ( v9 && (unsigned int)dword_1C0354098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354098, 1LL) )
    {
      v13 = v0;
      v10 = UserGetLastError(v2, v1, v4, v5);
      if ( v10 > 0 )
        v10 = (unsigned __int16)v10 | 0x80070000;
      v12 = v10;
      v14 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v11,
        &unk_1C031BE07);
    }
  }
  UserSessionSwitchLeaveCrit(v2, v1, v4, v5);
  return v3;
}
