/*
 * XREFs of NVMePowerInitialize @ 0x1C0009B20
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0005F00 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeGetPowerState @ 0x1C000A1AC (NVMeGetPowerState.c)
 *     NVMeValidatePowerStates @ 0x1C000A58C (NVMeValidatePowerStates.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000A634 (NVMePowerStateGetMaxPower.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CAF4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C002449C (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r12
  int v3; // ecx
  unsigned int v4; // r14d
  unsigned __int8 v5; // r15
  unsigned __int8 v6; // r13
  __int64 v7; // rdx
  unsigned __int8 v8; // si
  __int64 PowerState; // rax
  __int64 v10; // r10
  unsigned int MaxPower; // r11d
  unsigned int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  char v17; // r9
  __int64 v18; // rax
  char v19; // r9
  unsigned int v20; // r10d
  int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int8 v27; // r10
  __int64 v28; // rbx
  _DWORD *v29; // r9
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r11
  char v34; // r10
  __int64 v35; // r9
  unsigned __int8 v37; // [rsp+120h] [rbp+67h]

  v1 = *(_QWORD *)(a1 + 1640);
  v3 = *(_DWORD *)(a1 + 88);
  v4 = -1;
  v5 = 0;
  v6 = 0;
  v37 = 0;
  if ( v3 == 4 || (*(_DWORD *)(a1 + 3844) & 0x100) != 0 )
    return 1;
  if ( v3 == 3 )
  {
    NVMeGetAutoPowerStateTransition(a1);
    if ( (*(_DWORD *)(a1 + 1680) & 0x40) == 0 )
    {
LABEL_44:
      NVMeSetAutoPowerStateTransition(a1);
      NVMeGetAutoPowerStateTransition(a1);
    }
    return 1;
  }
  if ( (*(_DWORD *)(a1 + 1680) & 1) != 0 )
    return 1;
  if ( (unsigned __int8)NVMeValidatePowerStates(a1) )
  {
    v8 = 0;
    if ( *(unsigned __int8 *)(v1 + 263) != -1 )
    {
      do
      {
        LOBYTE(v7) = v8;
        PowerState = NVMeGetPowerState(a1, v7);
        MaxPower = NVMePowerStateGetMaxPower(PowerState);
        if ( (*(_BYTE *)(v10 + 3) & 2) != 0 )
        {
          ++v6;
          if ( MaxPower < v4 )
            v4 = MaxPower;
        }
        else
        {
          ++v5;
          v37 = v8;
        }
        if ( *(_BYTE *)(a1 + 24) )
          StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
        ++v8;
      }
      while ( v8 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
    }
    v12 = 32 * (v6 + 3);
    if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v12, 1701672526LL) )
    {
      NVMeZeroMemory(0LL, v12);
      v13 = 1;
      MEMORY[0] = 3;
      MEMORY[4] = 24;
      MEMORY[8] = 1;
      MEMORY[0xC] |= 0x40u;
      MEMORY[0x18] = 2;
      MEMORY[0x1C] = 40;
      MEMORY[0x28] = xmmword_1C0028738;
      if ( *(_DWORD *)(a1 + 88) != 5 )
        v13 = v6 + 1;
      MEMORY[0x20] = v13;
      if ( v13 > 1 )
      {
        MEMORY[0xC] |= 0x100u;
        v13 = MEMORY[0x20];
      }
      if ( v13 > 8 )
        MEMORY[0x20] = 8;
      v14 = 0xFFFFFFFFLL;
      MEMORY[0xC] |= 0x10u;
      MEMORY[0x10] = -1;
      v15 = *(_DWORD *)(a1 + 88);
      if ( v15 == 2 )
      {
        MEMORY[0xC] |= 4u;
        *(_DWORD *)(a1 + 1680) |= 0x10u;
      }
      else if ( v15 == 5 )
      {
        MEMORY[0xC] |= 4u;
        MEMORY[0x10] = *(_DWORD *)(a1 + 100);
      }
      v16 = *(_DWORD *)(a1 + 88);
      if ( v16 <= 1 || v16 - 3 <= 1 )
        MEMORY[0xC] |= 2u;
      MEMORY[0xC] |= 8u;
      v17 = v37 + 1;
      MEMORY[0x40] = 1;
      MEMORY[0x44] = 32;
      MEMORY[0x48] = 0LL;
      MEMORY[0x50] = 0LL;
      MEMORY[0x3C] = MEMORY[0x20] - 1;
      MEMORY[0x58] = -1;
      if ( MEMORY[0x20] > 1u )
      {
        do
        {
          LOBYTE(v14) = v17;
          v18 = NVMeGetPowerState(a1, v14);
          v17 = v19 + 1;
          v14 = 32LL * v20;
          *(_DWORD *)(32 * (v20 + 2LL) + 0x18) = -1;
          *(_DWORD *)(v14 + 64) = 1;
          *(_DWORD *)(v14 + 68) = v21;
          v22 = (unsigned int)(*(_DWORD *)(v18 + 4) + *(_DWORD *)(v18 + 8));
          *(_QWORD *)(v14 + 80) = 0LL;
          *(_QWORD *)(v14 + 72) = 10 * v22;
        }
        while ( v20 + 1 < MEMORY[0x20] );
      }
      if ( (unsigned int)StorPortExtendedFunction(48LL, a1, 0LL, 0LL) )
      {
        StorPortExtendedFunction(1LL, a1, 0LL, v23);
        *(_DWORD *)(a1 + 1680) &= 0xFFFFFFFA;
        *(_QWORD *)(a1 + 1664) = 0LL;
      }
      else
      {
        v24 = *(_DWORD *)(a1 + 108);
        *(_DWORD *)(a1 + 1680) = (*(_DWORD *)(a1 + 1680) | 5) ^ *(_DWORD *)(a1 + 1680) & 8;
        *(_BYTE *)(a1 + 1689) = MEMORY[0x20];
        *(_QWORD *)(a1 + 1664) = 0LL;
        v25 = 15;
        *(_DWORD *)(a1 + 1704) = 15;
        if ( v24 != -1 )
          v25 = v24;
        *(_DWORD *)(a1 + 1696) = v25;
        *(_BYTE *)(a1 + 1690) = 0;
        *(_WORD *)(a1 + 1686) = 0;
        *(_DWORD *)(a1 + 1692) = 0;
        *(_BYTE *)(a1 + 1685) = v37;
        *(_DWORD *)(a1 + 1708) = 200;
        *(_DWORD *)(a1 + 1716) = 2000;
        *(_DWORD *)(a1 + 1712) = 100;
        if ( v6 )
        {
          StorPortExtendedFunction(32LL, a1, a1 + 1720, v23);
          StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
          StorPortExtendedFunction(52LL, a1, 0LL, 0LL);
        }
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v5 + 40, 1701672526LL) )
        {
          v27 = 0;
          MEMORY[0] = 1;
          MEMORY[4] = 40;
          MEMORY[0x14] = 0;
          MEMORY[0x10] = 3;
          MEMORY[0x18] = v5;
          MEMORY[0x1C] = 40;
          if ( v5 )
          {
            v28 = 0LL;
            do
            {
              LOBYTE(v26) = v27;
              v29 = (_DWORD *)(v28 + MEMORY[0x1C]);
              *v29 = 1;
              v29[1] = 24;
              v30 = NVMeGetPowerState(a1, v26);
              v31 = NVMePowerStateGetMaxPower(v30);
              *(_QWORD *)(v32 + 16) = v33;
              v27 = v34 + 1;
              v28 += 24LL;
              v26 = v31 / 0x3E8;
              *(_QWORD *)(v32 + 8) = v26;
            }
            while ( v27 < v5 );
          }
          if ( (unsigned int)StorPortExtendedFunction(65LL, a1, 0LL, 0LL) )
          {
            StorPortExtendedFunction(1LL, a1, 0LL, v35);
          }
          else
          {
            *(_DWORD *)(a1 + 1680) |= 2u;
            *(_QWORD *)(a1 + 1672) = 0LL;
            *(_BYTE *)(a1 + 1686) = v5;
            *(_BYTE *)(a1 + 1687) = 0;
          }
          NVMeGetAutoPowerStateTransition(a1);
          if ( (*(_DWORD *)(a1 + 1680) & 0x40) == 0 )
            return 1;
          goto LABEL_44;
        }
      }
    }
  }
  return 0;
}
