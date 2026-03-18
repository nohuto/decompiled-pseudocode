/*
 * XREFs of NVMePowerInitialize @ 0x1C000FD34
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0008540 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C0007DD8 (NVMeGetPowerState.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     NVMePowerStateGetMaxPower @ 0x1C00105CC (NVMePowerStateGetMaxPower.c)
 *     NVMeValidatePowerStates @ 0x1C0010B78 (NVMeValidatePowerStates.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D4C4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0023794 (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r15
  int v3; // ecx
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // si
  __int64 PowerState; // rax
  __int64 v9; // r10
  unsigned int v10; // ebx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int8 v14; // r9
  __int64 v15; // rax
  char v16; // r9
  unsigned int v17; // r10d
  __int64 v18; // rdx
  int v19; // r11d
  __int64 v20; // rcx
  int v22; // edx
  int v23; // eax
  unsigned __int8 v24; // r10
  __int64 v25; // rbx
  _DWORD *v26; // r9
  __int64 v27; // rax
  unsigned int MaxPower; // eax
  __int64 v29; // r9
  __int64 v30; // r11
  char v31; // r10
  unsigned __int8 v32; // [rsp+120h] [rbp+67h]

  v1 = *(_QWORD *)(a1 + 1840);
  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0;
  v5 = 0;
  v32 = 0;
  v6 = 0;
  if ( v3 == 4 || (*(_DWORD *)(a1 + 4044) & 0x100) != 0 )
    return 1;
  if ( v3 == 3 )
  {
    NVMeGetAutoPowerStateTransition(a1);
    if ( (*(_DWORD *)(a1 + 1880) & 0x40) == 0 )
    {
LABEL_47:
      NVMeSetAutoPowerStateTransition(a1);
      NVMeGetAutoPowerStateTransition(a1);
    }
  }
  else if ( (*(_DWORD *)(a1 + 1880) & 1) == 0 )
  {
    if ( (unsigned __int8)NVMeValidatePowerStates(a1) )
    {
      v7 = 0;
      if ( *(unsigned __int8 *)(v1 + 263) != -1 )
      {
        do
        {
          PowerState = NVMeGetPowerState(a1, v7);
          NVMePowerStateGetMaxPower(PowerState);
          if ( (*(_BYTE *)(v9 + 3) & 2) != 0 )
          {
            ++v6;
          }
          else
          {
            ++v5;
            v32 = v7;
          }
          if ( *(_BYTE *)(a1 + 24) )
            StorPortExtendedFunction(87LL, a1, 0LL);
          ++v7;
        }
        while ( v7 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
        v4 = v32;
      }
      v10 = 32 * (v6 + 3);
      if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v10) )
      {
        NVMeZeroMemory(0LL, v10);
        v11 = 1;
        MEMORY[0] = 3;
        MEMORY[4] = 24;
        MEMORY[8] = 1;
        MEMORY[0xC] |= 0x40u;
        MEMORY[0x18] = 2;
        MEMORY[0x1C] = 40;
        MEMORY[0x28] = xmmword_1C002B518;
        if ( *(_DWORD *)(a1 + 88) != 5 )
          v11 = v6 + 1;
        MEMORY[0x20] = v11;
        if ( v11 > 1 )
          MEMORY[0xC] |= 0x100u;
        if ( MEMORY[0x20] > 8u )
          MEMORY[0x20] = 8;
        MEMORY[0xC] |= 0x10u;
        MEMORY[0x10] = -1;
        v12 = *(_DWORD *)(a1 + 88);
        if ( v12 == 2 )
        {
          MEMORY[0xC] |= 4u;
          *(_DWORD *)(a1 + 1880) |= 0x10u;
        }
        else if ( v12 == 5 )
        {
          MEMORY[0xC] |= 4u;
          MEMORY[0x10] = *(_DWORD *)(a1 + 100);
        }
        v13 = *(_DWORD *)(a1 + 88);
        if ( v13 <= 1 || v13 - 3 <= 1 )
          MEMORY[0xC] |= 2u;
        v14 = v4 + 1;
        MEMORY[0xC] |= 8u;
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
            v15 = NVMeGetPowerState(a1, v14);
            v14 = v16 + 1;
            v18 = 32LL * v17;
            *(_DWORD *)(32 * (v17 + 2LL) + 0x18) = -1;
            *(_DWORD *)(v18 + 64) = 1;
            *(_DWORD *)(v18 + 68) = v19;
            v20 = (unsigned int)(*(_DWORD *)(v15 + 4) + *(_DWORD *)(v15 + 8));
            *(_QWORD *)(v18 + 80) = 0LL;
            *(_QWORD *)(v18 + 72) = 10 * v20;
          }
          while ( v17 + 1 < MEMORY[0x20] );
        }
        if ( (unsigned int)StorPortExtendedFunction(48LL, a1, 0LL) )
        {
          StorPortExtendedFunction(1LL, a1, 0LL);
          *(_DWORD *)(a1 + 1880) &= 0xFFFFFFFA;
          *(_QWORD *)(a1 + 1864) = 0LL;
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 108);
          *(_DWORD *)(a1 + 1880) = (*(_DWORD *)(a1 + 1880) | 5) ^ *(_BYTE *)(a1 + 1880) & 8;
          *(_BYTE *)(a1 + 1889) = MEMORY[0x20];
          *(_QWORD *)(a1 + 1864) = 0LL;
          v23 = 15;
          *(_DWORD *)(a1 + 1904) = 15;
          if ( v22 != -1 )
            v23 = v22;
          *(_DWORD *)(a1 + 1896) = v23;
          *(_BYTE *)(a1 + 1890) = 0;
          *(_WORD *)(a1 + 1886) = 0;
          *(_DWORD *)(a1 + 1892) = 0;
          *(_BYTE *)(a1 + 1885) = v4;
          *(_DWORD *)(a1 + 1908) = 200;
          *(_DWORD *)(a1 + 1916) = 2000;
          *(_DWORD *)(a1 + 1912) = 100;
          if ( v6 )
          {
            StorPortExtendedFunction(32LL, a1, a1 + 1920);
            StorPortExtendedFunction(51LL, a1, 0LL);
            StorPortExtendedFunction(52LL, a1, 0LL);
          }
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v5 + 40) )
          {
            v24 = 0;
            MEMORY[0] = 1;
            MEMORY[4] = 40;
            MEMORY[0x14] = 0;
            MEMORY[0x10] = 3;
            MEMORY[0x18] = v5;
            MEMORY[0x1C] = 40;
            if ( v5 )
            {
              v25 = 0LL;
              do
              {
                v26 = (_DWORD *)(v25 + MEMORY[0x1C]);
                *v26 = 1;
                v26[1] = 24;
                v27 = NVMeGetPowerState(a1, v24);
                MaxPower = NVMePowerStateGetMaxPower(v27);
                *(_QWORD *)(v29 + 16) = v30;
                v24 = v31 + 1;
                v25 += 24LL;
                *(_QWORD *)(v29 + 8) = MaxPower / 0x3E8;
              }
              while ( v24 < v5 );
            }
            if ( (unsigned int)StorPortExtendedFunction(65LL, a1, 0LL) )
            {
              StorPortExtendedFunction(1LL, a1, 0LL);
            }
            else
            {
              *(_DWORD *)(a1 + 1880) |= 2u;
              *(_QWORD *)(a1 + 1872) = 0LL;
              *(_BYTE *)(a1 + 1886) = v5;
              *(_BYTE *)(a1 + 1887) = 0;
            }
            NVMeGetAutoPowerStateTransition(a1);
            if ( (*(_DWORD *)(a1 + 1880) & 0x40) == 0 )
              return 1;
            goto LABEL_47;
          }
        }
      }
    }
    return 0;
  }
  return 1;
}
