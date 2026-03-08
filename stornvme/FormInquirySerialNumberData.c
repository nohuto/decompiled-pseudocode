/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0012548
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     SerialNumberFromNvmeId @ 0x1C001AFFC (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r10
  __int64 v3; // rax
  unsigned __int8 v6; // cl
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r11
  _QWORD *v10; // r12
  __int64 v11; // rax
  bool v12; // r14
  bool v13; // si
  char v14; // r9
  unsigned int v15; // edi
  __int64 SrbDataBuffer; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // r10
  _QWORD *v20; // r11
  unsigned int *v21; // r15
  _BYTE *v22; // rdx
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned int *v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int128 v31; // [rsp+40h] [rbp-58h]

  v29 = 0LL;
  v2 = 40;
  v3 = *(_QWORD *)(a1 + 1840);
  v31 = 0LL;
  v30 = v3;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 8LL * v6 + 1952);
  v9 = v8 + 68;
  v10 = (_QWORD *)(v8 + 84);
  v11 = *(_QWORD *)(v8 + 68) - v31;
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 8) - *((_QWORD *)&v31 + 1);
  v12 = v11 != 0;
  v13 = *v10 != (_QWORD)v31;
  if ( !v11 )
  {
    v14 = 20;
    if ( *v10 == (_QWORD)v31 )
      v14 = 30;
    v2 = v14;
  }
  v15 = v2 + 4;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v29);
  v21 = v29;
  v22 = (_BYTE *)SrbDataBuffer;
  if ( *v29 < v15 )
  {
    LOBYTE(v18) = 36;
    LOBYTE(v17) = 5;
    LOBYTE(v22) = 6;
    NVMeSetSenseData(a2, v22, v17, v18);
    return 3238002694LL;
  }
  *(_WORD *)SrbDataBuffer = 0x8000;
  v24 = SrbDataBuffer + 4;
  *(_BYTE *)(SrbDataBuffer + 3) = v19;
  if ( v12 )
  {
    v25 = 16LL;
  }
  else
  {
    if ( !v13 )
    {
      v26 = v30;
      *(_OWORD *)v24 = *(_OWORD *)(v30 + 4);
      *(_DWORD *)(v24 + 16) = *(_DWORD *)(v26 + 20);
      v22[24] = 95;
      v27 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v7 + 1952) + 18LL);
      v22[28] = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v7 + 1952) + 18LL) & 0xF];
      v22[27] = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v27 >> 4];
      v22[26] = `HexFromUchar'::`2'::hexDigits[((unsigned int)v27 >> 8) & 0xF];
      v22[25] = `HexFromUchar'::`2'::hexDigits[v27 >> 12];
      v28 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v7 + 1952) + 16LL);
      v22[32] = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v7 + 1952) + 16LL) & 0xF];
      v22[31] = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v28 >> 4];
      v22[30] = `HexFromUchar'::`2'::hexDigits[((unsigned int)v28 >> 8) & 0xF];
      v22[29] = `HexFromUchar'::`2'::hexDigits[v28 >> 12];
      v22[33] = 46;
      goto LABEL_19;
    }
    v20 = v10;
    v25 = 8LL;
  }
  result = SerialNumberFromNvmeId(v20, v25, SrbDataBuffer + 4);
  if ( !(_DWORD)result )
  {
LABEL_19:
    *v21 = v15;
    result = 0LL;
    *(_BYTE *)(a2 + 3) = 1;
  }
  return result;
}
