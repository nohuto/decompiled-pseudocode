/*
 * XREFs of DpiLdaPowerUpAdapterInChain @ 0x1C02D85E8
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0175FC0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0051CEC (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0175240 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerUpAdapterInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax

  v2 = *(_DWORD **)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = (int)v2[6];
  v6 = v2[2];
  v7 = v2[8];
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 3 )
  {
    v3 = DpiFdoSetAdapterPowerState(
           *(PDEVICE_OBJECT *)(v4 + 24),
           (POWER_STATE)v5,
           (unsigned __int16)v6 >> 12,
           HIWORD(v6) & 0xF,
           v2[8]);
    if ( v3 < 0 )
    {
      v9 = WdLogNewEntry5_WdWarning(a1, a2, v8);
      *(_QWORD *)(v9 + 24) = v5;
LABEL_6:
      WdLogEvent5_WdWarning(v9);
      return (unsigned int)v3;
    }
    v10 = *(_QWORD *)(v4 + 2728);
    if ( !v10 )
    {
      v9 = WdLogNewEntry5_WdWarning(a1, a2, v8);
      *(_QWORD *)(v9 + 24) = 0LL;
      goto LABEL_6;
    }
    v4 = *(_QWORD *)(v10 + 64);
  }
  if ( *(_BYTE *)(v4 + 496) == 1 )
  {
LABEL_11:
    v11 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdEvent(v11);
    return (unsigned int)v3;
  }
  v12 = *(_DWORD *)(v4 + 2736);
  a2 = 1LL;
  if ( v12 > 1 )
  {
    do
    {
      a1 = *(_QWORD *)(*(_QWORD *)(v4 + 2728) + 8LL * (unsigned int)a2);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 284LL) != 1 )
        goto LABEL_11;
      a2 = (unsigned int)(a2 + 1);
    }
    while ( (unsigned int)a2 < v12 );
  }
  v3 = DpiFdoSetAdapterPowerState(
         *(PDEVICE_OBJECT *)(v4 + 24),
         (POWER_STATE)v5,
         (unsigned __int16)v6 >> 12,
         HIWORD(v6) & 0xF,
         v7);
  if ( v3 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = v5;
    WdLogEvent5_WdWarning(v16);
  }
  if ( *(_BYTE *)(v4 + 484) )
    DpiSetDevicePowerTransitionStateAtPassiveLevel(v4, 0, 1);
  return (unsigned int)v3;
}
