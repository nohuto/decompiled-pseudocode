/*
 * XREFs of VidSchiCloseProcessAdapterInfo @ 0x1C007F358
 * Callers:
 *     VidSchTerminateDevice @ 0x1C007FF30 (VidSchTerminateDevice.c)
 * Callees:
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0015CE8 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall VidSchiCloseProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v6; // rsi
  _DWORD *v7; // r8
  unsigned int i; // ebp
  __int64 v9; // rbx
  unsigned int j; // ebp
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  PVOID *v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx

  v2 = a2[1];
  v3 = a1 + 2656;
  ExAcquirePushLockExclusiveEx(a1 + 2656, 0LL);
  v6 = (unsigned int)v2;
  v7 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  --*v7;
  if ( !**(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) )
  {
    for ( i = 0; i < a2[10]; *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 8 * v9 + 88) = 0LL )
    {
      v9 = i;
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 8LL * i++ + 88), 0);
    }
    for ( j = 0; j < a2[18]; *v23 = 0LL )
    {
      v11 = *(_QWORD *)(a1 + 24);
      v12 = 8LL * j;
      v13 = *(_QWORD *)(v11 + 8 * v6);
      v14 = *(_DWORD *)(v13 + 80);
      v15 = *(_QWORD *)(v13 + 8);
      v16 = v15 + v12;
      if ( j >= v14 )
        v16 = v15;
      if ( *(_QWORD *)(*(_QWORD *)v16 + 216LL) )
      {
        v17 = v12 + v15;
        if ( j >= v14 )
          v17 = v15;
        PcwCloseInstance(*(PPCW_INSTANCE *)(*(_QWORD *)v17 + 216LL));
        v11 = *(_QWORD *)(a1 + 24);
      }
      v18 = *(_QWORD *)(v11 + 8 * v6);
      v19 = (PVOID *)(v12 + *(_QWORD *)(v18 + 8));
      if ( j >= *(_DWORD *)(v18 + 80) )
        v19 = *(PVOID **)(v18 + 8);
      ExFreePoolWithTag(*v19, 0);
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
      v21 = *(_DWORD *)(v20 + 80);
      v22 = *(_QWORD **)(v20 + 8);
      v23 = &v22[j];
      if ( j >= v21 )
        v23 = v22;
      ++j;
    }
    VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(*(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 24)
                                                                                              + 8 * v6));
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 24) + 8 * v6), 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) = 0LL;
  }
  return ExReleasePushLockExclusiveEx(v3, 0LL);
}
