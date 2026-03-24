/*
 * XREFs of DpiKsrGetSavedAdapterState @ 0x1C02D3204
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01869A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0236F90 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 * Callees:
 *     DpiKsrIsSoftBoot @ 0x1C0188340 (DpiKsrIsSoftBoot.c)
 */

__int64 __fastcall DpiKsrGetSavedAdapterState(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rdx
  _QWORD *v3; // r8
  _QWORD *v4; // r10
  _DWORD *v5; // r11
  __int64 v7; // rax
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( !DpiKsrIsSoftBoot() )
    return 3221225473LL;
  v7 = qword_1C00B3018;
  v8 = 0;
  *v3 = 0LL;
  *v2 = 0;
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v7 + 29;
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)v10 - *(_QWORD *)(v1 + 4856);
      if ( *(_QWORD *)v10 == *(_QWORD *)(v1 + 4856) )
        v11 = *(_QWORD *)(v10 + 8) - *(_QWORD *)(v1 + 4864);
      if ( !v11 )
        break;
      ++v8;
      v10 += *(unsigned int *)(v10 + 20) + 24LL;
      if ( v8 >= v9 )
        return 0LL;
    }
    if ( !*(_BYTE *)(v10 + 16) )
    {
      v12 = *(_DWORD *)(qword_1C00B3018 + 8);
      if ( v12 >= v9 )
      {
        v13 = WdLogNewEntry5_WdError(v10, qword_1C00B3018);
        *(_QWORD *)(v13 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v13);
        return 3221225473LL;
      }
      *(_DWORD *)(qword_1C00B3018 + 8) = v12 + 1;
      *(_BYTE *)(v10 + 16) = 1;
    }
    *v4 = v10 + 24;
    *v5 = *(_DWORD *)(v10 + 20);
  }
  return 0LL;
}
