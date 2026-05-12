/*
 * XREFs of RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C0044810
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001C990 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D158 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // esi
  __int64 v4; // r8
  __int64 v5; // rbp
  int v6; // r10d
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // r11
  int v10; // eax
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // r11

  v2 = *(unsigned int *)(a2 + 44);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = 56;
  *(_DWORD *)v4 = 56;
  *(_DWORD *)(v4 + 4) = 56;
  if ( *(_DWORD *)(v2 + a2) == 2 && *(_DWORD *)(v2 + a2 + 4) == 24 )
  {
    v7 = 0;
    *(_BYTE *)(v4 + 8) ^= (*(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v2 + a2 + 8)) & 1;
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(v2 + a2 + 9);
    *(_BYTE *)(v4 + 10) = *(_BYTE *)(v2 + a2 + 10);
    *(_BYTE *)(v4 + 11) = *(_BYTE *)(v2 + a2 + 11);
    *(_BYTE *)(v4 + 12) = *(_BYTE *)(v2 + a2 + 12);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v2 + a2 + 16);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v2 + a2 + 20);
    if ( !*(_BYTE *)(v2 + a2 + 9) )
      goto LABEL_18;
    v8 = v2 + a2 + 25;
    v9 = v4 + 28;
    do
    {
      if ( *(unsigned int *)(v5 + 8) < (unsigned __int64)(32LL * v7 + 56) )
      {
        v3 = -2147483643;
      }
      else
      {
        *(_DWORD *)(v9 - 4) = 32;
        *(_DWORD *)v9 = 32;
        *(_BYTE *)(v9 + 4) = *(_BYTE *)(v8 - 1);
        *(_BYTE *)(v9 + 5) ^= (*(_BYTE *)(v9 + 5) ^ *(_BYTE *)v8) & 1;
        *(_OWORD *)(v9 + 12) = *(_OWORD *)(v8 + 7);
      }
      v10 = *(unsigned __int8 *)(v2 + a2 + 9);
      ++v7;
      v8 += 24LL;
      v9 += 32LL;
    }
    while ( v7 < v10 );
  }
  else
  {
    v11 = 0;
    *(_BYTE *)(v4 + 8) ^= (*(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v2 + a2 + 8)) & 1;
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(v2 + a2 + 9);
    *(_BYTE *)(v4 + 10) = *(_BYTE *)(v2 + a2 + 10);
    *(_BYTE *)(v4 + 11) = *(_BYTE *)(v2 + a2 + 11);
    *(_BYTE *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 16) = 4096;
    *(_DWORD *)(v4 + 20) = 0x10000;
    if ( !*(_BYTE *)(v2 + a2 + 9) )
      goto LABEL_18;
    v12 = v2 + a2 + 17;
    v13 = v4 + 28;
    do
    {
      if ( *(unsigned int *)(v5 + 8) < (unsigned __int64)(32LL * v11 + 56) )
      {
        v3 = -2147483643;
      }
      else
      {
        *(_DWORD *)(v13 - 4) = 32;
        *(_DWORD *)v13 = 32;
        *(_BYTE *)(v13 + 4) = *(_BYTE *)(v12 - 1);
        *(_BYTE *)(v13 + 5) ^= (*(_BYTE *)(v13 + 5) ^ *(_BYTE *)v12) & 1;
        *(_QWORD *)(v13 + 12) = *(_QWORD *)(v12 + 7);
      }
      v10 = *(unsigned __int8 *)(v2 + a2 + 9);
      ++v11;
      v12 += 16LL;
      v13 += 32LL;
    }
    while ( v11 < v10 );
  }
  if ( (_BYTE)v10 )
    v6 = 32 * (unsigned __int8)v10 + 24;
LABEL_18:
  *(_DWORD *)(v4 + 4) = v6;
  return v3;
}
