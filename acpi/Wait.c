/*
 * XREFs of Wait @ 0x1C0059630
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     GetObjectTypeName @ 0x1C004BD50 (GetObjectTypeName.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     PushPost @ 0x1C0053CE0 (PushPost.c)
 *     WaitASLEvent @ 0x1C005525C (WaitASLEvent.c)
 */

__int64 __fastcall Wait(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v9; // r11

  v4 = ValidateArgTypes(a1, a2[10], 0, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    if ( *(_WORD *)(a2[8] + 66) == 7 )
    {
      if ( *(_QWORD *)(a2[10] + 56) <= 0xFFFFuLL )
      {
        v4 = PushPost(a1, (__int64)ProcessWait, 0LL, 0LL, a2[11]);
        if ( !v4 )
          return (unsigned int)WaitASLEvent(a1, *(_QWORD *)(a2[8] + 96), *(_WORD *)(a2[10] + 56));
      }
      else
      {
        v4 = -1072431089;
        LogError(-1072431089);
        AcpiDiagTraceAmlError(a1, -1072431089);
        PrintDebugMessage(210, *(const void **)(a2[10] + 56), 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(209, v9, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
