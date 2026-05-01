/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x180074D48
 * Callers:
 *     ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180031C90 (-StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??$?0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x1800504E8 (--$-0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0A@@wis.c)
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800529BC (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x180074C40 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ??$?0PEBGPEBG@Uncloak@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x1800849C4 (--$-0PEBGPEBG@Uncloak@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@$$QE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8)
{
  __int64 v10; // rcx
  int v13; // r9d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  const WCHAR *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20; // [rsp+50h] [rbp-39h]
  __int64 v21; // [rsp+58h] [rbp-31h]
  __int64 v22; // [rsp+60h] [rbp-29h]
  __int64 v23; // [rsp+68h] [rbp-21h]
  const WCHAR *v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+7Ch] [rbp-Dh]
  const WCHAR *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]

  v10 = -1LL;
  v13 = 2;
  v14 = *a8;
  if ( *a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &szAgent;
    v16 = 2;
  }
  v27 = v14;
  v28 = v16;
  v29 = 0;
  v17 = *a7;
  if ( *a7 )
  {
    do
      ++v10;
    while ( v17[v10] );
    v13 = 2 * v10 + 2;
  }
  else
  {
    v17 = &szAgent;
  }
  v22 = a6;
  v20 = a5;
  v24 = v17;
  v25 = v13;
  v26 = 0;
  v23 = 4LL;
  v21 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 6u, &v19);
}
