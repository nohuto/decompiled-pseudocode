/*
 * XREFs of WheapAddRecoveryPacketToErrorRecord @ 0x1406101B0
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x1406104A8 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall WheapAddRecoveryPacketToErrorRecord(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned int v5; // esi
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v16[5]; // [rsp+20h] [rbp-50h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 10);
  v5 = a1[6];
  if ( (unsigned int)v3 >= v5 )
    return (unsigned int)-1073741789;
  memset(v16, 0, sizeof(v16));
  v9 = a2 + 128;
  v8 = 0;
  DWORD2(v16[1]) = a1[7];
  HIDWORD(v16[1]) = a1[2];
  *(_QWORD *)&v16[0] = 0x341454857LL;
  DWORD2(v16[0]) = 80;
  *(_QWORD *)&v16[3] = a2;
  if ( (_WORD)v3 )
  {
    v9 += 72 * v3;
    v10 = (unsigned int)(*(_DWORD *)(v9 - 72) + *(_DWORD *)(v9 - 68));
  }
  else
  {
    v10 = 72 * v5 + 128;
  }
  if ( (unsigned int)(a3 - v10) < 0x50 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v11 = v16[1];
    *(_WORD *)(v9 + 8) = 768;
    *(_DWORD *)v9 = v10;
    *(_DWORD *)(v9 + 4) = 80;
    *(_DWORD *)(v9 + 48) = 0;
    *(GUID *)(v9 + 16) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_OWORD *)(v10 + a2) = v16[0];
    v12 = v16[2];
    *(_OWORD *)(v10 + a2 + 16) = v11;
    v13 = v16[3];
    *(_OWORD *)(v10 + a2 + 32) = v12;
    v14 = v16[4];
    *(_OWORD *)(v10 + a2 + 48) = v13;
    *(_OWORD *)(v10 + a2 + 64) = v14;
    ++*(_WORD *)(a2 + 10);
  }
  return v8;
}
