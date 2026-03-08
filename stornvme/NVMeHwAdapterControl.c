/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0003050
 * Callers:
 *     <none>
 * Callees:
 *     NVMePowerActive @ 0x1C00030C0 (NVMePowerActive.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     CalculateTimeDurationIn100ns @ 0x1C0007370 (CalculateTimeDurationIn100ns.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000CC54 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CD5C (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerPowerDown @ 0x1C000DF70 (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C000E0F4 (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C000E18C (NVMeControllerRemove.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeControllerStop @ 0x1C000EBA8 (NVMeControllerStop.c)
 *     NVMeGetControllerSerialNumber @ 0x1C000F198 (NVMeGetControllerSerialNumber.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x1C000F870 (NVMeInitializeProcessorIoQueueMapping.c)
 *     NVMeMaxOperationalPower @ 0x1C000FB54 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C0010324 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C00103B0 (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C0010430 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C0010A10 (NVMeSystemPowerHint.c)
 *     NVMeSendControllerInternalData @ 0x1C0027B90 (NVMeSendControllerInternalData.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, int *a3)
{
  unsigned int v5; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // r15
  int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  _DWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF

  v5 = 0;
  if ( a2 > 15 )
  {
    v18 = (unsigned int)(a2 - 16);
    if ( !(_DWORD)v18 )
    {
      LODWORD(v18) = 17;
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFF7DF6 | 0x8008;
      NVMeControllerCompleteAllIORequests(a1, v18);
      *(_DWORD *)(a1 + 32) &= ~0x10u;
      return v5;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 2;
      if ( !v20 )
      {
        v31 = *(_QWORD *)(a1 + 1840);
        v5 = 1;
        if ( !a3 || (unsigned int)a3[1] < 0x98 )
          return v5;
        memset(a3, 0, 0x98uLL);
        *a3 = 1;
        a3[1] = 152;
        *((_OWORD *)a3 + 1) = *(_OWORD *)(v31 + 4);
        a3[8] = *(_DWORD *)(v31 + 20);
        return 0;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        v5 = 1;
        if ( !a3 )
          return v5;
        v30 = *a3;
        if ( *a3 == 1 )
        {
          *(_BYTE *)(a1 + 22) = *((_BYTE *)a3 + 4);
        }
        else if ( v30 == 2 )
        {
          *(_BYTE *)(a1 + 23) = *((_BYTE *)a3 + 4);
        }
        else if ( !v30 )
        {
          *(_BYTE *)(a1 + 24) = *((_BYTE *)a3 + 4);
        }
        return 0;
      }
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
        {
          v5 = 1;
          if ( a3 && *a3 == 16 && (unsigned int)a3[1] >= 0x10 )
            return (unsigned __int8)NVMeControllerReset(a1) == 0;
          return v5;
        }
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 == 1 && (unsigned int)a3[1] >= 0xA0 )
            {
              v26 = (_DWORD *)*((_QWORD *)a3 + 1);
              if ( *v26 == 1 )
              {
                a3[8] = v26[1];
                if ( (unsigned int)a3[4] >= v26[1] )
                  memmove(*((void **)a3 + 3), v26 + 2, (unsigned int)v26[1]);
                else
                  return 3;
                return v5;
              }
            }
            return 1;
          }
          v5 = 3;
          a3[1] = 160;
          if ( (unsigned int)a3[2] < 0xA0 )
            return v5;
          v27 = *((_QWORD *)a3 + 2);
          *(_DWORD *)v27 = 1;
          *(_DWORD *)(v27 + 4) = 152;
          v28 = *(_QWORD *)(*((_QWORD *)a3 + 3) + 64LL);
          *(_OWORD *)(v27 + 8) = *(_OWORD *)v28;
          *(_OWORD *)(v27 + 24) = *(_OWORD *)(v28 + 16);
          *(_OWORD *)(v27 + 40) = *(_OWORD *)(v28 + 32);
          *(_OWORD *)(v27 + 56) = *(_OWORD *)(v28 + 48);
          *(_OWORD *)(v27 + 72) = *(_OWORD *)(v28 + 64);
          *(_OWORD *)(v27 + 88) = *(_OWORD *)(v28 + 80);
          *(_OWORD *)(v27 + 104) = *(_OWORD *)(v28 + 96);
          *(_OWORD *)(v27 + 120) = *(_OWORD *)(v28 + 112);
          *(_OWORD *)(v27 + 136) = *(_OWORD *)(v28 + 128);
          *(_QWORD *)(v27 + 152) = *(_QWORD *)(v28 + 144);
          return 0;
        }
        return (unsigned int)NVMeInitializeProcessorIoQueueMapping();
      }
      else
      {
        v5 = 1;
        if ( !a3 || (unsigned int)a3[1] < 0x20 || a3[4] != 1 )
          return v5;
        return (unsigned int)NVMeSendControllerInternalData(a1, *((_QWORD *)a3 + 3));
      }
    }
    else
    {
      return (unsigned int)NVMeGetControllerSerialNumber(a1, a3);
    }
  }
  if ( a2 == 15 )
  {
    NVMePowerSetPerfState(a1, a3);
    return v5;
  }
  if ( a2 > 8 )
  {
    v15 = a2 - 9;
    if ( !v15 )
    {
      NVMePowerSetFState(a1, a3);
      return v5;
    }
    v16 = v15 - 3;
    if ( !v16 )
    {
      NVMeSystemPowerHint(a1, a3);
      return v5;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        NVMeMaxOperationalPower(a1, a3);
        return v5;
      }
    }
    else if ( *a3 )
    {
      NVMeControllerFilterResourceRequirements(a1, a3);
      return v5;
    }
    return 1;
  }
  if ( a2 == 8 )
  {
    NVMePowerActive(a1, a3);
    return v5;
  }
  if ( !a2 )
  {
    v14 = *a3;
    if ( *a3 )
      *((_BYTE *)a3 + 4) = 1;
    if ( v14 > 1 )
      *((_BYTE *)a3 + 5) = 1;
    if ( v14 > 2 )
      *((_BYTE *)a3 + 6) = 1;
    if ( v14 > 6 )
      *((_BYTE *)a3 + 10) = 1;
    if ( v14 > 8 )
      *((_BYTE *)a3 + 12) = 1;
    if ( v14 > 9 )
      *((_BYTE *)a3 + 13) = 1;
    if ( v14 > 0xC )
      *((_BYTE *)a3 + 16) = 1;
    if ( v14 > 0xD )
      *((_BYTE *)a3 + 17) = 1;
    if ( v14 > 0xE )
      *((_BYTE *)a3 + 18) = 1;
    if ( v14 > 0xF )
      *((_BYTE *)a3 + 19) = 1;
    if ( v14 <= 0x10 )
    {
      if ( v14 <= 5 )
        return v5;
    }
    else
    {
      *((_BYTE *)a3 + 20) = 1;
    }
    *((_BYTE *)a3 + 9) = 1;
    if ( v14 > 0x11 )
      *((_BYTE *)a3 + 21) = 1;
    if ( v14 > 0x13 )
      *((_BYTE *)a3 + 23) = 1;
    if ( v14 > 0x14 )
      *((_BYTE *)a3 + 24) = 1;
    if ( v14 > 0x15 )
      *((_BYTE *)a3 + 25) = 1;
    if ( v14 > 0x16 )
      *((_BYTE *)a3 + 26) = 1;
    if ( v14 > 0x17 )
      *((_BYTE *)a3 + 27) = 1;
    if ( v14 > 0x18 )
      *((_BYTE *)a3 + 28) = 1;
    if ( v14 > 0x19 )
      *((_BYTE *)a3 + 29) = 1;
    return v5;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v13 = *(_DWORD *)(a1 + 32);
    if ( (v13 & 8) != 0 )
    {
      NVMeControllerRemove();
    }
    else if ( (v13 & 2) != 0 )
    {
      NVMeControllerStop();
    }
    return v5;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return v5;
  v9 = v8 - 3;
  if ( !v9 )
  {
    NVMePowerSettingChangeNotification(a1, a3);
    return v5;
  }
  if ( v9 != 1 )
    return 1;
  v10 = a3[5];
  if ( v10 == 1 )
  {
    v32 = 0LL;
    v33 = 0LL;
    StorPortExtendedFunction(47LL, a1, &v33, &v32);
    v11 = v32;
    if ( (unsigned int)NVMeControllerPowerUp(a1) == -1056964596 )
      v5 = 2;
    StorPortExtendedFunction(47LL, a1, &v33, &v32);
    if ( *(_BYTE *)(a1 + 24) )
    {
      CalculateTimeDurationIn100ns(v32 - v11, v33);
LABEL_22:
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
    }
  }
  else if ( v10 == 4 && ((*(_DWORD *)(a1 + 32) & 0x40) == 0 || a3[4] != 3) )
  {
    v32 = 0LL;
    v33 = 0LL;
    StorPortExtendedFunction(47LL, a1, &v33, &v32);
    v12 = v32;
    NVMeControllerPowerDown(a1);
    StorPortExtendedFunction(47LL, a1, &v33, &v32);
    if ( *(_BYTE *)(a1 + 24) )
    {
      CalculateTimeDurationIn100ns(v32 - v12, v33);
      goto LABEL_22;
    }
  }
  return v5;
}
