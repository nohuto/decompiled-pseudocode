/*
 * XREFs of ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002AAFC
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029A78 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180037A8C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID.c)
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x180037B70 (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007FC64 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$.c)
 */

void __fastcall HampAppSaveTerminateReason(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  if ( (*(_DWORD *)(a1 + 608) & 0x10000) == 0 )
  {
    v3 = a1 + 96;
    v4 = HampUtilSaveRegistryTerminateReason(a1 + 96, *(_QWORD *)(a1 + 88) + 228LL, a2);
    if ( v4 < 0 )
    {
      if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
      {
        v10 = *(_QWORD *)(a1 + 88);
        v13 = 0x1000000LL;
        v14 = v10 + 228;
        v12 = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
          v8,
          &unk_1800A187F);
      }
    }
    else if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v6 = *(_QWORD *)(a1 + 88);
      LODWORD(v13) = v4;
      v14 = v6 + 228;
      v7 = *(unsigned __int16 *)(a1 + 608);
      v11 = v3;
      LOWORD(v12) = v7;
      ((void (__fastcall *)(__int64, void *, __int64, _QWORD, __int64 *, int *, __int64 *, __int64 *))_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>>)(
        v7,
        &unk_1800A17C1,
        v5,
        (unsigned int)v4,
        &v13,
        &v12,
        &v11,
        &v14);
    }
  }
}
