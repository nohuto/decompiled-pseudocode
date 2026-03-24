/*
 * XREFs of FormInquiryStandardData @ 0x1C0012348
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0005E04 (ScsiInquiryRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 *     NVMeCopyFirmwareRevision @ 0x1C0014264 (NVMeCopyFirmwareRevision.c)
 *     NVMeSetSenseData @ 0x1C001BFEC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  bool v3; // zf
  __int64 v6; // rax
  unsigned int *v7; // r15
  void *v8; // r14
  char v9; // r12
  char v10; // r13
  unsigned __int8 v11; // cl
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  int v21; // r10d
  unsigned int v22; // edx
  unsigned __int8 v24; // [rsp+30h] [rbp-50h]
  __int128 Src; // [rsp+38h] [rbp-48h] BYREF
  __int128 v26; // [rsp+48h] [rbp-38h]
  __int128 v27; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+70h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 1624);
  v3 = *(_BYTE *)(a2 + 2) == 40;
  v28 = 0LL;
  v29 = 0;
  Src = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v3 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = (unsigned int *)(a2 + 60);
    v8 = *(void **)(a2 + 64);
    v9 = *(_BYTE *)(v6 + a2 + 8);
    v10 = *(_BYTE *)(v6 + a2 + 9);
    v11 = *(_BYTE *)(v6 + a2 + 10);
  }
  else
  {
    v8 = *(void **)(a2 + 24);
    v7 = (unsigned int *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 5);
    v10 = *(_BYTE *)(a2 + 6);
    v11 = *(_BYTE *)(a2 + 7);
  }
  BYTE1(Src) &= ~0x80u;
  BYTE3(Src) = BYTE3(Src) & 0xE0 | 0x12;
  v24 = v11;
  BYTE2(Src) = 6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v11 + 1736) + 66LL) )
    BYTE5(Src) |= 1u;
  v12 = *(_OWORD *)(v2 + 24);
  BYTE7(Src) |= 2u;
  BYTE4(Src) = 55;
  LODWORD(v27) = 538976288;
  v26 = v12;
  *((_QWORD *)&Src + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v2, &v27, 4LL);
  if ( (*(_BYTE *)(v2 + 256) & 1) != 0 )
    HIWORD(v29) = -16129;
  v16 = 60;
  if ( *v7 < 0x3C )
    v16 = *v7;
  if ( v16 && v8 )
  {
    memmove(v8, &Src, v16);
    *v7 = v16;
    *(_BYTE *)(a2 + 3) = 1;
    v19 = 0;
  }
  else
  {
    LOBYTE(v15) = 36;
    LOBYTE(v14) = 5;
    LOBYTE(v13) = 48;
    NVMeSetSenseData(a2, v13, v14, v15);
    v19 = -1056964602;
  }
  v20 = *(_DWORD *)(a1 + 196);
  if ( v20 )
  {
    v21 = *(unsigned __int16 *)(a1 + 286);
    LOBYTE(v17) = v10;
    LOBYTE(v18) = v24;
    v22 = v21 * (unsigned int)*(unsigned __int16 *)(a1 + 288) % v20;
    LOBYTE(v22) = v9;
    StorPortSetDeviceQueueDepth(a1, v22, v17, v18, v21 * (unsigned int)*(unsigned __int16 *)(a1 + 288) / v20);
  }
  return v19;
}
