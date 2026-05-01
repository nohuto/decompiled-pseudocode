/*
 * XREFs of ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003ED60
 * Callers:
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003EC20 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180079510 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall SstpStateChangeTriage(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        const void *a5,
        unsigned int a6)
{
  unsigned int v7; // ebx
  unsigned int v9; // r8d
  __int64 v10; // r10
  int v11; // edi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _BYTE v16[4]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-24h] BYREF
  int v18[8]; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v9 = a4[54];
  if ( !v9 )
    goto LABEL_6;
  while ( 1 )
  {
    v10 = 8LL * v7;
    if ( *(_QWORD *)&a4[v10 + 6] == a1 )
      break;
    if ( ++v7 >= v9 )
      goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(struct _WNF_STATE_NAME, _QWORD, struct _WNF_TYPE_ID *, _DWORD *, const void *, unsigned int))&a4[v10 + 8])(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v11 >= 0 )
LABEL_6:
    v11 = 0;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v17 = a2;
    v16[0] = v7;
    v18[0] = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned int)&unk_1800A3626,
      v14,
      v15,
      (__int64)v18,
      (__int64)v16,
      (__int64)&v17);
  }
  return (unsigned int)v11;
}
