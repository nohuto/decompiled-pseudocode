/*
 * XREFs of Notify @ 0x1C00062C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall Notify(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // al
  unsigned int v8; // eax

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v5 + 56) <= 0xFFuLL )
    {
      if ( ghNotify )
      {
        v6 = *(_QWORD *)(v5 + 16);
        v7 = gdwfAMLI;
        *(_QWORD *)(a2 + 64) = v6;
        if ( (v7 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
        v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (__fastcall *)(), __int64))ghNotify)(
               2LL,
               *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
               *(_QWORD *)(a2 + 64) + 120LL,
               qword_1C00702B0,
               RestartCtxtCallback,
               a1 + 328);
        v4 = v8;
        if ( v8 == 259 )
        {
          return 32772;
        }
        else if ( v8 )
        {
          LogError(3222536198LL);
          AcpiDiagTraceAmlError(a1, 3222536198LL);
          PrintDebugMessage(114, v4, 0, 0, 0LL);
          return (unsigned int)-1072431098;
        }
      }
    }
    else
    {
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      PrintDebugMessage(115, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0, 0, 0LL);
    }
  }
  return v4;
}
