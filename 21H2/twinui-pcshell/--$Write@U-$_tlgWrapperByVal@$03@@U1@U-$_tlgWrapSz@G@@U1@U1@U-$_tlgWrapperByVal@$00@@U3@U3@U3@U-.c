/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$00@@555AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000158C
 * Callers:
 *     ??$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@PEBGHHAEA_NAEA_NAEA_NAEA_N@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@$$QEAPEBG$$QEAH3AEA_N444@Z @ 0x1800B06C8 (--$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Expe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const WCHAR *v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v21; // [rsp+50h] [rbp-A9h]
  __int64 v22; // [rsp+58h] [rbp-A1h]
  __int64 v23; // [rsp+60h] [rbp-99h]
  __int64 v24; // [rsp+68h] [rbp-91h]
  const WCHAR *v25; // [rsp+70h] [rbp-89h]
  int v26; // [rsp+78h] [rbp-81h]
  int v27; // [rsp+7Ch] [rbp-7Dh]
  __int64 v28; // [rsp+80h] [rbp-79h]
  __int64 v29; // [rsp+88h] [rbp-71h]
  __int64 v30; // [rsp+90h] [rbp-69h]
  __int64 v31; // [rsp+98h] [rbp-61h]
  __int64 v32; // [rsp+A0h] [rbp-59h]
  __int64 v33; // [rsp+A8h] [rbp-51h]
  __int64 v34; // [rsp+B0h] [rbp-49h]
  __int64 v35; // [rsp+B8h] [rbp-41h]
  __int64 v36; // [rsp+C0h] [rbp-39h]
  __int64 v37; // [rsp+C8h] [rbp-31h]
  __int64 v38; // [rsp+D0h] [rbp-29h]
  __int64 v39; // [rsp+D8h] [rbp-21h]
  __int64 v40; // [rsp+E0h] [rbp-19h]
  __int64 v41; // [rsp+E8h] [rbp-11h]

  v40 = a14;
  v38 = a13;
  v36 = a12;
  v34 = a11;
  v32 = a10;
  v30 = a9;
  v28 = a8;
  v41 = 8LL;
  v39 = 1LL;
  v37 = 1LL;
  v16 = *a7;
  v35 = 1LL;
  v33 = 1LL;
  v31 = 4LL;
  v29 = 4LL;
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &szAgent;
    v18 = 2;
  }
  v23 = a6;
  v21 = a5;
  v25 = v16;
  v26 = v18;
  v27 = 0;
  v24 = 4LL;
  v22 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 0xCu, &v20);
}
