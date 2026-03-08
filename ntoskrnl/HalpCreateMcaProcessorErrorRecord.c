/*
 * XREFs of HalpCreateMcaProcessorErrorRecord @ 0x140500B80
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x140500730 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x1404FFF0C (HalpAddMcaToProcessorGenericSection.c)
 *     HalpAddMcaToProcessorSpecificSection @ 0x140500090 (HalpAddMcaToProcessorSpecificSection.c)
 *     WheaInitializeRecordHeader @ 0x140610140 (WheaInitializeRecordHeader.c)
 */

__int64 __fastcall HalpCreateMcaProcessorErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r15d
  __int64 *v10; // r13
  unsigned int v11; // r15d
  int v12; // ecx
  _OWORD *v13; // rsi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v25; // [rsp+60h] [rbp+8h]
  unsigned int v26; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v26 = 0;
  memset((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader(a3);
  *(_WORD *)(a3 + 10) = 5;
  v10 = (__int64 *)(a3 + v9);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  v25 = v9;
  v11 = v9 + 192;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v12 = *(_DWORD *)(a3 + 104) ^ (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v12;
  *(_DWORD *)(a3 + 104) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4;
  if ( v11 > a4 )
    return (unsigned int)-1073741789;
  ((void (__fastcall *)(__int64, __int64 *))off_140C01AC8[0])(a3 + 128, v10);
  v13 = (_OWORD *)(a2 + 80);
  HalpAddMcaToProcessorGenericSection(a2 + 80, v10);
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v25;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v11 + 65 > a4 )
    return (unsigned int)-1073741789;
  HalpAddMcaToProcessorSpecificSection(a2 + 80, (unsigned __int64 *)(a3 + v11), &v26);
  v14 = v26;
  *(_DWORD *)(a3 + 200) = v11;
  *(_DWORD *)(a3 + 204) = v14;
  v15 = v11 + v14;
  *(_WORD *)(a3 + 208) = 768;
  v16 = v11 + v14 + 292;
  *(GUID *)(a3 + 216) = XPF_PROCESSOR_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v16 > a4 )
    return (unsigned int)-1073741789;
  v17 = 2LL;
  v18 = (_OWORD *)(a3 + v15);
  do
  {
    *v18 = *v13;
    v18[1] = v13[1];
    v18[2] = v13[2];
    v18[3] = v13[3];
    v18[4] = v13[4];
    v18[5] = v13[5];
    v18[6] = v13[6];
    v18 += 8;
    v19 = v13[7];
    v13 += 8;
    *(v18 - 1) = v19;
    --v17;
  }
  while ( v17 );
  *v18 = *v13;
  v18[1] = v13[1];
  v20 = *((_DWORD *)v13 + 8);
  v21 = v16 + 39;
  *((_DWORD *)v18 + 8) = v20;
  *(_DWORD *)(a3 + 272) = v15;
  *(_DWORD *)(a3 + 276) = 292;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v16 + 39 > a4 )
    return (unsigned int)-1073741789;
  v22 = a3 + v16;
  *(_OWORD *)v22 = 0LL;
  *(_OWORD *)(v22 + 16) = 0LL;
  *(_DWORD *)(v22 + 32) = 0;
  *(_WORD *)(v22 + 36) = 0;
  *(_BYTE *)(v22 + 38) = 0;
  *(_DWORD *)(v22 + 1) |= 1u;
  *(_BYTE *)(v22 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v16;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v23 = *(_DWORD *)(a2 + 8);
  if ( v23 + v21 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v21), (const void *)a2, v23);
    *(_DWORD *)(a3 + 416) = v21;
    *(_DWORD *)(a3 + 420) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 424) = 768;
    *(GUID *)(a3 + 432) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
