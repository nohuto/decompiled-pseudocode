/*
 * XREFs of FreeObjData @ 0x1C00033D0
 * Callers:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026CF0 (ACPIGetWorkerForInteger.c)
 *     Simulator_DuplicateObjData @ 0x1C0063AB0 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C0063B74 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0064348 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C006498C (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0064D04 (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C006A1F0 (ProcessLoadTable.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C0002F50 (HeapInsertFreeList.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     PerformMutexDriverCallbacks @ 0x1C0010328 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  int v1; // eax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // r9
  _QWORD *v6; // rax
  _QWORD *i; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  _QWORD *j; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r8
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r10
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r10
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == 4 )
  {
    v3 = *(_QWORD **)(a1 + 32);
    *((_DWORD *)v3 - 4) = 0;
    v4 = v3 - 2;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v5 = *(v3 - 1);
    v6 = *(_QWORD **)(v5 + 40);
    for ( i = (_QWORD *)(v5 + 40); v6 != i; v6 = (_QWORD *)*v6 )
    {
      if ( v3 < v6 )
        break;
    }
    v8 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v8 != v6 )
      goto LABEL_45;
    v3[1] = v8;
    *v3 = v6;
    *v8 = v3;
    v6[1] = v3;
    v9 = (_QWORD *)*v3;
    v10 = *v3 - 16LL;
    if ( (_QWORD *)*v3 != i )
    {
      v31 = *((unsigned int *)v4 + 1);
      if ( (_QWORD *)v10 == (_QWORD *)((char *)v4 + v31) )
      {
        *((_DWORD *)v4 + 1) = v31 + *(_DWORD *)(v10 + 4);
        v32 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 )
          goto LABEL_45;
        v33 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v33 != v9 )
          goto LABEL_45;
        *v33 = v32;
        *(_QWORD *)(v32 + 8) = v33;
      }
    }
    v11 = (_QWORD *)v4[3];
    v12 = v11 - 2;
    if ( v11 != i )
    {
      v13 = *((unsigned int *)v12 + 1);
      if ( v4 == (_QWORD *)((char *)v12 + v13) )
      {
        *((_DWORD *)v12 + 1) = *((_DWORD *)v4 + 1) + v13;
        v14 = *v3;
        if ( *(_QWORD **)(*v3 + 8LL) != v3 )
          goto LABEL_45;
        v15 = (_QWORD *)v3[1];
        if ( (_QWORD *)*v15 != v3 )
          goto LABEL_45;
        *v15 = v14;
        v4 = v12;
        *(_QWORD *)(v14 + 8) = v15;
      }
    }
    if ( *(_QWORD *)(v5 + 32) > (unsigned __int64)v4 + *((unsigned int *)v4 + 1) )
    {
LABEL_13:
      KeReleaseSpinLock(&gmutHeap, NewIrql);
      return;
    }
    goto LABEL_21;
  }
  if ( v1 == 3 )
  {
    v16 = *(_QWORD **)(a1 + 32);
    *((_DWORD *)v16 - 4) = 0;
    v4 = v16 - 2;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v5 = *(v16 - 1);
    v17 = *(_QWORD **)(v5 + 40);
    for ( j = (_QWORD *)(v5 + 40); v17 != j; v17 = (_QWORD *)*v17 )
    {
      if ( v16 < v17 )
        break;
    }
    v19 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v19 != v17 )
      goto LABEL_45;
    v16[1] = v19;
    *v16 = v17;
    *v19 = v16;
    v17[1] = v16;
    v20 = (_QWORD *)*v16;
    v21 = *v16 - 16LL;
    if ( (_QWORD *)*v16 != j )
    {
      v28 = *((unsigned int *)v4 + 1);
      if ( (_QWORD *)v21 == (_QWORD *)((char *)v4 + v28) )
      {
        *((_DWORD *)v4 + 1) = v28 + *(_DWORD *)(v21 + 4);
        v29 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 )
          goto LABEL_45;
        v30 = (_QWORD *)v20[1];
        if ( (_QWORD *)*v30 != v20 )
          goto LABEL_45;
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
      }
    }
    v22 = (_QWORD *)v4[3];
    v23 = v22 - 2;
    if ( v22 != j )
    {
      v34 = *((unsigned int *)v23 + 1);
      if ( v4 == (_QWORD *)((char *)v23 + v34) )
      {
        *((_DWORD *)v23 + 1) = *((_DWORD *)v4 + 1) + v34;
        v35 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 )
          goto LABEL_45;
        v36 = (_QWORD *)v16[1];
        if ( (_QWORD *)*v36 != v16 )
          goto LABEL_45;
        *v36 = v35;
        v4 = v23;
        *(_QWORD *)(v35 + 8) = v36;
      }
    }
    if ( *(_QWORD *)(v5 + 32) > (unsigned __int64)v4 + *((unsigned int *)v4 + 1) )
      goto LABEL_13;
LABEL_21:
    *(_QWORD *)(v5 + 32) = v4;
    v24 = v4 + 2;
    v25 = *v24;
    if ( *(_QWORD **)(*v24 + 8LL) == v24 )
    {
      v26 = (_QWORD *)v24[1];
      if ( (_QWORD *)*v26 == v24 )
      {
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        goto LABEL_13;
      }
    }
LABEL_45:
    __fastfail(3u);
  }
  switch ( *(_WORD *)(a1 + 2) )
  {
    case 2:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
      goto LABEL_43;
    case 5:
    case 0x83:
      v37 = *(__int64 **)(a1 + 32);
      v38 = *v37;
      goto LABEL_41;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
      goto LABEL_43;
    case 0xE:
      v27 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v27 - 16) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v27 - 8), (unsigned int *)(v27 - 16));
      goto LABEL_13;
    case 0x82:
      v37 = *(__int64 **)(a1 + 32);
      v39 = *v37;
      if ( *v37 )
        goto LABEL_48;
      goto LABEL_49;
    case 0x84:
      v37 = *(__int64 **)(a1 + 32);
      v39 = *v37;
      if ( *v37 )
      {
LABEL_48:
        DereferenceObjectEx(v39, 0LL);
        v37 = *(__int64 **)(a1 + 32);
      }
LABEL_49:
      v38 = v37[1];
LABEL_41:
      if ( v38 )
      {
        DereferenceObjectEx(v38, 0LL);
LABEL_43:
        v37 = *(__int64 **)(a1 + 32);
      }
      HeapFree(v37);
      break;
    default:
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
      break;
  }
}
