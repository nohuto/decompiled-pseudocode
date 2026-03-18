/*
 * XREFs of ControllerReset @ 0x1C0009728
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000E1A4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E580 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C700 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007A5C (FillControllerRuntimeLog.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C0025A5C (CheckDpcWatchdogTimerExpireSoon.c)
 */

__int64 __fastcall ControllerReset(__int64 a1, char a2)
{
  char v3; // bp
  unsigned int v4; // r15d
  char v5; // r12
  bool v6; // r14
  int v7; // edi
  int v8; // ebx
  unsigned int v9; // r13d
  int v10; // eax
  const wchar_t *v11; // rcx
  int v12; // eax
  signed __int32 v13; // eax
  unsigned int v15; // edi
  int v16; // ebx
  signed __int32 v17[10]; // [rsp+0h] [rbp-108h] BYREF
  const wchar_t *v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D8h]
  _DWORD *v20; // [rsp+38h] [rbp-D0h]
  int v21; // [rsp+40h] [rbp-C8h]
  __int64 *v22; // [rsp+48h] [rbp-C0h]
  int *v23; // [rsp+50h] [rbp-B8h]
  char v24; // [rsp+60h] [rbp-A8h]
  int v25; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v27[24]; // [rsp+70h] [rbp-98h] BYREF

  v24 = a2;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 212) / 0xAu;
  memset(v27, 0, 0x58uLL);
  v26 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
  if ( (v8 & 1) == 0 && (v7 & 1) != 0 )
  {
    v9 = 0;
    if ( v4 )
    {
      while ( (v8 & 1) == 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) == -1LL )
        {
          v3 = 1;
          goto LABEL_12;
        }
        if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
        {
          v5 = 1;
          goto LABEL_7;
        }
        StorPortExtendedFunction(81LL, a1, 10000LL);
        ++v9;
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
        if ( v9 >= v4 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( (v8 & 1) == 0 && v9 == v4 )
      {
        v6 = 1;
        goto LABEL_26;
      }
    }
    if ( v5 )
      goto LABEL_12;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) = v7 & 0xFFFFFFFE;
  _InterlockedOr(v17, 0);
  v15 = 0;
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
  if ( v4 )
  {
    while ( (v16 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) == -1LL )
      {
        v3 = 1;
        break;
      }
      if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
      {
        v5 = 1;
        goto LABEL_24;
      }
      StorPortExtendedFunction(81LL, a1, 10000LL);
      ++v15;
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
      if ( v15 >= v4 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    if ( (v16 & 1) != 0 )
      v6 = v15 == v4;
  }
LABEL_26:
  if ( !v5 && !v6 && !v3 )
  {
    ++*(_DWORD *)(a1 + 4416);
    return 0LL;
  }
LABEL_12:
  ++*(_DWORD *)(a1 + 4420);
  if ( v24 )
  {
    FillControllerRuntimeLog(a1, v27);
    v10 = *(_DWORD *)(a1 + 32);
    v23 = &v25;
    v11 = L"Controller Reset failed due to surprise remove";
    LODWORD(v26) = v10;
    v12 = *(_DWORD *)(a1 + 36);
    v22 = &v26;
    v21 = 8;
    v20 = v27;
    HIDWORD(v26) = v12;
    if ( !v3 )
      v11 = L"Controller Reset failed";
    v19 = 88;
    v13 = *(unsigned __int16 *)(a1 + 36);
    v18 = v11;
    v25 = -1056964606;
    v17[8] = v13;
    StorPortNotification(4109LL, a1, 0LL);
  }
  if ( !v5 )
    return v3 != 0 ? -1056964599 : -1056964607;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4276), 1u);
  return 3238002700LL;
}
