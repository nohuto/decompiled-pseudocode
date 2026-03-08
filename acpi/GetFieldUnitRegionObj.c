/*
 * XREFs of GetFieldUnitRegionObj @ 0x1C004B944
 * Callers:
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CC0 (InternalRawAccessOpRegionHandler.c)
 *     GetFieldUnitRegionObj @ 0x1C004B944 (GetFieldUnitRegionObj.c)
 *     AccessFieldData @ 0x1C0051AD8 (AccessFieldData.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetFieldUnitRegionObj @ 0x1C004B944 (GetFieldUnitRegionObj.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, _QWORD *a2)
{
  unsigned int FieldUnitRegionObj; // esi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  __int64 ObjectPath; // rax
  void *v9; // rdx
  void *v10; // rdi

  FieldUnitRegionObj = 0;
  v4 = *a1;
  v5 = *(unsigned __int16 *)(*a1 + 66) - 130;
  if ( v5 && (v6 = v5 - 1) != 0 )
  {
    if ( v6 == 1 )
    {
      FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 8LL) + 96LL), a2);
    }
    else
    {
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, -1072431101);
      PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66LL), 0, 0, 0LL);
      FieldUnitRegionObj = -1072431101;
    }
  }
  else
  {
    *a2 = **(_QWORD **)(v4 + 96);
  }
  v7 = *a2;
  if ( *a2 && *(_WORD *)(v7 + 66) != 10 )
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, -1072431101);
    ObjectPath = GetObjectPath(*a2);
    v9 = &unk_1C00622D0;
    v10 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v9) = ObjectPath;
    PrintDebugMessage(55, (_DWORD)v9, *(unsigned __int16 *)(*a2 + 66LL), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *a2 = 0LL;
      return FieldUnitRegionObj;
    }
LABEL_17:
    *a2 = 0LL;
    return FieldUnitRegionObj;
  }
  if ( (FieldUnitRegionObj & 0x80000000) != 0 || !v7 )
    goto LABEL_17;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*a2 + 112LL));
  return FieldUnitRegionObj;
}
