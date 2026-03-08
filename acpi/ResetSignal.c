/*
 * XREFs of ResetSignal @ 0x1C00559C0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     GetObjectTypeName @ 0x1C004BD50 (GetObjectTypeName.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     SignalASLEvent @ 0x1C0054E2C (SignalASLEvent.c)
 */

__int64 __fastcall ResetSignal(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  char v6; // cl
  int v7; // ecx
  __int64 v8; // rax
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v11; // r11
  int v12; // ecx
  __int64 v13; // rbx
  KIRQL v14; // al
  __int64 v15; // rcx

  v4 = ValidateArgTypes(a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    v7 = *(_DWORD *)(a2[7] + 8LL);
    if ( v7 == 9307 )
    {
      v15 = a2[8];
      if ( *(_WORD *)(v15 + 66) == 7 )
      {
        SignalASLEvent(*(_QWORD *)(v15 + 96));
        return v4;
      }
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v12 = 175;
    }
    else
    {
      if ( v7 != 9819 )
        return v4;
      v8 = a2[8];
      if ( *(_WORD *)(v8 + 66) == 7 )
      {
        v13 = *(_QWORD *)(v8 + 96);
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 24));
        *(_DWORD *)v13 = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 24), v14);
        return 0;
      }
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v12 = 174;
    }
    PrintDebugMessage(v12, v11, ObjectTypeName, 0LL, 0LL);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  return v4;
}
