/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A9BC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A574 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C000AAC0 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C004F4B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU_tlgWrapperBinary@@@Z @ 0x1C004F554 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU_tlgWrapperBinary@@@Z @ 0x1C004F638 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdx
  void *v6; // rdx
  int *v7; // rax
  __int64 v8; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  void *v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int *v20; // [rsp+28h] [rbp-21h]
  int v21; // [rsp+60h] [rbp+17h] BYREF
  int v22; // [rsp+64h] [rbp+1Bh] BYREF
  struct _DXGK_DIAG_HEADER *v23; // [rsp+68h] [rbp+1Fh] BYREF
  __int16 v24; // [rsp+70h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+67h] BYREF
  int v26; // [rsp+B8h] [rbp+6Fh] BYREF
  int v27; // [rsp+C0h] [rbp+77h] BYREF
  int v28; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( (unsigned int)dword_1C013A8E0 <= 4 )
      return;
    if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 16LL) || !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v2) )
      goto LABEL_4;
    v6 = &unk_1C009F411;
    v24 = *((_WORD *)a1 + 2);
    v25 = *((_DWORD *)a1 + 15);
    v26 = *((_DWORD *)a1 + 14);
    v27 = *((_DWORD *)a1 + 13);
    v21 = *((_DWORD *)a1 + 10);
    v20 = &v21;
    v7 = &v22;
    v28 = v12;
    v22 = 8;
    goto LABEL_23;
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) )
  {
    if ( (unsigned int)dword_1C013A8E0 > 1
      && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000010LL)
      && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v8) )
    {
      v6 = &unk_1C009F562;
LABEL_22:
      v24 = *((_WORD *)a1 + 2);
      v25 = *((_DWORD *)a1 + 15);
      v26 = *((_DWORD *)a1 + 14);
      v27 = *((_DWORD *)a1 + 13);
      v28 = *((_DWORD *)a1 + 12);
      v22 = *((_DWORD *)a1 + 10);
      v20 = &v22;
      v7 = &v21;
      v21 = 8;
LABEL_23:
      v23 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v10,
        (_DWORD)v6,
        v11,
        v12,
        (__int64)v7,
        (__int64)v20,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v23);
    }
  }
  else
  {
    if ( (unsigned int)dword_1C013A8E0 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000010LL) )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v5) )
      {
        v6 = &unk_1C009F3B7;
        goto LABEL_22;
      }
    }
  }
LABEL_4:
  if ( (unsigned int)dword_1C013A8E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x400000000010LL) )
  {
    v4 = *((_DWORD *)a1 + 12);
    if ( v4 == 88 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
      {
        v24 = *((_WORD *)a1 + 2);
        v25 = *((_DWORD *)a1 + 15);
        v26 = *((_DWORD *)a1 + 14);
        v27 = *((_DWORD *)a1 + 13);
        v28 = *((_DWORD *)a1 + 10);
        v23 = a1;
        v22 = 8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
          v17,
          (unsigned int)&unk_1C009F506,
          v18,
          v19,
          (__int64)&v22,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v23);
      }
    }
    else if ( v4 == 94 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
      {
        v16 = &unk_1C009F4C4;
        goto LABEL_28;
      }
    }
    else if ( v4 == 111 && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
    {
      v16 = &unk_1C009F46B;
LABEL_28:
      v25 = *((_DWORD *)a1 + 14);
      v26 = *((_DWORD *)a1 + 13);
      v27 = *((_DWORD *)a1 + 10);
      v28 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (_DWORD)v16,
        v14,
        v15,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
}
