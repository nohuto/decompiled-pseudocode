/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180074B5C
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800749F4 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1800748BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int8 v6; // di
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  struct _RM_ACTIVITY_HOST *v10; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                                 + 88LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             &v11);
  if ( (int)result >= 0 )
  {
    v5 = v11;
    if ( v11 <= *((_QWORD *)a1 + 152) )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      if ( (unsigned int)dword_1800B31E0 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
        {
          v12 = v5;
          v13 = v9;
          v10 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v7,
            byte_18009DCAE,
            v8,
            v5,
            (__int64)&v10,
            (__int64)&v13,
            (__int64)&v12);
          v5 = v11;
        }
      }
      *((_QWORD *)a1 + 152) = v5;
    }
    *a2 = v6;
    return 0LL;
  }
  return result;
}
