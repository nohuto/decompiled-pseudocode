/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A7C4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A574 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C000AAC0 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1C0014784 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x1C001483C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU_tlgWrapperBinary@@@Z @ 0x1C004F554 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C004F70C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned __int8 v9; // r10
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  void *v13; // rdx
  void *v14; // rdx
  int *v15; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int *v23; // [rsp+28h] [rbp-21h]
  int v24; // [rsp+60h] [rbp+17h] BYREF
  int v25; // [rsp+64h] [rbp+1Bh] BYREF
  __int64 v26; // [rsp+68h] [rbp+1Fh] BYREF
  struct _DXGK_DIAG_HEADER *v27; // [rsp+70h] [rbp+27h] BYREF
  __int16 v28; // [rsp+78h] [rbp+2Fh]
  int v29; // [rsp+B0h] [rbp+67h] BYREF
  int v30; // [rsp+B8h] [rbp+6Fh] BYREF
  int v31; // [rsp+C0h] [rbp+77h] BYREF
  int v32; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( (unsigned int)dword_1C013A8E0 <= 4 )
      return;
    if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 16LL) || !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v2) )
      goto LABEL_4;
    v14 = &unk_1C009F411;
    v28 = *((_WORD *)a1 + 2);
    v29 = *((_DWORD *)a1 + 15);
    v30 = *((_DWORD *)a1 + 14);
    v31 = *((_DWORD *)a1 + 13);
    v24 = *((_DWORD *)a1 + 10);
    v23 = &v24;
    v15 = &v25;
    v25 = 8;
    goto LABEL_25;
  }
  if ( (unsigned int)dword_1C013A8E0 <= 4 )
    return;
  if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000010LL) )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v5) )
    {
      v14 = &unk_1C009F3B7;
      v28 = *((_WORD *)a1 + 2);
      v29 = *((_DWORD *)a1 + 15);
      v30 = *((_DWORD *)a1 + 14);
      v31 = *((_DWORD *)a1 + 13);
      v25 = *((_DWORD *)a1 + 10);
      v23 = &v25;
      v15 = &v24;
      v24 = 8;
LABEL_25:
      v27 = a1;
      v32 = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v17,
        (_DWORD)v14,
        v18,
        v19,
        (__int64)v15,
        (__int64)v23,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v27);
    }
  }
LABEL_4:
  if ( (unsigned int)dword_1C013A8E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x400000000010LL) )
  {
    v4 = *((_DWORD *)a1 + 12);
    switch ( v4 )
    {
      case 'D':
        if ( *((int *)a1 + 13) < 0 != ((*((_DWORD *)a1 + 13) & 0x40000000) != 0)
          && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
        {
          v30 = (unsigned __int8)v8;
          v31 = v9;
          v32 = *((_DWORD *)a1 + 15);
          v25 = *((_DWORD *)a1 + 14);
          LOBYTE(v29) = *((_BYTE *)a1 + 52);
          v27 = (struct _DXGK_DIAG_HEADER *)*((_QWORD *)a1 + 8);
          v24 = *((_DWORD *)a1 + 10);
          LODWORD(v26) = 8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v6,
            (unsigned int)&unk_1C009F1D5,
            v7,
            v8,
            (__int64)&v26,
            (__int64)&v24,
            (__int64)&v27,
            (__int64)&v29,
            (__int64)&v25,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30);
        }
        break;
      case 'X':
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
        {
          v13 = &unk_1C009F354;
LABEL_20:
          v29 = *((_DWORD *)a1 + 15);
          v30 = *((_DWORD *)a1 + 14);
          v31 = *((_DWORD *)a1 + 13);
          v26 = *((_QWORD *)a1 + 8);
          v32 = *((_DWORD *)a1 + 10);
          v25 = 8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v10,
            (_DWORD)v13,
            v11,
            v12,
            (__int64)&v25,
            (__int64)&v32,
            (__int64)&v26,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29);
        }
        break;
      case '`':
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
        {
          v13 = &unk_1C009F2E4;
          goto LABEL_20;
        }
        break;
      case 'b':
        if ( *((int *)a1 + 14) < 0 && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
        {
          v30 = *((_DWORD *)a1 + 13);
          v26 = *((_QWORD *)a1 + 8);
          v31 = *((_DWORD *)a1 + 10);
          v29 = v22;
          v32 = 8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v20,
            (unsigned int)&unk_1C009F266,
            v21,
            v22,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v26,
            (__int64)&v30,
            (__int64)&v29);
        }
        break;
      default:
        if ( v4 == 104 && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
        {
          v13 = &unk_1C009F174;
          goto LABEL_20;
        }
        break;
    }
  }
}
