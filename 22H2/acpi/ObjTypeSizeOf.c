/*
 * XREFs of ObjTypeSizeOf @ 0x1C0069FC0
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseData @ 0x1C000B5C4 (GetBaseData.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 */

__int64 __fastcall ObjTypeSizeOf(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 BaseData; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  const void *ObjectTypeName; // rax
  __int64 v8; // rcx

  v3 = 0;
  BaseData = GetBaseData(*(_QWORD *)(a2 + 80));
  *(_WORD *)(*(_QWORD *)(v5 + 88) + 2LL) = 1;
  v6 = *(unsigned __int16 *)(BaseData + 2);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) != 142 )
  {
    switch ( (_DWORD)v6 )
    {
      case 2:
        *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = (unsigned int)(*(_DWORD *)(BaseData + 24) - 1);
        return v3;
      case 3:
        v8 = *(unsigned int *)(BaseData + 24);
        break;
      case 4:
        v8 = **(unsigned int **)(BaseData + 32);
        break;
      default:
        LogError(-1072431096);
        AcpiDiagTraceAmlError(a1, -1072431096);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(BaseData + 2));
        PrintDebugMessage(176, ObjectTypeName, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431096;
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v8;
    return v3;
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v6;
  return v3;
}
