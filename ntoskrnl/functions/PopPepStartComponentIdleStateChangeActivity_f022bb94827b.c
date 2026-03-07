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
  if ( v8 )
  {
    if ( v8 != 1 )
      goto LABEL_6;
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 176);
    *(_DWORD *)(a2 + 180) = v9;
    v10 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(a2 + 176) = v10;
    if ( !*(_BYTE *)(a1 + 124) )
    {
      PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v9, v10, 0);
LABEL_5:
      *(_DWORD *)(v7 + 12) = 2;
      goto LABEL_6;
    }
    *(_DWORD *)(v7 + 12) = 1;
  }
  PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 180), *(_DWORD *)(a2 + 176), 0);
  v12 = *(unsigned int *)(a2 + 176);
  PopPepUpdateIdleStateRefCount(
    *(unsigned int *)(*(_QWORD *)(a2 + 200) + 24LL * *(unsigned int *)(a2 + 180) + 16),
    *(unsigned int *)(*(_QWORD *)(a2 + 200) + 24 * v12 + 16),
    1LL,
    a2 + 192);
  PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 8), (unsigned int)v12, 0LL);
  if ( (unsigned __int8)PopPluginNotifyIdleState(
                          *(_QWORD *)(a1 + 32),
                          *(unsigned int *)(a2 + 8),
                          *(unsigned int *)(a2 + 176),
                          0LL) == 1 )
    goto LABEL_5;
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
