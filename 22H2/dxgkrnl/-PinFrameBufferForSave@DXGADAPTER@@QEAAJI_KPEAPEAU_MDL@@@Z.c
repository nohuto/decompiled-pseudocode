/*
 * XREFs of ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z @ 0x1C020E940
 * Callers:
 *     DxgkPinFrameBufferForSaveCB @ 0x1C00431E0 (DxgkPinFrameBufferForSaveCB.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     DpiAddMemoryTracker @ 0x1C0057690 (DpiAddMemoryTracker.c)
 */

__int64 __fastcall DXGADAPTER::PinFrameBufferForSave(DXGADAPTER *this, __int64 a2, ULONG_PTR a3, struct _MDL **a4)
{
  __int64 v5; // rbx
  char v7; // si
  __int64 v8; // rax
  __int64 v10; // r14
  struct _MDL *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  struct _MDL *Mdl; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  PVOID MappedBase; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+18h] BYREF

  ViewSize = a3;
  v5 = (unsigned int)a2;
  v7 = 0;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 70) )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = v5;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = ViewSize;
    goto LABEL_3;
  }
  v10 = *((_QWORD *)this + 323) + 360LL * (unsigned int)a2;
  MappedBase = 0LL;
  v11 = 0LL;
  LODWORD(v14) = MmMapViewInSystemSpace(*(PVOID *)(v10 + 64), &MappedBase, &ViewSize);
  if ( (int)v14 >= 0 )
  {
    Mdl = IoAllocateMdl(MappedBase, ViewSize, 0, 0, 0LL);
    v11 = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v7 = 1;
      *(_QWORD *)(v10 + 104) = v11;
      *(_DWORD *)(v10 + 96) = 2;
      v23 = DpiAddMemoryTracker(*((_QWORD *)this + 27), (_QWORD *)(v10 + 80));
      v14 = v23;
      if ( v23 >= 0 )
      {
        *(_QWORD *)(v10 + 72) = v11;
        *a4 = v11;
        return 0LL;
      }
      v28 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
      *(_QWORD *)(v28 + 24) = v14;
      WdLogEvent5_WdLowResource(v28);
    }
    else
    {
      v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
      *(_QWORD *)(v22 + 24) = 10483LL;
      WdLogEvent5_WdLowResource(v22);
      LODWORD(v14) = -1073741801;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v15);
    *(_QWORD *)(v16 + 24) = ViewSize;
    WdLogEvent5_WdWarning(v16);
  }
  if ( v7 )
    MmUnlockPages(v11);
  if ( v11 )
    IoFreeMdl(v11);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  return (unsigned int)v14;
}
