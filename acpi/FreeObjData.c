/*
 * XREFs of FreeObjData @ 0x1C004B544
 * Callers:
 *     Simulator_DuplicateObjData @ 0x1C0049150 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C0049214 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00499F8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C004A534 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C004A920 (AMLICreateOverrideObjectDep.c)
 *     FreeData @ 0x1C004B498 (FreeData.c)
 *     ProcessLoadTable @ 0x1C0058610 (ProcessLoadTable.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C004BD50 (GetObjectTypeName.c)
 *     PerformMutexDriverCallbacks @ 0x1C004C9F4 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 */

__int64 __fastcall FreeObjData(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 > 0x82 )
  {
    v13 = v1 - 131;
    if ( !v13 )
    {
LABEL_23:
      v12 = **(_QWORD **)(a1 + 32);
LABEL_24:
      if ( v12 )
        DereferenceObjectEx(v12, 0LL);
      goto LABEL_26;
    }
    if ( v13 != 1 )
      goto LABEL_22;
LABEL_17:
    v11 = **(_QWORD **)(a1 + 32);
    if ( v11 )
      DereferenceObjectEx(v11, 0LL);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    goto LABEL_24;
  }
  if ( v1 == 130 )
    goto LABEL_17;
  if ( v1 > 8 )
  {
    v8 = v1 - 9;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_10;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_10;
      v6 = v10 - 1;
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_9;
    }
    PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
LABEL_26:
    v7 = *(_QWORD *)(a1 + 32);
    return HeapFree(v7);
  }
  if ( v1 == 8 )
    goto LABEL_10;
  v3 = v1 - 2;
  if ( !v3 )
    goto LABEL_10;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_10;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_10;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_23;
LABEL_9:
  if ( v6 != 2 )
  {
LABEL_22:
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, -1072431101);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    return PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
  }
LABEL_10:
  v7 = *(_QWORD *)(a1 + 32);
  return HeapFree(v7);
}
