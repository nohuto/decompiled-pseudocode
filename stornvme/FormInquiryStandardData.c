/*
 * XREFs of FormInquiryStandardData @ 0x1C0012754
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     GetSrbScsiAddress @ 0x1C0007B00 (GetSrbScsiAddress.c)
 *     NVMeCopyFirmwareRevision @ 0x1C0014F40 (NVMeCopyFirmwareRevision.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  void *SrbDataBuffer; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  bool v8; // zf
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int *v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // r9
  unsigned int v16; // edi
  unsigned int v17; // r10d
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v23; // [rsp+38h] [rbp-39h] BYREF
  int v24; // [rsp+3Ch] [rbp-35h] BYREF
  int v25; // [rsp+40h] [rbp-31h] BYREF
  unsigned int *v26; // [rsp+48h] [rbp-29h] BYREF
  __int128 Src; // [rsp+50h] [rbp-21h] BYREF
  __int128 v28; // [rsp+60h] [rbp-11h]
  __int128 v29; // [rsp+70h] [rbp-1h] BYREF
  __int64 v30; // [rsp+80h] [rbp+Fh]
  int v31; // [rsp+88h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 1840);
  v26 = 0LL;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v30 = 0LL;
  Src = 0LL;
  v31 = 0;
  v28 = 0LL;
  v29 = 0LL;
  SrbDataBuffer = (void *)GetSrbDataBuffer(a2, &v26);
  GetSrbScsiAddress(a2, &v25, &v24, &v23);
  v6 = v23;
  BYTE2(Src) = 6;
  v7 = *(_QWORD *)(a1 + 8LL * v23 + 1952);
  BYTE1(Src) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0x7F;
  v8 = *(_BYTE *)(v7 + 66) == 0;
  BYTE3(Src) = BYTE3(Src) & 0xE0 | 0x12;
  if ( !v8 )
    BYTE5(Src) |= 1u;
  v9 = *(_OWORD *)(v2 + 24);
  BYTE7(Src) |= 2u;
  BYTE4(Src) = 55;
  LODWORD(v29) = 538976288;
  v28 = v9;
  *((_QWORD *)&Src + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v2, &v29, 4LL);
  if ( (*(_BYTE *)(v2 + 256) & 1) != 0 )
    HIWORD(v31) = -16129;
  v13 = v26;
  v14 = *v26;
  if ( *v26 >= 0x3C )
  {
    v14 = 60;
  }
  else if ( !v14 )
  {
LABEL_7:
    LOBYTE(v12) = 36;
    LOBYTE(v11) = 5;
    LOBYTE(v10) = 48;
    NVMeSetSenseData(a2, v10, v11, v12);
    v16 = -1056964602;
    goto LABEL_8;
  }
  if ( !SrbDataBuffer )
    goto LABEL_7;
  memmove(SrbDataBuffer, &Src, v14);
  *v13 = v14;
  v16 = 0;
  *(_BYTE *)(a2 + 3) = 1;
LABEL_8:
  v17 = *(_DWORD *)(a1 + 220);
  if ( v17 )
  {
    v18 = *(unsigned __int16 *)(a1 + 334) * (unsigned __int64)*(unsigned __int16 *)(a1 + 336);
    if ( v18 >= 0xFFFFFFFF )
      v18 = 0xFFFFFFFFLL;
    v19 = *(unsigned int *)(a1 + 160);
    if ( (_DWORD)v19 && v18 >= v19 )
      v18 = *(unsigned int *)(a1 + 160);
    LOBYTE(v15) = v23;
    v20 = v18;
    LOBYTE(v18) = v24;
    v21 = v20 % v17;
    LOBYTE(v21) = v25;
    StorPortSetDeviceQueueDepth(a1, v21, v18, v15, v20 / v17);
  }
  StorPortExtendedFunction(
    46LL,
    a1,
    *(_QWORD *)(a1 + 8 * v6 + 1952),
    ~(unsigned __int8)(*(_DWORD *)(a1 + 64) >> 14) & 8);
  return v16;
}
