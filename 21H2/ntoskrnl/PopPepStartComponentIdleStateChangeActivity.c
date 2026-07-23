/*
 * XREFs of PopPepStartComponentIdleStateChangeActivity @ 0x1403A4A00
 * Callers:
 *     <none>
 * Callees:
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403A0934 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A09B4 (PopPepUpdateIdleStateRefCount.c)
 *     PopPlNotifyDeviceFState @ 0x1403A4BC8 (PopPlNotifyDeviceFState.c)
 *     PopPluginNotifyIdleState @ 0x14056DC10 (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPepStartComponentIdleStateChangeActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // rbx

  v3 = 0;
  if ( !a2 )
    return v3;
  v7 = *(_QWORD *)(a2 + 64);
  v8 = *(_DWORD *)(v7 + 12);
  if ( !v8 )
  {
    v9 = *(_DWORD *)(a2 + 176);
    *(_DWORD *)(a2 + 180) = v9;
    v10 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(a2 + 176) = v10;
    if ( *(_BYTE *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 12) = 1;
LABEL_10:
      PopPlNotifyDeviceFState(
        *(_QWORD *)(a1 + 32),
        *(_DWORD *)(a2 + 8),
        *(_DWORD *)(a2 + 180),
        *(_DWORD *)(a2 + 176),
        0);
      v12 = *(unsigned int *)(a2 + 176);
      PopPepUpdateIdleStateRefCount(
        *(_DWORD *)(*(_QWORD *)(a2 + 192) + 24LL * *(unsigned int *)(a2 + 180) + 16),
        *(_DWORD *)(*(_QWORD *)(a2 + 192) + 24 * v12 + 16),
        1);
      PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v12, 0);
      if ( (unsigned __int8)PopPluginNotifyIdleState(
                              *(_QWORD *)(a1 + 32),
                              *(unsigned int *)(a2 + 8),
                              *(unsigned int *)(a2 + 176),
                              0LL) == 1 )
        *(_DWORD *)(v7 + 12) = 2;
      goto LABEL_6;
    }
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v9, v10, 0);
    v8 = 2;
    *(_DWORD *)(v7 + 12) = 2;
  }
  if ( v8 == 1 )
    goto LABEL_10;
LABEL_6:
  if ( *(_DWORD *)(v7 + 12) == 2 )
  {
    *(_DWORD *)a3 = 1;
    v3 = 1;
    *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a2 + 176);
    *(_DWORD *)(v7 + 12) = 3;
  }
  return v3;
}
