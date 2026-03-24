/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C688
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BE58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C00459E8 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MONITOR_MGR(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  void *v8; // rdx
  struct _DXGK_DIAG_HEADER *v9; // [rsp+30h] [rbp-18h] BYREF
  __int16 v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 304320) )
  {
    if ( (unsigned int)dword_1C00B1A20 > 1
      && tlgKeywordOn((__int64)&dword_1C00B1A20, 0x200000000020LL)
      && tlgKeywordOn((__int64)&dword_1C00B1A20, v4) )
    {
      v8 = &unk_1C007F60F;
LABEL_11:
      v10 = *((_WORD *)a1 + 2);
      v9 = a1;
      v11 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v5,
        (_DWORD)v8,
        v6,
        v7,
        (__int64)&v11,
        (__int64)&v9);
    }
  }
  else if ( (unsigned int)dword_1C00B1A20 > 4
         && tlgKeywordOn((__int64)&dword_1C00B1A20, 0x200000000020LL)
         && tlgKeywordOn((__int64)&dword_1C00B1A20, v3) )
  {
    v8 = &unk_1C007F5E5;
    goto LABEL_11;
  }
}
