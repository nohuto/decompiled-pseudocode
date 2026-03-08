/*
 * XREFs of HalpCreateMcaMemoryErrorRecord @ 0x140500898
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x140500730 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x1404FFE04 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 *     HalpAddMcaToMemoryErrorSection @ 0x1404FFE7C (HalpAddMcaToMemoryErrorSection.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x1404FFF0C (HalpAddMcaToProcessorGenericSection.c)
 *     WheaInitializeRecordHeader @ 0x140610140 (WheaInitializeRecordHeader.c)
 */

__int64 __fastcall HalpCreateMcaMemoryErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  int v11; // edx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  _OWORD *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // edx
  __int64 v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  int v23; // eax
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // ecx

  v8 = 0;
  memset((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader(a3);
  v10 = v9 + 80;
  *(_WORD *)(a3 + 10) = 5;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v11 = *(_DWORD *)(a3 + 104) ^ (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v11;
  v12 = ((unsigned __int8)v11 ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4 ^ v11;
  *(_DWORD *)(a3 + 104) = v12;
  v13 = v12;
  v14 = v12 & 0xFFFFFFDF;
  v15 = v13 | 0x20;
  if ( (*(_BYTE *)(a2 + 12) & 0xC0) != 0x40 )
    v14 = v15;
  *(_DWORD *)(a3 + 104) = v14;
  if ( v10 > a4 )
    return (unsigned int)-1073741789;
  v16 = (_OWORD *)(a2 + 80);
  v17 = a2 + 80;
  if ( HalpMcaExtendedLoggingSupported )
    HalpAddMcaExtendedLogToMemoryErrorSection(v17, a3 + 128, a3 + v9);
  else
    HalpAddMcaToMemoryErrorSection(v17, (_QWORD *)(a3 + v9));
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v9;
  *(_WORD *)(a3 + 136) = 768;
  *(_DWORD *)(a3 + 132) = 80;
  *(GUID *)(a3 + 144) = MEMORY_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v9 + 272 > a4 )
    return (unsigned int)-1073741789;
  ((void (__fastcall *)(__int64, __int64))off_140C01AC8[0])(a3 + 200, a3 + v10);
  HalpAddMcaToProcessorGenericSection(a2 + 80, (__int64 *)(a3 + v10));
  *(_DWORD *)(a3 + 200) = v10;
  v18 = *(_DWORD *)(a3 + 204) + v10;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  v19 = v18 + 292;
  if ( v18 + 292 > a4 )
    return (unsigned int)-1073741789;
  v20 = 2LL;
  v21 = (_OWORD *)(a3 + v18);
  do
  {
    *v21 = *v16;
    v21[1] = v16[1];
    v21[2] = v16[2];
    v21[3] = v16[3];
    v21[4] = v16[4];
    v21[5] = v16[5];
    v21[6] = v16[6];
    v21 += 8;
    v22 = v16[7];
    v16 += 8;
    *(v21 - 1) = v22;
    --v20;
  }
  while ( v20 );
  *v21 = *v16;
  v21[1] = v16[1];
  v23 = *((_DWORD *)v16 + 8);
  v24 = v18 + 331;
  *((_DWORD *)v21 + 8) = v23;
  *(_DWORD *)(a3 + 272) = v18;
  *(_WORD *)(a3 + 280) = 768;
  *(_DWORD *)(a3 + 276) = 292;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v18 + 331 > a4 )
    return (unsigned int)-1073741789;
  v25 = a3 + v19;
  *(_OWORD *)v25 = 0LL;
  *(_OWORD *)(v25 + 16) = 0LL;
  *(_DWORD *)(v25 + 32) = 0;
  *(_WORD *)(v25 + 36) = 0;
  *(_BYTE *)(v25 + 38) = 0;
  *(_DWORD *)(v25 + 1) |= 1u;
  *(_BYTE *)(v25 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v19;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v26 = *(_DWORD *)(a2 + 8);
  if ( v26 + v24 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v24), (const void *)a2, v26);
    *(_DWORD *)(a3 + 416) = v24;
    *(_DWORD *)(a3 + 420) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 424) = 768;
    *(GUID *)(a3 + 432) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
