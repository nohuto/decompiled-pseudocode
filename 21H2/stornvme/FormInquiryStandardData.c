/*
 * XREFs of FormInquiryStandardData @ 0x1C000CF58
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbScsiAddress @ 0x1C00051F4 (GetSrbScsiAddress.c)
 *     NVMeCopyFirmwareRevision @ 0x1C000D0EC (NVMeCopyFirmwareRevision.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  bool v5; // zf
  void *v6; // r14
  unsigned int *v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v19; // [rsp+30h] [rbp-29h] BYREF
  int v20; // [rsp+34h] [rbp-25h] BYREF
  int v21; // [rsp+38h] [rbp-21h] BYREF
  __int128 Src; // [rsp+40h] [rbp-19h] BYREF
  __int128 v23; // [rsp+50h] [rbp-9h]
  __int128 v24; // [rsp+60h] [rbp+7h] BYREF
  __int64 v25; // [rsp+70h] [rbp+17h]
  int v26; // [rsp+78h] [rbp+1Fh]

  v2 = *(_QWORD *)(a1 + 1640);
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v5 = *(_BYTE *)(a2 + 2) == 40;
  Src = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v26 = 0;
  v24 = 0LL;
  if ( v5 )
  {
    v6 = *(void **)(a2 + 64);
    v7 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v6 = *(void **)(a2 + 24);
    v7 = (unsigned int *)(a2 + 16);
  }
  GetSrbScsiAddress(a2, &v21, &v20, &v19);
  BYTE1(Src) &= ~0x80u;
  BYTE2(Src) = 6;
  BYTE3(Src) = BYTE3(Src) & 0xE0 | 0x12;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v19 + 1752) + 66LL) )
    BYTE5(Src) |= 1u;
  v8 = *(_OWORD *)(v2 + 24);
  BYTE7(Src) |= 2u;
  BYTE4(Src) = 55;
  LODWORD(v24) = 538976288;
  v23 = v8;
  *((_QWORD *)&Src + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v2, &v24, 4LL);
  if ( (*(_BYTE *)(v2 + 256) & 1) != 0 )
    HIWORD(v26) = -16129;
  v12 = *v7;
  if ( *v7 >= 0x3C )
  {
    v12 = 60;
  }
  else if ( !v12 )
  {
    goto LABEL_16;
  }
  if ( v6 )
  {
    memmove(v6, &Src, v12);
    *v7 = v12;
    *(_BYTE *)(a2 + 3) = 1;
    v15 = 0;
    goto LABEL_11;
  }
LABEL_16:
  LOBYTE(v11) = 36;
  LOBYTE(v10) = 5;
  LOBYTE(v9) = 48;
  NVMeSetSenseData(a2, v9, v10, v11);
  v15 = -1056964602;
LABEL_11:
  v16 = *(_DWORD *)(a1 + 212);
  if ( v16 )
  {
    LOBYTE(v14) = v19;
    LOBYTE(v13) = v20;
    v17 = *(unsigned __int16 *)(a1 + 302) * (unsigned int)*(unsigned __int16 *)(a1 + 304) % v16;
    LOBYTE(v17) = v21;
    StorPortSetDeviceQueueDepth(
      a1,
      v17,
      v13,
      v14,
      *(unsigned __int16 *)(a1 + 302) * (unsigned int)*(unsigned __int16 *)(a1 + 304) / v16);
  }
  return v15;
}
