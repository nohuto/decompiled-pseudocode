/*
 * XREFs of InkProcessorOnThreadExit @ 0x1C00CF2E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InkProcessorOnThreadExit(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  __int64 v4; // [rsp+30h] [rbp-58h] BYREF
  __int64 v5; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(SGDGetUserSessionState(a1) + 3440);
  if ( v2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    if ( *(_BYTE *)(v2 + 8) )
    {
      for ( i = *(_QWORD **)(v2 + 96); i != (_QWORD *)(v2 + 96); i = (_QWORD *)*i )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*(i - 1) + 24LL))(i - 1, *a1);
    }
    else if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      LODWORD(v4) = -1073741823;
      v5 = (__int64)"Ink processor not enabled";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)&dword_1C03570E0,
        (__int64)&v4,
        (__int64)&v5);
    }
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v9 = 0;
    v7 = &v4;
    LODWORD(v4) = -1073741823;
    v8 = 4;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C03570E0, (int)&dword_1C031DA06, 0, 0, 3u, &v6);
  }
}
