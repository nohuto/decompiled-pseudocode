/*
 * XREFs of ControllerReset @ 0x1C0007A88
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C0018D60 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0021E00 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C000A3FC (CheckDpcWatchdogTimerExpireSoon.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0017A04 (FillControllerRuntimeLog.c)
 */

__int64 __fastcall ControllerReset(__int64 a1, char a2)
{
  char v3; // bp
  unsigned int v4; // r15d
  int v5; // edi
  int v6; // ebx
  char v7; // r12
  bool v8; // r14
  int v9; // ebx
  int v10; // edi
  __int64 v11; // r9
  int v13; // r13d
  __int64 v14; // r9
  int v15; // eax
  const wchar_t *v16; // rcx
  int v17; // eax
  signed __int32 v18; // eax
  signed __int32 v19[10]; // [rsp+0h] [rbp-108h] BYREF
  const wchar_t *v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D8h]
  _BYTE *v22; // [rsp+38h] [rbp-D0h]
  int v23; // [rsp+40h] [rbp-C8h]
  __int64 *v24; // [rsp+48h] [rbp-C0h]
  int *v25; // [rsp+50h] [rbp-B8h]
  char v26; // [rsp+60h] [rbp-A8h]
  int v27; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v29[96]; // [rsp+70h] [rbp-98h] BYREF

  v26 = a2;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 204) / 0xAu;
  memset(v29, 0, 0x58uLL);
  v28 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
  v7 = 0;
  v8 = 0;
  if ( (v6 & 1) == 0 && (v5 & 1) != 0 )
  {
    v13 = 0;
    if ( v4 )
    {
      while ( (v6 & 1) == 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) == -1LL )
        {
          v3 = 1;
          goto LABEL_23;
        }
        if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
        {
          v7 = 1;
          goto LABEL_18;
        }
        StorPortExtendedFunction(81LL, a1, 10000LL, v14);
        v6 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
        if ( ++v13 >= v4 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      if ( (v6 & 1) == 0 && v13 == v4 )
      {
        v8 = 1;
        goto LABEL_8;
      }
    }
    if ( v7 )
      goto LABEL_23;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v5 & 0xFFFFFFFE;
  _InterlockedOr(v19, 0);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
  v10 = 0;
  if ( v4 )
  {
    while ( (v9 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) == -1LL )
      {
        v3 = 1;
        break;
      }
      if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
      {
        v7 = 1;
        goto LABEL_32;
      }
      StorPortExtendedFunction(81LL, a1, 10000LL, v11);
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
      if ( ++v10 >= v4 )
        goto LABEL_32;
    }
  }
  else
  {
LABEL_32:
    if ( (v9 & 1) != 0 )
      v8 = v10 == v4;
  }
LABEL_8:
  if ( !v7 && !v8 && !v3 )
    return 0LL;
LABEL_23:
  if ( v26 )
  {
    FillControllerRuntimeLog(a1, v29);
    v15 = *(_DWORD *)(a1 + 32);
    v25 = &v27;
    v16 = L"Controller Reset failed due to surprise remove";
    LODWORD(v28) = v15;
    v17 = *(_DWORD *)(a1 + 36);
    v24 = &v28;
    v23 = 8;
    v22 = v29;
    HIDWORD(v28) = v17;
    if ( !v3 )
      v16 = L"Controller Reset failed";
    v21 = 88;
    v18 = *(unsigned __int16 *)(a1 + 36);
    v20 = v16;
    v27 = -1056964606;
    v19[8] = v18;
    StorPortNotification(4109LL, a1, 0LL, 0LL);
  }
  if ( !v7 )
    return v3 != 0 ? -1056964599 : -1056964607;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4076), 1u);
  return 3238002700LL;
}
