/*
 * XREFs of NtUserCloseClipboard @ 0x1C0010170
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C0010580 (xxxCloseClipboard.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C001070C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1C0015748 (UserGetLastError.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CCC88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // r8d
  signed int LastError; // eax
  int v6; // eax
  bool v7; // sf
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // [rsp+70h] [rbp+28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+30h] BYREF
  const char *v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  EnterCrit(0LL, 0LL);
  v0 = *(_QWORD *)(gptiCurrent + 424LL) + 976LL;
  v2 = (int)xxxCloseClipboard(0LL);
  if ( (unsigned int)dword_1C0357060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357060, 0x400000000000LL) )
  {
    v11 = v0;
    if ( (_DWORD)v2 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v10 = LastError;
    v12 = "FunctionExit";
    v13 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v1,
      (unsigned int)&unk_1C031D6C5,
      v3,
      (unsigned int)&v13,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v11);
  }
  if ( !(_DWORD)v2 )
  {
    v6 = UserGetLastError();
    v7 = v6 < 0;
    if ( v6 > 0 )
      v7 = 1;
    if ( v7 && (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 1LL) )
    {
      v11 = v0;
      v8 = UserGetLastError();
      if ( v8 > 0 )
        v8 = (unsigned __int16)v8 | 0x80070000;
      v10 = v8;
      v12 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v9,
        &unk_1C031D687);
    }
  }
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
