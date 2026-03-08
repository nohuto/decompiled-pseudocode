/*
 * XREFs of ControllerReset @ 0x1C0009668
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000E0F4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C690 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007908 (FillControllerRuntimeLog.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C0025AB8 (CheckDpcWatchdogTimerExpireSoon.c)
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
  __int64 v10; // r9
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  signed __int32 v14; // eax
  unsigned int v16; // edi
  int v17; // ebx
  __int64 v18; // r9
  signed __int32 v19[10]; // [rsp+0h] [rbp-108h] BYREF
  const wchar_t *v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D8h]
  _DWORD *v22; // [rsp+38h] [rbp-D0h]
  int v23; // [rsp+40h] [rbp-C8h]
  __int64 *v24; // [rsp+48h] [rbp-C0h]
  int *v25; // [rsp+50h] [rbp-B8h]
  char v26; // [rsp+60h] [rbp-A8h]
  int v27; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v29[24]; // [rsp+70h] [rbp-98h] BYREF

  v26 = a2;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 212) / 0xAu;
  memset(v29, 0, 0x58uLL);
  v28 = 0LL;
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
        StorPortExtendedFunction(81LL, a1, 10000LL, v10);
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
  _InterlockedOr(v19, 0);
  v16 = 0;
  v17 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
  if ( v4 )
  {
    while ( (v17 & 1) != 0 )
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
      StorPortExtendedFunction(81LL, a1, 10000LL, v18);
      ++v16;
      v17 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
      if ( v16 >= v4 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    if ( (v17 & 1) != 0 )
      v6 = v16 == v4;
  }
LABEL_26:
  if ( !v5 && !v6 && !v3 )
  {
    ++*(_DWORD *)(a1 + 4416);
    return 0LL;
  }
LABEL_12:
  ++*(_DWORD *)(a1 + 4420);
  if ( v26 )
  {
    FillControllerRuntimeLog(a1, v29);
    v11 = *(_DWORD *)(a1 + 32);
    v25 = &v27;
    v12 = L"Controller Reset failed due to surprise remove";
    LODWORD(v28) = v11;
    v13 = *(_DWORD *)(a1 + 36);
    v24 = &v28;
    v23 = 8;
    v22 = v29;
    HIDWORD(v28) = v13;
    if ( !v3 )
      v12 = L"Controller Reset failed";
    v21 = 88;
    v14 = *(unsigned __int16 *)(a1 + 36);
    v20 = v12;
    v27 = -1056964606;
    v19[8] = v14;
    StorPortNotification(4109LL, a1, 0LL);
  }
  if ( !v5 )
    return v3 != 0 ? -1056964599 : -1056964607;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4276), 1u);
  return 3238002700LL;
}
