/*
 * XREFs of DupObjData @ 0x1C000A400
 * Callers:
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     Return @ 0x1C000A590 (Return.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000F09C (AMLIEvalPkgDataElement.c)
 *     EvalPackageElement @ 0x1C001246C (EvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     Simulator_Copy_Arguments @ 0x1C00639E8 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C0063AB0 (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C00658A8 (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C0069110 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C006A1F0 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C006BCF0 (ParseNestedContext.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 */

__int64 __fastcall DupObjData(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  struct _SLIST_ENTRY *v5; // r15
  unsigned int v6; // ebp
  __int64 result; // rax
  int v8; // eax
  void *v9; // r14
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // r14
  int v13; // edi
  _DWORD *v14; // rcx
  _DWORD *v15; // r12
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int ObjectTypeName; // eax
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx

  v5 = a1;
  v6 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v8 = *(unsigned __int16 *)(a3 + 2);
  v9 = 0LL;
  if ( v8 == 4 )
  {
    v10 = 1196118088;
    goto LABEL_6;
  }
  if ( v8 == 3 )
  {
    v10 = 1179992648;
LABEL_6:
    a1 = (struct _SLIST_ENTRY *)gpheapGlobal;
LABEL_7:
    v9 = (void *)HeapAlloc(a1, v10, *(_DWORD *)(a3 + 24));
    goto LABEL_8;
  }
  switch ( *(_WORD *)(a3 + 2) )
  {
    case 2:
      v10 = 1381258056;
      goto LABEL_6;
    case 5:
      v10 = 1430537800;
      goto LABEL_7;
    case 7:
      v10 = 1314276680;
      goto LABEL_7;
    case 8:
      v10 = 1413827912;
      goto LABEL_7;
    case 9:
      v10 = 1414876488;
      goto LABEL_7;
    case 0xA:
      v10 = 1196576584;
      goto LABEL_7;
    case 0xB:
      v10 = 1397903432;
      goto LABEL_7;
    case 0xC:
      v10 = 1330794568;
      goto LABEL_7;
    case 0xE:
      v10 = 1145455176;
      goto LABEL_7;
    case 0x82:
      v10 = 1179337288;
      goto LABEL_7;
    case 0x83:
      v10 = 1329874504;
      goto LABEL_7;
    case 0x84:
      v10 = 1180191048;
      goto LABEL_7;
    default:
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
      PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
      break;
  }
LABEL_8:
  *(_QWORD *)(a2 + 32) = v9;
  if ( v9 )
  {
    memmove(v9, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v11 = *(unsigned __int16 *)(a2 + 2);
    if ( v11 == 4 )
    {
      v12 = *(_DWORD **)(a3 + 32);
      v13 = 0;
      v14 = *(_DWORD **)(a2 + 32);
      *v14 = *v12;
      if ( (int)*v12 > 0 )
      {
        v15 = v14 + 2;
        do
        {
          v6 = DupObjData(v5, &v15[10 * v13], &v12[10 * v13 + 2]);
          if ( v6 )
            break;
          ++v13;
        }
        while ( v13 < *v12 );
      }
    }
    else
    {
      v16 = v11 - 5;
      if ( !v16 )
        goto LABEL_45;
      v17 = v16 - 125;
      if ( !v17 )
      {
        v21 = *(_QWORD **)(a2 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v21 + 112LL));
          v21 = *(_QWORD **)(a2 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v21[1] + 112LL));
        goto LABEL_14;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v20 = *(_QWORD **)(a2 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v20[1] + 112LL));
            v20 = *(_QWORD **)(a2 + 32);
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*v20 + 112LL));
        }
      }
      else
      {
LABEL_45:
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
      }
    }
LABEL_14:
    *(_WORD *)a2 &= ~1u;
    result = v6;
    _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
    return result;
  }
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
