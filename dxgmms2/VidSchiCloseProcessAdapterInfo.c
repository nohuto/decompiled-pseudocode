/*
 * XREFs of VidSchiCloseProcessAdapterInfo @ 0x1C00AC8E4
 * Callers:
 *     VidSchTerminateDevice @ 0x1C00A8E60 (VidSchTerminateDevice.c)
 * Callees:
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014854 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall VidSchiCloseProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  _DWORD *v6; // r8
  __int64 i; // rbp
  __int64 j; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  PVOID *v15; // rdx
  unsigned int v16; // eax
  PVOID *v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx

  v2 = a2[1];
  v3 = a1 + 2664;
  ExAcquirePushLockExclusiveEx(a1 + 2664, 0LL);
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2);
  --*v6;
  if ( !**(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2) )
  {
    for ( i = 0LL; (unsigned int)i < a2[10]; i = (unsigned int)(i + 1) )
    {
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8 * i + 88), 0);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8 * i + 88) = 0LL;
    }
    for ( j = 0LL; (unsigned int)j < a2[20]; *v21 = 0LL )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v10 = *(_QWORD *)(v9 + 8);
      v11 = *(_DWORD *)(v9 + 80);
      v12 = v10 + 8 * j;
      if ( (unsigned int)j >= v11 )
        v12 = *(_QWORD *)(v9 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 216LL) )
      {
        v13 = v10 + 8 * j;
        if ( (unsigned int)j >= v11 )
          v13 = v10;
        PcwCloseInstance(*(PPCW_INSTANCE *)(*(_QWORD *)v13 + 216LL));
      }
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v15 = *(PVOID **)(v14 + 8);
      v16 = *(_DWORD *)(v14 + 80);
      v17 = &v15[j];
      if ( (unsigned int)j >= v16 )
        v17 = v15;
      ExFreePoolWithTag(*v17, 0);
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v19 = *(_DWORD *)(v18 + 80);
      v20 = *(_QWORD **)(v18 + 8);
      v21 = &v20[j];
      if ( (unsigned int)j >= v19 )
        v21 = v20;
      j = (unsigned int)(j + 1);
    }
    VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(*(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 32)
                                                                                              + 8 * v2));
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 32) + 8 * v2), 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = 0LL;
  }
  return ExReleasePushLockExclusiveEx(v3, 0LL);
}
