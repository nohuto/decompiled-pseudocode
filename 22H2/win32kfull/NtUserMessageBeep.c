/*
 * XREFs of NtUserMessageBeep @ 0x1C01D7940
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CBC90 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     xxxMessageBeep @ 0x1C01F6D88 (xxxMessageBeep.c)
 */

__int64 __fastcall NtUserMessageBeep(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // [rsp+48h] [rbp+10h] BYREF
  const unsigned __int16 *v11; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = xxxMessageBeep(a1);
  v7 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v4 = -*(_QWORD *)CurrentProcessWin32Process;
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v5 = v3 & CurrentProcessWin32Process;
    }
    if ( (unsigned int)dword_1C0354098 > 4 )
    {
      v11 = (const unsigned __int16 *)(v5 + 1000);
      v10 = *(_DWORD *)(v5 + 56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v4,
        byte_1C031BE8F,
        v5,
        v6,
        (__int64)&v10,
        &v11);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
