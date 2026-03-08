/*
 * XREFs of NtUserMessageBeep @ 0x1C01D8970
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CCD80 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     xxxMessageBeep @ 0x1C01F7F58 (xxxMessageBeep.c)
 */

__int64 __fastcall NtUserMessageBeep(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  int v9; // [rsp+48h] [rbp+10h] BYREF
  const unsigned __int16 *v10; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = xxxMessageBeep(a1);
  v4 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v3 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( (unsigned int)dword_1C0357098 > 4 )
    {
      v10 = (const unsigned __int16 *)(v7 + 976);
      v9 = *(_DWORD *)(v7 + 56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v3,
        byte_1C031D70F,
        v7,
        v6,
        (__int64)&v9,
        &v10);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
