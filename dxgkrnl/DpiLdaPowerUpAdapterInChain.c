__int64 __fastcall DpiLdaPowerUpAdapterInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 v8; // rdi
  unsigned int v9; // r8d
  unsigned int v10; // edx

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
           (unsigned int)v5,
           (unsigned __int16)v6 >> 12,
           HIWORD(v6) & 0xF,
           v2[8]);
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      return (unsigned int)v3;
    }
    v8 = *(_QWORD *)(v4 + 2728);
    if ( !v8 )
    {
      WdLogSingleEntry1(3LL, 0LL);
      return (unsigned int)v3;
    }
    v4 = *(_QWORD *)(v8 + 64);
  }
  if ( *(_BYTE *)(v4 + 496) == 1 )
  {
LABEL_10:
    WdLogSingleEntry1(4LL, 0LL);
    return (unsigned int)v3;
  }
  v9 = *(_DWORD *)(v4 + 2736);
  v10 = 1;
  if ( v9 > 1 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2728) + 8LL * v10) + 64LL) + 284LL) == 1 )
    {
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
    goto LABEL_10;
  }
LABEL_14:
  v3 = DpiFdoSetAdapterPowerState(
         *(PDEVICE_OBJECT *)(v4 + 24),
         (unsigned int)v5,
         (unsigned __int16)v6 >> 12,
         HIWORD(v6) & 0xF,
         v7);
  if ( v3 < 0 )
    WdLogSingleEntry1(3LL, v5);
  if ( *(_BYTE *)(v4 + 484) )
    DpiSetDevicePowerTransitionStateAtPassiveLevel(v4, 0, 1);
  return (unsigned int)v3;
}
