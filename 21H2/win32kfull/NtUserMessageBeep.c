/*
 * XREFs of NtUserMessageBeep @ 0x1C014C590
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C014C61C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     xxxMessageBeep @ 0x1C014C6C4 (xxxMessageBeep.c)
 */

__int64 __fastcall NtUserMessageBeep(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  v2 = xxxMessageBeep(a1);
  v4 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( (unsigned int)dword_1C03263F8 > 4 )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        *(unsigned int *)(CurrentProcessWin32Process + 56),
        &unk_1C02EFC7C);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
