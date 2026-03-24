/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0006080
 * Callers:
 *     <none>
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C00010AC (CalculateTimeDurationIn100ns.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000D7A4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000D8AC (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerPowerDown @ 0x1C000E1DC (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C000E398 (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C000E434 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E85C (NVMeControllerStop.c)
 *     NVMeGetControllerSerialNumber @ 0x1C000EB60 (NVMeGetControllerSerialNumber.c)
 *     NVMeMaxOperationalPower @ 0x1C000FCC0 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C00105A8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C00106D0 (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C0010838 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C0010DB0 (NVMeSystemPowerHint.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  const char *v10; // r8
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  unsigned __int64 v21; // [rsp+70h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  switch ( (int)a2 )
  {
    case 0:
      v6 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 )
        *(_BYTE *)(a3 + 4) = 1;
      if ( v6 > 1 )
      {
        *(_BYTE *)(a3 + 5) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 2 )
      {
        *(_BYTE *)(a3 + 6) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 6 )
      {
        *(_BYTE *)(a3 + 10) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 8 )
      {
        *(_BYTE *)(a3 + 12) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 9 )
      {
        *(_BYTE *)(a3 + 13) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xC )
      {
        *(_BYTE *)(a3 + 16) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xD )
      {
        *(_BYTE *)(a3 + 17) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xE )
      {
        *(_BYTE *)(a3 + 18) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0xF )
      {
        *(_BYTE *)(a3 + 19) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0x10 )
      {
        *(_BYTE *)(a3 + 20) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 5 )
      {
        *(_BYTE *)(a3 + 9) = 1;
        v6 = *(_DWORD *)a3;
      }
      if ( v6 > 0x11 )
        *(_BYTE *)(a3 + 21) = 1;
      return v3;
    case 1:
      v19 = *(_DWORD *)(a1 + 24);
      if ( (v19 & 8) != 0 )
      {
        NVMeControllerRemove(a1);
      }
      else if ( (v19 & 2) != 0 )
      {
        NVMeControllerStop(a1);
      }
      return v3;
    case 2:
      return v3;
    case 5:
      NVMePowerSettingChangeNotification(a1);
      return v3;
    case 6:
      v7 = *(_DWORD *)(a3 + 20);
      if ( v7 == 1 )
      {
        v23 = 0LL;
        v21 = 0LL;
        StorPortExtendedFunction(47LL, a1, &v21, &v23);
        v8 = v23;
        NVMeControllerPowerUp(a1);
        StorPortExtendedFunction(47LL, a1, &v21, &v23);
        CalculateTimeDurationIn100ns(v23 - v8, v21);
LABEL_34:
        StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        return v3;
      }
      if ( v7 == 4 && ((*(_DWORD *)(a1 + 24) & 0x40) == 0 || *(_DWORD *)(a3 + 16) != 3) )
      {
        v24 = 0LL;
        v22 = 0LL;
        StorPortExtendedFunction(47LL, a1, &v22, &v24);
        v9 = v24;
        NVMeControllerPowerDown(a1);
        StorPortExtendedFunction(47LL, a1, &v22, &v24);
        CalculateTimeDurationIn100ns(v24 - v9, v22);
        goto LABEL_34;
      }
      return v3;
    case 8:
      v10 = "ACTIVE";
      if ( !*(_BYTE *)(a3 + 20) )
        v10 = "IDLE";
      StorPortDebugPrint(3LL, "StorNVMe - POWER: %s\n", v10);
      v11 = *(_DWORD *)(a1 + 1664) ^ (*(_DWORD *)(a1 + 1664) ^ (4 * *(unsigned __int8 *)(a3 + 20))) & 4;
      *(_DWORD *)(a1 + 1664) = v11;
      if ( *(_BYTE *)(a3 + 20) )
      {
        if ( (v11 & 0x20) != 0 )
        {
          v12 = *(_QWORD *)(a1 + 1704);
          *(_DWORD *)(a1 + 1664) = v11 & 0xFFFFFFDF;
          StorPortExtendedFunction(33LL, a1, v12, NVMeFStateIdleTimerCallback);
        }
        StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1712), 0) )
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State transition already in progress!\n");
        }
        else if ( (*(_DWORD *)(a1 + 1664) & 2) == 0
               || *(_BYTE *)(a1 + 1671) == *(_BYTE *)(a1 + 1672)
               || (StorPortDebugPrint(
                     3LL,
                     "StorNVMe - POWER: Requesting transition to P%u\n",
                     *(unsigned __int8 *)(a1 + 1672)),
                   (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL)) )
        {
          *(_DWORD *)(a1 + 1712) &= ~1u;
        }
      }
      else
      {
        v13 = *(unsigned __int8 *)(a1 + 1673);
        if ( (unsigned __int8)v13 <= 1u )
          return v3;
        v14 = *(_DWORD *)(a1 + 1676);
        v15 = *(_DWORD *)(a1 + 1680);
        if ( v14 == 1 )
        {
          v16 = *(_DWORD *)(a1 + 104);
          if ( v16 == -1 )
            v16 = *(_DWORD *)(a1 + 1684);
        }
        else
        {
          v16 = *(_DWORD *)(a1 + 100);
          if ( v16 == -1 )
          {
            v17 = *(unsigned __int8 *)(a1 + 1674);
            if ( !(_BYTE)v17 || v17 >= v13 - 1 || (v16 = *(_DWORD *)(a1 + 1696), v15 > v16) )
              v16 = *(_DWORD *)(a1 + 1688);
          }
        }
        *(_DWORD *)(a1 + 1680) = v16;
        if ( v15 != v16 )
        {
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n",
            v15,
            v16);
          v14 = *(_DWORD *)(a1 + 1676);
        }
        if ( v14 == 1 )
        {
          v18 = *(_DWORD *)(a1 + 88);
        }
        else
        {
          v18 = *(_DWORD *)(a1 + 84);
          if ( v18 == -1 )
          {
            if ( *(_BYTE *)(a1 + 1674) )
            {
              if ( *(_BYTE *)(a1 + 1673) <= 2u )
                return v3;
              v18 = *(_DWORD *)(a1 + 1700);
            }
            else
            {
              v18 = *(_DWORD *)(a1 + 1692);
            }
          }
        }
        if ( v18 )
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v18);
          *(_DWORD *)(a1 + 1664) |= 0x20u;
          StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1704), NVMeFStateIdleTimerCallback);
        }
      }
      return v3;
    case 9:
      NVMePowerSetFState(a1, a3);
      return v3;
    case 12:
      NVMeSystemPowerHint(a1, a3);
      return v3;
    case 13:
      if ( !*(_DWORD *)a3 )
        return 1;
      NVMeControllerFilterResouceRequirements(a1, a3);
      return v3;
    case 14:
      NVMeMaxOperationalPower(a1, a3);
      return v3;
    case 15:
      NVMePowerSetPerfState(a1, a3);
      return v3;
    case 16:
      LOBYTE(a2) = 17;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFEFF6 | 0x1008;
      NVMeControllerCompleteAllIORequests(a1, a2);
      *(_DWORD *)(a1 + 24) &= ~0x10u;
      return v3;
    case 17:
      return (unsigned int)NVMeGetControllerSerialNumber(a1, a3);
    default:
      return 1;
  }
}
