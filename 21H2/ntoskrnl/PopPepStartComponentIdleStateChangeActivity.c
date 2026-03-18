/*
 * XREFs of PopPepStartComponentIdleStateChangeActivity @ 0x14045E6A0
 * Callers:
 *     <none>
 * Callees:
 *     PopPepUpdateIdleStateRefCount @ 0x1403B92D0 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x14045DDF6 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPluginNotifyIdleState @ 0x14045DFDC (PopPluginNotifyIdleState.c)
 *     PopPlNotifyDeviceFState @ 0x14045EA32 (PopPlNotifyDeviceFState.c)
 */

char __fastcall PopPepStartComponentIdleStateChangeActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx

  v3 = 0;
  if ( !a2 )
    return v3;
  v7 = *(_QWORD *)(a2 + 64);
  v8 = *(_DWORD *)(v7 + 12);
  if ( v8 )
  {
    if ( v8 != 1 )
      goto LABEL_9;
LABEL_7:
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 180), *(_DWORD *)(a2 + 176), 0);
    v11 = *(unsigned int *)(a2 + 176);
    PopPepUpdateIdleStateRefCount(
      *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24LL * *(unsigned int *)(a2 + 180) + 16),
      *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24 * v11 + 16),
      1,
      (volatile signed __int32 *)(a2 + 192));
    PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v11, 0);
    if ( PopPluginNotifyIdleState(*(__int64 **)(a1 + 32), *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 176), 0) != 1 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(a2 + 180) = v9;
  v10 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(a2 + 176) = v10;
  if ( *(_BYTE *)(a1 + 124) )
  {
    *(_DWORD *)(v7 + 12) = 1;
    goto LABEL_7;
  }
  PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v9, v10, 0);
LABEL_8:
  *(_DWORD *)(v7 + 12) = 2;
LABEL_9:
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
