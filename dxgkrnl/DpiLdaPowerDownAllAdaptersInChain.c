/*
 * XREFs of DpiLdaPowerDownAllAdaptersInChain @ 0x1C03A3D4C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C0180CF0 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01E1E80 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerDownAllAdaptersInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // edi
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r8d
  char v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r14
  bool v16; // [rsp+70h] [rbp+8h]
  char IsPowerRuntimeDStateTransition; // [rsp+78h] [rbp+10h]
  int v18; // [rsp+80h] [rbp+18h]

  v2 = *(_DWORD **)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v16 = 0;
  v5 = v2[8];
  v6 = (int)v2[6];
  v7 = v2[2];
  v18 = v5;
  if ( *(_BYTE *)(v4 + 508) == 1 )
  {
    v8 = v4;
    v16 = *(_DWORD *)(v4 + 236) == 2;
  }
  else
  {
    v9 = *(_QWORD *)(v4 + 2728);
    if ( !v9 )
    {
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v4 + 24),
             (unsigned int)v6,
             (unsigned __int16)v7 >> 12,
             HIWORD(v7) & 0xF,
             v5);
      if ( v3 < 0 )
        WdLogSingleEntry1(3LL, v6);
      return (unsigned int)v3;
    }
    v8 = *(_QWORD *)(v9 + 64);
  }
  v10 = 0LL;
  IsPowerRuntimeDStateTransition = DpiIsPowerRuntimeDStateTransition(v4);
  v12 = IsPowerRuntimeDStateTransition;
  if ( *(_DWORD *)(v8 + 2736) )
  {
    while ( 1 )
    {
      v13 = (unsigned int)v6;
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 2728) + 8 * v10) + 64LL);
      if ( !v12 )
        v13 = *(unsigned int *)(v14 + 4LL * ((unsigned __int16)v7 >> 12) + 1312);
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v14 + 24),
             v13,
             (unsigned __int16)v7 >> 12,
             HIWORD(v7) & 0xF,
             v11);
      if ( v3 < 0 || *(_DWORD *)(v14 + 236) != 2 && v16 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(v8 + 2736) )
        return (unsigned int)v3;
      v11 = v18;
      v12 = IsPowerRuntimeDStateTransition;
    }
    v3 = -1071774666;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
  }
  return (unsigned int)v3;
}
