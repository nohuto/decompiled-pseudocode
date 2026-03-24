/*
 * XREFs of NtUserCloseClipboard @ 0x1C002FD90
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C002FE50 (xxxCloseClipboard.c)
 *     UserGetLastError @ 0x1C012D0A8 (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5A88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5B80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // r8d
  int v5; // eax
  bool v6; // sf
  signed int LastError; // eax
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // [rsp+70h] [rbp+28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+30h] BYREF
  const char *v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  EnterCrit(0LL, 1LL);
  v0 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
  v2 = (int)xxxCloseClipboard(0LL);
  if ( (unsigned int)dword_1C032B240 > 5
    && (qword_1C032B250 & 0x400000000000LL) != 0
    && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
  {
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
    v11 = v0;
    v12 = "FunctionExit";
    v13 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v1,
      (unsigned int)&unk_1C02F2D37,
      v3,
      (unsigned int)&v13,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v11);
  }
  if ( !(_DWORD)v2 )
  {
    v5 = UserGetLastError();
    v6 = v5 < 0;
    if ( v5 > 0 )
      v6 = 1;
    if ( v6
      && (unsigned int)dword_1C032B3D8 > 5
      && (qword_1C032B3E8 & 1) != 0
      && (qword_1C032B3F0 & 1) == qword_1C032B3F0 )
    {
      v8 = UserGetLastError();
      if ( v8 > 0 )
        v8 = (unsigned __int16)v8 | 0x80070000;
      v10 = v8;
      v11 = v0;
      v12 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v9,
        &unk_1C02F2CF9);
    }
  }
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
