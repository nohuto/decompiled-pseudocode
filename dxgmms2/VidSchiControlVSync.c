/*
 * XREFs of VidSchiControlVSync @ 0x1C00A5D30
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C000E940 (VidSchiControlVSyncThread.c)
 *     VidSchSetMonitorPowerState @ 0x1C000FA60 (VidSchSetMonitorPowerState.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035840 (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A5F00 (VidSchIsVSyncEnabled.c)
 *     VidSchControlVSyncAdapter @ 0x1C00AD380 (VidSchControlVSyncAdapter.c)
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C000EAC0 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 *     VidSchiGetVSyncSuspended @ 0x1C000F7C0 (VidSchiGetVSyncSuspended.c)
 *     VidSchiSetVSyncSuspended @ 0x1C000F7DC (VidSchiSetVSyncSuspended.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, enum _DXGK_INTERRUPT_TYPE j, int a3, unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // edi
  __int64 v6; // r14
  char v8; // bp
  int v10; // eax
  int v11; // eax
  __int64 k; // rcx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r8d
  unsigned int i; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ecx

  v4 = *(_BYTE *)(a1 + 2212);
  v5 = 0;
  v6 = a4;
  v8 = j;
  if ( !v4 )
  {
    if ( *(_BYTE *)(a1 + 1808) != ((_BYTE)j != 0) )
      goto LABEL_3;
    return 0;
  }
  if ( a4 == -3 )
  {
    v19 = *(_DWORD *)(a1 + 40);
    j = 0;
    if ( !v19 )
      return 0;
    while ( *(_BYTE *)((unsigned int)j + a1 + 1808) == (v8 != 0) )
    {
      if ( ++j >= v19 )
        return 0;
    }
  }
  else if ( *(_BYTE *)(a4 + a1 + 1808) == ((_BYTE)j != 0) )
  {
    return 0;
  }
LABEL_3:
  if ( v8 )
  {
    if ( v4 )
    {
      if ( a4 == -3 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
        {
          v21 = i;
          _InterlockedExchange((volatile __int32 *)(a1 + 4 * v21 + 2272), 1);
        }
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 4LL * a4 + 2272), 1);
      }
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 2272), 1);
    }
    for ( j = 0; (unsigned int)j < *(_DWORD *)(a1 + 40); ++j )
    {
      v10 = *(_DWORD *)(a1 + 2208);
      if ( _bittest(&v10, j) )
      {
        if ( VidSchiGetVSyncSuspended(a1, j) )
          _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8 * v17 + 3200) + 44260LL), 1);
        *(_QWORD *)(*(_QWORD *)(a1 + 8 * (v17 + v18)) + 44264LL) = 0LL;
      }
    }
  }
  v11 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), j);
  v14 = v11;
  if ( v11 == -1073741822 )
  {
    v14 = 0;
LABEL_11:
    if ( *(_BYTE *)(a1 + 2212) )
    {
      if ( (_DWORD)v6 == -3 )
      {
        for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 40); *(_BYTE *)(v22 + a1 + 1808) = v8 != 0 )
        {
          v22 = (unsigned int)k;
          k = (unsigned int)(k + 1);
        }
      }
      else
      {
        LOBYTE(k) = v8 != 0;
        *(_BYTE *)(v6 + a1 + 1808) = v8 != 0;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 1808) = v8 != 0;
    }
    if ( bTracingEnabled )
    {
      if ( v8 )
      {
        if ( (byte_1C00769C2 & 8) != 0 )
          McTemplateK0p_EtwWriteTransfer(k, &EventEnableVSync, v13, *(_QWORD *)(a1 + 16));
        goto LABEL_17;
      }
      if ( (byte_1C00769C2 & 8) != 0 )
        McTemplateK0p_EtwWriteTransfer(k, &EventDisableVSync, v13, *(_QWORD *)(a1 + 16));
    }
    else if ( v8 )
    {
LABEL_17:
      VidSchiSetVSyncSuspended(a1, v6, 0);
      _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
LABEL_18:
      v15 = *(unsigned int *)(a1 + 6416);
      *(_QWORD *)(a1 + 8 * v15 + 6424) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(a1 + 4 * v15 + 6456) = a3;
      *(_DWORD *)(a1 + 6416) = ((unsigned __int8)*(_DWORD *)(a1 + 6416) + 1) & 3;
      return v14;
    }
    if ( *(_BYTE *)(a1 + 2212) == 1 && (_DWORD)v6 != -3 && (v23 = *(_DWORD *)(a1 + 40)) != 0 )
    {
      while ( *(_BYTE *)(v5 + a1 + 1808) != 1 )
      {
        if ( ++v5 >= v23 )
          goto LABEL_26;
      }
    }
    else
    {
LABEL_26:
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
    }
    goto LABEL_18;
  }
  if ( v11 >= 0 )
    goto LABEL_11;
  return v14;
}
