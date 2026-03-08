/*
 * XREFs of DupObjData @ 0x1C004AF04
 * Callers:
 *     Simulator_Copy_Arguments @ 0x1C0049088 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C0049150 (Simulator_DuplicateObjData.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     ParseDLMObjectInternal @ 0x1C004C718 (ParseDLMObjectInternal.c)
 *     EvalPackageElement @ 0x1C004F6E4 (EvalPackageElement.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 *     Return @ 0x1C0055B50 (Return.c)
 *     CopyObject @ 0x1C0056550 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C0058610 (ProcessLoadTable.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseNestedContext @ 0x1C005BB50 (ParseNestedContext.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     NewObjData @ 0x1C004C19C (NewObjData.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall DupObjData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  void *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // r14
  int v10; // edi
  _DWORD *v11; // r15

  v6 = 0;
  if ( a2 != a3 )
  {
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
    if ( *(_QWORD *)(a3 + 32) )
    {
      v7 = (void *)NewObjData(a1, a3);
      *(_QWORD *)(a2 + 32) = v7;
      if ( !v7 )
      {
        v6 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, -1073741670);
        PrintDebugMessage(43, 0, 0, 0, 0LL);
        return v6;
      }
      memmove(v7, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
      if ( *(_WORD *)(a2 + 2) == 4 )
      {
        v9 = *(_DWORD **)(a3 + 32);
        v10 = 0;
        v11 = *(_DWORD **)(a2 + 32);
        for ( *v11 = *v9; v10 < *v9; ++v10 )
        {
          v6 = DupObjData(a1, &v11[10 * v10 + 2], &v9[10 * v10 + 2]);
          if ( v6 )
            break;
        }
        goto LABEL_22;
      }
      if ( *(_WORD *)(a2 + 2) != 5 )
      {
        if ( *(_WORD *)(a2 + 2) == 130 )
        {
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
          if ( (gdwfAMLI & 4) == 0 )
            goto LABEL_22;
          v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
          goto LABEL_14;
        }
        if ( *(_WORD *)(a2 + 2) != 131 )
        {
          if ( *(_WORD *)(a2 + 2) != 132 )
            goto LABEL_22;
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
        }
      }
      if ( (gdwfAMLI & 4) != 0 )
      {
        v8 = **(_QWORD **)(a2 + 32);
LABEL_14:
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 112));
      }
LABEL_22:
      *(_WORD *)a2 &= ~1u;
      _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
    }
  }
  return v6;
}
