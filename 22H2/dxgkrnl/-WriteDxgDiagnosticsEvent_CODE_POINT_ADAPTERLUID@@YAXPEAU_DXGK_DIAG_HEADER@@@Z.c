/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BA2C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BE58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C000C248 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0045650 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1C00456EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x1C004591C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C00459E8 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  void *v5; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  void *v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  unsigned __int8 v21; // r10
  int v22; // [rsp+60h] [rbp+17h] BYREF
  __int64 v23; // [rsp+68h] [rbp+1Fh] BYREF
  struct _DXGK_DIAG_HEADER *v24; // [rsp+70h] [rbp+27h] BYREF
  __int16 v25; // [rsp+78h] [rbp+2Fh]
  int v26; // [rsp+B0h] [rbp+67h] BYREF
  int v27; // [rsp+B8h] [rbp+6Fh] BYREF
  int v28; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( (unsigned int)dword_1C00B1A20 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, 16LL) && (unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, v2) )
    {
      v5 = &unk_1C007F8B7;
LABEL_14:
      v25 = *((_WORD *)a1 + 2);
      v24 = a1;
      v26 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v7,
        (_DWORD)v5,
        v8,
        v9,
        (__int64)&v26,
        (__int64)&v24);
    }
  }
  else
  {
    if ( (unsigned int)dword_1C00B1A20 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, 0x200000000010LL) )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, v4) )
      {
        v5 = &unk_1C007F88E;
        goto LABEL_14;
      }
    }
  }
  if ( (unsigned int)dword_1C00B1A20 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, 0x400000000010LL) )
    return;
  v10 = *((_DWORD *)a1 + 12);
  switch ( v10 )
  {
    case 'D':
      if ( *((int *)a1 + 13) < 0 != ((*((_DWORD *)a1 + 13) & 0x40000000) != 0)
        && (unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, v3) )
      {
        v27 = (unsigned __int8)v20;
        v28 = v21;
        LODWORD(v29) = *((_DWORD *)a1 + 15);
        v22 = *((_DWORD *)a1 + 14);
        LOBYTE(v26) = *((_BYTE *)a1 + 52);
        v24 = (struct _DXGK_DIAG_HEADER *)*((_QWORD *)a1 + 8);
        LODWORD(v23) = 5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v18,
          (unsigned int)&unk_1C007F6D4,
          v19,
          v20,
          (__int64)&v23,
          (__int64)&v24,
          (__int64)&v26,
          (__int64)&v22,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
      }
      break;
    case 'X':
      if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, v3) )
        return;
      v14 = &unk_1C007F835;
      goto LABEL_29;
    case '`':
      if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, v3) )
        return;
      v14 = &unk_1C007F7CF;
      goto LABEL_29;
    case 'b':
      if ( *((int *)a1 + 14) < 0 && (unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, v3) )
      {
        v27 = *((_DWORD *)a1 + 13);
        v29 = *((_QWORD *)a1 + 8);
        v26 = v17;
        v28 = 5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v15,
          (unsigned int)&unk_1C007F75B,
          v16,
          v17,
          (__int64)&v28,
          (__int64)&v29,
          (__int64)&v27,
          (__int64)&v26);
      }
      break;
    default:
      if ( v10 != 104 || !(unsigned __int8)tlgKeywordOn(&dword_1C00B1A20, v3) )
        return;
      v14 = &unk_1C007F67D;
LABEL_29:
      v26 = *((_DWORD *)a1 + 15);
      v27 = *((_DWORD *)a1 + 14);
      v28 = *((_DWORD *)a1 + 13);
      v23 = *((_QWORD *)a1 + 8);
      LODWORD(v29) = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (_DWORD)v14,
        v12,
        v13,
        (__int64)&v29,
        (__int64)&v23,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26);
      return;
  }
}
