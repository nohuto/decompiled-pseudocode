/*
 * XREFs of FormInquirySerialNumberData @ 0x1C000D738
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 * Callees:
 *     SerialNumberFromNvmeId @ 0x1C000D9BC (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r8
  __int64 v4; // r13
  unsigned __int8 v7; // dl
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r14
  __int64 v12; // rax
  bool v13; // zf
  bool v14; // r11
  unsigned __int8 v15; // al
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // rdx
  unsigned int *v19; // rsi
  _OWORD *v20; // r8
  __int64 v21; // rdx
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx

  v3 = *(_BYTE *)(a2 + 2);
  v4 = *(_QWORD *)(a1 + 1640);
  if ( v3 == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(_BYTE *)(a2 + 7);
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 8LL * v7 + 1752);
  v10 = (_QWORD *)(v9 + 68);
  v11 = (_QWORD *)(v9 + 84);
  v12 = *(_QWORD *)(v9 + 68);
  if ( !v12 )
    v12 = v10[1];
  v13 = v12 == 0;
  v14 = *v11 != 0LL;
  if ( v12 )
  {
    v15 = 40;
    v16 = 40LL;
  }
  else if ( *v11 )
  {
    v15 = 20;
    v16 = 20LL;
  }
  else
  {
    v16 = 30LL;
    v15 = 30;
  }
  v17 = v15 + 4;
  if ( v3 == 40 )
  {
    v18 = *(_QWORD *)(a2 + 64);
    v19 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 24);
    v19 = (unsigned int *)(a2 + 16);
  }
  if ( *v19 < v17 )
  {
    LOBYTE(v16) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(v18) = 6;
    NVMeSetSenseData(a2, v18, a3, v16);
    return 3238002694LL;
  }
  *(_WORD *)v18 = 0x8000;
  v20 = (_OWORD *)(v18 + 4);
  *(_BYTE *)(v18 + 3) = v15;
  if ( !v13 )
  {
    v21 = 16LL;
LABEL_14:
    result = SerialNumberFromNvmeId(v10, v21, v20, v16);
    if ( (_DWORD)result )
      return result;
    goto LABEL_15;
  }
  if ( v14 )
  {
    v10 = v11;
    v21 = 8LL;
    goto LABEL_14;
  }
  *v20 = *(_OWORD *)(v4 + 4);
  *(_DWORD *)(v18 + 20) = *(_DWORD *)(v4 + 20);
  *(_BYTE *)(v18 + 24) = 95;
  v23 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v8 + 1752) + 18LL);
  *(_BYTE *)(v18 + 28) = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v8 + 1752) + 18LL) & 0xF];
  *(_BYTE *)(v18 + 27) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v23 >> 4];
  *(_BYTE *)(v18 + 26) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v23 >> 8) & 0xF];
  *(_BYTE *)(v18 + 25) = `HexFromUchar'::`2'::hexDigits[v23 >> 12];
  v24 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v8 + 1752) + 16LL);
  *(_BYTE *)(v18 + 32) = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v8 + 1752) + 16LL) & 0xF];
  *(_BYTE *)(v18 + 31) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v24 >> 4];
  *(_BYTE *)(v18 + 30) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v24 >> 8) & 0xF];
  *(_BYTE *)(v18 + 29) = `HexFromUchar'::`2'::hexDigits[v24 >> 12];
  *(_BYTE *)(v18 + 33) = 46;
LABEL_15:
  *v19 = v17;
  result = 0LL;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
