/*
 * XREFs of ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01D3DFC
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024C7C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4444433343@Z @ 0x1C01D3C10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@U1@@-$_.c)
 */

void __fastcall InputTraceLogging::Cursor::EnsureDpiCursor(unsigned __int64 a1)
{
  __int64 v2; // rbx
  int *v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+90h] [rbp+7h] BYREF
  int v9; // [rsp+94h] [rbp+Bh] BYREF
  int v10; // [rsp+98h] [rbp+Fh] BYREF
  int v11; // [rsp+9Ch] [rbp+13h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+37h] BYREF
  unsigned __int64 v17[3]; // [rsp+C8h] [rbp+3Fh] BYREF
  int v18; // [rsp+F8h] [rbp+6Fh] BYREF
  int v19; // [rsp+100h] [rbp+77h] BYREF
  int v20; // [rsp+108h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C0330B20 > 5 && (qword_1C0330B30 & 8) != 0 && (qword_1C0330B38 & 8) == qword_1C0330B38 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v3 = (int *)UPDWORDPointer(8232LL);
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *v3;
    v13 = *(_QWORD *)(a1 + 104);
    v14 = *(_QWORD *)(a1 + 96);
    v15 = *(_QWORD *)(a1 + 88);
    v19 = *(__int16 *)(a1 + 86);
    v20 = *(__int16 *)(a1 + 84);
    v8 = *(_DWORD *)(a1 + 144) >> 1;
    v9 = *(_DWORD *)(a1 + 140);
    v10 = *(_DWORD *)(a1 + 80);
    v11 = *(_DWORD *)(a1 + 76);
    v16 = v4;
    v18 = v5;
    v12 = v2;
    v17[0] = a1 & -(__int64)(v4 != 0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C0330B20,
      byte_1C02F1330,
      v6,
      v7,
      (__int64)v17,
      (__int64)&v16,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v18,
      (__int64)&v12);
  }
}
