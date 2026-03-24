/*
 * XREFs of NVMePowerInitialize @ 0x1C000FEB4
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C000AE40 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeGetPowerState @ 0x1C000EBE0 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C0010964 (NVMePowerStateGetMaxPower.c)
 *     NVMeValidatePowerStates @ 0x1C0010F10 (NVMeValidatePowerStates.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0018DE8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001B504 (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int8 v2; // r12
  int v4; // ecx
  unsigned int v5; // r14d
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // r15
  __int64 PowerState; // rax
  unsigned int MaxPower; // r11d
  __int64 v11; // r10
  int v12; // r14d
  unsigned int v13; // ebx
  const char *v14; // rdx
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // r9
  __int64 v19; // rax
  char v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // rdx
  int v23; // r11d
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // edx
  int v27; // eax
  unsigned __int8 v28; // r10
  __int64 v29; // rbx
  _DWORD *v30; // r9
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r11
  char v35; // r10
  __int64 v36; // r9
  const char *v37; // r8
  unsigned __int8 v38; // [rsp+130h] [rbp+67h]
  unsigned __int8 v39; // [rsp+138h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1624);
  v2 = 0;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = -1;
  v6 = 0;
  v39 = 0;
  v7 = 0;
  v38 = 0;
  if ( v4 != 4 && (*(_DWORD *)(a1 + 3828) & 0x100) == 0 )
  {
    if ( v4 == 3 )
    {
      NVMeGetAutoPowerStateTransition(a1);
      if ( (*(_DWORD *)(a1 + 1664) & 0x40) == 0 )
      {
        NVMeSetAutoPowerStateTransition(a1);
        NVMeGetAutoPowerStateTransition(a1);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
    }
    else if ( (*(_DWORD *)(a1 + 1664) & 1) == 0 )
    {
      if ( (unsigned __int8)NVMeValidatePowerStates(a1) )
      {
        if ( *(unsigned __int8 *)(v1 + 263) != -1 )
        {
          do
          {
            PowerState = NVMeGetPowerState(a1, v2);
            MaxPower = NVMePowerStateGetMaxPower(PowerState);
            if ( (*(_BYTE *)(v11 + 3) & 2) != 0 )
            {
              v38 = v6 + 1;
              if ( MaxPower < v5 )
                v5 = MaxPower;
            }
            else
            {
              ++v7;
              v39 = v2;
            }
            StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
            ++v2;
            v6 = v38;
          }
          while ( v2 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
        }
        v12 = v6;
        v13 = 32 * (v6 + 3);
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v13, 1701672526LL) )
        {
          v14 = "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n";
        }
        else
        {
          NVMeZeroMemory(0LL, v13);
          v15 = 1;
          MEMORY[0] = 3;
          MEMORY[4] = 24;
          MEMORY[8] = 1;
          MEMORY[0xC] |= 0x40u;
          MEMORY[0x18] = 2;
          MEMORY[0x1C] = 40;
          MEMORY[0x28] = xmmword_1C0020B30;
          if ( *(_DWORD *)(a1 + 80) != 5 )
            v15 = v12 + 1;
          MEMORY[0x20] = v15;
          if ( v15 > 1 )
          {
            MEMORY[0xC] |= 0x100u;
            v15 = MEMORY[0x20];
          }
          if ( v15 > 8 )
            MEMORY[0x20] = 8;
          MEMORY[0xC] |= 0x10u;
          MEMORY[0x10] = -1;
          v16 = *(_DWORD *)(a1 + 80);
          if ( v16 == 2 )
          {
            MEMORY[0xC] |= 4u;
            *(_DWORD *)(a1 + 1664) |= 0x10u;
          }
          else if ( v16 == 5 )
          {
            MEMORY[0xC] |= 4u;
            MEMORY[0x10] = *(_DWORD *)(a1 + 92);
          }
          v17 = *(_DWORD *)(a1 + 80);
          if ( v17 <= 1 || v17 - 3 <= 1 )
            MEMORY[0xC] |= 2u;
          MEMORY[0xC] |= 8u;
          v18 = v39 + 1;
          MEMORY[0x40] = 1;
          MEMORY[0x44] = 32;
          MEMORY[0x48] = 0LL;
          MEMORY[0x50] = 0LL;
          MEMORY[0x58] = -1;
          MEMORY[0x3C] = MEMORY[0x20] - 1;
          if ( MEMORY[0x20] > 1u )
          {
            do
            {
              v19 = NVMeGetPowerState(a1, v18);
              v18 = v20 + 1;
              v22 = 32LL * v21;
              *(_DWORD *)(32 * (v21 + 2LL) + 0x18) = v23;
              *(_DWORD *)(v22 + 64) = 1;
              *(_DWORD *)(v22 + 68) = 32;
              v24 = (unsigned int)(*(_DWORD *)(v19 + 4) + *(_DWORD *)(v19 + 8));
              *(_QWORD *)(v22 + 80) = 0LL;
              *(_QWORD *)(v22 + 72) = 10 * v24;
            }
            while ( v21 + 1 < MEMORY[0x20] );
          }
          if ( (unsigned int)StorPortExtendedFunction(48LL, a1, 0LL, 0LL) )
          {
            StorPortExtendedFunction(1LL, a1, 0LL, v25);
            *(_DWORD *)(a1 + 1664) &= 0xFFFFFFFA;
            v14 = "StorNVMe - POWER: StorPoFx Registration Failed\n";
            *(_QWORD *)(a1 + 1648) = 0LL;
          }
          else
          {
            v26 = *(_DWORD *)(a1 + 100);
            *(_DWORD *)(a1 + 1664) = (*(_DWORD *)(a1 + 1664) | 5) ^ *(_BYTE *)(a1 + 1664) & 8;
            *(_BYTE *)(a1 + 1673) = MEMORY[0x20];
            *(_QWORD *)(a1 + 1648) = 0LL;
            v27 = 15;
            *(_DWORD *)(a1 + 1688) = 15;
            if ( v26 != -1 )
              v27 = v26;
            *(_DWORD *)(a1 + 1680) = v27;
            *(_BYTE *)(a1 + 1674) = 0;
            *(_WORD *)(a1 + 1670) = 0;
            *(_DWORD *)(a1 + 1676) = 0;
            *(_BYTE *)(a1 + 1669) = v39;
            *(_DWORD *)(a1 + 1692) = 200;
            *(_DWORD *)(a1 + 1700) = 2000;
            *(_DWORD *)(a1 + 1696) = 100;
            if ( v38 )
            {
              StorPortExtendedFunction(32LL, a1, a1 + 1704, v25);
              StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
              StorPortExtendedFunction(52LL, a1, 0LL, 0LL);
            }
            StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
            if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v7 + 40, 1701672526LL) )
            {
              v28 = 0;
              MEMORY[0] = 1;
              MEMORY[4] = 40;
              MEMORY[0x10] = 3LL;
              MEMORY[0x18] = v7;
              MEMORY[0x1C] = 40;
              if ( v7 )
              {
                v29 = 0LL;
                do
                {
                  v30 = (_DWORD *)(v29 + MEMORY[0x1C]);
                  *v30 = 1;
                  v30[1] = 24;
                  v31 = NVMeGetPowerState(a1, v28);
                  v32 = NVMePowerStateGetMaxPower(v31);
                  *(_QWORD *)(v33 + 16) = v34;
                  v28 = v35 + 1;
                  v29 += 24LL;
                  *(_QWORD *)(v33 + 8) = v32 / 0x3E8;
                }
                while ( v28 < v7 );
              }
              if ( (unsigned int)StorPortExtendedFunction(65LL, a1, 0LL, 0LL) )
              {
                StorPortExtendedFunction(1LL, a1, 0LL, v36);
                v37 = "Failed";
              }
              else
              {
                v37 = "Succeeded";
                *(_DWORD *)(a1 + 1664) |= 2u;
                *(_QWORD *)(a1 + 1656) = 0LL;
                *(_BYTE *)(a1 + 1670) = v7;
                *(_BYTE *)(a1 + 1671) = 0;
              }
              StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v37);
              NVMeGetAutoPowerStateTransition(a1);
              if ( (*(_DWORD *)(a1 + 1664) & 0x40) != 0 )
              {
                NVMeSetAutoPowerStateTransition(a1);
                NVMeGetAutoPowerStateTransition(a1);
              }
              return 1;
            }
            v14 = "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n";
          }
        }
        StorPortDebugPrint(3LL, v14);
      }
      return 0;
    }
  }
  return 1;
}
