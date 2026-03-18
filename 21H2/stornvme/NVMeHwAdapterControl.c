/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0005860
 * Callers:
 *     <none>
 * Callees:
 *     NVMeMaxOperationalPower @ 0x1C0009354 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C000A004 (NVMePowerSetFState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000B18C (NVMePowerSettingChangeNotification.c)
 *     NVMeControllerFilterResourceRequirements @ 0x1C000D2BC (NVMeControllerFilterResourceRequirements.c)
 *     NVMeGetControllerSerialNumber @ 0x1C000E340 (NVMeGetControllerSerialNumber.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     CalculateTimeDurationIn100ns @ 0x1C00179B4 (CalculateTimeDurationIn100ns.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0018AD4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerPowerDown @ 0x1C0018BDC (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C0018D60 (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 *     NVMePowerSetPerfState @ 0x1C0019C58 (NVMePowerSetPerfState.c)
 *     NVMeSystemPowerHint @ 0x1C0019F70 (NVMeSystemPowerHint.c)
 *     NVMeSendControllerInternalData @ 0x1C0025758 (NVMeSendControllerInternalData.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // r9d
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 != 8 )
  {
    v15 = 0x1C0000000uLL;
    switch ( a2 )
    {
      case 0:
        v16 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 )
          *(_BYTE *)(a3 + 4) = 1;
        if ( v16 > 1 )
          *(_BYTE *)(a3 + 5) = 1;
        if ( v16 > 2 )
          *(_BYTE *)(a3 + 6) = 1;
        if ( v16 > 6 )
          *(_BYTE *)(a3 + 10) = 1;
        if ( v16 > 8 )
          *(_BYTE *)(a3 + 12) = 1;
        if ( v16 > 9 )
          *(_BYTE *)(a3 + 13) = 1;
        if ( v16 > 0xC )
          *(_BYTE *)(a3 + 16) = 1;
        if ( v16 > 0xD )
          *(_BYTE *)(a3 + 17) = 1;
        if ( v16 > 0xE )
          *(_BYTE *)(a3 + 18) = 1;
        if ( v16 > 0xF )
          *(_BYTE *)(a3 + 19) = 1;
        if ( v16 <= 0x10 )
        {
          if ( v16 <= 5 )
          {
LABEL_46:
            if ( v16 > 0x11 )
            {
              *(_BYTE *)(a3 + 21) = 1;
              if ( v16 > 0x13 )
              {
                *(_BYTE *)(a3 + 23) = 1;
                if ( v16 > 0x14 )
                  *(_BYTE *)(a3 + 24) = 1;
              }
            }
            if ( v16 > 0x15 )
              *(_BYTE *)(a3 + 25) = 1;
            return v3;
          }
        }
        else
        {
          *(_BYTE *)(a3 + 20) = 1;
        }
        *(_BYTE *)(a3 + 9) = 1;
        goto LABEL_46;
      case 1:
        v20 = *(_DWORD *)(a1 + 32);
        if ( (v20 & 8) != 0 )
        {
          NVMeControllerRemove(a1);
        }
        else if ( (v20 & 2) != 0 )
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
        v18 = *(_DWORD *)(a3 + 20);
        if ( v18 == 1 )
        {
          v23 = 0LL;
          v24 = 0LL;
          StorPortExtendedFunction(47LL, a1, &v24, &v23);
          v19 = v23;
          if ( (unsigned int)NVMeControllerPowerUp(a1) == -1056964596 )
            v3 = 2;
          StorPortExtendedFunction(47LL, a1, &v24, &v23);
          if ( !*(_BYTE *)(a1 + 24) )
            return v3;
        }
        else
        {
          if ( v18 != 4 || (*(_DWORD *)(a1 + 32) & 0x40) != 0 && *(_DWORD *)(a3 + 16) == 3 )
            return v3;
          v23 = 0LL;
          v24 = 0LL;
          StorPortExtendedFunction(47LL, a1, &v24, &v23);
          v19 = v23;
          NVMeControllerPowerDown(a1);
          StorPortExtendedFunction(47LL, a1, &v24, &v23);
          if ( !*(_BYTE *)(a1 + 24) )
            return v3;
        }
        CalculateTimeDurationIn100ns(v23 - v19, v24);
        StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
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
        NVMeControllerFilterResourceRequirements(a1, a3);
        return v3;
      case 14:
        NVMeMaxOperationalPower(a1, a3);
        return v3;
      case 15:
        NVMePowerSetPerfState(a1, a3);
        return v3;
      case 16:
        LOBYTE(v15) = 17;
        *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFF7DF6 | 0x8008;
        NVMeControllerCompleteAllIORequests(a1, v15);
        *(_DWORD *)(a1 + 32) &= ~0x10u;
        return v3;
      case 17:
        return (unsigned int)NVMeGetControllerSerialNumber(a1, a3);
      case 19:
        v21 = *(_QWORD *)(a1 + 1640);
        v3 = 1;
        if ( a3 && *(_DWORD *)(a3 + 4) >= 0x98u )
        {
          memset((void *)a3, 0, 0x98uLL);
          *(_DWORD *)a3 = 1;
          v3 = 0;
          *(_DWORD *)(a3 + 4) = 152;
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(v21 + 4);
          *(_DWORD *)(a3 + 32) = *(_DWORD *)(v21 + 20);
        }
        return v3;
      case 20:
        v3 = 1;
        if ( a3 )
        {
          v17 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 == 1 )
          {
            v3 = 0;
            *(_BYTE *)(a1 + 22) = *(_BYTE *)(a3 + 4);
          }
          else
          {
            if ( v17 == 2 )
            {
              *(_BYTE *)(a1 + 23) = *(_BYTE *)(a3 + 4);
            }
            else if ( !v17 )
            {
              *(_BYTE *)(a1 + 24) = *(_BYTE *)(a3 + 4);
            }
            return 0;
          }
        }
        return v3;
      case 21:
        v3 = 1;
        if ( a3 && *(_DWORD *)(a3 + 4) >= 0x20u && *(_DWORD *)(a3 + 16) == 1 )
          return (unsigned int)NVMeSendControllerInternalData(a1, *(_QWORD *)(a3 + 24));
        return v3;
      default:
        return 1;
    }
  }
  v6 = *(_DWORD *)(a1 + 1680) ^ (*(_DWORD *)(a1 + 1680) ^ (4 * *(unsigned __int8 *)(a3 + 20))) & 4;
  *(_DWORD *)(a1 + 1680) = v6;
  if ( *(_BYTE *)(a3 + 20) )
  {
    if ( (v6 & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 1720);
      *(_DWORD *)(a1 + 1680) = v6 & 0xFFFFFFDF;
      StorPortExtendedFunction(33LL, a1, v12, NVMeFStateIdleTimerCallback);
    }
    StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1728), 0)
      && ((*(_DWORD *)(a1 + 1680) & 2) == 0
       || *(_BYTE *)(a1 + 1687) == *(_BYTE *)(a1 + 1688)
       || (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL)) )
    {
      *(_DWORD *)(a1 + 1728) &= ~1u;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(a1 + 1689);
    if ( (unsigned __int8)v7 > 1u )
    {
      if ( *(_DWORD *)(a1 + 1692) == 1 )
      {
        v22 = *(_DWORD *)(a1 + 112);
        if ( v22 == -1 )
          v22 = *(_DWORD *)(a1 + 1700);
        *(_DWORD *)(a1 + 1696) = v22;
        v10 = *(_DWORD *)(a1 + 96);
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 108);
        if ( v8 == -1 )
        {
          v9 = *(unsigned __int8 *)(a1 + 1690);
          if ( !(_BYTE)v9 || v9 >= v7 - 1 || (v8 = *(_DWORD *)(a1 + 1712), *(_DWORD *)(a1 + 1696) > v8) )
            v8 = *(_DWORD *)(a1 + 1704);
        }
        *(_DWORD *)(a1 + 1696) = v8;
        v10 = *(_DWORD *)(a1 + 92);
        if ( v10 == -1 )
        {
          if ( *(_BYTE *)(a1 + 1690) )
          {
            if ( (unsigned __int8)v7 <= 2u )
              return v3;
            v10 = *(_DWORD *)(a1 + 1716);
          }
          else
          {
            v10 = *(_DWORD *)(a1 + 1708);
          }
        }
      }
      if ( v10 )
      {
        v11 = *(_QWORD *)(a1 + 1720);
        *(_DWORD *)(a1 + 1680) = v6 | 0x20;
        StorPortExtendedFunction(33LL, a1, v11, NVMeFStateIdleTimerCallback);
      }
    }
  }
  return v3;
}
